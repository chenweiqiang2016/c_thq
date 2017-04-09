//
//  demo-10_8.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/9.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

//void main(){
//    
//    void invert(int *x, int n);
//    
//    int a[10]={1,2,3,4,5,6,7,8,9,10};
//    
//    int *p=a;
//    
//    printf("数组原来的排序：\n");
//    
//    for(int i=0; i<10; i++){
//        printf("%d ", a[i]);
//    }
//    
//    invert(p, 10);
//    
//    printf("倒序之后的数组：\n");
//    
//    for(int i=0; i<10; i++){
//        printf("%d ", a[i]);
//    }
//}
//
//void invert(int x[], int n){
//    int temp,m=(n-1)/2,i=0,j=n-1;
//    for(;i<=m;i++,j--){
//        temp=x[i];
//        x[i]=x[j];
//        x[j]=temp;
//    }
//    
//}


void main(){
    void inv(int *x, int n);
    int a[10], *p=a;
    for(int i=0; i<10; i++, p++){
        scanf("%d", p);
    }
    p=a;
    printf("The origin array:\n");
    for(;p<a+10;)
        printf("%d ", *p++);
    p=a;
    inv(p,10);
    printf("\n");
    printf("Array has been inverted.\n");
    for(;p<a+10;p++){
        printf("%d ", *p);
    }
}

void inv(int *x, int n){
    int temp,*i,*j,*p,m;
    m=(n-1)/2;
    //三个指针赋初始值
    p=x+m;
    i=x;
    j=x+n-1;
    for(;i<=p;i++,j--){
        temp=*i;
        *i=*j;
        *j=temp;
    }
}


//错误写法 p没有确定值 谈不上指向哪个变量
//指针变量作实参 必须先使指针变量有确定值
//f(int x[], int n){
//    .
//    .
//    .
//}
//
//void main(){
//    int *p;
//    .
//    .
//    .
//    f(p,10);
//}
