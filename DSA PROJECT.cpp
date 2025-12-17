#include <stdio.h>
#include <stdlib.h>

void findFrequency(int arr[], int n) {
    int *visited = (int *)calloc(n, sizeof(int));
    int maxFreq = 0, minFreq = n;
    int maxElement, minElement;
    
    printf("\n========================================\n");
    printf("    FREQUENCY ANALYSIS RESULTS\n");
    printf("========================================\n");
    printf("Element\t\tFrequency\n");
    printf("----------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;
            
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        
        printf("%d\t\t%d\n", arr[i], count);
        
        // Track max and min frequency
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
        if (count < minFreq) {
            minFreq = count;
            minElement = arr[i];
        }
    }
    
    printf("========================================\n");
    printf("\nMost Frequent Element: %d (appears %d times)\n", maxElement, maxFreq);
    printf("Least Frequent Element: %d (appears %d times)\n", minElement, minFreq);
    
    free(visited);
}

int main() {
    int n;
    
    printf("========================================\n");
    printf("   FREQUENCY COUNTER TOOL - DSA LAB\n");
    printf("========================================\n\n");
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input! Array size must be positive.\n");
        return 1;
    }
    
    int *arr = (int *)malloc(n * sizeof(int));
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    findFrequency(arr, n);
    
    free(arr);
    return 0;
}
