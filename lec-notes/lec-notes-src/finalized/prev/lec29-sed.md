---
title: Lecture 29
theme: solarized
revealOptions:
    transition: 'none'
    controls: false
---

## sed

---

### Overview

* sed = stream editor
* used to edit files
* general form:  
  `sed [options] '/pattern/ command' input_file`  
  `sed [options] 'range command' input_file`

---

### Helpful Options

* `-E` -> use extended regular expression
* `-f program_filename` -> read sed commands from
  file named `program_filename`
* `--in-place[=suffix]` -> modify file in place,
  optionally give suffix to create backup file
  with suffix extension

---

### Common Uses

* Deleting lines:
    * `sed -E '/^Totals.*/ d'`
    * `sed '4 d'`
    * `sed '1,4 d'`
* `$` in range form = end of file

---

### Common Uses (cont.)

* Substituting Text:
    * `sed -E 's/pattern_to_match/replace_with/'`
    * `sed -E 's/  *$//' filename`
    
---

### More sed substitution

* default:  only replaces 1st occurence of pattern on each line
* can specify to replace others:
    * replace all occurrences  
      <small>`sed -E 's/pattern_to_match/replace_with/g' fname.txt`</small>
    * replace certain occurence  
      <small>`sed -E 's/pattern_to_match/replace_with/2' fname.txt`</small>

---

### More sed substitution

* combine line range with substition  
  `sed '1,3 s/pattern_to_match/replace_with/' fname.txt`

* use matched pattern (or subexpression) in `replace_with`
    * `\1`, `\2`, ... refer to sub-expressions grouped in parentheses
    * `&` -> entire pattern matched
