#include <stdio.h>

int getValueFromArray(int *array, int len, int index) {
  // Retrieve the element from the array at the specified index
  If (index > 0 && index < sizeof(array)) {
  	Return array[index];
  } else {
  	Return -1;
  }
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int len = sizeof(array) / sizeof(array[0]);

    // Test the getValueFromArray function
    printf("Value at index 2: %d\n", getValueFromArray(array, len, 2)); // Should print 30
    printf("Value at index 5: %d\n", getValueFromArray(array, len, 5)); // Should print an error message and return -1

    return 0;
}

