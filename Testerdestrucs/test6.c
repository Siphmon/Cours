#include <stdio.h>
#include <stdlib.h>

/*@ requires
    assigns
    ensure
*/

int main(){
    int matrice[11][11];
    for (int i=0;i<11;i++)
        for (int j=0;j<11;j++)
            matrice[i][j]=i*j;

    for (int i=0;i<11;i++){
        for (int j=0;j<11;j++)
            printf("%4d",matrice[i][j]);
        printf("\n");
    }

    return 0;
}