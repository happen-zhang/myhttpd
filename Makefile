BINDIR =	/usr/local/sbin
MANDIR =	/usr/local/man/man1
CC =		gcc
CFLAGS =	-O
#CFLAGS =	-g
#SYSVLIBS =	-lnsl -lsocket
LDFLAGS =	-s ${SYSVLIBS}
#LDFLAGS =	-g ${SYSVLIBS}

all:		myhttpd

myhttpd:	myhttpd.o
	${CC} ${CFLAGS} myhttpd.o ${LDFLAGS} -o myhttpd

myhttpd.o:	myhttpd.c
	${CC} ${CFLAGS} -c myhttpd.c

install:	all
	rm -f ${BINDIR}/myhttpd
	cp myhttpd ${BINDIR}/myhttpd

clean:
	rm -f myhttpd *.o core core.* *.core
