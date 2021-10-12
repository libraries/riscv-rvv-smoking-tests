class Vm:

    def __init__(self):
        # The maximum size in bits of a vector element that any operation can produce or consume, ELEN ≥ 8, which must 
        # be a power of 2.
        self.elen = 0

        # The number of bits in a single vector register, VLEN ≥ ELEN, which must be a power of 2, and must be no 
        # greater than 65536.
        self.vlen = 0

        # Vector start position
        self.vstart = 0
        # Fixed-Point Saturate Flag
        self.vxsat = 0
        # Fixed-Point Rounding Mode
        self.vxrm = 0
        # Vector control and status register
        self.vcsr = 0
        # Vector length
        self.vl = 0
        # Vector data type register

        # Allowing updates only via the vset{i}vl{i} instructions simplifies maintenance of the vtype register state.
        # 
        # The vtype register has five fields, vill, vma, vta, vsew[2:0], and vlmul[2:0]. Bits vtype[XLEN-2:8] should 
        # be written with zero, and non-zero values in this field are reserved.
        #
        # {reg: [
        #   {bits: 3, name: 'vlmul[2:0]'},
        #   {bits: 3, name: 'vsew[2:0]'},
        #   {bits: 1, name: 'vta'},
        #   {bits: 1, name: 'vma'},
        #   {bits: 23, name: 'reserved'},
        #   {bits: 1, name: 'vill'}, 
        # ]}
        self.vtype = 0
        # Illegal value if set
        self.vtype_vii = 0
        # Vector mask agnostic
        self.vtype_vma = 0
        # Vector tail agnostic
        self.vtype_vta = 0
        # Selected element width (SEW) setting
        # The value in vsew sets the dynamic selected element width (SEW). By default, a vector register is viewed as 
        # being divided into VLEN/SEW elements.
        # 0->8, 1->16, 2->32, 3->64
        self.vtype_vsew = 0
        # Vector register group multiplier (LMUL) setting
        # Multiple vector registers can be grouped together, so that a single vector instruction can operate on 
        # multiple vector registers. The term vector register group is used herein to refer to one or more vector 
        # registers used as a single operand to a vector instruction. Vector register groups can be used to provide 
        # greater execution efficiency for longer application vectors, but the main reason for their inclusion is to 
        # allow double-width or larger elements to be operated on with the same vector length as single-width elements. 
        # The vector length multiplier, LMUL, when greater than 1, represents the default number of vector registers 
        # that are combined to form a vector register group. Implementations must support LMUL integer 
        # values of 1, 2, 4, and 8.
        self.vtype_vlmul = 0

        # VLEN/8 (vector register length in bytes)
        self.vlenb = 0

        # When mstatus.VS is set to Initial or Clean, executing any instruction that changes vector state, including 
        # the vector CSRs, will change mstatus.VS to Dirty. Implementations may also change mstatus.VS from Initial or
        # Clean to Dirty at any time, even when there is no change in vector state.
        self.mstatus_vs = 0

        # vsew sets the dynamic selected element width (SEW)
        # By default, a vector register is viewed as being divided into VLEN/SEW elements.

        self.vregisters = [0 for _ in range(32)]