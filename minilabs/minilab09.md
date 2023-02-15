# Minilab 09

In project1, we looked at the most common
words in books written by different authors.
What if we needed to repeat this process regularly
for some other author?

Today we are going to adapt project 1 to accomplish
this by turning it into a shell script. 
If you didn't finish project1 or don't feel like
working with the whole list of commands, don't worry about
outputting the most common words, just create
your script so it goes as far as 
combining the relevant books into a single file.

### Part 1
Write a shell script that
1. Takes as its first argument the path to the books directory
   (so it doesn't need to be inside the folder to run your script --
   aka, your script should be able to be run from any folder on your
   computer).  Make sure it's not in the books folder for testing
   purposes (or you won't know this is working).
2. Use the `test -d` command to check if the typed in directory is
   valid.  If so, `cd` into the directory, if not print an error message
   and call `exit 1` to exit bash script early
   (non-zero exit codes are generally used to indicate
   an error).
3. Takes as its second argument the author's last name to
   process and output the most common words for that author's books
   (or simply concatenate all books with that rating to
   a single file if you didn't finish the project).  You'll need
   to modify the `cat` command to use the inputted author.

### Part 2 (for more practice, optional)
The purpose of this part is to practice with loops in bash scripts.
* Instead of accpeting just 2 arguments, let the user type in as 
  many authors as they'd like.  Use a `while` loop with `shift`
  to continually access the 2nd argument to perform the process
  for any number of inputted authors.
