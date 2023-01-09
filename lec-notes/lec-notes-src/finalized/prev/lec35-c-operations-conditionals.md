---
title: Lecture 35
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## C

---

### Type Conversion

Implicit type conversions

* perform operation with mismatched types
* assigning values to variables
* calling functions with type other than specified
* Examples:
    * `int x = 5.0;`
    * `double y = 5.0/2`
    * `char c = 50`

---

### Explicit type conversions

* typecasting
* `(type) expression;`

---

### Operators

* Assignment: `=`
* Mathematical:
    * `+`, `-`, `/`, `*`
    * Mod (remainder): '%'
    * All can be combined with `=` to operate and assign
* Increment/decrement: `i++`, `i--`
* Comparison: `==`, `!=`, `>`, `<`, `>=`, `<=`

---

### Logical Operators

* Boolean not:  `!`
* Boolean and:  `&&`
* Boolean or:  `||`

* Combinations only execute as far as they need to
* Depending on C version, may not have `bool`
    * Introduced in C99
    * Need to `#include <stdbool.h>`
* Otherwise, ints act as bools (0 is false)

---

### Control Structures - If

```
if (expression) {
  statement;
}
else {
  statement;
}
```
```
if (expression) statement;
```

---

### Ternary Operator

* Shorthand for some ifs
* Expression -- just chooses which expression based on value of another

```
expression ? expression : expression
```
