#include <stdio.h>

int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(a)/sizeof(int);
    int start =0;
    int end = length;
    int mid;
    
    int value =4;
    while(start<=end){
        mid =(start+end)/2;
        if(a[mid]==value){
            break;
        }else if(a[mid]>value){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    printf(" vi tri cua so can tim la %d",mid);
    return 0;
}
