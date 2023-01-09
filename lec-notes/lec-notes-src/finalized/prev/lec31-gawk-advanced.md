---
title: Lecture 31
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## gawk

---

### Recall: 

```
BEGIN { ... initialization gawk statements ... }
gawk commands to run on each line of the file
END { ... finalization gawk statements ... }
```

* each command has the form: 
  ```
  pattern { action }
  ```
* action = one or more statements enclosed in braces

---

### associative arrays

* do not need to initialize
* simply refer to elements  
  ex:  `arr[$1] = 1`
* can test for inclusion:  
    * ex:  `2 in arr`
    * tests if 2 is a key in arr

---

### functions

* `length(str)` = number of characters
* `int(num)` = integer portion of num (not rounded)
* `index(str1,str2)` = starting index of `str2` in
  `str1` (1-based indexing)
* `split(str,arr,del)` = split `str` by `del`,
  place elements in `arr` (returns number of elements)
* mathematical functions are also available 

---

### functions (cont.)

* `sprintf(fmt,args)` = string formatting
* `substr(str,pos,len)` = access substring
* `tolower(str)` = convert to lowercase
* `toupper(str)` = convert to uppercase

---

### Other Predefined Variables

* `OFS` = output field separator (default space)
* `ORS` = output record separator (defualt newline)
* `RS` = input record separator (default newline)

