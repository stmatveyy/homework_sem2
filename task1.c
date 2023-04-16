
#include <stdio.h>

int maxLength(char);

char word[] = {'H', 'e', 'l', 'l', 'l','o', 'o', 'l','l','l','o','o','o','\0'};
int i = 0, count = 0;

int main(){
    char letter;
    printf("Type a etter to count : ");
    scanf("%c", &letter);
    
    return 0;
}
int maxLength(char letter){
    int max = 0;
    for (int i = 0; i < sizeof(word); i++){
        if (word[i] == letter) {
            count++;
            if (count > max) {
                max = count;
            }
        } else {
            count = 0;
        }
    }
    printf("The letter %c can be found %d times continiously", letter ,max);
    return 0;
}