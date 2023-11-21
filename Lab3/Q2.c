#include <stdio.h>

#include <stdio.h>

void reverse_string(char *str) {
  int len = 0;
  char *end = str;

  // Find the length of the string
  while (*end != '\0') {
    len++;
    end++;
  }

  end--; // Point back to the last character

  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = *end;
    *end = temp;
    end--;
  }
}

int main() {
  char str[] = "Okayy";
  printf("Original string: %s\n", str);

  reverse_string(str);

  printf("Reversed string: %s\n", str);

  return 0;
}
