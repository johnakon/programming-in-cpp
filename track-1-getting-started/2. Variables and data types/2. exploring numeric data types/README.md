Exploring Numeric Data types
-----------------------------
- Looking at the simplest data types:-> char and int
    - int positive_int_extreme = 2147483647; | int negative_int_extreme = -2147483648;
    - How do we tell this is the positive extreme int value and negative extreme value:
        - adding 1 and subtracting respectively
        - positive_int_extreme = 2147483648 (2147483647+1)
        - negative_int_extreme = -2147483649 (-2147483648-1)
        - this results into a long to int conversion. And once c++ detects that a value is too large to fit into an int type, it upgrades the value to be of a long type
        - The build finishes with a warning

    unsigned int
    ------------


