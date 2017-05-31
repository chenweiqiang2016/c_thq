


void main(){
    char a[100];
    
    scanf("%s",a);
    
    char *p =a;
    
    int i=0;
    
    while(*(p+i)!='\0'){
        i++;
    }
    
    printf("字符串长度：%d\n", i);
}