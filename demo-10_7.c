//
//  demo-10_7.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/9.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

void main(){
    void invert(int *arr, int n);
    int arr[4];
    //int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<4; i++){
        scanf("%d", (arr+i));
    }
    invert(arr, 4);
    for(int i=0; i<4; i++){
        printf("%d ", *(arr+i));
    }
}

//void invert(int *arr, int n){
//    for(int i=0; i<=(n-1)/2; i++){
//        int temp = *(arr+i);
//        *(arr+i) = *(arr+n-1-i);
//        *(arr+n-1-i) =temp;
//    }
//    
//    //可以使用
//    return;
//}

//优化invert函数
void invert(int *x, int n){
    int *i,*j,*p,temp;
    int m = (n-1)/2;
    p=x+m;
    i=x;
    j=x+n-1;
    for(;i<=p;i++,j--){
        temp=*i;
        *i=*j;
        *j=temp;
    }
    return;
}

