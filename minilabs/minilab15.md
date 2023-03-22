## Minilab 15

This minilab's goal s for you to become more
comfortable using pointers.

Specifically, in this minilab we are going
to look at computing an array of cumulative
sums froma gvien array.  Cumulative sums are
obtained by adding all of the previous values
in an array.  For instance, if my original array
is `[1,4,3]`, then the array of cumulative sums
is `[1,5,8]`.

### Note:
The approach for the 2 parts below is inefficient.  If you ever
actually needed to do this, you would do it with
a single for loop (which would be 1/3 of the
computational work).  This approach is to make
sure that you can appropriately access and assign values
of an array with both pointer arithmetic and array indexing notation.

### Part 1 - Statically Allocated
1. Create a statically allocated array of 12 integers
2. Create a second statically allocated array of 12 integers
   to hold the cumulative sums
3. Use a for loop and standard array indexing notation
   to fill the array with the numbers 0 to 11.
4. Use a second for loop and standard array indexing notation
   to go through the array, compute
   the cumulative sums, and store them in the array created
   in step 2.
5. Use a third for loop and standard array indexing notation
   to print out the values in the array
   of cumulative sums

### Part 2 - Dynamically Allocated & Pointer Arithmetic
1. Allocate enough memory for 12 integers on the heap
2. Allocate enough memory for 12 integers on the heap (this
   will be to replace the second array from above)
3. Use a for loop and pointer arithmetic
   to fill the array with the numbers 0 to 11.
4. Use a second for loop and pointer arithmetic 
   to go through the array, compute
   the cumulative sums, and store them in the array created
   in step 2.
5. Use a third for loop and pointer arithmetic
   to print out the values in the array
   of cumulative sums

**Note: while you can use standard array indexing notation
with pointers, you shouldn't for this minilab
bcause the whole point is to make sure you are comfortable
with pointers.
