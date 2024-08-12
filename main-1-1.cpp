extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main () {
  int* user_array = readNumbers();
  printNumbers(user_array, 10);

  delete [] user_array;
}