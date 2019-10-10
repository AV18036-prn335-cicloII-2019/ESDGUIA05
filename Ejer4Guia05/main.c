/*
 * 4. Salida de un laberinto: Se trata de encontrar un camino que nos permita salir
de un laberinto definido en una matriz NxN. Para movernos por el laberinto, sólo
podemos pasar de una casilla a otra que sea adyacente a la primera y no esté
marcada como una casilla prohibida (esto es, las casillas prohibidas determinan
las paredes que forman el laberinto).

 */
#include <stdio.h>

#define N 5

int parax[] = {1,0,-1,0};
int paray[] = {0,1,0,-1};

int matrizusar[N][N];

int llegofinal = 0;

void lab(int x, int y){

    if(x < 0 || y < 0) return;
    if(x >= N || y >= N) return;

    if(matrizusar[x][y] == -1) return;
    if(matrizusar[x][y] == 1) return;

    if(x == 0 && y == 0){

        llegofinal = 1;
        printf("Se encontro el final del laberinto\n");
        printf("en el laberinto se paso por: (%d,%d)\n",0,0);
        return;

    }

    matrizusar[x][y] = 1;

    for(int i = 0; i < 4; i++){

        lab(x+parax[i],y+paray[i]);

        if(llegofinal){

            printf("paso por las ubicaciones : (%d,%d)\n",x,y);

            return;
        }

    }

}
int main(){
    printf("Ingrese el numero de obstaculos que tendra el laberinto:\n");
    int o;
    scanf("%d",&o);

    int x, y;

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            matrizusar[i][j] = 0;

        }

    }

    for(int i = 0; i < o; i++){

        printf("Ingrese el obstaculo %d [0,%d]: \n",i,N-1);
        scanf("%d",&x);
        scanf("%d",&y);

        matrizusar[x][y] = -1;

    }

    printf("\n");

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            if(matrizusar[j][i] == -1){

                printf("*");

            }else{

                printf("%d",matrizusar[j][i]);

            }

        }

        printf("\n");

    }

    printf("\n");

    lab(N-1,N-1);

    return 0;
}