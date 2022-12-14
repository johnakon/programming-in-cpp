Using Integral, character and floating point types
---------------------------------------------------

- Assuming you want to know upfront the size of a data type, You can enforce this.
- Int sizes can be enforced by using fixed width integers
  - e.g 
    - int8_t
    - int16_t
    - int32_t
    - int64_t

    Points to note
    ---------------
    - With fixed width int:-
      - fixed width type may not be efined on all architectures
      - If used, one may incurr an issues in the program
        - for example if the word length in your architecture don't align with the fixed width type. In such cases there will be a small performance hit
      
some new data types in c++
--------------------------
The following are new formats;
- binary 0b1010
  - the ' 0b ' indicates a binary format of the value 1010
- octal 023
  - the ' 0 ' indicates an octal format of the number 23
- hexadecimal 0x11a
  - the ' 0x ' indicates a hexadecimal format of the number 11a


floating point numbers in c++
------------------------------
- float indicates single precision
- double indicates double precision
- long double is used for extended precision

character types
----------------
- The size of a char is 1 byte
  - char lowercase_vowel = 'a';

- character types can be represented suing int as well
  - int lowercase_vowel = 'a';
    - This gives an ASCII value : 97  (lowercase a)
  - int uppercase = 'A';
    - This gives an ASCII value : 65  (uppercase A)

Using escape characters
-----------------------
- These can be used to represent non printable characters or special characters

  - newline : \n
  - tab horizontal : \t
  - tab vertical : \v













