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
            p += 14.63;
            e += 8.167;
        }
        else if(letters_frequency[i].l == 'b'){
            p += 1.04;
            e += 1.492;
        }
        else if(letters_frequency[i].l == 'c'){
            p += 3.88;
            e += 2.782;
        }
        else if(letters_frequency[i].l == 'd'){
            p += 4.99;
            e += 4.253;
        }
        else if(letters_frequency[i].l == 'e'){
            p += 12.57;
            e += 12.702;
        }
        else if(letters_frequency[i].l == 'f'){
            p += 1.02;
            e += 2.228;
        }
        else if(letters_frequency[i].l == 'g'){
            p += 1.30;
            e += 2.015;
        }
        else if(letters_frequency[i].l == 'h'){
            p += 6.094;
            e += 1.28;
        }
        else if(letters_frequency[i].l == 'i'){
            p += 6.18;
            e += 6.966;
        }
        else if(letters_frequency[i].l == 'j'){
            p += 0.4;
            e += 0.153;
        }
        else if(letters_frequency[i].l == 'k'){
            p += 0.02;
            e += 0.772;
        }
        else if(letters_frequency[i].l == 'l'){
            p += 2.78;
            e += 4.025;
        }
        else if(letters_frequency[i].l == 'm'){
            p += 4.74;
            e += 2.406;
        }
        else if(letters_frequency[i].l == 'n'){
            p += 1.04;
            e += 6.749;
        }
        else if(letters_frequency[i].l == 'o'){
            p += 10.73;
            e += 7.507;
        }
        else if(letters_frequency[i].l == 'p'){
            p += 2.52;
            e += 1.929;
        }
        else if(letters_frequency[i].l == 'r'){
            p += 6.53;
            e += 5.987;
        }
        else if(letters_frequency[i].l == 's'){
            p += 7.81;
            e += 6.327;
        }
        else if(letters_frequency[i].l == 't'){
            p += 2.52;
            e += 9.056;
        }
        else if(letters_frequency[i].l == 'u'){
            p += 4.63;
            e += 2.758;
        }
        else if(letters_frequency[i].l == 'v'){
            p += 1.67;
            e += 0.978;
        }
        else if(letters_frequency[i].l == 'w'){
            p += 0.01;
            e += 2.360;
        }
        else if(letters_frequency[i].l == 'x'){
            p += 0.21;
            e += 0.150;
        }
        else if(letters_frequency[i].l == 'y'){
            p += 0.01;
            e += 1.974;
        }
        else if(letters_frequency[i].l == 'z'){
            p += 0.47;
            e += 0.074;
        }
    }
    if(p > e){
        strcat(result, "portuguese!");
        printf("%s \n\n", result);
    }
    else{
        strcat(result, "english!");
        printf("%s \n\n", result);
    }

}
