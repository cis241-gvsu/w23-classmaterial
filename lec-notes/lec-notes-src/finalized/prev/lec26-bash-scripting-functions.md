---
title: Lecture 26
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Bash Scripting

---
### Functions

* Definition:
```
function_name () {
    commands
}
```
* Calling: just `function_name`
* Parameters:
    * Call function name with arguments (like we'd call bash script with arguments)
    * Access within function like you access arguments to bash script
    * Aka:  use `$1`, `$2`, ...

