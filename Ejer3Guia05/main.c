/*
 * 3. Implemente, tanto de forma recursiva como de forma iterativa, una función que
nos devuelva el máximo común divisor de dos números enteros utilizando el
algoritmo de Euclides.

 */
#include <stdio.h>
int aeuclides(int n, int m){
    if(n > m){
        int temp = n;
        n = m;
        m = temp;
    }
    if(n == 0)
        return m;
    return aeuclides(m%n,n);
}
int main(){
    printf("Digite el numero que corresponde a n:\n");
    int n;
    scanf("%d",&n);
    printf("Digite el numero que corresponde a m:\n");
    int m;
    scanf("%d",&m);
    printf("\n");
    printf("El mcd de los numeros ingresados es: %d\n",aeuclides(n,m));
    return 0;
}