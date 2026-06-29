// program to Find maximum frequency element

#include <stdio.h>
int findMaxFrequencyElement(int arr[], int n) {
    int maxFreq = 0;
    int maxElement = arr[0];
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum frequency element is: %d\n", findMaxFrequencyElement(arr, n));
    return 0;
}