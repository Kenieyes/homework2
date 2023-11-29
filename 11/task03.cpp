#include <iostream> 
 
void insertionSort(int arr[], int size) { 
  for (int i = 1; i < size; ++i) { 
    int ins = arr[i]; 
    int j = i - 1; 
    while (j >= 0 && arr[j] > ins) { 
      arr[j + 1] = arr[j]; 
      j = j - 1; 
    } 
    arr[j + 1] = ins; 
  } 
} 
int main() { 
  int arr[] = {5, 2, 8, 1, 9}; 
  int size = sizeof(arr) / sizeof(arr[0]); 
  insertionSort(arr, size); 
  for (int i = 0; i < size; ++i) { 
    std::cout << arr[i] << " "; 
  } 
  std::cout << std::endl; 
  return 0; 
}