---
title: vim
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Vim

---

### Vim

* Modal:  go between insert and command
    * `i` enters input
    * `esc` enters command mode
* Can use `a` instead of `i`
    * `i` insert (before)
    * `a` append (after)
* Save:  `:w`
* Quit:  `:q`

---

### Vim - Moving the Cursor

In comamnd mode:

* Arrow keys
* `h` (left), `j` (down), `k` (up), `l` (right)
* `w`:  forward a word
* `W`:  forward a word (blank delimited)
* `b`:  back a word
* `B`:  back a word (blank delimited)

---

### Vim - Moving the Cursor

* `#gg` -> goto line #
* `gg` -> go to beginning of file
* `G` -> go to end of file

---

### Vim - Delete

* `x`: delete character
* `dw`: delete word
* `dd`: delete line
* `D`: delete rest of the line
* Can precede first 3 by number to repeat

---

### Vim - Copy

* `yy`: yank current line
* `yw`: yank current word
* can precede both of the above by number to copy multiple
* `p`: paste (below/after)
* delete commands also copy and can be used with `p`

---

### Others

* Searching:  `/desiredword`
* Replace:  `:%s/toreplace/newstring`
* Other options for replacing only on this line, etc.
* `u`: undo
* `q!`: quit - discarding changes

---

### Vim - Configuration

* Change how it behaves
* Can add line numbers, change tabstop, syntax highlighting, etc
* Edit `~/.vimrc` to change persistently

