//
//  demo-10_5.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/9.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

//输出各元素的值有三种方法 scanf以回车或者空格分隔

//void main(){
//    int a[10];
//    for(int i=0; i<10; i++){
//        scanf("%d", &a[i]);
//    }
//    for(int i=0; i<10; i++){
//        printf("%d ",a[i]);
//    }
//}

//地址法
//void main(){
//    int a[10];
//    int i;
//    for(i=0;i<10;i++){
//        scanf("%d",&a[i]);
//    }
//    for(int i=0; i<10; i++){
//        printf("%d ", *(a+i));
//    }
//}

//指针变量法
//第三种方法是指针变量 要将变量用起来！！！
void main(){
    int a[10];
    int i, *p;
    //int *p =a; //赋予初始值
    
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
//    for(i=0; i<10;i++){
//        printf("%d ", *(p+i));
//    }
    
    for(p=a; p<(a+10); p++){
        printf("%d ", *p);
    }
}
