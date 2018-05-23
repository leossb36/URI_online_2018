#include<stdio.h>

int main(){
        int value;
        scanf("%d", &value);
        printf("%d ano(s)\n", value/365);
        value %= 365;
        printf("%d mes(es)\n", value%365/30);
        value %=30; 
        printf("%d dia(s)\n", value);
        return 0;
}
