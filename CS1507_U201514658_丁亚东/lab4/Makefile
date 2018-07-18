g--: cmm.l cmm.y GrammarTree.h
	bison -d cmm.y 
	flex cmm.l 
	gcc SemanticAnalysis.c cmm.tab.c SymbolTable.c GrammarTree.c IntermediateCode.c ObjectCode.c main.c -lfl -ly -o g-- 

wc:
	wc -l GrammarTree.h GrammarTree.c  SemanticAnalysis.h SemanticAnalysis.c SymbolTable.h SymbolTable.c IntermediateCode.h IntermediateCode.c ObjectCode.h ObjectCode.c cmm.l cmm.y main.h main.c Makefile

backup:
	cp GrammarTree.h GrammarTree.c  SemanticAnalysis.h SemanticAnalysis.c SymbolTable.h SymbolTable.c IntermediateCode.h IntermediateCode.c ObjectCode.h ObjectCode.c cmm.l cmm.y main.h main.c Makefile .backup

.PHONY: clean
clean:
	rm g-- cmm.tab.c cmm.tab.h lex.yy.c *.asm *.text
