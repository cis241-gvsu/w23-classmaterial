---
title: memory functions
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Memory Copy Functions

---

### Memory Moving / Setting

* `memcpy(void *dest, void *src, size_t n)`
    * copies n bytes from `src` into `dest`
* `memmove(void * dest, void *src, size_t n)`
    * copies n bytes from memory are `src` to `dest`
    * allows memory areas to overlap 
* `memset(void *s, int c, size_t n)`
    * fills first `n` bytes of `s` with byte `c`
