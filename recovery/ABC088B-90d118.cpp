#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main(){
    int i,n,sum;
    scanf("%d\n", n);//”z—ñ‚Ì—v‘f”
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    qsort(a,n,4,compare);

    for(i=0;i<n;i++){
        if(n % 2 == 0){
            sum += a[i];
        }
        else{
            sum -= a[i];
        }
    }
    printf("%d",sum);
}
