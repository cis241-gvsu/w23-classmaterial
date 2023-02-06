# Minilab 06

1. Create your own repository on your local machine
2. Create a file called `fileA.txt` using vim with 10 lines of text (the text can
   be anything).
3. Create a file called `fileB.txt` using vim with 4 lines of text (anything)
4. Add, and commit the files created in steps 3 and 4
5. Change line 3 of `fileB.txt`.
6. Stash your changes.
7. Change line 1 of `fileB.txt`, add and commit.
8. Create and switch to a new branch (any name is fine)
9. Modify lines 1, 2, 8, and 9 of `fileA.txt` in the new branch
   (the actual modification doesn't matter, just change the text
   on those lines)
10. Add and commit the changed `fileA.txt`
11. Switch back to master branch
12. Modify lines 1 and 2 of `fileA.txt`
13. Add and commit the modified `fileA.txt`
14. Merge the branch you made back into master.
15. You should get a merge conflict which you'll need to resolve
    by manually editing the file with the conflict or using
    a mergetool such as `meld` (whatever you prefer -- you do
    not need to use `meld`).  You can keep whatever lines you
    choose.
16. Don't forget to add and commit to finish the merge.
17. Pop your stash made in step 6
18. Add and commit the changes to `fileB.txt`.
19. Use `git log` to find the SHA for the original commit
20. Use `git restore` to access the version of `fileB.txt`
   from the original commit.
