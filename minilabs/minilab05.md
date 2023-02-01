# Minilab 5

The purpose of this minilab is to give you a chance to practice creating your own
git repository and a chance to experience using branches.

### Basics

1. Create a folder that will become your git repo
2. Change into that folder and run `git init` to turn it into a git repository
3. Create 2 separate files (names don't matter) with a couple of lines of text in each.
4. Add and commit both files created in step 3.
5. Modify one of the two files created in step 3.
6. Use the `git diff` command to see what changes were made to the file.
7. Use the `git restore` command to get rid of the changes.
8. Delete one of the two files and commit.
9. Run `git status` to make sure you have no uncommitted changes in your working directory.

### Working with Branches

10. Create a new branch
11. Switch to the new branch
12. Edit a line in the existing file.
13. Add and commit the changes.
14. Create a new file, add it, and commit it.
15. Switch back to the master branch
16. Edit the file in this branch (there should only be 1 at this point).  Edit
    the same line that you edited in step 12.
17. Merge the branch you created in step 10 back into master.  Make sure to resolve the
    merge conflict.
18. Delete the branch you had created in step 10.
