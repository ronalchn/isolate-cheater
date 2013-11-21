all: metafile-writer system-cronjob-writer

metafile-writer: bin/metafile-writer
system-cronjob-writer: bin/system-cronjob-writer

bin/metafile-writer: bin metafile-writer/main.cpp
	g++ -o bin/metafile-writer metafile-writer/main.cpp

bin/system-cronjob-writer: bin system-cronjob-writer/main.cpp
	g++ -o bin/system-cronjob-writer system-cronjob-writer/main.cpp

bin:
	mkdir bin -p

