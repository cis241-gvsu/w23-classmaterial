# Minilab 11

In this minilab, your task is to write
a bash script which takes as arguments
one or more filenames.  Each file
will have many lines.  Your task is
to determine which lines are not valid
email addresses.

1. Create a bash script
2. Loop through all of the filenames provided as arguments.
3. Determine a regular expression that matches
   either valid or invalid email addresses
4. Use grep to print all lines that are not
   valid email addresses.  Depending on how you
   chose to write your regular expression, you
   may need to tell `grep` to print those that
   don't match and redirect the non-valid emails
   to a file called `non-valid.txt`
5. Run your script with all 3 files in  
   [misc_files/minilab-email-regex/](https://github.com/cis241-gvsu/w22-classmaterial/tree/master/misc-files/minilab-email-regex).


## Valid Email Addresses

For the purposes of this exercise a valid email
is of the form:

`username@domain.tld`

where

* `username`:  only alphanumeric characters and the period,
  the period cannot be the first or last, and cannot appear
  consecutively (aka, you cannot have two periods next to each
  other
* `domain`:  only alphanumeric characters, period, and hypen,
  the period and hypen cannot be the first or last and cannot
  appear consecutively (`-.` and `.-` are also not
  allowed).
* `tld`: can only contain upper and lowercase letters, must be
  at least 2 characters
