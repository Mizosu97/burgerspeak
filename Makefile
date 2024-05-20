all:
	gcc src/*.c -o build/burgerspeak

clean:
	rm build/*
	gcc src/*.c -o build/burgerspeak
