#include <stdio.h>
#include <stdlib.h>

/*@ requires
    assigns
    ensure
*/

int main(){
    printf("int de taille : %ld \n",sizeof(int));

    
    int *i;
    i=malloc(sizeof(int));
    *i = 1;
    printf("%p contient %d \n",i,*i);
    free(i);

    
    
    int *i;
    i=malloc(10 * sizeof(int));
    for (int j=0;j<10;j++) printf("%2d%4d\n",j,i[j]);

    i=NULL;
    if (i == NULL) printf("aNULLé\n");

    return 0;
}