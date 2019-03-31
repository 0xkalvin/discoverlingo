#include "config.c"

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
    return (number_of_valid_char(string) > 29 && number_of_valid_char(string) < 10001) ? true : false;    
}

void print_letter_array(Letter *letters_frequency){
    printf("\n");
    for(int i = 0; i < 26; i++){
        printf(" %c = %d \n",letters_frequency[i].letter , letters_frequency[i].quantity);
    }
}

void sort_letter_array(Letter array[], int num_of_letters){
    int min;
    for(int i = 0; i < num_of_letters; i++){
        min = i;
        for(int j = i + 1; j < num_of_letters; j++){
            if(array[min].quantity < array[j].quantity){
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
    int num_of_letters = 26;
    int letter_value = 0;
    Letter *letters_frequency = malloc(num_of_letters*sizeof(Letter));

    for (int j = 0; j < num_of_letters; j++) letters_frequency[j].quantity = 0;
    for (int j = 0; j < num_of_letters; j++) letters_frequency[j].letter = 'a' + j;

    for (int j = 0; j < number_of_valid_char(string); j++) string[j] = tolower(string[j]);

    while(string[i] != '\0'){ 
        if(string[i] >= 'a' && string[i] <= 'z'){
            letter_value = string[i] - 'a';
            letters_frequency[letter_value].quantity++;
        }
        i++;
    }

    return letters_frequency;
}





