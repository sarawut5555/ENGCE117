#include <stdio.h>

void SetArray(int **Arr, int *n);
int BinarySearchRecursive(int arr[], int left, int right, int find);

int main() {
    int n = 0, pos = -1, find = -1, *data;
    SetArray(&data, &n);
    if (n == 0) {  
        printf("Error\n");
        return 0;  
    }
    printf("Find : ");
    scanf("%d", &find); // Search (value)
    pos = BinarySearchRecursive(data, 0, n - 1, find);
    if (pos != -1)
        printf("FOUND %d in POSITION = Arr[%d]\n", data[pos], pos);
    else
        printf("VALUE NOT FOUND\n");
    return 0;
}

void SetArray(int **Arr, int *n) {
    scanf("%d", n);
    if (*n == 0) {  
        *Arr = NULL; 
        return;  
    }
    *Arr = new int [ *n ];  
    printf("Enter %d sorted elements:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &(*Arr)[i]);
    }
}

int BinarySearchRecursive(int arr[], int left, int right, int find) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == find) return mid;
    if (arr[mid] > find) return BinarySearchRecursive(arr, left, mid - 1, find);
    return BinarySearchRecursive(arr, mid + 1, right, find);
}
