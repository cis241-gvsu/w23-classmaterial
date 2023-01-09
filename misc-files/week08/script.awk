#! /usr/local/bin/gawk -f
BEGIN {
    FS = "\t"
    OFS="ZZZ"
    ORS=";"
}
{makes[$1] += 1}
#{print substr(toupper($1),1,1)}
END {
    for (key in makes) print key, makes[key]
}
