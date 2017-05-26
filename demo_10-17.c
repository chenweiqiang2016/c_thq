

//字符串a复制到字符串b

void main(){
    char a[] = "I am a boy.", b[20]; //直接设置了b的长度 留有一定的冗余
    
    int i;
    for(i=0; *(a+i)!='\0'; i++){
        *(b+i) = *(a+i);
    }
    *(b+i)='\0';
    printf("string a is:%s\n", a);
    printf("string b is:");
    
    //printf("%s\n", b); //%s遇到\0就会停止
    
    
    for(i=0;b[i]!='\0';i++){
        printf("%c", b[i]);
    }
    
    printf("\n");
    
}