#include <stdio.h>
#include <unistd.h>

void print_char(char c);
void print_all_from_char(char c);

int main(){
    char ex;

    puts("Enter a character: ");
    scanf("%c", &ex);

    print_all_from_char(ex);
    
    return 0;
}

void print_char(char c){
    printf("%c ", c);
}
void print_all_from_char(char c){
    if (c > 'z'){
        return;
    }
    print_char(c);
    print_all_from_char(c+1);
    
}