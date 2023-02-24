## Minilab 12

This minilab will help you practice with `gawk`.

### Part 1 - gawk basics
1. Run `wget https://raw.githubusercontent.com/fivethirtyeight/data/master/murder_2016/murder_2015_final.csv` to download a dataset.
2. Count up the number of cities that had more than 200 murders in either 2014 or 2015. 
3. Print out the count in the `END` block. (Hint:  the correct value is 7)

### Part 2 - gawk associative arrays
Modify the above gawk script to also:
1. Use an associative array in gawk to keep track of
   the overall change for each state
   (`change` is one of the columns in the data set).
   Note: there are some states with multiple cities.
2. Use the `END` block to print out the resulting overall
   computed change for each state.
