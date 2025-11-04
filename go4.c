#include <stdio.h>


#define SIZE 9 
#define MAX_VAL 100 


typedef struct {
    int num; 
    int row; 
    int col; 
} MaxInfo;


MaxInfo find_max(int arr[SIZE][SIZE]);

int main() {
    
    int grid[SIZE][SIZE];

   
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (scanf("%d", &grid[i][j]) != 1) {
                return 1; 
            }
        }
    }

   
    MaxInfo result = find_max(grid);

    
    
    printf("%d\n", result.num);

    
    printf("%d %d\n", result.row, result.col);

    return 0;
}


MaxInfo find_max(int arr[SIZE][SIZE]) {
    
    MaxInfo max_info;

    
    max_info.num = -1; 
    max_info.row = 1;
    max_info.col = 1;

    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) { 

            
            if (arr[i][j] > max_info.num) {
                
                max_info.num = arr[i][j];

                
                max_info.row = i + 1;
                max_info.col = j + 1;
            }
        }
    }

    
    return max_info;
}//4-1
#include <stdio.h>

int main() {
    
    int x1, y1;
    int x2, y2;
    int x3, y3;

    
    int final_x = 0;
    int final_y = 0;

    
    if (scanf("%d %d", &x1, &y1) != 2) return 1;
    final_x ^= x1; 
    final_y ^= y1; 

    
    if (scanf("%d %d", &x2, &y2) != 2) return 1;
    final_x ^= x2; 
    final_y ^= y2; 

    
    if (scanf("%d %d", &x3, &y3) != 2) return 1;
    final_x ^= x3; 
    final_y ^= y3; 

    
    printf("%d %d\n", final_x, final_y);

    return 0;
}//4-2
#include <stdio.h>


#define MAX_N 50

int main() {
    
    int N;
    if (scanf("%d", &N) != 1) return 1;

    
    int person[MAX_N][2];

    
    int rank[MAX_N];

    
    for (int i = 0; i < N; i++) {
        if (scanf("%d %d", &person[i][0], &person[i][1]) != 2) return 1;
        rank[i] = 1; 
    }

    
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) { 

            
            if (i == j) {
                continue;
            }

            
            int x_A = person[i][0];
            int y_A = person[i][1];

            
            int x_B = person[j][0];
            int y_B = person[j][1];

           

            
            if (x_B > x_A && y_B > y_A) {
                rank[i]++;
            }
        }
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d", rank[i]);

       
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n"); 

    return 0;
}//4-3

