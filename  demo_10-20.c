
void main(){
    
    void copy_string(char *p1, char *p2);
    
    char a[] = "I am a student!";
    
    //将a赋值给b b的长度足够时 没有问题
    //char b[] = "You are a teacher!";
    
    //将a赋值给b b的长度不够时 b可以扩展 但是可能会将a的值覆盖掉
    char b[] = "You are";
    
    printf("string a is:%s\nstring b is:%s\n", a, b);
    printf("copy string a to string b:\n");
    copy_string(a,b);
    printf("string a is:%s\nstring b is:%s\n", a, b);
}


void copy_string(char *p1, char *p2){
    for(;*p1!='\0'; p1++, p2++){
        //printf("%d %d\n",p1, p2); b的地址再往后扩展 将占用a的内存
        *p2 = *p1;
    }
    *p2='\0';
}