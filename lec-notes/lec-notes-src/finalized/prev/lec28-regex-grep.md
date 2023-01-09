---
title: Lecture 28
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## Regular Expressions

---

### Recall:  grep

* We used to search for lines containing certain string
* grep:  global regular expression print
* Can search for patterns, not just specific strings
  by expressing regex
* Add `-E` to search for ERE pattern

---

### Misc Notes (regex in general)

* Matches longest possible string
* Can also use character classes (like with `tr`)
* Examples:
    * `[[:alpha:]]`
    * `[[:alnum:]]`
    * `[abc]`
    * `[^a-z]` everything except a through z
