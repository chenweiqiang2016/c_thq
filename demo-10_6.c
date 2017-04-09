//
//  demo-10_6.c
//  basic-c
//
//  Created by chenweiqiang on 17/4/9.
//  Copyright © 2017年 chenweiqiang. All rights reserved.
//

//错误程序分析
#include <stdio.h>

void main(){
    int a[10];
    int i, *p;
    p=a;
    for(i=0; i<10; i++){
        scanf("%d",p++);
    }
    
//解决方法 //    p=a;
    
//    for(i=0; i<10; i++,p++){
//        printf("%d ", *p);
//    }
        for(i=0; i<10; i++){
            printf("%d ", *p++); //++和*的优先级是？一样的
        }
}
