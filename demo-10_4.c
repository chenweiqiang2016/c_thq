//
//  demo-10_4.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/8.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

//TODO:可以优化的点
//1、可以的写法：int a,b,c,*p1,*p2,*p3;
//2、三个数交换写作exchange 复用swap
//3、*p1与*p2比较 *p1与*p3比较 *p2与*p3比较  这样比较符合对称性

void main(){
    void swap(int *p1, int *p2, int *p3);
    int a,b,c;
    int *p1, *p2, *p3;
    scanf("%d,%d,%d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    swap(p1,p2,p3);
    printf("%d,%d,%d\n",a,b,c);
}


void swap(int *p1, int *p2, int *p3){
    int temp;
    if(*p1 < *p2){
        temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
    if(*p2 < *p3){
        temp=*p2;
        *p2=*p3;
        *p3=temp;
    }
    if(*p1 < *p2){
        temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
}
