#! /usr/bin/env gawk -f
BEGIN {
    FS="\t"
    OFS=","
    SUM=0
    CNTNEW=0
}
$3 ~ /200[0-9]/ {
    SUM+=$5
    CNTNEW += 1
}
{makes[$1] += 1}
{print NR, toupper($2)}
END {
    print SUM, CNTNEW
    for (key in makes) print key, makes[key]
}
