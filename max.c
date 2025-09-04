#include <stdio.h>
int main() {
    int n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i=1; i<n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    printf("Maximum element = %d\n", max);
    return 0;
}
