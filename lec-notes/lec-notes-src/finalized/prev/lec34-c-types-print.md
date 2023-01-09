---
title: Lecture 33
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Types/Print

---

### Data Types:

Non-floating point
* `int` - at least 16 bits
* `long` - at least 32 bits
* `long long` - at least 64 bits

Floating point
* `float` - typically 32 bits
* `double` - typically 64 bits

Character:  `char`

---

### Printing Output

* `printf(controlstring [, data])`
* `controlstring` indicates surrounding text to print, how to format variable printing
* `data` is optional - used when you want to print value of variable
    * says what variable to print
    * `controlstring` contains format specifiers for each `data` being printed

---

### Format Specifiers

* integer:  `%d` (may also see `%i`)
    * can add additional formatting info
    * add number before d - specify min width `%3d`
    * specify 0-fill `%03d`
    * specify left justify `%-3d`

---

### Format Specifiers (cont.)

* float/double: `%f`, `%e`, `%g`
    * `%f`:  fixed point notation
    * `%e`:  exponential notation
    * `%g`:  chooses between normal and exponential (drops trailing)

* number before decimal - total width to use
* number after decimal - # places after decimal pt
* use `0` for 0-fill, use `-` for left justify

---

### Format Specifiers (cont.)

* char: `%c`
* string: `%s`
    * same with int/float you can add
        * number to specify width
        * `-` to specify left-justify

