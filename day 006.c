//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

//Input:
//- First line: integer n
//- Second line: n space-separated integers (sorted array)

//Output:
//- Print unique elements only, space-separated

//Example:
//Input:
//6
//1 1 2 2 3 3

//Output:
//1 2 3

//Explanation: Keep first occurrence of each element: 1, 2, 3

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int write_idx = 0;
    
    // First pass: keep first occurrence of each unique element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[write_idx]) {
            write_idx++;
            arr[write_idx] = arr[i];
        }
    }
    
    // Print unique elements (from index 0 to write_idx)
    for (int i = 0; i <= write_idx; i++) {
        printf("%d", arr[i]);
        if (i < write_idx) printf(" ");
    }
    printf("\n");
    
    return 0;
}

