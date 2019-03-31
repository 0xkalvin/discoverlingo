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
