#include <stdio.h>

int main(){
    char a[10];
    char b[10];
    int x,y;
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    sscanf(a,"%d",&x);
    sscanf(b,"%d",&y);

    printf("%d",x+y );
}
