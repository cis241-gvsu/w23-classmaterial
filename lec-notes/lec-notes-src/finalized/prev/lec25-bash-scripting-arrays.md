---
title: Lecture 25
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Bash Scripting

---

### Arrays

* Similar to arrays/lists in other languages
* Initializing:
    * `arr=(hello world)`
    * `arr_ex2[2]=hello`  
      `arr_ex2[3]=world`
    * `arr_ex3=()`
    * `declare -a arr_ex4`

---

### Arrays (cont.)

* Accessing elements:
    * Bracket notation
    * `${arr[0]}`
* Appending elements:
    * `arr+=(goodbye bonjour)`
* Accessing slice:
    * `${arr[@]:start:num}` 

---

### Arrays (cont.)

* Special Accessing
    * `${arr[@]}` - all elements
    * `${arr[*]}` - all elements as one string
* Special Values
    * `${!arr[@]}` - array indices
    * `${#arr[@]}` - number of elements in array

---

### Associative Arrays

* Can use non-integer indices
* aka maps, dictionaries in other languages
* Example:
```
declare -A aa_ex1
aa_ex1=(
    [rainy]=6
    [cloudy]=7
    [warm]=1
)
```

