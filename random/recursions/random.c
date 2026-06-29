#include <stdio.h>

int facto(int n);

int main(){
    int n;
    int f;

    printf("Type your n: ");
    scanf("%d", &n);

    f = facto(n);

    printf("%d\n", f);
    return 0;
}

int facto(int n){
    if (n == 1) {
        return 1;
    } else {
        return n * facto(n - 1);
    }

}