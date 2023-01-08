#include "stdio.h"

int jumpSearch(int arr[],int size,int key){

    int step=(size/3);
    int prev=0;

    while (arr[step-1]<key){
        prev=step;
        step=step+6;
        if(prev>=step){
            return -3;
        }
    }

    int  midIndex=(((step-prev)/2)+prev-1);
    if(arr[step-1]==key){
        return step-1;
    } else if(arr[midIndex]==key){
        return midIndex;
    }
    for (int i = prev; i < step; ++i) {
        if (arr[i]==key){
            return i;
        }
    }

    return -1;
}
int main (){
    int arr []={1,3,4,5,6,7,8,9,86,88,99,100,123,145,146,157,189,300};
    int toFind =146;
    int size=sizeof(arr)/sizeof(arr[0]);

    int indexNumber= jumpSearch(arr,size,toFind);
    if (indexNumber!=-1){
        printf("index number %d : data %d\n",indexNumber,arr[indexNumber]);
    } else{
        printf("not found");
    }
    return 0;
}
