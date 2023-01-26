prefix?=/usr/local

build:
	mkdir -p bin
	g++ src/main.cpp -o bin/simple-gtk-prompt `pkg-config gtkmm-3.0 --cflags --libs`
install: build
	cp bin/simple-gtk-prompt $(prefix)/bin
clean:
	rm -rf bin/*
uninstall:
	rm $(prefix)/bin/simple-gtk-prompt
