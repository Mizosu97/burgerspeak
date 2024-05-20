all:
	gcc src/* -o build/burgerspeak

clean:
	rm build/*
	gcc src/* -o build/burgerspeak
