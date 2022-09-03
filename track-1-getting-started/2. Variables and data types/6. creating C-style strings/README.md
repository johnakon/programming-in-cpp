Creating C style strings
------------------------
- Show that C-style strings still work in C++
  - Note the use of the #include <cstdio> and #include <cstring> for printf and strlen (this is how you include C libraries)

- strings_v01.cpp
  - Building the code should result in a warning
  - ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  
  - Reason for this warning here (note the answer with the check mark)

  IMPORTANT LINK:
  ---------------
  - https://stackoverflow.com/questions/20944784/why-is-conversion-from-string-constant-to-char-valid-in-c-but-invalid-in-c/20944858

Fixing the warning
------------------
- Here is one way you could fix the warning
  - char* proverb_1 = (char *) "A bad workman always blames his tools";

  - The explicit conversion silences the warning but you have actually changed this from a pointer to a constant to a pointer to non-constant

- fixing the warning (this is the right way)
  - Change just one line in the code
  - const char* proverb_1 = "A bad workman always blames his tools";

  - The string literal is a constant and should be stored in a pointer to constant (cannot change modify the string, can modify the pointer)


- strings_v02.cpp

  - Drawbacks with C-style strings
    - The cstring header provides a wide range of functions for working with C-style strings including capabilities for joining strings, searching a string, and comparing strings. 
    - All these operations depend on the null character being present to mark the end of a string. If it is missing or gets overwritten, many of these functions will march happily through memory beyond the end of a string until a null character is found at some point or some catastrophe stops the process. 
    - Even if your process survives, it often results in memory being arbitrarily overwritten. And once that happens, all bets are off! Using C-style strings is therefore inherently unsafe and represents a serious security risk.

  C++ style strings
  -----------------
  - The string header of the C++ Standard Library defines the std::string type, which is much easier to use than a null-terminated string. 
  - The string type is defined by a class (or to be more precise, a class template), so it isn’t one of the fundamental types. 
  - Type string is a compound type, which is a type that’s a composite of several data items that are ultimately defined in terms of fundamental types of data. 
  - Next to the characters that make up the string it represents, a string object contains other data as well, such as number of characters in the string.

  - Internally, the character array encapsulated by a string object is always terminated by a null character as well. This is done to assure compatibility with the numerous existing functions that expect C-style strings.


- strings_v03.cpp

  - Converting C++ style strings to C-style strings
  - this conversion results in a C-string of type const char*. Because it’s const, this pointer cannot be used to modify the characters of the string, only to access them. 
  - Your second option is the string’s data() function, which starting from C++17 evaluates to a non-const char* pointer1 (prior to C++17, data() resulted in a const char* pointer as well):

    - Add these two lines below the cout statements
      - proverb_1_cstr[0] = 'a';
      - proverb_2_cstr_nonconst[0] = 'a';

    - Compile the code and show the error
      - error: read-only variable is not assignable
        - proverb_1_cstr[0] = 'a';
    - 1 error generated


- strings_v04.cpp

  - Other initialization techniques

