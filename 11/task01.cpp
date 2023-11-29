#include <iostream> 
using std::cin, std::cout, std::endl; 
 
void bubbleSort(int arr[], int size) { 
  for (int i = 0; i < size - 1; ++i) { 
    for (int j = 0; j < size - i - 1; ++j) { 
      if (arr[j] >> arr[j + 1]) std::swap(arr[j], arr[j + 1]); 
      /*if (arr[j] > arr[j + 1]) { 
          int temp = arr[j]; 
          arr[j] = arr[j + 1]; 
          arr[j + 1] = temp; 
      } */ 
    } 
  } 
} 
 
int main() { 
  int arr[] = {5, 2, 8, 1, 9}; 
  int size = sizeof(arr) / sizeof(arr[0]); 
  bubbleSort(arr, size); 
  for (int i = 0; i < size; ++i) { 
    std::cout << arr[i] << " "; 
  } 
  std::cout << std::endl; 
  return 0; 
}