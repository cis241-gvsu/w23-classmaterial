---
title: Viewing Files
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Viewing files

* `cat` - print out file
* `less` and `more`
* `head` - show beginning lines of file (default 10)
* `tail` - show last lines of file (default 10)
* `uniq` - displays file with adjacent repeated lines removed 
* `sort` - displays file with lines sorted

---

### How in the world am I supposed to remember all of this?

* Practice
* Access manpages using `man` for details on each call
    * Example `man man`
    * Example `man ls`
    * Pay attention to manpage section (example: `printf`)
* `apropos` for searching manpages
    * Example `apropos "remove file"`
    * Example `apropos "remote"`
