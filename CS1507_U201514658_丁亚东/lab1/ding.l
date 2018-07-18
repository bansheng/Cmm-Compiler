%{
    #include<stdio.h>
    #include<stdlib.h>
    #include"GrammarTree.h"
    #include"ding.tab.h"

    int two_tuples_trigger = 1;  // the trigger controling wether display two-tuples of lexical analyzing

    int yycolumn = 1;
    #define YY_USER_ACTION \
      yylloc.first_line = yylloc.last_line = yylineno; \
      yylloc.first_column = yycolumn; \
      yylloc.last_column = yycolumn + yyleng - 1; \
      yycolumn += yyleng;

%}

%option yylineno

SPSEMICOLON     ";"
SPCOMMA         ","
SPDOT           "."
SPLEFTBRACE     "{"
SPRIGHTBRACE    "}"
SPLEFTPRNT      "("
SPRIGHTPRNT     ")"
SPLEFTBRACKET   "["
SPRIGHTBRACKET  "]"
OPPLUS          "+"
OPMINUS         "-"
OPMULTIPLY      "*"
OPDIVIDE        "/"
OPASSIGN        "="
OPAND           "&&"
OPOR            "||"
OPNOT           "!"
OPEQUAL         "=="
OPNOTEQUAL      "!="
OPGREAT         ">"
OPLIGHT         "<"
OPGREATEQ       ">="
OPLIGHTEQ       "<="
OPSELFADD       "++"
OPSELFMINUS     "--"
KEYMAIN         "main"
TYPEVOID        "void"
TYPEINTEGER     "int"
TYPEFLOAT       "float"
TYPEBOOL        "bool"
TYPESTRING      "string"
KEYCLASS        "class"
KEYNEW          "new"
KEYEXTENDS      "extends"
KEYTHIS         "this"
KEYINSTANCEOF   "instanceof"
KEYIF           "if"
KEYELSE         "else"
KEYFOR          "for"
KEYWHILE        "while"
KEYBREAK        "break"
KEYCONTINUE     "continue"
KEYRETURN       "return"
KEYSTATIC       "static"
KEYPRINT        "print"
KEYREADINTEGER  "readInteger"
KEYREADFLOAT    "readFloat"
KEYREADLINE     "readLine"
CONSTANTNULL    "null"
CONSTANTBOOL    "true"|"false"
CONSTANTFLOAT   [+-]?([0-9]*\.?[0-9]+|[0-9]+\.)
CONSTANTINT    [+-]?[0-9]+
CONSTANTSTRING  \"[^\"\n]*\"
IDENTIFIER      [a-zA-Z][a-zA-Z0-9_]* 
COMMENT         (\/\/.*)|(\/\*((\*[^\/]?)|[^\*]*)*\*\/)
SPACE           " "|\t
EOL             \n
WRONGSTRING     \"[^\"\n]*$
WRONGIDENTIFIER [0-9_][a-zA-Z0-9_]* 
AERROR          .

%%
{SPSEMICOLON} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPSEMICOLON)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("SPSEMICOLON", 0, yylineno);
    return SPSEMICOLON;
}
{SPCOMMA} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPCOMMA)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("SPCOMMA", 0, yylineno);
    return SPCOMMA;
}
{SPDOT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPDOT)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("SPDOT", 0, yylineno);
    return SPDOT;
}
{SPLEFTBRACE} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPLEFTBRACE)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("SPLEFTBRACE", 0, yylineno);
    return SPLEFTBRACE;
}
{SPRIGHTBRACE} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPRIGHTBRACE)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("SPRIGHTBRACE", 0, yylineno);
    return SPRIGHTBRACE;
}
{SPLEFTPRNT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPLEFTPRNT)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("SPLEFTPRNT", 0, yylineno);
    return SPLEFTPRNT;
}
{SPRIGHTPRNT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPRIGHTPRNT)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("SPRIGHTPRNT", 0, yylineno);
    return SPRIGHTPRNT;
}
{SPLEFTBRACKET} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPLEFTBRACKET)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("SPLEFTBRACKET", 0, yylineno);
    return SPLEFTBRACKET;
}
{SPRIGHTBRACKET} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, SPRIGHTBRACKET)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("SPRIGHTBRACKET", 0, yylineno);
    return SPRIGHTBRACKET;
}
{OPPLUS} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPPLUS)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPPLUS", 0, yylineno);
    return OPPLUS;
}
{OPMINUS} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPMINUS)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("OPMINUS", 0, yylineno);
    return OPMINUS;
}
{OPMULTIPLY} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPMULTIPLY)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("OPMULTIPLY", 0, yylineno);
    return OPMULTIPLY;
}
{OPDIVIDE} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPDIVIDE)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("OPDIVIDE", 0, yylineno);
    return OPDIVIDE;
}
{OPASSIGN} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPASSIGN)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPASSIGN", 0, yylineno);
    return OPASSIGN;
}
{OPAND} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPAND)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("OPAND", 0, yylineno);
    return OPAND;
}
{OPOR} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPOR)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("OPOR", 0, yylineno);
    return OPOR;
}
{OPNOT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPNOT)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("OPNOT", 0, yylineno);
    return OPNOT;
}
{OPEQUAL} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPEQUAL)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPEQUAL", 0, yylineno);
    return OPEQUAL;
}
{OPNOTEQUAL} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPNOTEQUAL)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPNOTEQUAL", 0, yylineno);
    return OPNOTEQUAL;
}
{OPGREAT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPGREAT)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPGREAT", 0, yylineno);
    return OPGREAT;
}
{OPLIGHT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPLIGHT)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPLIGHT", 0, yylineno);
    return OPLIGHT;
}
{OPGREATEQ} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPGREATEQ)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPGREATEQ", 0, yylineno);
    return OPGREATEQ;
}
{OPLIGHTEQ} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPLIGHTEQ)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPLIGHTEQ", 0, yylineno);
    return OPLIGHTEQ;
}
{OPSELFADD} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPSELFADD)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPSELFADD", 0, yylineno);
    return OPSELFADD;
}
{OPSELFMINUS} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, OPSELFMINUS)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("OPSELFMINUS", 0, yylineno);
    return OPSELFMINUS;
}

