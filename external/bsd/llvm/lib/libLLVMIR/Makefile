#	$NetBSD: Makefile,v 1.8.2.1 2015/06/04 20:05:44 snj Exp $

LIB=	LLVMIR

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/IR

SRCS+=	AsmWriter.cpp \
	Attributes.cpp \
	AutoUpgrade.cpp \
	BasicBlock.cpp \
	Comdat.cpp \
	ConstantFold.cpp \
	ConstantRange.cpp \
	Constants.cpp \
	Core.cpp \
	DIBuilder.cpp \
	DataLayout.cpp \
	DebugInfo.cpp \
	DebugLoc.cpp \
	DiagnosticInfo.cpp \
	DiagnosticPrinter.cpp \
	Dominators.cpp \
	Function.cpp \
	GCOV.cpp \
	GVMaterializer.cpp \
	Globals.cpp \
	IRBuilder.cpp \
	IRPrintingPasses.cpp \
	InlineAsm.cpp \
	Instruction.cpp \
	Instructions.cpp \
	IntrinsicInst.cpp \
	LLVMContext.cpp \
	LLVMContextImpl.cpp \
	LegacyPassManager.cpp \
	MDBuilder.cpp \
	Mangler.cpp \
	Metadata.cpp \
	MetadataTracking.cpp \
	Module.cpp \
	Pass.cpp \
	PassManager.cpp \
	PassRegistry.cpp \
	Statepoint.cpp \
	Type.cpp \
	TypeFinder.cpp \
	Use.cpp \
	UseListOrder.cpp \
	User.cpp \
	Value.cpp \
	ValueSymbolTable.cpp \
	ValueTypes.cpp \
	Verifier.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
