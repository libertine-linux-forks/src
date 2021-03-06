#	$NetBSD: Makefile.inc,v 1.5.12.1 2014/11/12 18:50:55 snj Exp $
#

MSDOS=	${NETBSDSRCDIR}/sys/fs/msdosfs
MSDOS_NEWFS=	${NETBSDSRCDIR}/sbin/newfs_msdos

.PATH:	${.CURDIR}/msdos ${MSDOS} ${MSDOS_NEWFS} ${NETBSDSRCDIR}/sys/dev

CPPFLAGS+= -DMSDOS_EI -I${MSDOS} -I${MSDOS_NEWFS}
.if !defined(HOSTPROGNAME)
CPPFLAGS+= -I${NETBSDSRCDIR}/sys
.endif

SRCS+= mkfs_msdos.c msdosfs_fat.c msdosfs_conv.c msdosfs_vfsops.c
SRCS+= msdosfs_lookup.c msdosfs_denode.c msdosfs_vnops.c
SRCS+= clock_subr.c
