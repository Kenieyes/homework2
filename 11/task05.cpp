#include <iostream> 
 
const int ROWS = 4; 
const int COLS = 3; 
 
void sort2DArrayColumnByColumn(int arr[ROWS][COLS]) { 
  for (int i = 0; i < COLS; i++) { 
    for (int j = 0; j < ROWS - 1; j++) { 
      for (int k = 0; k < ROWS - j - 1; k++) { 
        if (arr[k][i] > arr[k + 1][i]) { 
          std::swap(arr[k][i], arr[k + 1][i]); 
        } 
      } 
    } 
  } 
} 
 
int main() { 
  int arr[ROWS][COLS] = {{5, 2, 8}, {1, 9, 4}, {3, 6, 7}, {0, 4, 2}}; 
  sort2DArrayColumnByColumn(arr); 
  for (int row = 0; row < ROWS; ++row) { 
    for (int col = 0; col < COLS; ++col) { 
      std::cout << arr[row][col] << " "; 
    } 
    std::cout << std::endl; 
  } 
 
  return 0; 
}