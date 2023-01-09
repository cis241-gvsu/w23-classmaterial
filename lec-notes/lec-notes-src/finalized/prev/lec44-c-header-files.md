---
title: C Header Files
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Header Files

---

### Multiple Program Files

* What if you have a single function you find you reuse
  often in different pieces of code
    * Copy and paste function - error prone, end up having to fix
      multiple copies
    * Solution:  Create a separate file with that function

---

### Header Files

* Things like `string.h`, `stdio.h`, `stdlib.h` are system header files
    * Use `#include <header_filename.h>`
* There are also custom header files (your own header files)
    * Use `#include "header_filename.h"`

---

### Header File Content

* Header files contain function prototypes
* Example:  `sum.h`

```
#ifndef SUM_H
#define SUM_H

int sum(int, int);

#endif
```

---

### What's the other stuff
* Need to make sure we don't have issues if the header file gets included multiple times
* Use an "include guard"
* Uses preprocessor directives to prevent additional attempts
  of defining function prototype on 2nd, 3rd, etc. include
* Nests prototype definition in an if
    * Checks to see if macro is set before entering if
    * Sets macro in if -- any future won't enter if

---

### What about the function definition?

* Create another file
* Example: `sum.c`

```
#include "sum.h"

int sum(int val1, int val2) {
    return val1+val2;
}
```

---

### Using it in another file

```
#include &ltstdio.h&gt
#include "sum.h"

int main(void) {
    int a = 5;
    int b = 6;
    printf("a = %d, b = %d, sum = %d\n", a, b, sum(a,b));
    return 0;
}
```

---

### Using it in another file (cont.)

* Told it about the header file with the include
* How does it know where the actual function definition is?
* Need to add c file when compiling
* Example:  `gcc program.c sum.c -o run`

---

### Compiling (cont.)

* What happens if `sum.c` was actually 10000+ lines long
  and all we wanted to do was change the format in the print
  statement in `program.c`
* Can be useful to compile files separately
    * Compile each file to its own object file
    * Create executable by linking object files

---

### Compiling (cont.)

Example:  compiling files separately

```
gcc -c sum.c
gcc -c program.c
gcc program.o sum.o -o run
```

---

### More on Includes

* There are default search locations for includes
* `#include "header_fname.h"` first looks in current
  directory (then other predefined ones)
* What if header file isn't in current directory?
    * Can use path in the include statement
    * Can specify additional directories to search
        * `-I` option
        * Example `gcc -Iproj/headers` (or wherever your
          header files live

