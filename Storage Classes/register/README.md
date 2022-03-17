# Register Storage Class

a processor register(CPU register) is one of a small set of data holding places that are part of the computer processor
    * a register may hold and instruction, a storage address, or any kind of data.

the register storage class is used to define local variables that should be stored in a register instead of RAM(memory)
    * makes the use of register variables to be much faster that that of the variables stored in the meory during the runtime of the program

the register storage class should only be used for variables that require quick access
    *the variables which are most frequently used in a C program
        *if a function uses a particular variable heavily

# NOTE
the keyword register hints to the compiler that a given variable can be put in a register
    *it is compiler's choice to put it in a register or not
        *MIGHT be stored in a register depending on hardware and implementation restrictions 
            * generally, compellers themselves  do optimizations and put the variable in register
            