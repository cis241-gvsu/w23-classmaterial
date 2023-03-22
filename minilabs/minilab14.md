## Minilab 14

This example will help you become familiar with C.  This example will
use a simple cipher to encode text.

1. Create a character array `mystring` initialized to a string of your choice.
2. Choose an integer value between [1,5], call this `shift`.
3. Use `printf` to print a line with the following text:
```
The string to be encoded is [mystring] and the shift to use is [shift]
```
   where `[]` mean you should print out the actual value of the variable.
   
4. For each character in your string:

    * Add (or subtract -- your choice, but choose the same one or choose
      a pattern of how you add/subtract) the integer chosen from ascii
      value for the character
    * Print out the resulting character after modifying the ascii value.

The resulting string is your encoded string.  For more practice, now try
decoding the string (because we know how it was encoded, we could decode
it as well).
