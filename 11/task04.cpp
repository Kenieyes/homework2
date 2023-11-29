// #include <algorithm> 
#include <iostream> 
 
const int ROWS = 4; 
const int COLS = 3; 
 
/* void sort2DArrayRowByRow(int arr[ROWS][COLS]) { 
    for (int row = 0; row < ROWS; ++row) { 
        std::sort(arr[row], arr[row] + COLS); 
    } 
} */ 
void sort2DArrayRowByRow(int arr[ROWS][COLS]) { 
  for (int i = 0; i < ROWS; i++) { 
    for (int j = 0; j < COLS - 1; j++) { 
      for (int k = 0; k < COLS - j - 1; k++) { 
        if (arr[i][k] > arr[i][k + 1]) { 
          std::swap(arr[i][k], arr[i][k + 1]); 
        } 
      } 
    } 
  } 
} 
 
int main() { 
  int arr[ROWS][COLS] = {{5, 2, 8}, {1, 9, 4}, {3, 6, 7}, {0, 4, 2}}; 
 
  sort2DArrayRowByRow(arr); 
  for (int row = 0; row < ROWS; ++row) { 
    for (int col = 0; col < COLS; ++col) { 
      std::cout << arr[row][col] << " "; 
    } 
    std::cout << std::endl; 
  } 
  return 0; 
}