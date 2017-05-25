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
    
    int *p;
    
//    for(int i=0; i<3; i++){
//        for(int j=0; j<4; j++){
//            p = *(a+i)+j;
//            printf("%d ", *p);
//        }
//        printf("\n");
//    }
    
    //更优的写法
    for(p=a[0]; p<a[0]+12; p++){
//        if((p-a[0])%4==0) //注意地址的差值！
//            printf("\n");
//        printf("%4d", *p);
        
        printf("addr=%o, value=%2d\n", p, *p);
    }
    //最后一行换行
    printf("\n");
}
