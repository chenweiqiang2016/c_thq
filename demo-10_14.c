//
//  main.c
//  Test
//
//  Created by chenweiqiang on 2017/5/19.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

#include <stdio.h>

int main() {
    void search(float (*p)[4], int n);
    
    float score[3][4] = {{65,57,70,60}, {58,87,90,81}, {90,99,100,98}};
    
    search(score, 3); //三个学生
    
}

void search(float (*p)[4], int n){
    int flag;
    float (*p_end)[4] = p+n;
    int i = 0;
    for(; p<p_end; p++){
        flag = 0;
        for(int j=0; j<4; j++){
            if(*(*p + j) <60.0){
                flag =1;
                break;
            }
        }
        if(flag==1){
            printf("No. %d has score < 60:\n", i);
            for(int j=0; j<4; j++){
                printf("%5.1f", *(*p+j));
            }
            printf("\n");
        }
        i += 1;
    }
}

