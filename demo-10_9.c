//
//  demo-10_9.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/9.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

//选择法 选择排序

void main(){
    
    void sort(int *x, int n);
    
    int a[10], *p=a;
    printf("The origin array:\n");
    for(int i=0; i<10; i++,p++){
        scanf("%d", p); //可以写成p++
    }
    printf("\n");
    p=a;
    sort(p,10);
    printf("The array has been sorted:\n");
    for(int i=0; i<10;i++){
        printf("%d ", *p++);
    }
}

//优化 少了一个变量k 初始值是i 记录下最大的j 最后再做交换
void sort(int *x, int n){
    int temp;
    for(int i=0; i<n; i++){ //可以优化 i写成i<n-1
        for(int j=i+1; j<n; j++){
            if(*(x+j) > *(x+i)){
                temp = *(x+i);
                *(x+i) =*(x+j);
                *(x+j) =temp;
            }
        }
    }
}
