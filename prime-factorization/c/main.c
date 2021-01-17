#include <stdio.h>
#include <math.h>

void print_with_space(int n, int *print_space) {
  if (*print_space) {
    printf(" ");
  } else {
    *print_space = 1;
  }
  printf("%d", n);
}

int main(int argc, char *argv[]){
  int n;
  int print_space;

  while (scanf("%d", &n) != EOF) {
    print_space = 0;

    if (n == 1) {
      printf("1\n");
      continue;
    }

    while (n % 2 == 0) {
      print_with_space(2, &print_space);
      n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
      while (n % i == 0) {
        print_with_space(i, &print_space);
        n = n / i;
      }
    }

    if (n != 1) {
      print_with_space(n, &print_space);
    }

    printf("\n");
  }

  return 0;
}
