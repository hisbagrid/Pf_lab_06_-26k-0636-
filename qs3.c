#include <stdio.h>

int main()
{   int largest_product_id=0;
    int to_reorder=0;
    int size=10;
    int total_reorder=0;
    int stock[10]={1,11,2,10,0,70,6,35,21,2};
    int min[10]={5,9,7,10,8,70,56,34,21,2};
    int largest_reorder=0;
    for(int i=0;i<size;i++){
        if (stock[i]< min[i]){
            int to_reorder=min[i] - stock[i];
            printf("for product %d, the reordering needed is= %d\n",i+1,to_reorder);
            
            total_reorder += to_reorder;

            
                if (to_reorder>largest_reorder){
                    largest_reorder=to_reorder;
                    largest_product_id = i + 1;}
                    
                    }}
            printf("largest product is %d that needs reordering is= %d\n", largest_product_id, largest_reorder);
            printf("total reorder quantity %d\n", total_reorder);
            
            
        
        
    
    return 0;
}