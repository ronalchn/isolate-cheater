all: metafile-writer

metafile-writer: bin/metafile-writer

bin/metafile-writer: bin metafile-writer/main.cpp
	g++ -o bin/metafile-writer metafile-writer/main.cpp

bin:
	mkdir bin -p

