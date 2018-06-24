%{
    #include<stdio.h>
    #include<unistd.h>
    #include"GrammarTree.h"
    #include"lex.yy.c"
    void yyerror(const char* fmt, ...);
%}

%error-verbose
%locations

%union {
    GrammarTree grammar_tree;
}

%token <grammar_tree> SPSEMICOLON SPCOLON SPCOMMA SPDOT SPLEFTBRACE SPRIGHTBRACE
%token <grammar_tree> SPLEFTPRNT SPRIGHTPRNT SPLEFTBRACKET SPRIGHTBRACKET
%token <grammar_tree> OPPLUS OPMINUS OPMULTIPLY OPDIVIDE OPASSIGN
%token <grammar_tree> OPAND OPOR OPNOT
%token <grammar_tree> OPEQUAL OPNOTEQUAL OPGREAT OPLIGHT OPGREATEQ OPLIGHTEQ
%token <grammar_tree> OPSELFADD OPSELFMINUS 
%token <grammar_tree> TYPEVOID TYPEINTEGER TYPEFLOAT TYPEBOOL TYPESTRING
%token <grammar_tree> KEYPUBLIC KEYPRIVATE KEYPROTECTED KEYMAIN
%token <grammar_tree> KEYCLASS KEYNEW KEYEXTENDS KEYTHIS KEYINSTANCEOF
%token <grammar_tree> KEYIF KEYELSE KEYFOR KEYWHILE KEYBREAK KEYCONTINUE
%token <grammar_tree> KEYRETURN 
%token <grammar_tree> KEYSTATIC
%token <grammar_tree> KEYPRINT KEYREADINTEGER KEYREADLINE KEYREADFLOAT
%token <grammar_tree> CONSTANTNULL CONSTANTBOOL CONSTANTINT CONSTANTFLOAT CONSTANTSTRING
%token <grammar_tree> IDENTIFIER

%type <grammar_tree> Program ProgramFileds ProgramFiled VariableDef CommaIdentifiers Variable Type Variables Formals MainFunction FunctionDef ClassDef PriviligeFields PriviligeField Fields Field StmtBlock Stmts Stmt  SimpleStmt LValue SelfLvalue Call Actuals Exprs ForStmt WhileStmt IfStmt ReturnStmt BreakStmt ContinueStmt PrintStmt BoolExpr Expr Constant PublicDeclaration ProtectedDeclaration PrivateDeclaration

%right OPASSIGN
%left OPOR
%left OPAND
%left OPLIGHT OPLIGHTEQ OPGREAT OPGREATEQ OPEQUAL OPNOTEQUAL
%left OPPLUS OPMINUS OPSELFADD OPSELFMINUS
%left OPMULTIPLY OPDIVIDE
%right OPNOT
%left SPDOT
%left SPRIGHTBRACKET
%right SPLEFTBRACKET
%left SPRIGHTPRNT
%right SPLEFTPRNT

%nonassoc LOWER_THAN_ELSE
%nonassoc KEYELSE 

%%
Program: ProgramFileds MainFunction { 
       $$ = CreateGrammarTree("Program", 2, $1, $2); 
       if (two_tuples_trigger)
       {
           printf("__________________________________________________\n\n");
           printf("The two-tuples of \"Lexical Analyzing\" are printed!\n");
           printf("__________________________________________________\n");
       }
       if (!gmerror) {
           printf("\nNow print the grammar-tree of \"Grammar Analyzing\":\n");
           printf("__________________________________________________\n\n"); 
           TraverseGrammerTree($$, 0);
           printf("__________________________________________________\n\n"); 
           printf("The grammar-tree of \"Grammar Analyzing\" is printed!\n\n"); 
       }
       }
       | ProgramFileds { 
       $$ = CreateGrammarTree("Program", 1, $1); 
       if (two_tuples_trigger)
       {
           printf("__________________________________________________\n\n");
           printf("The two-tuples of \"Lexical Analyzing\" are printed!\n");
           printf("__________________________________________________\n");
       }
       if (!gmerror) {
           printf("\nNow print the grammar-tree of \"Grammar Analyzing\":\n");
           printf("__________________________________________________\n\n"); 
           TraverseGrammerTree($$, 0);
           printf("__________________________________________________\n\n"); 
           printf("The grammar-tree of \"Grammar Analyzing\" is printed!\n\n"); 
       }
       }
       ;

ProgramFileds: ProgramFiled { $$ = CreateGrammarTree("ProgramFileds", 1, $1); }
			 | ProgramFileds ProgramFiled { $$ = CreateGrammarTree("ProgramFileds", 2, $1, $2); }
			 ;

