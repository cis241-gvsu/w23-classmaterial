---
title: Arguments
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Arguments

---

### Arguments to Main

* So far we've run all the programs as
  `./executable_name` without any arguments
* Can also accept command line arguments in C
* Currently, main accepts `void`

```
int main(void) {
    return 0;
}
```

---

### Arguments to Main

* Need to replace void with arguments
    * `argc` = number of arguments passed
    * `argv` = array of arguments (each arg is `char *`)

```
int main(int argc, char *argv[]) {
    return  0;
}
```

---

### Arguments

* First arg is always name of program
* Other args may need to be converted to a different type
    * Example `./average 100 110`
        * `argv[1]` is `char *` storing `100`
        * need to convert to int
        * `int atoi(char *str)` in `stdlib.h`
        * other conversion functions also in `stdlib.h`


