%{

// Declaraciones

#include <stdlib.h>
#include <string.h>
#include "yacc.tab.h"


%}
%option yylineno
%option noyywrap

letra [a-zA-Z]
digito [0-9]
entero {digito}+
real {entero}\.{entero}

%%

"&" {
    ECHO;
    yylval.attr = 0;
    yylval.lex = strdup(yytext);
    return(OP_UNARIO);
}

"~" {
    ECHO;
    yylval.attr = 1;
    yylval.lex = strdup(yytext);
    return(OP_UNARIO);
}

"!" {
    ECHO;
    yylval.attr = 2;
    yylval.lex = strdup(yytext);
    return(OP_UNARIO);
}

"++" {
    ECHO;
    yylval.attr = 3;
    yylval.lex = strdup(yytext);
    return(OP_UNARIO);
}

"--" {
    ECHO;
    yylval.attr = 4;
    yylval.lex = strdup(yytext);
    return(OP_UNARIO);
}

"*" {
    ECHO;
    yylval.attr = 0;
    yylval.lex = strdup(yytext);
    return(OP_MULT);
}

"/" {
    ECHO;
    yylval.attr = 1;
    yylval.lex = strdup(yytext);
    return(OP_MULT);
}

"==" {
    ECHO;
    yylval.attr = 0;
    yylval.lex = strdup(yytext);
    return(OP_IGUALDAD);
}

"!=" {
    ECHO;
    yylval.attr = 1;
    yylval.lex = strdup(yytext);
    return(OP_IGUALDAD);
}

"<=" {
    ECHO;
    yylval.attr = 2;
    yylval.lex = strdup(yytext);
    return(OP_RELACION);
}
">=" {
    ECHO;
    yylval.attr = 3;
    yylval.lex = strdup(yytext);
    return(OP_RELACION);
}

"<" {
    ECHO;
    yylval.attr = 1;
    yylval.lex = strdup(yytext);
    return(OP_RELACION);
}

">" {
    ECHO;
    yylval.attr = 0;
    yylval.lex = strdup(yytext);
    return(OP_RELACION);
}

"&&" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(OP_AND);
}

"||" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(OP_OR);
}

"%" {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 2;
    return(OP_MULT);
}

"^" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(OP_XOR);
}

"+" {
    ECHO;
    yylval.attr = 0;
    yylval.lex = strdup(yytext);
    return(OP_SIGNO);
}

"-" {
    ECHO;
    yylval.attr = 1;
    yylval.lex = strdup(yytext);
    return(OP_SIGNO);
}

"," {
    ECHO;
    yylval.lex = strdup(yytext);
    return(COMA);
}

";" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(PUNTO_Y_COMA);
}

"inivar" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(INIVAR);
}

"finvar" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(FINVAR);
}

"principal" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(PRINCIPAL);
}

"{" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(INICIO_BLOQUE);
}

"}" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(FIN_BLOQUE);
}

"entero" {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 1;
    yylval.type = ENTERO;
    return(TIPO_BASICO);
}

"booleano" {
    ECHO;
    yylval.type = BOOLEANO;
    return(TIPO_BASICO);
}

"flotante" {
    ECHO;
    yylval.type = FLOTANTE;
    return(TIPO_BASICO);
}

"caracter" {
    ECHO;
    yylval.type = CARACTER;
    return(TIPO_BASICO);
}

"[" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(ABRE_CORCHETE);
}

"]" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(CIERRA_CORCHETE);
}

{entero} {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 0;
    yylval.type = ENTERO;
    return(CONST_ENTERO_SIN_SIGNO);
}

"verdadero" {
    ECHO;
    yylval.attr = 0;
    yylval.lex = "1";
    yylval.type = BOOLEANO;
    return(CONST_LOGICA);
}

"falso" {
    ECHO;
    yylval.attr = 1;
    yylval.lex = "0";
    yylval.type = BOOLEANO;
    return(CONST_LOGICA);
}

"hacer" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(HACER);
}

"hasta" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(HASTA);
}

"si" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(SI);
}

"entonces" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(ENTONCES);
}

"si_no" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(SI_NO);
}


"mientras" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(MIENTRAS);
}

"escanear" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(ESCANEAR);
}

"imprimir" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(IMPRIMIR);
}

"devolver" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(DEVOLVER);
}

 \"[^\"]*\" {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 3;
    return(CADENA);
}


"(" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(ABRE_PARENTESIS);
}

")" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(CIERRA_PARENTESIS);
}

"=" {
    ECHO;
    yylval.lex = strdup(yytext);
    return(OP_ASIG);
}

({letra}|_)({letra}|{digito}|_)* {
    ECHO;
    yylval.lex = strdup(yytext);
    return(ID);
}


\'[^\']\' {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 0;
    return(CONST_CARACTER);
}

{real} {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 2;
    yylval.type = FLOTANTE;
    return(CONST_FLOTANTE);
}



[ \t] {
    ECHO;
}

[\n\r] {
    ECHO;
    line++;
}


. {
    printf(" ERROR LEXICO en la linea: %d. No se reconoce la palabra '%s'. ", yylineno, yytext);
}

%%
