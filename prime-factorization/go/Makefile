.PHONY: test benchmark clean

main: main.go
	go build -o main

test:
	cat ../input.txt | ./main > output.txt
	diff output.txt ../output.txt || exit 1

benchmark:
	time seq -f %1.0f 10000000 | ./main > /dev/null

clean:
	rm -f main *.txt
