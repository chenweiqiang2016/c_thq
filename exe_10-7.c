#include <stdio.h>

void main(){
    char * part_copy(char *p, int m);
    char str[100];
    printf("输出原始字符串：");
    scanf("%s", str);
    char * str2 = part_copy(str, 3);
    printf("%s\n",str2);
}

char * part_copy(char *p, int m){
    char str2[100];
    char *pt;
    pt = str2;
    int i=m-1;
    while(*(p+i)!='\0'){
        //*(pt+i-m+1) = *(p+i); //此处pt并没有设置初始值
        *(pt+i-m+1) = *(p+i);
        i++;
    }
    return pt;
}