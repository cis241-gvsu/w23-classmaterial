---
title: Lecture 11
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

# Git

* Distributed Version Control System (DVCS)
* Free and open source

---

### Version Control System

* Records changes to a file/set of files over time
* Allows viewing and recalling of history
* Who cares:
    * Rollback changes
    * Investigate bugs, bug fixes
    * Recover deleted files

---

### Distributed Version Control

* each client fully mirrors repository, including full history
* each clone is full backup
* allows for working, recording changes offline

---

## Distributed Version Control

![DVCS Diagram](/media/git-book-dvcs.png)

---


### File States - Local

* Modified: changed, but not committed
* Staged: modified files marked to be committed
* Committed: version of file stored in local repo

![File States Diagram](/media/git-book-file-states.png)


---

### How it Works - Big Idea

* Committing -> like taking a picture of all files
* Links to old file if no change
* Underneath:
    * eventually objects are packed
    * packing basically stores as changes from closest overall state of project

---

### First Time Using Git 

* Install
* Configure (specify name, email, default editor)
* Most likely want to do for all of your repos on this computer
    * `--global` option
* Can specify for:
    * whole system (`--system`)
    * single repo (`--local`)

---

### Configuring Git
* How to configure:  
  <small>`git config --global user.name "Erin Carrier"`</small>
  <small>`git config --global user.email carrieer@gvsu.edu`</small>
* View configuration:  
  `git config --list`
