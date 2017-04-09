//
//  demo-10_2.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/8.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

void main(){
    
//    int a, b;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    if(a>b){
//        printf("由大到小排列：%d, %d\n", a, b);
//    }else{
//        printf("由大到小排序：%d, %d\n", b, a);
//    }
    
//    int a, b;
//    int *p1, *p2;
//    scanf("%d, %d", &a, &b);
//    if(a>b){
//        p1=&a;
//        p2=&b;
//    }else{
//        p1=&b;
//        p2=&a;
//    }
//    printf("由大到小排序是：%d, %d\n", *p1, *p2);
    
    //问题的算法是：不交换整型变量的值，而是交换两个指针变量的值
    int a, b;
    int *p1, *p2, *p;
    scanf("%d,%d", &a, &b);
    p1=&a; p2=&b;
    if(a<b){
        p=p1;p1=p2;p2=p;
    }
    printf("a=%d,b=%d\n\n",a,b);
    printf("max=%d,min=%d\n",*p1,*p2);
}
