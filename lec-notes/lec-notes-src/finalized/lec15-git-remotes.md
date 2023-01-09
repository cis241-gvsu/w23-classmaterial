---
title: Lecture 14
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

# Git (cont.)

---

### Remotes

* So far, everything has been local
* Remotes:  github, gitlab, bitbucket, ... (servers somewhere else)
* Current local repo, no existing remote:
    * Go to github/bitbucket and create new empty repo
    * `git remote add origin remote_repo_url`
    * `git push --set-upstream origin master`

---

### Remotes (cont.)

* No local or remote
    * Go to github/bitbucket and create new empty repo
    * `git clone remote_repo_url`
* Same workflow locally:  modify/create, add, commit

---

### Remotes (cont.)

* Whenever you want to update remote with your commits:
    * `git push`
* If you are working with other people, need to get any
  changes made by others first:
    * `git fetch` - go see what changes were made on remote
    * `git merge` - merge those changes with mine
    * `git push`
* Can replace fetch + merge with `git pull`

---

### Things not to do:

* rebase
* commit from a detached head (checkout a certain commit, then make a commit)
* reset to a commit 
* ammend a commit once it's been pushed
* DO NOT REWRITE HISTORY IN ANY WAY!!


