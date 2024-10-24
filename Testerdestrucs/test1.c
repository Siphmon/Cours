#include <stdio.h>

/*  @requires
    @assigns
    @ensure
*/

enum direction{nord,sud,est,ouest};

struct lieu {
    int latitude;
    int longitude;
    enum direction sens;
};

typedef struct lieu endroit;


int main(){
    struct lieu maison;
    maison.latitude = 2;  
    maison.longitude = 4;
    maison.sens = sud ;
    printf("%d,%d,%d \n",maison.latitude,maison.longitude,maison.sens);
    return 0;
}