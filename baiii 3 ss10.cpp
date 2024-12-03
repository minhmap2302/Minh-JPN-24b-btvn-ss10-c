#include <stdio.h>

int main() {
    int a[]={5,2,7,5,8,2,8,9,1};
    int length = sizeof(a)/sizeof(int);
    for(int i=1;i<length;i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 &&a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(int i =0;i<length;i++){
        printf("%d",a[i]);
    }
    return 0;
}
