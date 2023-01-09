---
title: ssh keys
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## More SSH

---

### SSH Hostname Aliases

* Allow you to type short name without username
* Edit `~/.ssh/config` - for each alias:
```
Host eos01
Hostname eos01.cis.gvsu.edu
User yourusername
```
* Can do same thing for `eos02`, etc.
* **Important:** WSL v1 users should use <br>
  `Hostname 35.39.165.61` (or other IP)
* Use `eos01` in place of `username@eos01.cis.gvsu.edu`

---

## SSH Keys

* Annoying to enter password everytime!
* Default locations (on machine ssh'ing *from*)
  * `~/.ssh/id_rsa` - private key
  * `~/.ssh/id_rsa.pub` - public key

---

### Setting up SSH Keys

* First, make sure you don't already have them \
   `ls -al ~/.ssh`
* Generate new keys\
   `ssh-keygen` -> generates keys 
* Add public key to `~/.ssh/authorized_keys` file on remote server \
   <small>`ssh-copy-id -i ~/.ssh/id_rsa.pub "username@hostname"`</small>

---

### Having Issues with ssh-keys? -- Common Problems

* Errors about the authorized keys file:
    * Not existing:  make the file with  
      `touch ~/.ssh/authorized_keys` 
    * Wrong permissions:  
      * `chmod 600 ~/.ssh/authorized_keys`
      * `chmod 700 ~/.ssh`

---

### Having Issues with ssh-keys? (cont.)

* If for some reason you can use `ssh` and `ssh-keygen`
  but don't have `ssh-copy-id`
    * Move `id_rsa.pub` to remote machine:  
      <small>`scp ~/.ssh/id_rsa.pub username@hostname:~`</small>
    * SSH into remote machine and add public key to `authorized_keys`:  
      <small>`ssh username@hostname`</small>  
      <small>`cat id_rsa.pub >> .ssh/authorized_keys`</small>

