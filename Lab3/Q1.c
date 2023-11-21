void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 100;
  int b = 20;

  printf("Before swapping: a = %d, b = %d\n", a, b);

  swap(&a, &b); // Passing addresses of a and b to swap function using call by reference

  printf("After swapping: a = %d, b = %d\n", a, b);

  return 0;
}
