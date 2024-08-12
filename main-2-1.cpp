extern void hexDigits(int *numbers,int length);
extern int *readNumbers();

int main () {
  int* user_array = readNumbers();
  hexDigits(user_array, 10);

  return 0;
}