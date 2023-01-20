# Minilab 3

The purpose of this minilab is to help you practice some of
the linux utilities we've covered so far.  You'll do this
by doing some simple processing on your command history.

* Use `history` to access your commnads and redirect the
  output to a file (name of your choice)
* Use `wc` to count how many commands are in the file
* Use `tr -s ' '` to squish multiple spaces into one --
  you'll need to use both input and output redirection
* Use `cut` to exctract just the commands (literally just the
  main command -- not numbers, options, or arguments)
  and redirect the output to a file
* Use `sort -u` on the resulting file to get the unique lines
  and redirect the output to a file
* Use `wc` to count the unique commands 
