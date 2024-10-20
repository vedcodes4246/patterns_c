#include <stdio.h>

int main() {
    
    int n = 5;
    
    for(int i=0; i<n; i++){
        
        int al = 65;
        
        for(int j=0; j<=i; j++){
            printf("  ");
        }
        for(int k=n; k>i; k--){
            printf("%c ", al++);
        }
        for(int k=n-1; k>i; k--){
            printf("%c ", al++);
        }
        
        printf("\n");
    }
    
    for(int i=1; i<n; i++){
        
        int al = 65;
        
        for(int k=n; k>i; k--){
            printf("  ");
        }
        
        for(int j=0; j<=i; j++){
            printf("%c ", al++);
        }
        
        for(int j=0; j<i; j++){
            printf("%c ", al++);
        }
        
        printf("\n");
    }

    return 0;
}


