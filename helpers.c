#include "config.c"

void sort_letter_array(Letter array[], int total_letters){
    int min;
    for(int i = 0; i < total_letters; i++){
        min = i;
        for(int j = i + 1; j < total_letters; j++){
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
    int total_letters = 26;
    int letter_value = 0;
    Letter *letters_frequency = malloc(total_letters*sizeof(Letter));

    for (int j = 0; j < total_letters; j++) letters_frequency[j].q = 0;
    for (int j = 0; j < total_letters; j++) letters_frequency[j].l = 'a' + j;
    
    while(string[i] != '\0'){ 
        if(string[i] >= 'a' && string[i] <= 'z'){
            letter_value = string[i] - 'a';
            letters_frequency[letter_value].q++;
        }
        i++;
    }

    //sort_letter_array(letters_frequency, total_letters);

    return letters_frequency;
}

void print_letter_array(Letter *letters_frequency){
    printf("\n");
    for(int i = 0; i < 26; i++){
        printf(" %c = %d \n",letters_frequency[i].l , letters_frequency[i].q);
    }
}

int number_of_valid_char(char string[MAX_LEN]){
    int n = 0;
    int i = 0;
    while(string[i] != '\0'){ 
        if(string[i] != ' ' && string[i] != '1' && string[i] != '2' && string[i] != '3'
         && string[i] != '4' && string[i] != '5' && string[i] != '6' && string[i] != '7'
         && string[i] != '8' && string[i] != '9' && string[i] != '0') n++;
        i++;
    }
    return n-1;
}

bool is_valid(char string[MAX_LEN]){
    return (number_of_valid_char(string) > 4 && number_of_valid_char(string) < 281) ? true : false;    
}