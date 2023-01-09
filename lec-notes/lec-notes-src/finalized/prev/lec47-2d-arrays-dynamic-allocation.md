---
title: 2D Arrays - Dynamic Allocation
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Multidimensional Arrays

---

### 2D Arrays - Dynamic Allocation

```
int *mat = (int *) malloc(nrows*ncols*sizeof(int));
```

* One contiguous block of memory
* Can't use `[][]` notation:
* Can use `[]` notation
* Pointer arithmetic to handle rows and columns

---

### 2D Arrays - Dynamic Allocation

```
int **mat = (int **) malloc(nrows*sizeof(int *));
for (int i=0; i&ltnrows; i++) {
    *(mat+i) = (int *) malloc(ncols*sizeof(int));
}
```

* Could also use `mat[i]` inside the loop
* Can use `[][]` notation now
* No longer one contiguous block of memory

---

### 2D Arrays - Dynamic Allocation

```
int *A = (int *) malloc(nrows*ncols*sizeof(int));
int **mat = (int **) malloc(nrows*sizeof(int *));
for (int i=0; i&ltnrows; i++) {
    mat[i] = A + i*ncols;
}
```

* Allows use of `[][]` notation
* Meomory for actual entries is contiguous

