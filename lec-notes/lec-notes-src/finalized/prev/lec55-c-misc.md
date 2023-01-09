---
title: miscellaneous
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Misc

---

### Misc C

* Variables can be preceded by `const` to be read-only
    * We used #define for the same purpose
    * Using `const` qualifier will have normal variable scope
* `static` in front of variable
    * variable maintains value even after block exits
    * Ex:  `static int n` in function could be used to identify
      if it is first call to function or not

---

### Misc C - Libraries

* Compiling our own mutli-file programs
    * Compile all together with gcc
    * Compile into separate object files, then compile those together

---

### Misc C - Libraries

* Standard libraries - don't need to compile them
    * already exist in compiled form (a library)
    * are "linked to" - in default spot, no need to specify
    * have header files that are included - in default spot
* Can do this for custom libraries
    * Need to specify where and link when compiling (`-L` and `-l` options)
    * Likely need to specify where headers live (`-I` option)
