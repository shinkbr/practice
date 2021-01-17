package main

import (
  "bufio"
  "fmt"
  "math"
  "os"
  "strconv"
)

func print_with_space(n int, print_space *bool) {
  if *print_space {
    fmt.Printf(" %d", n)
  } else {
    fmt.Printf("%d", n)
    *print_space = true
  }
}

func main() {
  scanner := bufio.NewScanner(os.Stdin)
  for scanner.Scan() {
    print_space := false
    n, _ := strconv.Atoi(scanner.Text())

    if n == 1 {
      fmt.Println("1")
      continue
    }

    for n % 2 == 0 {
      print_with_space(2, &print_space)
      n = n / 2
    }

    for i := 3; i <= int(math.Ceil(math.Sqrt(float64(n)))); i += 2 {
      for n % i == 0 {
        print_with_space(i, &print_space)
        n = n / i
      }
    }

    if n != 1 {
      print_with_space(n, &print_space)
    }

    fmt.Println()
  }
}
