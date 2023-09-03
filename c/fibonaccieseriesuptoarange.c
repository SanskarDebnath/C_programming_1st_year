#include <stdio.h>

int main() {
  int n,i;
  int sum = 0;

  // Get the number of elements in the array from the user
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];

  // Get the elements of the array from the user
  printf("Enter the elements of the array:\n");
  for ( i = 0; i < n; i++) {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  // Calculate the sum of the array
  for ( i = 0; i < n; i++) {
    sum += arr[i];
  }

  // Print the result
  printf("The sum of the array is: %d\n", sum);

  return 0;
}

