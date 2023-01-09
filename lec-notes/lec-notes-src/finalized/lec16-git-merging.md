---
title: Lecture 15
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

# Git - Merging

---

### Merging

* Previously we assumed no merge conflicts
* Merge conflicts:  when 2 commits compete
    * People editing the same line
    * File both edited and deleted

---

### Resolving Merge Conflicts

* Manually edit files to decide what to keep
* Markers indicate who did what:
    * Between `<<<<<<<` and `=======`:  
      local - branch merging into
    * Between`=======` and `>>>>>>>`:  
      remote - branch being merged

---

### Resolving Merge Conflicts (cont.)

* Decide which to keep or combine them in some way
* Replace with whatever decided
* Remove markers
* Repeat for all conflicts in each conflicting file
* Add files after resolving merge
* Run `git commit`

---

### Resolving Merge Conflicts (cont.)

* Q1. What if I just want to keep one version or the other,
  is there a better way?
* A1. Two options
    * `git restore --ours filename` or  
      `git restore --theirs filename`
    * or replace `restore` with `checkout`
  <small>`ours` = branch merging into</small>  
  <small>`theirs` = branch being merged in </small>

---

### Resolving Merge Conflicts (cont.)

* Q2. I screwed up the merge process, can I start over?
* A2. `git merge --abort` (may delete any changes in working directory)

