/*
 * 1. Construya una función que convierta un número decimalen una cadena que
represente el valor del número en hexadecimal (base 16). A continuación,
generalice la función para convertir un número decimal en un número en base B
(con B<10).
Recordatorio: El cambio de base se realiza mediante divisiones sucesivas por 16
en las cuales los restos determinan los dígitos hexadecimales del número según la
siguiente correspondencia:

 */
#include <stdio.h>

char digitoutilizado[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void baseutilizada16(int n){
    if(n < 16){
        printf("%c", digitoutilizado[n]);
        return;
    }
    baseutilizada16(n/16);
    int dig = (n%16);
    printf("%c",digitoutilizado[dig]);
}
void base2B(int n, int b){
    if(n < b){
        printf("%c",digitoutilizado[n]);
        return;
    }
    base2B(n/b,b);
    int dig = n%b;
    printf("%c", digitoutilizado[dig]);
}
int main(){
    printf("Digite el numero que desea modificar o cambiar: \n");
    int n;
    scanf("%d",&n);

    printf("Digite una base menor a 10\n");
    int b;
    scanf("%d",&b);

    printf("Su numero ya convertido a base 16 es: ");
    baseutilizada16(n);
    printf("\n");

    printf("Su numero ya convertido en base B es: ");
    base2B(n,b);
    printf("\n");

    return 0;
}