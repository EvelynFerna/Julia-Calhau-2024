#include <stdio.h>
int main(){
    //Defini��o de vari�veis 
    int a, b, c, d, e;
    
    printf("Digite dois n�meros inteiros:\n");                                                                                                                                                                                                          
    //Entrada
    scanf("%d %d %d", &a, &b, &d);
    
    //Processamento
    c = a + b;
    e = c * d;
    printf("A soma de a + b = %d", c);
    printf("A multiplica��o de c * d = %d", e);
    return 0;
}
    
