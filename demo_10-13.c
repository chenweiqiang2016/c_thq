//
//  main.c
//  Test2
//
//  Created by chenweiqiang on 2017/5/19.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

//void average(float (*p)[4]);

void average(float *p, int n);



void search(float (*p)[4], int n);



void main() {
    
    float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    
    average(*score, 12);
    search(score, 0);
    
}


//自己写的 不够优雅
//void average(float (*p)[4]){
//    float (*p_end)[4];
//    p_end = p+3;
//    float total = 0;
//    for(;p<p_end;p++){
//        for(int j=0; j<4; j++){
//            total += *(*p + j);
//        }
//    }
//    printf("average is: %f\n", total/12);
//}

void average(float *p, int n){
    float *p_end;
    float sum=0, aver;
    p_end = p+n-1;
    for(;p<=p_end;p++){
        sum = sum + (*p);
    }
    aver=sum/n;
    printf("average=%5.2f\n",aver);
}

void search(float (*p)[4], int n){ /* p是指向具有4个元素的一维数组的指针 */
    printf("the score of No.%d are:\n", n);
    for(int j=0; j<4; j++){
        printf("%5.1f", *(*(p+n)+j));
    }
    printf("\n");
}
