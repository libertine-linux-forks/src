#	$NetBSD: Makefile,v 1.2.34.1 2016/07/14 18:26:51 martin Exp $

SUBDIR= ntp-keygen ntpd ntpdate ntpdc ntpq ntptime ntptrace sntp 

.if ("${MKCRYPTO}" != "no")
CPPFLAGS+=-DOPENSSL
.endif

.include "Makefile.inc"

.include <bsd.subdir.mk>
