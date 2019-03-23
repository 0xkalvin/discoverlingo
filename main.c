#include "logic.c"

int main(){

    char text[MAX_LEN];

    printf("Write some message:\n");
    if(fgets(text, sizeof(text), stdin)){
        find_language(text);
    }

    return 0;
}