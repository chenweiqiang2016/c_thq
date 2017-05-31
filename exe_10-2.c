
// 对三个字符串由大到小排序

# include <stdio.h>

void main(){
    void sort(char *name[3]);
    int i;
    char *name[] = {"Python","Java","C"};
    sort(name);
    for(i=0;i<3;i++){
        printf("%s%c", name[i], i<2?' ':'\n');
    }
}

void sort(char *name[3]){
    int i;
    char *p;
    if(strcmp(name[0], name[1]) > 0){
        p=name[0];
        name[0]=name[1];
        name[1]=p;
    }
    if(strcmp(name[0],name[2]) > 0){
        p=name[2];
        name[2]=name[0];
        name[0]=p;
    }
    if(strcmp(name[1],name[2])>0){
        p=name[2];
        name[2]=name[1];
        name[1]=p;
    }
}

