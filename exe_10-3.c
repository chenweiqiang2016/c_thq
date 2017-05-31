void main(){
    
    void input(int *p);
    void process(int *p);
    void output(int *p);
    
    int a[10];
    int i;
    input(a);
    printf("The origin array is: ");
    for(i=0; i<10; i++){
        printf("%d%c",a[i],i<9?' ':'\n');
    }
    process(a);
    output(a);
}


void input(int *p){
    int i;
    for(i=0;i<10;i++){
        scanf("%d", p+i);
    }
}

void process(int *p){
    int i;
    int k1=0;
    int k2=9;
    int temp;
    for(i=0;i<10;i++){
        if(*(p+i) < *(p+k1)){
            k1=i;
        }
        if(*(p+i) > *(p+k2)){
            k2=i;
        }
    }
    if(k1!=0){
        temp = *p;
        *p = *(p+k1);
        *(p+k1)=temp;
    }
    if(k2!=9){
        temp = *(p+9);
        *(p+9) = *(p+k2);
        *(p+k2) = temp;
    }
}

void output(int *p){
    int i;
    printf("The sorted array is: ");
    for(i=0; i<10; i++){
        printf("%d%c", *(p+i), i<9?' ':'\n');
    }
}