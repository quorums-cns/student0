app: app.o lib.o
	gcc app.o lib.o -o app
app.o:
	gcc -DABC -c app.c -o app.o
lib.o:
	gcc -c lib.c -o lib.o 
clean:
	rm -f *.o app