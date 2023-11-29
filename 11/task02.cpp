#include <iostream> 
using std::cin, std::cout, std::endl; 
 
void selectionSort(int arr[], int size) { 
  for (int i = 0; i < size - 1; i++) { 
    int max = i; 
    for (int j = i + 1; j < size; j++) { 
      if (arr[j] > arr[max]) { 
        max = j; 
      } 
    } 
    std::swap(arr[i], arr[max]); 
  } 
} 
 
int main() { 
  int arr[] = {5, 2, 8, 1, 9}; 
  int size = sizeof(arr) / sizeof(arr[0]); 
  selectionSort(arr, size); 
  for (int i = 0; i < size; ++i) { 
    std::cout << arr[i] << " "; 
  } 
  return 0; 
}