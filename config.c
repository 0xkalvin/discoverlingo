#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 280

const char portuguese_letters[5] = {'a', 'e', 'o', 's', 'r'};
const double portuguese_frequency[5] = {12.7, 9, 8.1, 7.5, 6.9};
const char english_letters[5] = {'e', 't', 'a', 'o', 'i'};
const double english_frequency[5] = {14.6, 12.5, 10.7, 7.8, 6.5};


typedef struct Letter{
    char l;
    int q;
} Letter;

typedef struct Language{
    Letter *letters;
    
} Language;
