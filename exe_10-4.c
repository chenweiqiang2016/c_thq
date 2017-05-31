
void main(){
    int * reset(int *p, int n, int m);
    int i,n,m;
    printf("输入数组长度：");
    scanf("%d", &n);
    printf("输入移动长度：");
    scanf("%d", &m);
    int a[n];
    for(i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("输入的数组是：");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("调换以后的数组是：");
    int *pt = reset(a,n,m); //错写成了a[n]
    for(i=0; i<n; i++){
        printf("%d ", *(pt+i));
    }
    printf("\n");
}


int * reset(int *p, int n, int m){ //错写成了char *p
    int i;
    int *pt;
    int b[n];
    pt = b;
    for(i=0; i<m; i++){
        *(pt+i) = *(p+n-m+i);
    }
    for(i=m; i<n; i++){
        *(pt+i) = *(p-m+i);
    }
    return pt;
}