#include <stdio.h>

int main(){

    int size = 5;
    int list[5] = {2,5,1,11,-5};

    for(int i=(size-1);i>0;i--){
        for(int j=0;j<i;j++){

            int p = list[j];
            int q = list[j+1]; 
            
            if(p>q){
                list[j] = q;
                list[j+1]=p;
            }
        }
    }

    printf("sorted list\n\n");
    for(int i=0;i<size;i++){
        printf("%d\n",list[i]);
    }

    return 0;
}