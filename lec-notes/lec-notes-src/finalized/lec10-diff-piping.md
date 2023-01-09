---
title: Lecture 09
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## More Linux Utilities

---

### diff

* Compare text files
* Options to ignore whitespace, blank lines, case
* Example : `diff file1 file2`
* Shows instructions for changing file1 to file2
* `sdiff` shows side-by-side

---

### Piping

* Connects stdout of command to stdin of next command
* Same as using stdout redirection to file followed by stdin redirection
* Usage:  `command1 [arguments] | command2 [arguments]` 
* Examples:
    * `ls | wc -l`: count number of files

