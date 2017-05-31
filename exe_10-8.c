
//1、没法输入空格

//2、bug-fix
//输入字符串:Aab123&*&~
//大写字母:1 小写字母:2 数字:2 空格:0 其他字母:5

void main(){
    int big_count=0;
    int small_count=0;
    int num_count=0;
    int space_count=0;
    int other_count=0;
    
    char a[100];
    
    char *p;
    
    p=a;
    
    printf("输入字符串:");
    
    scanf("%[^\n]", a);
    
    int i=0;
    
    while(*(p+i)!='\0'){
        
        if(*(p+i)>=65 && *(p+i)<=90){
            big_count += 1;
        }
        else if(*(p+i)>=97 && *(p+i)<=122){
            small_count += 1;
        }
        else if(*(p+i)>=48 && *(p+i)<=57){ //不是30～39
            num_count += 1;
        }
        else if(*(p+i)==32){ //*(p+i)==20 十六进制是20
            space_count += 1;
        }
        else{
            other_count += 1;
        }
        i++;
    }
    
    printf("大写字母:%d 小写字母:%d 数字:%d 空格:%d 其他字母:%d\n", big_count, small_count, num_count, space_count, other_count);
    
}

