#include <stdio.h>
#include <stdlib.h>

void swap(int* xp, int* yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n-1; i++) {
    for (j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

void selectionSort(int arr[], int n) {
  int i, j, min;
  for (i = 0; i < n-1; i++) {
    min = i;
    for (j = i+1; j < n; j++) {
      if (arr[min] > arr[j]) {
        min = j;
      }
    }
    swap(&arr[i], &arr[min]);
  }
}

void printarr(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3, 0 };
  int len = sizeof(arr) / sizeof(arr[0]);
  int arr1[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3, 0 };
  int len1 = sizeof(arr1) / sizeof(arr1[0]);
  selectionSort(arr, len);
  printarr(arr, len);
  bubbleSort(arr1, len1);
  printarr(arr1, len1);

}