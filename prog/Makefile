EXE_NAME = lab1.exe
INSTALL_DIR = C:\\Lab2\\install
compile: lab1.cpp
	g++ -I C:\\Lab2\\prog\\include -L C:\\Lab2\\prog\\lib lab1.cpp -lbib -o $(EXE_NAME)
clean:
	rm $(EXE_NAME)
install:
	mkdir -p "$(INSTALL_DIR)\\"
	cp $(EXE_NAME) "$(INSTALL_DIR)\\$(EXE_NAME)"
	cp C:\\lab2\\prog\\lib\\libbib.dll "$(INSTALL_DIR)"
uninstall:
	rm "$(INSTALL_DIR)\\$(EXE_NAME)"