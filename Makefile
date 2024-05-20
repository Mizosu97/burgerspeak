all:
	gcc src/main.c -o build/burgerspeak

clean:
	rm build/*
	gcc src/main.c -o build/burgerspeak
