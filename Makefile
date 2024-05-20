all:
	gcc src/*.c -g -o build/burgerspeak

clean:
	rm build/*
	gcc src/*.c -g -o build/burgerspeak
