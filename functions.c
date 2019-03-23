#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "settings.c"

#define MAX_LEN 280



Letter *all_letters_frequency(char string[MAX_LEN]){
    int i = 0;
    int letter_value = 0;
    Letter *letters_frequency = malloc(26*sizeof(int));

    for (int j = 0; j < 26; j++) letters_frequency[j].q = 0;
    for (int j = 0; j < 26; j++) letters_frequency[j].l = 'a' + j;
    
    while(string[i] != '\0'){ 
        if(string[i] >= 'a' && string[i] <= 'z'){
            letter_value = string[i] - 'a';
            letters_frequency[letter_value].q++;
        }
        i++;
    }

   return letters_frequency;
}

void print_frequency(Letter *letters_frequency){
    printf("\n");
    for(int i = 0; i < 26; i++){
        printf(" %c = %d \n",letters_frequency[i].l , letters_frequency[i].q);
    }
}
