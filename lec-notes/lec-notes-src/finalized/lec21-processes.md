---
title: Lecture 19
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

### Processes

* process = execution of command by linux kernel
* `ps` lists process, `ps -f` lists more info
* `top` interactive listing
* PID = process id #
* PPID = process parent id #

---

### Processes (cont.)

* Running command takes over shell until finished
* What if you want control back
* Run in background (&)
* Ex: `sleep 100 &`

---

### Processes (cont.)

* Ctrl-c kills running process, Ctrl z suspends
* How to kill suspended (or one in background)?
    * `kill pid` - graceful
    * `kill -9 pid` - kill now
* `jobs` shows status
* `bg %` and `fg %` can be used to restart suspended


