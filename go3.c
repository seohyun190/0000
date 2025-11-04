#include <stdio.h>

int main() {
    
    int max_value = 0;
    int max_index = 0;

    
    for (int i = 1; i <= 9; i++) {
        int current_number;

        
        scanf("%d", &current_number);

        
        if (current_number > max_value) {
            
            max_value = current_number;

            
            max_index = i;
        }
    }

    
    printf("%d\n", max_value);

    
    printf("%d\n", max_index);

    return 0;
}//3-1
#include <stdio.h>
#include <string.h> 
#define MAX_LENGTH 1001 

int main() {
   
    int T;

    
    char str[MAX_LENGTH];

    
    if (scanf("%d", &T) != 1) {
       
        return 1;
    }

    
    getchar();


    for (int i = 0; i < T; i++) {
        
        if (fgets(str, MAX_LENGTH, stdin) == NULL) {
            
            break;
        }

       
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0'; 
            len--; 
        }

        
        if (len > 0) {
            
            printf("%c", str[0]);

            
            printf("%c\n", str[len - 1]);
        }
    }

    return 0;
}//3-2
#include <stdio.h>
#include <string.h> 


#define MAX_S_LENGTH 21 

int main() {
    int T;

    
    int R;

   
    char S[MAX_S_LENGTH];

    
    if (scanf("%d", &T) != 1) {
        return 1; 
    }

    
    for (int i = 0; i < T; i++) {
       
        if (scanf("%d %s", &R, S) != 2) {
            break; 
        }

        
        int len = strlen(S);

        
        for (int j = 0; j < len; j++) {
            
            for (int k = 0; k < R; k++) {
                
                printf("%c", S[j]);
            }
        }

        
        printf("\n");
    }

    return 0;
}//3-3
#include <stdio.h>


#define MAX_SIZE 101 

int main() {
    
    int N, M;

    
    int A[MAX_SIZE][MAX_SIZE];
    int B[MAX_SIZE][MAX_SIZE];
    int C[MAX_SIZE][MAX_SIZE]; 

    
    if (scanf("%d %d", &N, &M) != 2) {
        return 1; 
    }

    
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < M; j++) { 
            if (scanf("%d", &A[i][j]) != 1) {
                return 1;
            }
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (scanf("%d", &B[i][j]) != 1) {
                return 1;
            }

            

            
        }
    }

    
    printf("\n"); 

    
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < M; j++) { 

            
            printf("%d", A[i][j] + B[i][j]);

            
            if (j < M - 1) {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}//3-4


