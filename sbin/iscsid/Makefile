#	$NetBSD: Makefile,v 1.5 2013/08/11 06:04:38 dholland Exp $

PROG=	iscsid

SRCS=	iscsid_main.c iscsid_lists.c iscsid_driverif.c \
	iscsid_discover.c iscsid_targets.c

CPPFLAGS+= -I${DESTDIR}/usr/include/dev/iscsi
CPPFLAGS+= -I${DESTDIR}/usr/include
CPPFLAGS+= -D_THREAD_SAFE

MAN=	iscsid.8

LDADD = -lpthread -lisns

INCSDIR= /usr/include

INCS= iscsid.h

.include <bsd.prog.mk>

