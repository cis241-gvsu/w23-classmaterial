---
title: Lecture 13
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

### Branching

* Branching workflow
    * typically keep master clean/working
    * create branches for bug fixes and development
    * can branch off other branches

---

### Branching (cont.)

* List branches: `git branch -a`
* Just create new branch:  
  `git branch branchname`

---

### Branching (cont.)

* Switch to existing branch:  
    * `git switch branchname` <- new way
    * `git checkout branchname` <- old way

* Create and go to (checkout) new branch:
    * `git switch -c branchname` <- new way
    * `git checkout -b branchname` <- old way
  
---

### Branching (cont.)

* Done working and want to incorporate changes:
    * switch to branch you are merging into (`git switch` or `git checkout`
    * `git merge`
    * `git branch -d branchname`

