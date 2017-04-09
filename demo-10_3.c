//
//  demo-10_3.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/8.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

//错误代码 思考为什么错误？

//void swap(int *p1, int *p2);

//void main(){
//    
//    //函数声明应该写在函数内部？
//    void swap(int *p1, int *p2);
//    
//    int a, b;
//    int *p1, *p2;
//    scanf("%d, %d", &a, &b);
//    p1=&a;
//    p2=&b;
//    swap(p1, p2); //并没有实现指针变量值的改变，为何？
//    printf("max=%d, min=%d\n", *p1, *p2);
//}
//
//void swap(int *p1, int *p2){
//    int *p;
//    if(*p1 < *p2){
//        p = p1;
//        p1 = p2;
//        p2 = p;
//    }
//}


void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void main(){
    int a,b;
    int *p1, *p2;
    scanf("%d,%d", &a, &b);
    p1=&a;
    p2=&b;
    if(a < b){
        swap(p1,p2);
    }
    printf("max=%d,min=%d\n", a,b);
}
