---
title: 2D Arrays - Stack
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Multidimensional Arrays

---

### 2D Arrays

* Example: `int mat[2][3];`
    * 2 rows, 3 columns
* Can initialize when declaring:
    * `int mat[2][3] = {{1,3,4},{8,2,5}};`
* Access elements: `mat[row_num][colnum]`
* Declared on the stack
* One contiguous block of memory underneath

---

### 2D Arrays (cont.)

* `mat[i][j]` = an element of the 2d array
* `mat` = address of first element
* `mat[i] = &mat[i]` = address to first element of row i
* `mat+i = *(mat+i)` = ^address to first element of row i
* Think of `mat[i]` as a pointer to an array (row)
* Doing pointer arithmetic on `mat` advances by the whole length of the subarrays

---

### 2D Arrays (cont.)

* Can also use pointer arithmetic to access into certain col
* `*(mat[i]+j) = mat[i][j]`
* `*(*(mat+i) + j) = mat[i][j]`
    * recall `*(mat+i)` is memory address to start of row i
    * advance this by j cols, then dereference to get actual value stored
* What about `mat+i + j`?
