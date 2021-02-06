.PHONY: test benchmark clean

test:
	cat ../input.txt | ./main.rb > output.txt
	diff output.txt ../output.txt || exit 1

benchmark:
	time seq -f %1.0f 1000000 | ./main.rb > /dev/null

clean:
	rm -f *.txt