{KEYMAIN} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYMAIN)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYMAIN", 0, yylineno);
    return KEYMAIN;
}
{TYPEVOID} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, TYPEVOID)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("TYPEVOID", 0, yylineno);
    return TYPEVOID;
}
{TYPEINTEGER} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, TYPEINTEGER)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("TYPEINTEGER", 0, yylineno);
    return TYPEINTEGER;
}
{TYPEFLOAT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, TYPEFLOAT)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("TYPEFLOAT", 0, yylineno);
    return TYPEFLOAT;
}
{TYPEBOOL} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, TYPEBOOL)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("TYPEBOOL", 0, yylineno);
    return TYPEBOOL;
}
{TYPESTRING} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, TYPESTRING)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("TYPESTRING", 0, yylineno);
    return TYPESTRING;
}
{KEYCLASS} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYCLASS)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYCLASS", 0, yylineno);
    return KEYCLASS;
}
{KEYNEW} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYNEW)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYNEW", 0, yylineno);
    return KEYNEW;
}
{KEYEXTENDS} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYEXTENDS)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYEXTENDS", 0, yylineno);
    return KEYEXTENDS;
}
{KEYTHIS} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYTHIS)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYTHIS", 0, yylineno);
    return KEYTHIS;
}
{KEYINSTANCEOF} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYINSTANCEOF)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYINSTANCEOF", 0, yylineno);
    return KEYINSTANCEOF;
}
{KEYIF} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYIF)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYIF", 0, yylineno);
    return KEYIF;
}
{KEYELSE} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYELSE)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYELSE", 0, yylineno);
    return KEYELSE;
}
{KEYFOR} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYFOR)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYFOR", 0, yylineno);
    return KEYFOR;
}
{KEYWHILE} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYWHILE)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYWHILE", 0, yylineno);
    return KEYWHILE;
}
{KEYBREAK} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYBREAK)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYBREAK", 0, yylineno);
    return KEYBREAK;
}
{KEYCONTINUE} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYCONTINUE)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYCONTINUE", 0, yylineno);
    return KEYCONTINUE;
}
{KEYRETURN} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYRETURN)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYRETURN", 0, yylineno);
    return KEYRETURN;
}
{KEYSTATIC} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYSTATIC)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYSTATIC", 0, yylineno);
    return KEYSTATIC;
}
{KEYPRINT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYPRINT)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYPRINT", 0, yylineno);
    return KEYPRINT;
}
{KEYREADINTEGER} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYREADINTEGER)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYREADINTEGER", 0, yylineno);
    return KEYREADINTEGER;
}
{KEYREADFLOAT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYREADFLOAT)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYREADFLOAT", 0, yylineno);
    return KEYREADFLOAT;
}
{KEYREADLINE} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, KEYREADLINE)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("KEYREADLINE", 0, yylineno);
    return KEYREADLINE;
}
{CONSTANTNULL} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, CONSTANTNULL)\n",yylineno, yytext); 
    yylval.grammar_tree = CreateGrammarTree("CONSTANTNULL", 0, yylineno);
    return CONSTANTNULL;
}
{CONSTANTBOOL} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, CONSTANTBOOL)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("CONSTANTBOOL", 0, yylineno);
    return CONSTANTBOOL;
}
{CONSTANTINT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, CONSTANTINT)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("CONSTANTINT", 0, yylineno);
    return CONSTANTINT;
}
{CONSTANTFLOAT} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, CONSTANTFLOAT)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("CONSTANTFLOAT", 0, yylineno);
    return CONSTANTFLOAT;
}
{CONSTANTSTRING} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, CONSTANTSTRING)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("CONSTANTSTRING", 0, yylineno);
    return CONSTANTSTRING;
}
{IDENTIFIER} { 
    if (two_tuples_trigger)
        printf("line:%d (%s, IDENTIFIER)\n",yylineno, yytext);
    yylval.grammar_tree = CreateGrammarTree("IDENTIFIER", 0, yylineno);
    return IDENTIFIER;
}
{COMMENT} { if (two_tuples_trigger) printf("line:%d (%s, COMMENT)\n",yylineno, yytext); }
{SPACE} { /*if (two_tuples_trigger) printf("line:%d (%s, SPACE)\n",yylineno, yytext);*/ }
{EOL} { if (two_tuples_trigger) printf("line:%d (\\n, EOL)\n", yylineno); yycolumn = 1; }
{WRONGSTRING} {
    printf("Error type A at Line %d column %d: Missing \"\"\".\n", yylineno, yylloc.last_column); 
    exit(-1);
}
{WRONGIDENTIFIER} {
    printf("Error type A at Line %d column %d: Wrong format of identifier.\n", yylineno, yylloc.first_column); 
    exit(-1);
}
{AERROR} { 
    printf("Error type A at Line %d column %d: Mysterious characters \"%s\".\n", yylineno, yylloc.first_column, yytext); 
    exit(-1); 
}
%%
