#!/usr/bin/env ruby
# coding: utf-8

while line = gets
  n = line.to_i
  print_space = false

  if n == 1
    puts 1
    next
  end

  while n % 2 == 0
    if print_space
      print " 2"
    else
      print 2
      print_space = true
    end
    n = n / 2
  end

  i = 3
  while i * i <= n do
    while n % i == 0
      if print_space
        print " #{i}"
      else
        print i
        print_space = true
      end
      n = n / i
    end

    i += 2
  end

  unless n == 1
    if print_space
      print " #{n}"
    else
      print n
    end
  end

  puts
end
