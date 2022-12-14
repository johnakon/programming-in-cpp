Using Variables and Data Types
-------------------------------
- boolean type, standard string object
- initilization | declaration of variables
- Arithmetic and Logical operators
- Types in C -> strings in c++ | char* style string


Variables
---------
- Variables and Initialization
  - int balance; -> declaring a variable
  - int balance = 10; -> Initializing a variable

    Assignment notation | Assignment initialization
    -----------------------------------------------
    - using the " = " operator

      - int balance = 50;
      - int withdraw = 23;
      - int bank_balance = balance - withdraw;

    Functional notation 
    -----------------------
    - using the " ( ) " operator

      - int balance(50);
      - int withdraw(23);
      - int bank_balance(balance - withdraw);

    Braced Initialization 
    -------------------------
    - using the " { } " operator

      - int balance{50};
      - int withdraw{23};
      - int bank_balance{balance - withdraw};


    data type variations
    --------------------
    - int balance = 10.4;
    - the output here will be truncated to 10.

    - Using functional notation
        - int balance(10.4);
        - the output here will also be truncated to 10 with a warning.
    
    - Using braced initializer
        - int balance{10.4};
        - the output results into an error - with warning :- converting from " double " into " int ".


















