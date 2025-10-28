// Counting sort in C programming

#include <stdio.h>

void countingSort(int array[], int size) {
  int output[500];

  // Find the largest element of the array
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // The size of count must be at least (max+1) but
  // we cannot declare it as int count(max+1) in C as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int count[500];

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int array[] = {500, 60, 0, 91, 75, 0, 97, 0, 97, 82, 18, 75, 14, 0, 19, 13, 98, 98, 95, 9, 12, 19, 29, 46, 62, 6, 0, 47, 60, 3, 55, 49, 12, 81, 4, 27, 29, 71, 23, 22, 50, 78, 0, 56, 78, 63, 14, 6, 55, 62, 89, 29, 18, 77, 23, 0, 47, 0, 40, 73, 52, 0, 55, 96, 19, 27, 13, 0, 2, 86, 35, 98, 55, 9, 17, 38, 0, 95, 55, 72, 0, 84, 0, 0, 64, 93, 15, 79, 7, 14, 93, 45, 82, 0, 0, 0, 83, 67, 0, 47, 29, 13, 52, 2, 23, 46, 81, 88, 27, 82, 0, 66, 0, 15, 18, 79, 84, 0, 13, 22, 41, 11, 0, 88, 89, 21, 0, 13, 12, 91, 2, 75, 39, 17, 56, 0, 0, 64, 0, 49, 24, 79, 79, 25, 0, 59, 29, 0, 88, 26, 75, 74, 98, 76, 22, 33, 94, 60, 8, 60, 0, 57, 57, 41, 0, 58, 0, 0, 12, 77, 44, 70, 7, 79, 96, 33, 76, 70, 28, 46, 51, 38, 0, 0, 6, 95, 56, 0, 34, 0, 67, 96, 36, 37, 0, 87, 51, 20, 24, 11, 0, 82, 42, 38, 55, 46, 77, 15, 57, 74, 90, 50, 1, 18, 0, 0, 30, 56, 68, 55, 0, 89, 2, 93, 81, 32, 54, 2, 29, 84, 96, 30, 83, 0, 13, 0, 11, 2, 23, 0, 20, 80, 0, 65, 0, 7, 70, 41, 39, 94, 43, 0, 0, 56, 84, 60, 94, 83, 39, 8, 37, 0, 86, 18, 68, 32, 0, 26, 75, 44, 86, 0, 46, 8, 0, 51, 90, 88, 44, 0, 92, 61, 0, 66, 0, 65, 0, 80, 84, 45, 24, 48, 64, 17, 1, 29, 56, 19, 0, 81, 0, 0, 55, 89, 72, 2, 1, 0, 69, 0, 70, 7, 88, 11, 38, 62, 73, 63, 91, 0, 96, 68, 47, 27, 53, 80, 39, 50, 38, 14, 59, 0, 2, 95, 35, 0, 0, 54, 26, 5, 93, 7, 88, 70, 0, 2, 38, 16, 49, 4, 9, 84, 24, 54, 15, 35, 21, 40, 0, 79, 47, 0, 79, 0, 1, 28, 57, 62, 65, 63, 99, 13, 0, 46, 46, 36, 56, 78, 0, 15, 50, 80, 95, 19, 55, 60, 26, 13, 86, 51, 3, 33, 93, 97, 30, 76, 36, 93, 90, 86, 85, 26, 33, 0, 93, 0, 0, 0, 19, 75, 85, 2, 0, 60, 48, 90, 0, 0, 29, 42, 84, 19, 48, 0, 91, 0, 26, 39, 8, 92, 81, 45, 38, 73, 0, 0, 19, 50, 11, 5, 49, 0, 48, 56, 37, 45, 83, 39, 10, 64, 92, 21, 30, 59, 36, 90, 56, 93, 89, 52, 0, 7, 19, 0, 7, 96, 93, 33, 47, 43, 0, 67, 18, 58, 0, 33, 58, 68, 16, 64, 84, 81, 19, 87, 52, 0, 59, 0, 79, 76, 17, 68, 12, 0, 79, 63, 16, 1, 7, 0, 27, 0};
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  printArray(array, n);
}
