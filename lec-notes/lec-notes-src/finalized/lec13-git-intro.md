---
title: Lecture 12
theme: solarized
revealOptions:
    transition: 'none'
    controls: false

---

## Git Basics - Local

---

### Common References

* `HEAD` - reference to tip of current branch
* index - staging area
* SHA-1 hashes - for referencing commit hashes

---

### Basic Operations Locally

* `git init` -> initalize new repo
* `git add` -> stage changes to file (or add untracked file)
* `git rm` -> remove
* `git mv` -> rename or move
* `git commit` -> commit staged changes

---

### Git Commits

![Linear Commits](/media/git-linear-commits.png)

---

### Basic Operations Locally (cont.)

* `git status`
* `git diff`: view changes 
* `git log`: view list of commits

---

### Oops!

* I added (staged) a file I didn't mean to...  
* Options - both unstage but keep changes in working directory
    * `git restore --staged filename` <- "new" way
    * `git reset filename` <- "old" way

---

### Oops! (cont.)
* I've really screwed up a file, I just want to get rid of all my changes...
* Options:
    * `git restore filename` <- "new" way
    * `checkout` <- "old" way
        * `git checkout filename`
        * `git checkout -- filename` <small> if branch exists with same name as file</small>
* If already staged, must first unstage or
    * `git restore --staged --worktree filename`


---

### Oops! (cont.)

* I've screwed up my whole working directory, can't I just go back to the last commit?
* `git reset --hard` (CAREFUL -> this deletes things)
* Or `git restore --staged --worktree .` from top level directory in repo
