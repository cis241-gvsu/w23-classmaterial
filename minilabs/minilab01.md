# Minilab 1

### Part 1 - simple scp
1. Use `ssh` to access one of the eos machines
2. Run
   <small>`wget https://raw.githubusercontent.com/fivethirtyeight/data/master/avengers/avengers.csv`</small>
   
   Note, `wget` is handy command -- it will go
   grab a datafile from the web (in this case from 538's github repo).
3. Use `exit` to disconnect (now you'll be back on your local machine)
4. Use `scp` to transfer the file from eos to your local machine.

### Part 2 - directories, options, and rsync
1. Use `ssh` to access one of the eos machines
2. Make a directory (you can call it whatever
   you want - avoid spaces, and it can be wherever you would like it)
3. Change into that directory
4. Run the following commands:
   <small>
   
   `wget https://raw.githubusercontent.com/fivethirtyeight/data/master/riddler-castles/castle-solutions.csv`
   
   `wget https://raw.githubusercontent.com/fivethirtyeight/data/master/riddler-castles/castle-solutions-2.csv`
   
   `wget https://raw.githubusercontent.com/fivethirtyeight/data/master/riddler-castles/castle-solutions-3.csv`
   
   `wget https://raw.githubusercontent.com/fivethirtyeight/data/master/riddler-castles/castle-solutions-4.csv`
   </small>
5. Use `exit` to disconnect.
6. Use `scp` with the `-p` and one other option
   to transfer the directory from eos to your local machine.
   
   **How would you find out what the `-p` option does?**
   
   **How would you find out how to transfer a directory?**
6. Use `rsync` to perform a dry-run of transferring the files
   back to the eos machine and verify that it would not transfer
   either of the files.  
   
   **Hint:**  you'll need to find and pass the correct 2 options
   to indicate you want a dry-run and to have rsync show info
   about what it is doing. Where should you look?
   
   **Note:** because we used the `-p` option with `scp` we don't
   need to use the `--checksum` option shown in lecture / videos. 
7. Edit 1 of the 4 data files (doesn't matter which 1 and
   any changes are fine).  This can be as simple as opening it in vim
   and adding a letter/line.
8. Repeat the previous commands to verify that rsync will transfer
   the edited file.
9. Use `rsync` to actually transfer the files (aka not a dry-run).
10. `ssh` back into eos and use `ls` to verify just the edited
    file was transferred by looking at time stamps.
    **Hint:**  what option would you pass to `ls`
    to get more info about the files?

