#include <iostream>
using namespace std;

void print_with_space(int n, bool *print_space) {
  if (*print_space) {
    cout << " " << n;
  } else {
    cout << n;
    *print_space = true;
  }
}

int main(int argc, char *argv[]){
  int n;
  bool print_space;

  while (cin >> n) {
    print_space = false;

    if (n == 1) {
      cout << "1\n";
      continue;
    }

    while (n % 2 == 0) {
      n = n / 2;
      print_with_space(2, &print_space);
    }

    for (int i = 3; i * i <= n; i += 2) {
      while (n % i == 0) {
        n = n / i;
        print_with_space(i, &print_space);
      }
    }

    if (n > 1) {
      print_with_space(n, &print_space);
    }

    cout << "\n";
  }

  return 0;
}
