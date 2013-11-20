all: metafile-writer

metafile-writer: metafile-writer/main

metafile-writer/main: metafile-writer/main.cpp
	g++ -o metafile-writer/main metafile-writer/main.cpp
