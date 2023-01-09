---
title: c-structs
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C - Structs

---

### Structs

* The closest you'll get to OO in C
* Allows you to group together multiple pieces of data

```
typedef struct Coord {
    double x;
    double y;
} Coord;
```

---

### Structs (cont.)

* Previous just defines the struct
* Need to actually declare one and set values
* Declare like any other variable except now with type Coord
* Access member with: `.`
* Have a pointer to struct, access member with: `->`

```
Coord c1;
c1.x = 5;
c1.y = 10;
```

---

### Structs (cont.)

* Can contain regular data types, pointers, arrays, other structs
* Can allocate on stack or heap (dyanmic with malloc)
* Can create pointers to structs
