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
    Letter *letters_frequency = malloc(total_letters*sizeof(int));

    for (int j = 0; j < total_letters; j++) letters_frequency[j].q = 0;
    for (int j = 0; j < total_letters; j++) letters_frequency[j].l = 'a' + j;
    
    while(string[i] != '\0'){ 
        if(string[i] >= 'a' && string[i] <= 'z'){
            letter_value = string[i] - 'a';
            letters_frequency[letter_value].q++;
        }
        i++;
    }

    sort_letter_array(letters_frequency, total_letters);

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
        if(string[i] != ' ') n++;
        i++;
    }
    return n-1;
}

double *letter_percentual(Letter *letters_frequency, int num_of_letters){
    double *percentuals = malloc(num_of_letters*sizeof(double));
    for(int i = 0; i < num_of_letters; i++){
        percentuals[i] = (double)letters_frequency[i].q/num_of_letters*100;
    }
    return percentuals;
}



// Language *language_sorted_by_five_most_frequent_letters(int w){
//     Language *lan = malloc(sizeof(Language));
//     Letter *p = malloc(5*sizeof(Letter));
    
//     switch (w)
//     {
//         case 1:
//             lan[0].letters = p;
//             lan[0].letters[0].l = 'e';
//             lan[0].letters[1].l = 't';
//             lan[0].letters[2].l = 'a';
//             lan[0].letters[3].l = 'o';
//             lan[0].letters[4].l = 'i';
//             // lan[0].letters[0].q = 13;
//             // lan[0].letters[1].q = 9;
//             // lan[0].letters[2].q = 8;
//             // lan[0].letters[3].q = 8;
//             // lan[0].letters[4].q = 7;
//             break;
    
//         case 2:
//             lan[0].letters = p;
//             lan[0].letters[0].l = 'a';
//             lan[0].letters[1].l = 'e';
//             lan[0].letters[2].l = 'o';
//             lan[0].letters[3].l = 's';
//             lan[0].letters[4].l = 'r';
//             // lan[0].letters[0].q = 'a';
//             // lan[0].letters[1].q = 'e';
//             // lan[0].letters[2].q = 'o';
//             // lan[0].letters[3].q = 's';
//             // lan[0].letters[4].q = 'r';
//             // break;
        
//         case 3:
//             lan[0].letters = p;
//             lan[0].letters[0].l = 'e';
//             lan[0].letters[1].l = 'n';
//             lan[0].letters[2].l = 'i';
//             lan[0].letters[3].l = 's';
//             lan[0].letters[4].l = 'r';
//             // lan[0].letters[0].q = 'e';
//             // lan[0].letters[1].q = 'n';
//             // lan[0].letters[2].q = 'i';
//             // lan[0].letters[3].q = 's';
//             // lan[0].letters[4].q = 'r';
//             break;
//     }
//     return lan;
// }

// void print_language(Language *lan){
//     printf("\n");
//     for(int i = 0; i < 5; i++){
//         printf(" %c = %d \n", lan[0].letters[i].l, lan[0].letters[i].q);
//     }
// }