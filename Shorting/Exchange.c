#include <stdio.h>

int main(){

    int size = 5;
    int list[5] = {2,5,1,11,-5};

    for(int i=0; i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(list[i]>list[j])
            {
                int holder = list[i];
                list[i] = list[j];
                list[j]=holder;
            }
            
        }
    }

    printf("sorted list\n\n");
    for(int i=0;i<size;i++){
        printf("%d\n",list[i]);
    }

    return 0;
}