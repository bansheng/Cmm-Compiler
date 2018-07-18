ding: ding.l ding.y GrammarTree.c
	bison -d -v ding.y
	flex ding.l
	gcc GrammarTree.c ding.tab.c -lfl -ly -o ding

.PHONY: clean
clean:
	rm ding ding.tab.c ding.tab.h lex.yy.c ding.output
