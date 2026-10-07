#include <stdio.h>

int main() {
    int size=12,sum=0;
    float avg;
    int cars[12]={4,6,2,7,8,4,9,1,5,21,55,7};
    for(int i=0;i<size;i++){
        sum=sum+cars[i];
    }
    avg=(float)sum/size;
    int count=0;
    char signal[]="overloaded";
    int highest=cars[0];
    int lowest=cars[0];
    for(int i=0;i<size;i++){
        if (cars[i]>highest){
            highest=cars[i];
        }
        if(cars[i]<lowest){
            lowest=cars[i];
        }
        if(cars[i]>avg){
            count++;}}
    int difference;
    printf("difference = %d\n",difference = highest - lowest);
    printf("Number of signals overloaded = %d\n",count);
    return 0;
}