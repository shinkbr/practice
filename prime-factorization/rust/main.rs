use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();

    for line in stdin.lock().lines() {
        let mut n = line.unwrap().parse::<i32>().unwrap();
        let mut print_space = false;

        if n == 1 {
            println!("1");
            continue;
        }

        while n % 2 == 0 {
            n = n / 2;
            print_with_space(&2, &mut print_space);
        }

        let mut i = 3;
        while i * i <= n {
            while n % i == 0 {
                n = n / i;
                print_with_space(&i, &mut print_space);
            }
            i += 2;
        }

        if n > 1 {
            print_with_space(&n, &mut print_space);
        }

        println!();
    }
}

fn print_with_space(n: &i32, print_space: &mut bool) {
    if *print_space {
        print!(" {}", n);
    } else {
        print!("{}", n);
        *print_space = true;
    }
}
