#	$NetBSD: Makefile,v 1.2.14.1 2016/11/05 17:47:30 martin Exp $

.include <bsd.own.mk>

PROG=	nsupdate
MAN=	nsupdate.1
BINDIR=	/usr/bin

.include "${.CURDIR}/../Makefile.inc"

DIST=${IDIST}/bin/nsupdate

.PATH: ${DIST}
DPADD+=${LIBEDIT} ${LIBTERMINFO}
LDADD+=-ledit -lterminfo

nsupdate.o: ${VERSIONFILE}

.include <bsd.prog.mk>
