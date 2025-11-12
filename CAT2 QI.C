
#include <stdio.h>

int main() {
    int score[2][3] = {
        {65, 37, 70},
        {84, 72, 67}
    };
    
    int i, j, sum = 0;
    
    // Calculate sum using nested loop
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            sum += score[i][j];
        }
    }
    
    printf("The sum of all elements in the array is: %d\n", sum);
    
    return 0;

}
