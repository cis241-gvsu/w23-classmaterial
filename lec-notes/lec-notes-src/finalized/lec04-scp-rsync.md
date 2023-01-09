---
title: remote file transfer
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Transferring Files

---

## scp

* `ssh` allowed us to securely access a shell on remote devices
* what about moving files? -> `scp`
* Command format:  
  <small>`scp [[user@]src_host:]srcpath [[user@]dest_host:]destpath`</small>
* Example: transfer file to remote machine  
  <small>`scp pathtofile username@hostname:~/some/remote/directory/`</small>
* Moving the other way? -> swap order

---

## rsync

* different alg for transfer
    * checks for changes and differences
    * only transfers differences
* Command format (like `scp`):  
  `rsync [[user@src_host:]srcpath [[user@dest_host:]destpath` 
* Example:  
  `rsync filename username@hostname:~`
* Many options:  recursive, delete, ...

