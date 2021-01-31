/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OP_OR = 258,
    OP_AND = 259,
    OP_XOR = 260,
    OP_IGUALDAD = 261,
    OP_RELACION = 262,
    OP_SIGNO = 263,
    OP_MULT = 264,
    OP_UNARIO = 265,
    COMA = 266,
    PUNTO_Y_COMA = 267,
    CONST_LOGICA = 268,
    CONST_CARACTER = 269,
    CONST_FLOTANTE = 270,
    INIVAR = 271,
    FINVAR = 272,
    PRINCIPAL = 273,
    INICIO_BLOQUE = 274,
    FIN_BLOQUE = 275,
    TIPO_BASICO = 276,
    ABRE_CORCHETE = 277,
    CIERRA_CORCHETE = 278,
    ID = 279,
    CONST_ENTERO_SIN_SIGNO = 280,
    HACER = 281,
    HASTA = 282,
    SI = 283,
    ENTONCES = 284,
    SI_NO = 285,
    MIENTRAS = 286,
    ESCANEAR = 287,
    IMPRIMIR = 288,
    DEVOLVER = 289,
    CADENA = 290,
    ABRE_PARENTESIS = 291,
    CIERRA_PARENTESIS = 292,
    OP_ASIG = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */
