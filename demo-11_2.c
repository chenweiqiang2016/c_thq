//
//  main.c
//  c-learn
//
//  Created by chenweiqiang on 2018/3/11.
//  Copyright © 2018年 . All rights reserved.
//

#include <stdio.h>
#include <string.h>

//定义全局的结构体数组
struct person{
    char name[20]; //不是char[20] name 后面加的是分号
    int count; //后面是分号
}leaders[3]={"Li", 0, "Fun", 0, "Zhang", 0}; //里面可以不加分号 后面写leaders[3]不是写leaders

int main() {
    char leader_name[20];
    for(int i=0; i<10; i++){
        scanf("%s", leader_name); //不是写&leader_name
        for(int j=0; j<3; j++){
            if(strcmp(leader_name, leaders[j].name)==0){
                leaders[j].count++;
            }
        }
    }
    printf("\n"); //是printf不是print
    for(int i=0; i<3; i++){
        printf("%5s:%d\n", leaders[i].name, leaders[i].count); //%5s后面加一个:
    }
    return 0;
}
