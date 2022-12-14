Fundamental features of the C++ programming language.
-----------------------------------------------------
- Benefits of OOP | [Liskov substitution principle]
- Features of c++

- Compiling and Linking in c++
  - preprocessing
  - compilation
  - linking
- c++ Build model

- c -> procedural programming language | c++ -> OOP langauge
- c -> focuses on logical units of tasks called functions | c++ -> uses functions but also has logical units called objects
- c doesn't support encapsulation [access mofifiers], data is not secure | c++ makes use of access modifiers

- c++ compilers
  - microsoft visual c++ compiler
  - GNU compiler collection
  - Clang / LLVM
  - Intel c++ compiler

Installation
-------------
- The c++ Standard Library - collection of classes and functions.
- The Standard Template Library (STL)

- Setting up the g++ compiler
  - Download the installer from :- [msys2.org](https://www.msys2.org/)
  - Follow through installation procedures
  - terminal
    - pacman -Syu
    - pacman -Su
    - pacman -S --needed base-devel mingw-w64-x86_64-toolchain

- Edit system environment
  - environment vars | User vars -> path -> edit -> new
  - C:\msys64\mingw64\bin
  - verify in the terminal :-> g++ -v ( g++ --version )

IDE
---
- executing on windows -> [vscode](https://code.visualstudio.com/)
  - extensions:
    - c++ (c/c++ from microsoft)
  - create a file, run using -> g++ fileName
    * This creates a.exe file
    - execute using ./a.exe  (.\a.exe   on windows)

    - using the -o flag
      -> g++ file.cpp -o file 
      - e.g  ->  g++ helloworld.cpp -o helloworld
      - .\helloworld.exe

Running c++ code with a build
-----------------------------
- setting up a build task
  * this allows to build directly in vscode without requiring a separate terminal window

  Using g++ (For windows)
  ------------------------------------------------------------
  - Choose any cpp file, then from vscode menu -> terminal -> Configure Default Build Task...
    - C/C++:g++.exe build active file
    - this creates a configuration file :-> ' tasks.json ' in .vscode folder at the root folder
      - edit this file to include your settings / configurations
      
      - Now from vscode menu -> terminal :- there is run build task ( ctrl + shift + B )


  Using clang (clang format tool and clang format file)
  -----------------------------------------------------------------
    - Download [clang format tool](https://llvm.org/builds/), add to path during / after installation
    - Choose any cpp file, then from vscode menu -> terminal -> Configure Default Build Task...
      - C/C++:clang++.exe build active file
      - this creates a configuration file :-> ' tasks.json ' in .vscode folder at the root folder
        - edit this file to include your settings / configurations
      
      - Now from vscode menu -> terminal :- there is run build task ( ctrl + shift + B )

  - ```
     For some reason i don't know, clang was giving me errors and 
     failed to compile cpp files after creating the configuration (tasks.json file). 
     I also had the error:-> iostream is not defined
    ```

C/C++ Configurations
--------------------
- Ctrl + shift + p, search for:- C/C++: Edit Configurations (UI)
  - This creates c_cpp_properties.json file in .vscode folder.
  - There is C and C++ standard entries (entries to be edited )
  - Changed C++ standard from gnu++17 to c++20
  - Once this file is close, the entries appear in c_cpp_properties.json file


Printing text using c++
-----------------------
- std - " standard namespace "  (stud)
- :: scope resolution operators  -  show that these belong in the namespace
- endl - new line
- cout - similar to print statement
- << insertion operators. Direction R -> L
- std::cout  -> output stream, cout representing "ostream"
- Avoid using:-> using namespace std
  - only use elements that are needed using the scope operator
