
//使用指针变量解决上一个问题

void main(){
    char a[] = "I am a boy.", b[20], *p1, *p2;
    p1=a;
    p2=b;
    for(;*p1!='\0';p1++,p2++){
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("string a:%s\n", a);
    printf("string b:");
    for(int i=0; b[i]!='\0';i++){
        printf("%c",b[i]);
    }
    printf("\n");
}