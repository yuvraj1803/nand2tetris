The Hack Assembler converts Assembly code to the Hack Machine code.

Components of the assembler: Parser + Translator + Symbol Table

<img width="956" alt="project-diagram" src="https://user-images.githubusercontent.com/37622719/204144355-93e318e6-f4a4-4f1c-9042-5633b4ffc4a4.png">

***How to run?***
The executable file is present in the cmake-build-debug/ directory. After navigating to it, type "./hack-assembler <file-name>".
  Eg: ./hack-assembler add/Add.asm
  
  This creates a .hack file in the same location of your assembly file.

***Update 1***

->I felt the entire project was cluttered and unorganised.
  
->An extra layer of abstraction has been added.
  
->Hence in this update, the Assembler class has been added which ***internally takes care of the parser, translator and the symbol table***.

-> ***Assembler::Assembler(string &assembly_file)*** => constructor takes in the input file (containing assembly code).
  
-> ***Assembler::clean_code*** => assembly code with comments, spaces and new-lines removed.
  
-> ***Assembler::machine_code*** => final machine code generated as per the hack machine language specification.

  
  ***Update 2***
  
  -> Added all classes into a directory of their own.
  
  -> Modified include statements accordingly.
  
  -> Updated CMakeLists.txt
