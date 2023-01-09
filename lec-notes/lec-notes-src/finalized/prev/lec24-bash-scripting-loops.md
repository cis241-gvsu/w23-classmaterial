---
title: Lecture 24
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Bash Scripting

---

### Loops

```
for val in list
do
    commands
done
```

* Example lists:
    * 0 1 2 3 4
    * word1 word2 word3
    * {start..stop..step}

---

### Loops Cont.

* Can leave out `in list` part -> loops through arguments
* While loops:
  ```
  while condition;
  do
      commands
  done
  ```
