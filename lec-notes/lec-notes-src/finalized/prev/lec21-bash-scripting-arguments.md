---
title: Lecture 21
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Bash Scripting - Arguments

---

### Arguments

* aka positional parameters
* reference by `${n}` - where `n` is the position
* `$0` - expands to command used to call program
* `$1`, `$2`, etc. are 1st, 2nd, etc. arguments on the
  command line
* need to use braces for numbers with more than 1 digit, i.e. `${10}`

---

### Arguments (cont.)

* `$#` -> total number of arguments
* `$@` -> array of arguments 
* `$*` -> string with arguments separated by space
