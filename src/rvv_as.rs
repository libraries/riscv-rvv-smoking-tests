use std::io::BufRead;

fn regn(r: &str) -> u8 {
    match r {
        "zero" => 0,
        "ra" => 1,
        "sp" => 2,
        "gp" => 3,
        "tp" => 4,
        "t0" => 5,
        "t1" => 6,
        "t2" => 7,
        "s0" | "fp" => 8,
        "s1" => 9,
        "a0" => 10,
        "a1" => 11,
        "a2" => 12,
        "a3" => 13,
        "a4" => 14,
        "a5" => 15,
        "a6" => 16,
        "a7" => 17,
        "s2" => 18,
        "s3" => 19,
        "s4" => 20,
        "s5" => 21,
        "s6" => 22,
        "s7" => 23,
        "s8" => 24,
        "s9" => 25,
        "s10" => 26,
        "s11" => 27,
        "t3" => 28,
        "t4" => 29,
        "t5" => 30,
        "t6" => 31,
        _ => unreachable!(),
    }
}

fn vegn(r: &str) -> u8 {
    match r {
        "v0" => 0,
        "v1" => 1,
        "v2" => 2,
        "v3" => 3,
        "v4" => 4,
        "v5" => 5,
        "v6" => 6,
        "v7" => 7,
        "v8" => 8,
        "v9" => 9,
        "v10" => 10,
        "v11" => 11,
        "v12" => 12,
        "v13" => 13,
        "v14" => 14,
        "v15" => 15,
        "v16" => 16,
        "v17" => 17,
        "v18" => 18,
        "v19" => 19,
        "v20" => 20,
        "v21" => 21,
        "v22" => 22,
        "v23" => 23,
        "v24" => 24,
        "v25" => 25,
        "v26" => 26,
        "v27" => 27,
        "v28" => 28,
        "v29" => 29,
        "v30" => 30,
        "v31" => 31,
        _ => unreachable!(),
    }
}

fn emit(code: u32) -> String {
    let a = (code >> 0x00) as u8;
    let b = (code >> 0x08) as u8;
    let c = (code >> 0x10) as u8;
    let d = (code >> 0x18) as u8;
    format!(".byte {:#04x}, {:#04x}, {:#04x}, {:#04x}", a, b, c, d)
}

fn immi(s: &str) -> i8 {
    s.parse::<i8>().unwrap()
}

fn conv(line: &str) {
    let text = line.trim();
    let seps: Vec<&str> = text.splitn(2, " ").collect();
    if seps.len() < 2 {
        println!("{}", line);
        return;
    }
    if seps[0].starts_with(".") {
        println!("{}", line);
        return;
    }
    let opcode = seps[0];
    let args: Vec<&str> = seps[1].split(",").map(|x| x.trim()).collect();
    let indent = |x: &str| -> u32 {
        let mut n = 0;
        for i in x.chars() {
            if i == ' ' {
                n += 1;
            } else {
                break;
            }
        }
        n
    }(line);
    let indent = " ".repeat(indent as usize);
    match opcode {
        "vsetvli" => {
            let mut code: u32 = 0;
            code |= 0b0_00000000000_00000_111_00000_1010111;
            code |= (regn(args[0]) as u32) << 7;
            code |= (regn(args[1]) as u32) << 15;
            code |= match args[2] {
                "e8" => 0b000,
                "e16" => 0b001,
                "e32" => 0b010,
                "e64" => 0b011,
                "e128" => 0b100,
                "e256" => 0b101,
                "e512" => 0b110,
                "e1024" => 0b111,
                _ => unreachable!(),
            } << 23;
            code |= match args[3] {
                "mf8" => 0b101,
                "mf4" => 0b110,
                "mf2" => 0b111,
                "m1" => 0b000,
                "m2" => 0b001,
                "m4" => 0b010,
                "m8" => 0b011,
                _ => unreachable!(),
            } << 20;
            code |= match args[4] {
                "ta" => 0b1,
                "tu" => 0b0,
                _ => unreachable!(),
            } << 26;
            code |= match args[5] {
                "ma" => 0b1,
                "mu" => 0b0,
                _ => unreachable!(),
            } << 27;
            if matches!(args[2], "e128" | "e256" | "e512" | "e1024") {
                println!("{}# {}", indent, text);
                println!("{}{}", indent, emit(code));
            } else {
                println!("{}", line);
            }
        }
        "vle128.v" => {
            let mut code = 0b000_100_0_00000_00000_000_00000_0000111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vle256.v" => {
            let mut code = 0b000_100_0_00000_00000_101_00000_0000111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vle512.v" => {
            let mut code = 0b000_100_0_00000_00000_110_00000_0000111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vle1024.v" => {
            let mut code = 0b000_100_0_00000_00000_111_00000_0000111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vlm.v" => {
            let mut code = 0b000_000_1_01011_00000_000_00000_0000111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vse128.v" => {
            let mut code = 0b000_100_0_00000_00000_000_00000_0100111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vse256.v" => {
            let mut code = 0b000_100_0_00000_00000_101_00000_0100111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vse512.v" => {
            let mut code = 0b000_100_0_00000_00000_110_00000_0100111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vse1024.v" => {
            let mut code = 0b000_100_0_00000_00000_111_00000_0100111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            code |= 0b1 << 25;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vsm.v" => {
            let mut code = 0b000_000_1_01011_00000_000_00000_0100111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (regn(args[1].trim_start_matches('(').trim_end_matches(')')) as u32) << 15;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vmadc.vvm" => {
            let mut code = 0b010001_0_00000_00000_000_00000_1010111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (vegn(args[1]) as u32) << 20;
            code |= (vegn(args[2]) as u32) << 15;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vmadc.vxm" => {
            let mut code = 0b010001_0_00000_00000_100_00000_1010111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (vegn(args[1]) as u32) << 20;
            code |= (regn(args[2]) as u32) << 15;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vmadc.vim" => {
            let mut code = 0b010001_0_00000_00000_011_00000_1010111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (vegn(args[1]) as u32) << 20;
            code |= (((immi(args[2]) as u8) << 3 >> 3) as u32) << 15;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vmsbc.vvm" => {
            let mut code = 0b010010_0_00000_00000_000_00000_1010111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (vegn(args[1]) as u32) << 20;
            code |= (vegn(args[2]) as u32) << 15;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        "vmsbc.vxm" => {
            let mut code = 0b010010_0_00000_00000_100_00000_1010111;
            code |= (vegn(args[0]) as u32) << 7;
            code |= (vegn(args[1]) as u32) << 20;
            code |= (regn(args[2]) as u32) << 15;
            println!("{}# {}", indent, text);
            println!("{}{}", indent, emit(code));
        }
        _ => {
            println!("{}", line);
        }
    }
}

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let args: Vec<String> = std::env::args().collect();
    let origin_asm_path = args[1].clone();
    let origin_asm_file = std::fs::File::open(origin_asm_path)?;
    for line in std::io::BufReader::new(origin_asm_file).lines() {
        conv(&line?);
    }
    Ok(())
}
