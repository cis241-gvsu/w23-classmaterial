#! /usr/bin/env gawk -f
BEGIN {
    FS="\t"
    CNTEXPENSIVE=0
    CNTNEW=0
}
$3 !~ /200[0-9]/ {CNTNEW += 1}
$5 >= 10000 {
    CNTEXPENSIVE+=1
}
NR % 5 == 0 {print $0}
END {
    print CNTEXPENSIVE
    print CNTNEW
}
