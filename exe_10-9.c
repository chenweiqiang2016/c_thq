#include <stdio.h>

void main(){
    void revert(int (*p)[3]);
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d%c", *(*(a+i)+j), j<2?' ':'\n');
        }
    }
    revert(a);
    printf("After revert:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d%c", *(*(a+i)+j), j<2?' ':'\n');
        }
    }
}

void revert(int (*p)[3]){
    int temp;
    int i,j;
    for(i=0;i<3;i++){
        for(j=i+1; j<3; j++){
            temp = *(*(p+i)+j);
            *(*(p+i)+j) = *(*(p+j)+i);
            *(*(p+j)+i) = temp;
        }
    }
}