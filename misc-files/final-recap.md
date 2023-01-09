## Final Exam Recap

The final exam is cumulative.
The list below gives a highlight of some
of the main topics and some information on what you would be
expected to do.  This list is not all inclusive (e.g. there may
be something on the exam not on this list, but covered in class),
though there is nothing intentionally left out.

**Note:** I understand and recognize that some of this
stuff you might be able to test by retyping code and running.
While that's a useful tool to check, if you have to do it for everything
there is a decent chance you might run out of time on the exam / not
have enough time to do the questions that actually ask you to write code.

### Big Picture Tasks
* Be able to write C, compile and run C code using loops, structs, pointers,
  dynamic memory allocation,
  arrays, accepting input, printing output, etc. (Note -- I won't
  ask you to write from scratch any code as complicated as the 4th
  project).
* Be able to look at C code and understand
  * what it does
  * what it's output would be
* Be able to identify the correct C code to accomplish a specific task
* Be able to identify how to fix C code that isn't working 
* Make sure you know how to access files you edit in the terminal
  (this is particularly for Windows subsytem users to make sure you
  know how to upload your code files to PL)
* Make sure you can move files to/from EOS in case you need to access
  EOS to run something like `valgrind` or `gdb`.
* Be able to write, understand, and use things like bash, sed, gawk
* Be able to identify what command to use when
* **BE ABLE TO READ THE MANPAGES**
* Be able to use regular expressions

## C
It's a little hard to break down a whole language into things
that you need to be able to do, but here's a recap of what we
covered:
* Compiled vs interpreted
    * What does it mean to compile?
    * How do you compile C code?
    * What are the main compiling options
* C Preprocessor
    * What does it do?
* Header files
    * When do you use them?
    * Be able to create one
    * How do we use them
* Know the different datatypes, operators, and logical operators
* Input/Output
    * reading from stdin - know the different functions for reading
      from stdin, when to use which, how they differ
    * writing to stdout - know how to
    * file io - note I won't expect you to write code
      that takes input from something other than stdin or outputs
      to something other than stdout,
      but you should be able to look at some code that uses
      it and know the basics
* Know the structure of loops, conditionals, functions, and switch
  statements and be comfortable using them all
* Pass-by-reference vs pass-by-value
    * Understand the difference
    * Which one is C?
    * Why is this important / how does it manifest?
* Arrays
    * Be comfortable using
    * How to allocate dynamically
* Pointers
    * Know how to make pointers
    * Understand how to use them
    * Understand pointer arithmetic
* Know the purpose of and when to use "address of" and "value of"
  operators
* Stack vs Heap
    * understand the difference
    * be able to identify from looking at code which things
      are on stack and which are on heap
* Dynamic memory allocation
    * How to allocate memory dynamically
    * When to allocate memory dynamically
    * Know the difference between the various memory allocation functions
    * Know how and be able to identify where you need to free memory
      to prevent memory leaks
* Debugging
    * Know what `gdb` is and how to use it
    * Know what `valgrind` is and how to use it
    * Make sure that you've tried these on EOS in case you have issues
      with either of them running on your local computer
* Makefiles
    * what are they?
    * why are they useful?
    * know the structure and be able to make one
* 2D Arrays
    * How are they handled in C?
    * Understand the different ways we can create 2D arrays
    * Understand how the different ways actually work -- why do some
      allow use of `[i][j]` notation whereas others don't
* Enums, unions, structs
    * What are they?
    * How do we use them?
* String and memory functions
    * Have some idea of what they do (or know how to figure it out)
    

## Linux and Scripting (copied from midterm study guide)
* Directory structure
    * Understand the general layout
    * Be able to navigate a linux filesystem
    * Understand the difference between relative and
      absolute paths (and be able to use and understand both)
    * Know what `/`, `..`, and `~` do in the context of paths
* Basic commands to navigate via terminal
    * Examples:
        * `cd`
        * `mkdir`
        * `ls`
        * others...
    * You should be able to use these effectively and
      understand what given commands do
* Basic commands to view files
    * Examples
        * `more`
        * `cat`
        * `uniq`
        * others...
    * Know how to call, understand purpose, what would output
      be, when to use what, etc.
* Remote access and file transfer
    * What commands did we use, what did what, understand
      how to call
* Compressing / uncompressing files
    * What commands, what was the difference between them
* Archiving files
    * What is archiving, what command, what is it's purpose
* Recording shell sessions (`script` command)
* `history` command
* Input/output/stderr redirection
    * How to use
    * Which is which
    * Append vs overwrite
    * Be able to use, identify what output would be, etc.
* Piping
    * What is it
    * When / how to use
    * Difference between it and redirection
* File manipulation
    * Examples
        * `cut`
        * `tr`
        * others...
    * What do they do
    * In what scenarios would you use each of them
* Basic Utilities
    * Examples
        * `diff`
        * `wc`
        * `grep`
        * others...
    * What do they do, be able to call, when to use each
* git
    * operations
    * general idea
    * local and remote
    * branches
* file permissions
    * what do they mean
    * how to view
    * how to change
* processes
    * viewing, killing, etc.
    * running in foreground vs background
* aliases / environment variables
* Bash scripting
    * know bash scripting basics
    * write simple or figure out what one does
    * arguments
* sed
    * what is it
    * how and when to use
    * write simple / figure out what one does
* gawk
    * what is it
    * how does it view files
    * how and when to use
    * write simple / figure out what one does
* regular expressions
    * what are the special characters, what do they do
    * what are character classes
    * figure out which match
    * write one that matches or doesn't match

