#include <stdio.h>

int main(){
        
        int num, qtt;
        scanf("%d %d", &num, &qtt);
        
        switch (num){
        case 1:
                printf("Total: R$ %.2lf\n", qtt * 4.00);
                break;
        case 2:
                printf("Total: R$ %.2lf\n", qtt * 4.50);
                break;
        case 3: 
                printf("Total: R$ %.2lf\n", qtt * 5.00);
                break;
        case 4: 
                printf("Total: R$ %.2lf\n", qtt * 2.00);
                break;
        case 5: 
                printf("Total: R$ %.2lf\n", qtt * 1.50);
                break;
        }
        return 0;
        
}
