/*

PORTUGUESE

% 
a = 14.63
e = 12.57
o = 10.73 
s = 7.81
r = 6.53


ENGLISH

%
e = 12.702
t = 9.056
a = 8.167
o = 7.507
i = 6.966

*/
#include <stdio.h>
#include <stdlib.h>

char portuguese[5] = {'a', 'e', 'o', 's', 'r'};
char english[5] = {'e', 't', 'a', 'o', 'i'};


typedef struct Letter{
    //char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //int frenquency[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char l;
    int q;
} Letter;