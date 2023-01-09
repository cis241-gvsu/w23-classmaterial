---
title: Permissions and Path
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## More Linux

---


### Aliases

* Give a short name to use in place of longer command
* Add in ~/.bashrc
* Example:  
  `alias la='ls -a'`

---


### File Permissions

* 3 types of users:
    * owner - owner of the file
    * group - members of group associated with file
    * other - everyone else

* 3 types of access:
    * read
    * write
    * execute


---

### File Permissions (cont.)

* See current permissions: `ls -l`
    * char 0 = filetype
    * chars 1-9 = file permissions
    * then ACL flag, # links, owner, group, size, mod date, and filename

* 3 characters for each of owner, group, other
    * specify read, write, execute permission
    * Example: '-rwx------' means only owner can do anything

---

### File permissions - How to change?
* `chmod` command
    * `+` = add permission
    * `-` = remove permission
    * Ex: `chmod g+x, o+x'
* Numerical shortcut: (sum to get combo)
    * 4 = read
    * 2 = write
    * 1 = execute

---

### Environment Variables

* PATH - where the shell looks for programs
* To modify:
    * Open `~/.bashrc`
    * add `export PATH="newpath:$PATH"`
    * adds newpath to the beginning of path
    * Open up ~/.bash_profile -- look for a line with .bashrc
* Path is searched in order listed