ProgramFiled: VariableDef { $$ = CreateGrammarTree("ProgramFiled", 1, $1); }
			| FunctionDef { $$ = CreateGrammarTree("ProgramFiled", 1, $1); }
			| ClassDef { $$ = CreateGrammarTree("ProgramFiled", 1, $1); }
			;

VariableDef: Variable SPSEMICOLON { $$ = CreateGrammarTree("VariableDef", 2, $1, $2); }
           | Variable CommaIdentifiers SPSEMICOLON { $$ = CreateGrammarTree("VariableDef", 3, $1, $2, $3); } 
           | error SPSEMICOLON { $$ = CreateGrammarTree("VariableDef", 1, $2); gmerror += 1; }
           ;

CommaIdentifiers: SPCOMMA IDENTIFIER { $$ = CreateGrammarTree("CommaIdentifiers", 2, $1, $2); } 
                | CommaIdentifiers SPCOMMA IDENTIFIER { $$ = CreateGrammarTree("CommaIdentifiers", 3, $1, $2, $3); } 
                ;

Variable: Type IDENTIFIER { $$ = CreateGrammarTree("Variable", 2, $1, $2); }
		| Variable SPLEFTBRACKET IDENTIFIER SPRIGHTBRACKET { $$ = CreateGrammarTree("Variable", 4, $1, $2, $3, $4); }
		| Variable SPLEFTBRACKET CONSTANTINT SPRIGHTBRACKET { $$ = CreateGrammarTree("Variable", 4, $1, $2, $3, $4); }
        ;

Type: TYPEINTEGER { $$ = CreateGrammarTree("Type", 1, $1); }
    | TYPEFLOAT { $$ = CreateGrammarTree("Type", 1, $1); }
    | TYPEBOOL { $$ = CreateGrammarTree("Type", 1, $1); }
    | TYPESTRING { $$ = CreateGrammarTree("Type", 1, $1); }
    | TYPEVOID { $$ = CreateGrammarTree("Type", 1, $1); }
    | KEYCLASS IDENTIFIER { $$ = CreateGrammarTree("Type", 2, $1, $2); }
    | Type SPLEFTBRACKET SPRIGHTBRACKET { $$ = CreateGrammarTree("Type", 3, $1, $2, $3); }
    ;

Variables: Variable { $$ = CreateGrammarTree("Variables", 1, $1); }
         | Variables SPCOMMA Variable { $$ = CreateGrammarTree("Variables", 3, $1, $2, $3); }
         ;

Formals: { $$ = CreateGrammarTree("Formals", 0, -1); }
       | Variables { $$ = CreateGrammarTree("Formals", 1, $1); }
       ;

MainFunction: KEYSTATIC TYPEVOID KEYMAIN SPLEFTPRNT SPRIGHTPRNT StmtBlock  { $$ = CreateGrammarTree("FunctionDef", 6, $1, $2, $3, $4, $5, $6); }
			;

FunctionDef: Type IDENTIFIER SPLEFTPRNT Formals SPRIGHTPRNT StmtBlock { $$ = CreateGrammarTree("FunctionDef", 6, $1, $2, $3, $4, $5, $6); }
           | KEYSTATIC Type IDENTIFIER SPLEFTPRNT Formals SPRIGHTPRNT StmtBlock { $$ = CreateGrammarTree("FunctionDef", 7, $1, $2, $3, $4, $5, $6, $7); }
           ;

ClassDef: KEYCLASS IDENTIFIER SPLEFTBRACE PriviligeFields SPRIGHTBRACE { $$ = CreateGrammarTree("ClassDef", 5, $1, $2, $3, $4, $5); }
        | KEYCLASS IDENTIFIER KEYEXTENDS IDENTIFIER SPLEFTBRACE PriviligeFields SPRIGHTBRACE { $$ = CreateGrammarTree("ClassDef", 7, $1, $2, $3, $4, $5, $6, $7); }
        | error SPRIGHTBRACE { $$ = CreateGrammarTree("ClassDef", 1, $2); gmerror += 1; }
        ;
        
PriviligeFields: PriviligeField { $$ = CreateGrammarTree("PriviligeFields", 1, $1); }
			  | PriviligeFields PriviligeField { $$ = CreateGrammarTree("PriviligeFields", 2, $1, $2); }
			  ;

PriviligeField: PublicDeclaration Fields { $$ = CreateGrammarTree("PriviligeField", 2, $1, $2); }
			 | ProtectedDeclaration Fields { $$ = CreateGrammarTree("PriviligeField", 2, $1, $2); }
			 | PrivateDeclaration Fields { $$ = CreateGrammarTree("PriviligeField", 2, $1, $2); }
			 ;

