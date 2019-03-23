#include "settings.c"

void sort_letter_array(Letter array[], int size){
    int min;
    for(int i = 0; i < size; i++){
        min = i;
        for(int j = i + 1; j < size; j++){
            if(array[min].q < array[j].q){
                min = j;
            }
        }
        Letter temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}



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

    sort_letter_array(letters_frequency, 26);

   return letters_frequency;
}

void print_frequency(Letter *letters_frequency){
    printf("\n");
    for(int i = 0; i < 26; i++){
        printf(" %c = %d \n",letters_frequency[i].l , letters_frequency[i].q);
    }
}
