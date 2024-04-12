
#include <stdio.h>

int main()
{
    int a, b, c, menor, maior;
    

    printf("Insira três valores: ");
    scanf("%d%d%d", &a, &b, &c);
    
    //encontrar o menor
    if(a < b) {
        if(a < c)
        menor = a;
        else
        menor = c;
    }
    else{
        if(b < c)
        menor = b;
        else
        menor = c;
    }
    
    //encontrar o maior
    if(a > b){
        if(a > c)
        maior = a;
        else
        maior = c;
    }
    
    else{
        if(b > c)
        maior = b;
        else
        maior = c;
    }
    
    printf("\tMenor: %d \tMaior: %d\n", menor, maior);
}
