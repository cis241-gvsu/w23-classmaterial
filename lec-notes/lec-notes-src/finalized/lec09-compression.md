---
title: Lecture 08
theme: solarized
revealOptions:
    transition: 'none'
    controls: false

---

# Compression

---

## Compressing Files

* Multiple different options
    * `bzip2` - better compression
    * `gzip` - faster compression
* Decompress
    * `bunzip2`
    * `gunzip`
* Work on files (can work recursively on directories)
* How to get 1 single file for whole directory?

---

## Archiving

* Creating single file from multiple files
* `tar` command
* Examples:
    * pack (create) <br>
      `tar -cvf all.tar file1 file2 ...`
    * unpack `tar -xvf all.tar`
    * view table with contents <br>
      `tar -tvf all.tar`
* What does the `-v` stands for?

