#include <stdio.h>

int main() {
    int a[]={1,5,2,5,8,3,7,9,4};
    int length = sizeof(a)/sizeof(int);
    int value =-1;
    int num =10;
    for(int i = 0;i<length;i++){
        if(a[i]==num){
            value = i;
            printf("tai vi tri a[%d]\n",value);
        }
    }
        if (value==-1){
            printf("không có phan tu này");
        }
    return 0;
}