PublicDeclaration: KEYPUBLIC SPCOLON { $$ = CreateGrammarTree("PublicDeclaration", 1, $1); }
				 ;

ProtectedDeclaration: KEYPROTECTED SPCOLON { $$ = CreateGrammarTree("ProtectedDeclaration", 1, $1); }
				 ;
				 
PrivateDeclaration: KEYPRIVATE SPCOLON { $$ = CreateGrammarTree("PrivateDeclaration", 1, $1); }
				 ;

Fields: { $$ = CreateGrammarTree("Fields", 0, -1); }
      | Field Fields { $$ = CreateGrammarTree("Fields", 2, $1, $2); }
      ;

Field: VariableDef { $$ = CreateGrammarTree("Field", 1, $1); }
     | FunctionDef { $$ = CreateGrammarTree("Field", 1, $1); }
     ;

StmtBlock: SPLEFTBRACE Stmts SPRIGHTBRACE { $$ = CreateGrammarTree("StmtBlock", 3, $1, $2, $3); }
         | error SPRIGHTBRACE { $$ = CreateGrammarTree("StmtBlock", 1, $2); gmerror += 1; }
         ;

Stmts: { $$ = CreateGrammarTree("Stmts", 0, -1); }
     | Stmt Stmts { $$ = CreateGrammarTree("Stmts", 2, $1, $2); }
     ;

Stmt: VariableDef { $$ = CreateGrammarTree("Stmt", 1, $1); }
    | SimpleStmt SPSEMICOLON { $$ = CreateGrammarTree("Stmt", 2, $1, $2); }
    | IfStmt { $$ = CreateGrammarTree("Stmt", 1, $1); }
    | WhileStmt { $$ = CreateGrammarTree("Stmt", 1, $1); }
    | ForStmt { $$ = CreateGrammarTree("Stmt", 1, $1); }
    | BreakStmt SPSEMICOLON { $$ = CreateGrammarTree("Stmt", 2, $1, $2); }
    | ContinueStmt SPSEMICOLON { $$ = CreateGrammarTree("Stmt", 2, $1, $2); }
    | ReturnStmt SPSEMICOLON { $$ = CreateGrammarTree("Stmt", 2, $1, $2); }
    | PrintStmt SPSEMICOLON { $$ = CreateGrammarTree("Stmt", 2, $1, $2); }
    | StmtBlock { $$ = CreateGrammarTree("Stmt", 1, $1); }
    ;

SimpleStmt: { $$ = CreateGrammarTree("SimpleStmt", 0, -1); } 
          | LValue OPASSIGN Expr { $$ = CreateGrammarTree("SimpleStmt", 3, $1, $2, $3); } 
          | SelfLvalue { $$ = CreateGrammarTree("SimpleStmt", 1, $1); }
          | Call { $$ = CreateGrammarTree("SimpleStmt", 1, $1); } 
          ;

LValue: IDENTIFIER { $$ = CreateGrammarTree("LValue", 1, $1); }  
      | Expr SPDOT IDENTIFIER { $$ = CreateGrammarTree("LValue", 3, $1, $2, $3); }  
      | Expr SPLEFTBRACKET Expr SPRIGHTBRACKET { $$ = CreateGrammarTree("LValue", 4, $1, $2, $3, $4); }  
      | SelfLvalue { $$ = CreateGrammarTree("LValue", 1, $1); }
      ;

SelfLvalue: LValue OPSELFADD { $$ = CreateGrammarTree("SelfLvalue", 2, $1, $2); }
  	  | LValue OPSELFMINUS { $$ = CreateGrammarTree("SelfLvalue", 2, $1, $2); }
  	  ;

Call: IDENTIFIER SPLEFTPRNT Actuals SPRIGHTPRNT { $$ = CreateGrammarTree("Call", 4, $1, $2, $3, $4); }
    | Expr SPDOT IDENTIFIER SPLEFTPRNT Actuals SPRIGHTPRNT { $$ = CreateGrammarTree("Call", 6, $1, $2, $3, $4, $5, $6); }  
    ;

Actuals: { $$ = CreateGrammarTree("Actuals", 0, -1); }
       | Exprs { $$ = CreateGrammarTree("Actuals", 1, $1); }
       ;

Exprs: Expr { $$ = CreateGrammarTree("Exprs", 1, $1); }
     | Exprs SPCOMMA Expr { $$ = CreateGrammarTree("Exprs", 3, $1, $2, $3); }
     ;

