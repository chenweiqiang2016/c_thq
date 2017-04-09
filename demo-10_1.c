//
//  demo-10_1.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/8.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

int main(){
    int a, b;
    int *a_pointer, *b_pointer;
    a=10;
    b=100;
    a_pointer=&a; //指向哪一个整型变量，要在程序语句中指定
    b_pointer=&b;
    printf("a=%d, b=%d\n", a, b);
    printf("a=%d, b=%d\n", *a_pointer, *b_pointer);
    return 0;
    //程序两处出现的*a_pointer含义不同
}
