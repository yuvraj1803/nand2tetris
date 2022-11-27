The Hack Assembler converts Assembly code to the Hack Machine code.

Components of the assembler: Parser + Translator + Symbol Table

***How to run?***
The executable file is present in the cmake-build-debug/ directory. After navigating to it, type "./hack-assembler <file-name>".
  Eg: ./hack-assembler add/Add.asm
  
  This creates a .hack file in the same location of your assembly file.

***Update 1***

->I felt the entire project was cluttered and unorganised.
->An extra layer of abstraction has been added.
->Hence in this update, the Assembler class has been added which ***internally takes care of the parser, translator and the symbol table***.

-> ***Assembler::Assembler(string &assembly_file)*** => constructor takes in the input file (containing assembly code)
-> ***Assembler::clean_code*** => assembly code with comments, spaces and new-lines removed.
-> ***Assembler::machine_code*** => final machine code generated as per the hack machine language specification.
