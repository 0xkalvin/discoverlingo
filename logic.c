#include "helpers.c"







void find_language(char text[MAX_LEN]){

    char result[MAX_LEN] = "\n The language is ";
    

    Letter *letters_frequency = all_letters_frequency(text);
    print_letter_array(letters_frequency);

    int size = strlen(text);
    int num_of_chars = number_of_valid_char(text);
    printf("\n the number of valid chars is %d \n", num_of_chars);


    double p = 0;
    double e = 0;
    double g = 0;


    // EACH LETTER WILL HAVE A COEFICIENT MEANING ITS FREQUENCY FOR A SPECIFIED LANGUAGE
    // LANGUAGE  
    for(int i = 0; i < 26; i++){
        if(letters_frequency[i].l == 'a'){
            p += 14.63 * letters_frequency[i].q;
            e += 8.167 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'b'){
            p += 1.04 * letters_frequency[i].q;
            e += 1.492 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'c'){
            p += 3.88 * letters_frequency[i].q;
            e += 2.782 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'd'){
            p += 4.99 * letters_frequency[i].q;
            e += 4.253 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'e'){
            p += 12.57 * letters_frequency[i].q;
            e += 12.702 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'f'){
            p += 1.02 * letters_frequency[i].q;
            e += 2.228 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'g'){
            p += 1.30 * letters_frequency[i].q;
            e += 2.015 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'h'){
            p += 0.781 * letters_frequency[i].q;
            e += 6.094 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'i'){
            p += 6.18 * letters_frequency[i].q;
            e += 6.966 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'j'){
            p += 0.397 * letters_frequency[i].q;
            e += 0.153 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'k'){
            p += 0.015 * letters_frequency[i].q;
            e += 0.772 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'l'){
            p += 2.779 * letters_frequency[i].q;
            e += 4.025 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'm'){
            p += 4.738 * letters_frequency[i].q;
            e += 2.406 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'n'){
            p += 4.446 * letters_frequency[i].q;
            e += 6.749 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'o'){
            p += 9.735 * letters_frequency[i].q;
            e += 7.507 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'p'){
            p += 2.523 * letters_frequency[i].q;
            e += 1.929 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'q'){
            p += 1.204 * letters_frequency[i].q;
            e += 0.095 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'r'){
            p += 6.53 * letters_frequency[i].q;
            e += 5.987 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 's'){
            p += 6.805 * letters_frequency[i].q;
            e += 6.327 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 't'){
            p += 4.336 * letters_frequency[i].q;
            e += 9.056 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'u'){
            p += 3.639 * letters_frequency[i].q;
            e += 2.758 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'v'){
            p += 1.575 * letters_frequency[i].q;
            e += 0.978 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'w'){
            p += 0.037 * letters_frequency[i].q;
            e += 2.360 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'x'){
            p += 0.253 * letters_frequency[i].q;
            e += 0.150 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'y'){
            p += 0.006 * letters_frequency[i].q;
            e += 1.974 * letters_frequency[i].q;
        }
        else if(letters_frequency[i].l == 'z'){
            p += 0.47 * letters_frequency[i].q;
            e += 0.074 * letters_frequency[i].q;
        }
    }

    // A e E portuguese
    // E e T english
    if(p > e){
        strcat(result, "portuguese!");
        printf("%s \n\n", result);
    }
    else{
        strcat(result, "english!");
        printf("%s \n\n", result);
    }

}
