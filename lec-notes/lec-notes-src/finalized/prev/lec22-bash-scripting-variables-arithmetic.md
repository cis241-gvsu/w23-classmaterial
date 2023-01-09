---
title: Lecture 22
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Bash Scripting

---

### Variables

* Assignment:  
    * `mynum=5`
    * `mycolor=hello`
    * `mylongmsg='hello world'`

* Reading/Accessing Value:  precede by $
    * `echo $mynum`

* Spacing is important

---

### Single vs Double Quotes

* Single quotes -> everything treated literally
* Double quotes -> expand variables inside

---

### Arithmetic Expansion

* Can't just do 1+1 or var1+var2
* `$((1+1))`
* `$((num1+num2))`
* Operators available:  
  `+`, `-`, `*`, `/`, `%`, `++`, `--`, `**`

