#include <stdio.h>

/*  @requires
    @assigns
    @ensure
*/

int main(){
    int tab[42]={1,2,3};
    tab[9] = 42 ;
    for (int i =0; i<45; i++)
        printf("%d \n",tab[i]);
    return 0;
}
