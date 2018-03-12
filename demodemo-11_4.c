//
//  main.c
//  c-learn
//
//  Created by chenweiqiang on 2018/3/11.
//  Copyright © 2018年 . All rights reserved.
//  结构体指针

#include <stdio.h>
#include <string.h>

struct student{
    int num;
    char name[20];
    char sex;
    int age;
}; //最后要加分号

struct student stu[3] = {{10101, "Li Lin", 'M', 18}, {10102, "zhang Fun", 'M', 19}, {10104, "Wang Min", 'F', 20}}; //内部的括号可用可不用

int main() {
    struct student * p;
    printf("No.   Name                  sex age\n");
    for(p=stu; p<stu+3; p++){
        printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);
    }
    return 0;
}
