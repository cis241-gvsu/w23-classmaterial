# Minilab 4

The purpose of this minilab is to allow you to practice using grep
and piping.

* Use `ssh` to access an EOS machine.
* Run `last` (a command we did not talk about which shows recent logins to the machine)
  and pipe the results into grep searching for your userid
* Count the number of times I've logged in recently using `last`, `grep`, and `wc`
  Try to do it in one command where all that is output is the count.  My
  userid is `carrieer`
* Use piping, `last`, `grep`, and `wc` to count the number of logins on Monday.
* Look at the manpages to find an option that allows you to limit grep
  so it only prints the first specified number of matches.  Use piping,
  `last`, and `grep` to print up to the last 5 logins on a Wednesday.
* We could have gotten the same output by not using the option to `grep`
  and instead piping the results of `grep` into a 3rd command (one
  we learned earlier this semester).  Think about what command
  we could combine it with to duplicate the previous results.

