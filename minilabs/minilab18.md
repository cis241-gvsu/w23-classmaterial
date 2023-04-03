## Minilab 18

This minilab will help you get experience using
multidimensional arrays.

For this minilab, we'll look at terrain elevation
maps as 2d arrays and compute how many peaks there
are in a given map.

A peak is defined as a cell where all eight
neighboring cells (N,NE,E,SE,S,SW,W,NW)
are strictly lower.  

For this minilab, assume that a cell on the edge
only needs to be bigger than its existing neighbors
to be a peak (e.g. the upper left cell only has 3 neighbors).

Create a program that:
1. Reads in an elevation map from stdin.  The input
   format will be a single line with 2 integers,
   nrows and ncols, respectively.  The following
   lines will contain the elevation for a specific
   cell in the map, with each row as it's own line
   of space separate integers.

   Example:
   ```
   3 4
   1 5 3 2
   2 8 4 1
   0 6 1 3
   ```
2. Check whether each cell is a peak, keeping track
   of the total number of peaks found.
3. Print the number of peaks.


### Larger Example:
```
5 6
1 8 3 2 7 4
2 5 1 9 3 1
2 3 6 8 0 4
4 7 6 5 5 6
3 2 3 2 3 1
```

This larger example should have 4 peaks (8 in first row, 9 in second row, 7 in fourth row, spot2, 6 in fourth row, last spot.)
