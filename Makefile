# Rouge WM

include config.mk

SRC = rwm.c rwm.h config.h Makefile

all: rwm

config.h:
	cp config.def.h config.h

rwm: $(SRC)
	$(CC) -O3 $(RWMCFLAGS) -o $@ $(RWMLDFLAGS)

clean:
	rm -f rwm *.o rwm-$(VERSION).tar.gz config.h

install: rwm
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f rmw $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/rwm

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/rwm

.PHONY: all clean rwm install uninstall
