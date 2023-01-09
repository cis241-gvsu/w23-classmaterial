---
title: Lecture 23
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Bash Scripting

---

### Conditionals

```
if condition; then
    commands
elif condition; then
    commands
else
    commands
fi
```

---

### Expressing Conditions

* `[ $var1 == $var2 ]`
*  This will do string comparison
* For numerical comparison use `-eq`, `-le`, `-ge`, `-lt`, `-gt`
* To combine, both are in brackets and combine with &&
* Can also do arithmetic for condition:  
    `((mynum1<mynum2))`