ForStmt: KEYFOR SPLEFTPRNT SimpleStmt SPSEMICOLON BoolExpr SPSEMICOLON SimpleStmt SPRIGHTPRNT Stmt { $$ = CreateGrammarTree("ForStmt", 9, $1, $2, $3, $4, $5, $6, $7, $8, $9); }  
	   | KEYFOR SPLEFTPRNT Variable SPCOLON IDENTIFIER SPRIGHTPRNT Stmt { $$ = CreateGrammarTree("ForStmt", 7, $1, $2, $3, $4, $5, $6, $7); } 
       ;

WhileStmt: KEYWHILE SPLEFTPRNT BoolExpr SPRIGHTPRNT Stmt { $$ = CreateGrammarTree("WhileStmt", 5, $1, $2, $3, $4, $5); }  
         ;

IfStmt: KEYIF SPLEFTPRNT BoolExpr SPRIGHTPRNT Stmt %prec LOWER_THAN_ELSE { $$ = CreateGrammarTree("IfStmt", 5, $1, $2, $3, $4, $5); }  
      | KEYIF SPLEFTPRNT BoolExpr SPRIGHTPRNT Stmt KEYELSE Stmt { $$ = CreateGrammarTree("IfStmt", 7, $1, $2, $3, $4, $5, $6, $7); }  
      ;

ReturnStmt: KEYRETURN { $$ = CreateGrammarTree("ReturnStmt", 1, $1); }
          | KEYRETURN Expr { $$ = CreateGrammarTree("ReturnStmt", 2, $1, $2); } 
          ;

BreakStmt: KEYBREAK { $$ = CreateGrammarTree("BreakStmt", 1, $1); }
         ;
         
ContinueStmt: KEYCONTINUE { $$ = CreateGrammarTree("ContinueStmt", 1, $1); }
		 ;

PrintStmt: KEYPRINT SPLEFTPRNT Exprs SPRIGHTPRNT { $$ = CreateGrammarTree("PrintStmt", 4, $1, $2, $3, $4); }  
         ;

BoolExpr: Expr { $$ = CreateGrammarTree("BoolExpr", 1, $1); }
        ;

Expr: Constant { $$ = CreateGrammarTree("Expr", 1, $1); }
    | LValue { $$ = CreateGrammarTree("Expr", 1, $1); }
    | KEYTHIS { $$ = CreateGrammarTree("Expr", 1, $1); }
    | Call { $$ = CreateGrammarTree("Expr", 1, $1); }
    | SPLEFTPRNT Expr SPRIGHTPRNT { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPPLUS Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPMINUS Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPMULTIPLY Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPDIVIDE Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | OPMINUS Expr { $$ = CreateGrammarTree("Expr", 2, $1, $2); }
    | Expr OPLIGHT Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPLIGHTEQ Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPGREAT Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPGREATEQ Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPEQUAL Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPNOTEQUAL Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPAND Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | Expr OPOR Expr { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | OPNOT Expr { $$ = CreateGrammarTree("Expr", 2, $1, $2); }
    | KEYREADINTEGER SPLEFTPRNT SPRIGHTPRNT { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | KEYREADLINE SPLEFTPRNT SPRIGHTPRNT { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | KEYREADFLOAT SPLEFTPRNT SPRIGHTPRNT { $$ = CreateGrammarTree("Expr", 3, $1, $2, $3); }
    | KEYNEW IDENTIFIER SPLEFTPRNT SPRIGHTPRNT { $$ = CreateGrammarTree("Expr", 4, $1, $2, $3, $4); }
    | KEYNEW Type SPLEFTBRACKET Expr SPRIGHTBRACKET { $$ = CreateGrammarTree("Expr", 5, $1, $2, $3, $4, $5); }
    | KEYINSTANCEOF SPLEFTPRNT Expr SPCOMMA IDENTIFIER SPRIGHTPRNT { $$ = CreateGrammarTree("Expr", 6, $1, $2, $3, $4, $5, $6); }
    | SPLEFTPRNT KEYCLASS IDENTIFIER SPRIGHTPRNT Expr { $$ = CreateGrammarTree("Expr", 5, $1, $2, $3, $4, $5); }
    ;

Constant: CONSTANTINT { $$ = CreateGrammarTree("Constant", 1, $1); }
        | CONSTANTFLOAT { $$ = CreateGrammarTree("Constant", 1, $1); }
        | CONSTANTBOOL { $$ = CreateGrammarTree("Constant", 1, $1); }
        | CONSTANTSTRING { $$ = CreateGrammarTree("Constant", 1, $1); }
        | CONSTANTNULL { $$ = CreateGrammarTree("Constant", 1, $1); }
        ;

%%

#include<stdarg.h>

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Error type B at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

