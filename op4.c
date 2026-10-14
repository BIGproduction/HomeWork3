#include <stdio.h>
#include <string.h>

/* UTF-8
 * x48 - H
 * x65 - e
 * x6C - l
 * x6C - l
 * x6F - o
 * \t  - Tab
 * x57 - W
 * x6F - o
 * x72 - r
 * x6C - l
 * x64 - d */

int main(void)
{
    char escape_seq[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    int escape_len = strlen(escape_seq) - 1;
    printf("%s\nSTRLEN: %d\nSIZEOF: %ld", escape_seq, escape_len, sizeof(escape_seq));
    return 0;
}