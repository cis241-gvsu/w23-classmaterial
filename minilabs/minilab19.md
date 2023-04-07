## Minilab 13:

The point of this is to make sure that everyone can run `gdb`
and `valgrind` and use it for debugging purposes.

### Task
Finish debuging the code covered in the gdb/valgrind lecture
(we started debuggin, but did not finish).

### Install Info

Note, debuggers need a bit more system-level access, so they don't always
play nicely.  If you are having issues with the debuggers, you can
always run on EOS.

Installing gdb:
* WSL Users: `sudo apt-get install gdb` (you may need to run `sudo apt-get update` first
* Mac Users:
  * installing `gdb` is difficult (can be done with homebrew, but in my experience
    it will not give you as thorough of information)
  * I recommend using `lldb` instead (should already be installed).  Many of the
    commands are the same, but you can see a full [cheatsheet of `gdb` to `lldb`
    commands](https://lldb.llvm.org/use/map.html)

Installing valgrind:
* WSL Users:  `sudo apt-get install valgrind`
* Mac Users:
  * If you have an older Mac (e.g. non-M1 chip):
    ```
    brew tap LouisBrunner/valgrind
    brew install --HEAD LouisBrunner/valgrind/valgrind
    ```
  * If you have a newer Mac -- use EOS

