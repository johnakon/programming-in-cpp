
Using Opertors with strings
----------------------------

- string_operators_v01.cpp
  - using the operator[] to access characters in a string
  - accessing out of range characters results in undefined behavior (in our case nothing is printed to screen)
    - https://stackoverflow.com/questions/25687891/string-out-of-range-c


- string_operators_v02.cpp


- string_operators_v03.cpp

  - Using the + operator to concatenate strings
  ```
    int main()
    {
      string part_1 = "When one door shuts";
      string part_2 = "another opens";

      string proverb = part_1 + part_2;

      cout << "Concatenated string: " << proverb << endl;

      return 0;
    }
  ```
-  Can also concatenate string literals using +
  ```
    int main()
    {
      string part_1 = "When one door shuts";
      string part_2 = "another opens";

      string proverb = part_1 + " " + part_2;

      cout << "Concatenated string: " << proverb << endl;

      return 0;
    }
  ```


- string_operators_v03.cpp

  - Can concatenate characters and also use the += assignment operator


- string_operators_v04.cpp
  - Concatenation using operators will not work if the operands are string literals

  ```
    int main()
    {
      string proverb = "When one door shuts " + "another opens";

      cout << "Concatenated string: " << proverb << endl;

      return 0;
    }

    -- Run and show the error

    error: invalid operands to binary expression ('const char [21]' and 'const char [14]')
      string proverb = "When one door shuts " + "another opens";
                      ~~~~~~~~~~~~~~~~~~~~~~ ^ ~~~~~~~~~~~~~~~

    1 error generated.
  ```


  - At least one of the operands must be a string

  ```
    int main()
    {
      string part_2 = "another opens";

      string proverb = "When one door shuts " + part_2;

      cout << "Concatenated string: " << proverb << endl;

      return 0;
    }
  ```


- string_operators_v05.cpp

  - Using operators to compare strings lexicographically


- string_operators_v06.cpp

