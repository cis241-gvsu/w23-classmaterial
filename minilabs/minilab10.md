# Minilab 10

In this minilab, your task is to
come up with a regular expression
that matches valid phone numbers.

For the purposes of this exercise,
a valid phone number can be of any of the following
forms:

* `XXX-XXX-XXXX`
* `XXXXXXXXXX`
* `(XXX)XXX-XXXX`

Where:
* the very first digit (first digit in the area code)
  can only be between 2 and 9
* the first digit of the 7 digit number (aka, the 4th
  digit of the 10 digit numberz0 can only be between 2 and 9
* the rest of the digits can be any number between 0 and 9

You can grab a file that contains a mix of valid and invalid phone numbers
with `wget https://raw.githubusercontent.com/cis241-gvsu/f22-classmaterial/master/misc-files/week07/regex/phone-numbers.txt`

* You can see all of the [valid phone numbers](../misc-files/week07/regex/phone-numbers-valid.txt)
