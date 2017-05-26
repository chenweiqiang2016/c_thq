
//用字符数组作参数

void main(){
    
    void copy_string(char from[], char to[]);
    
    char a[] = "I am a teacher.";
    char b[] = "You are a student.";
    printf("sting a:%s\nstring b:%s\n", a,b);
    printf("copy string a to string b:\n");
//    copy_string(a,b);
//    printf("sting a:%s\nstring b:%s\n", a,b);
    
    char *p1=a, *p2=b;
    copy_string(p1,p2);
    printf("sting a:%s\nstring b:%s\n", p1,p2);
    
}


void copy_string(char from[], char to[]){
    int i;
    for(i=0; from[i]!='\0'; i++){ //可以使用while循环
        to[i] = from[i];
    }
    to[i]='\0';
}
