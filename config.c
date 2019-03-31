#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_LEN 10000

// tipo chamado Letter onde ficará salvo uma letra e sua quantidade de ocorrências no texto inserido 
typedef struct Letter{
    char letter;
    int quantity;
} Letter;

// dados usados https://en.wikipedia.org/wiki/Letter_frequency

double english_letters[26] = {8.167, 1.492, 2.782, 4.253, 12.702, 2.228, 2.015, 6.094, 6.966, 0.153, 0.772, 4.025, 2.406, 6.749, 7.507, 1.929, 0.095, 5.987, 6.327, 9.056, 2.758, 0.978, 2.360, 0.150, 1.974, 0.074};

double german_letters[26] = {6.516, 1.886, 2.732, 5.076, 16.396, 1.656, 3.009, 4.577, 6.55, 0.268, 1.417, 3.437, 2.534, 9.776,  2.594, 0.670 , 0.018, 7.003, 7.270, 6.154, 4.166, 0.846, 1.921 , 0.034, 0.039 , 1.134}; 

double portuguese_letters[26] = {14.63, 1.04, 3.88, 4.99, 12.57, 1.02, 1.30, 0.781, 6.18, 0.397 , 0.015, 2.779, 4.738, 4.446, 9.735, 2.523, 1.204, 6.53, 6.805, 4.336, 3.639, 1.575, 0.037, 0.253 , 0.006, 0.47};