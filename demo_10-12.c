//
//  main.c
//  Test2
//
//  Created by chenweiqiang on 2017/5/19.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

void main() {
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    
    //这么理解 *p有4个元素 每个元素为整型 也就是p所指向的对象是有4个整型元素的数组
    int (*p)[4], i, j;
    
    //注意 *p可以代表数组 (*p)[0] (*p)[1]为数组元素
    
    p = a; //指向一维数组的指针
    
    scanf("i=%d,j=%d", &i,&j);
    
    printf("a[%d,%d]=%d\n",i,j,*(*(p+i)+j));
    
}
