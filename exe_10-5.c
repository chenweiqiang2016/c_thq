#define N 10 //初始时10个数

void main(){
    //多留一位给0
    int i,k,a[N+1],*p;
    //依次赋值
    for(i=0,p=a;p<=a+N;i++,p++){
        *p=i;
    }
    
    p=a+1;
    k=N; //剩余N个数
    for(i=0;k!=1;){
        if(p>(a+N))
            p=a+1; //重新赋值
        if(*p!=0)
            i++;
        if((i-3)==0){
            *p=0;
            i=0;
            k--;
        }
        p++;
    }
    
    for(i=1;i<=N;i++){
        if(a[i]!=0)
            printf("The last number is %d\n", a[i]);
    }
}