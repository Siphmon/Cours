#include <stdio.h>
#include <stdlib.h>

/*@ requires
    assigns
    ensure
*/

int main(){
    int **matrix;
    matrix=malloc(10*sizeof(int *));
    for (int r=0;r<10;r++) matrix[r]=calloc(10,sizeof(int)); //creer tableau
    
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            matrix[i][j]=i*j; //remplis tableau

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++)
            printf("%4d",matrix[i][j]); //affiche tableau
        printf("\n");
    }


    printf("\n\n");


    //1D
    int *matrix2;
    matrix2=calloc(10*10,sizeof(int));
    
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            matrix2[i*10+j]=i*j; //remplis tableau

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++)
            printf("%4d",matrix2[i*10+j]); //affiche tableau
        printf("\n");
    }


    //les trucs pour matrix3 sont dans les photos 
    return 0;
}