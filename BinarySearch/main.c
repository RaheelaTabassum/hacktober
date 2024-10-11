#include <stdio.h>

// Recursive Binary Search function
int RecursiveBsearch(int A[], int start, int end, int element) {
    // Base case: element not found
    if (start > end) 
        return -1;
    
    // Calculate middle index
    int mid = start + (end - start) / 2;

    // If the element is found at mid, return the index
    if (A[mid] == element) 
        return mid;

    // If the element is smaller than mid, search in the left half
    if (element < A[mid]) 
        return RecursiveBsearch(A, start, mid - 1, element);

    // If the element is larger than mid, search in the right half
    return RecursiveBsearch(A, mid + 1, end, element);
}

int main() {
    // Sorted array for binary search
    int A[] = {0, 2, 6, 11, 12, 18, 34, 45, 55, 99};
    
    // Element to search for
    int element = 55;
    
    // Call binary search function and store the result
    int result = RecursiveBsearch(A, 0, 9, element);
    
    // Print the result
    if (result != -1)
        printf("%d is found at Index %d\n", element, result);
    else
        printf("%d is not found in the array\n", element);
    
    return 0;
}
