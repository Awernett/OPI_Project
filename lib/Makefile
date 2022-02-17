INSTALL = C:/Lab2/prog
compile: bib.o
	g++ -shared bib.o -o libbib.dll
bib.o:bib.cpp bib.h
	g++ -fPIC -c bib.cpp -o bib.o
clean:
	rm bib.o 
	rm libbib.dll
install: compile
	mkdir -p $(INSTALL)/lib
	cp libbib.dll $(INSTALL)/lib/
	mkdir -p $(INSTALL)/include
	cp bib.h $(INSTALL)/include/
uninstall:
	rm $(INSTALL)/lib/libbib.dll
	rm $(INSTALL)/include/bib.h
