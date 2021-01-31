%{

////////////////////////////////////////////////////////////////////////////////
// Pedro Gallego López
// Pedro Pablo Ruíz Huertas
// Álvaro Beltrán Camacho
// Alberto Luque Infante

// PL - Procesadores de Lenguajes - CCIA
//
// ETSIIT - UGR
//
//
// Fichero Yacc para crear el analizador sintáctico
//
////////////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantic.h"

// La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
// fuente de lex (prueba.l)
void yyerror(char * msg);

// La siguiente variable se usará para conocer el numero de la línea
// que se esta leyendo en cada momento. También es posible usar la variable
// ’yylineno’ que también nos muestra la línea actual. Para ello es necesario
// invocar a flex con la opción ’-l’ (compatibilidad con lex).

//############
//#define YYDEBUG 1
//############

#define YYERROR_VERBOSE

%}

%error-verbose

// A continuación declaramos los nombres simbólicos de los tokens.
// byacc se encarga de asociar a cada uno un código.

%left OP_OR
%left OP_AND
%left OP_XOR
%left OP_IGUALDAD
%left OP_RELACION
%left OP_SIGNO
%left OP_MULT

%right OP_UNARIO

%token COMA
%token PUNTO_Y_COMA
%token CONST_LOGICA
%token CONST_CARACTER
%token CONST_FLOTANTE
%token INIVAR
%token FINVAR
%token PRINCIPAL
%token INICIO_BLOQUE
%token FIN_BLOQUE
%token TIPO_BASICO
%token ABRE_CORCHETE
%token CIERRA_CORCHETE
%token ID
%token CONST_ENTERO_SIN_SIGNO
%token HACER
%token HASTA
%token SI
%token ENTONCES
%token SI_NO
%token MIENTRAS
%token ESCANEAR
%token IMPRIMIR
%token DEVOLVER
%token CADENA
%token ABRE_PARENTESIS
%token CIERRA_PARENTESIS
%token OP_ASIG


%%

Programa : 	{ generaFich(); } //CI
			PRINCIPAL bloque
			{ closeInter(); };//CI


bloque : INICIO_BLOQUE { tsAddMark(); }
			{if (isMain==0){ fputs("{\n",file); }} //CI
		    Declar_de_variables_locales
		    Declar_de_subprogs
		    Sentencias
		    FIN_BLOQUE
			{ fputs("}\n",file); } //CI
			{ tsCleanIn(); };

Declar_de_subprogs : Declar_de_subprogs Declar_subprog
			 	 | ;

Declar_subprog : {numSubPro++;if(numSubPro==1)file = fileSubProg;} Cabecera_subprograma { subProg = 1; } bloque {subProg=0;numSubPro--;if(numSubPro==0)file=fileMain;};

Declar_de_variables_locales   : { varPrinc++;	}
										INIVAR { decVar = 1; }
				                        Variables_locales
				                        FINVAR { decVar = 0; }
										{if(isMain==1){fputs("\n#include \"dec_fun.c\"\n\nint main(int argc, char *argv[] ){\n",file); isMain=0;}}
				                       | ;

Variables_locales 		: Variables_locales Cuerpo_declar_variables
				                | Cuerpo_declar_variables ;

Cuerpo_declar_variables 	: TIPO_BASICO
								{tipoTMP = $1.type;tipoArray = $1.type;} //CI
								{ setType($1); } Lista_de_variables PUNTO_Y_COMA
							| error {hayError=1;};

Lista_de_variables		: Lista_de_variables  COMA  variable
				              |  variable ;

variable			: ID {
						if(decVar == 1){
							$1.nDim=0; $1.tDim1 = 0; $1.tDim2 = 0; tsAddId($1);
							{ generaDecVar($1); }//CI
						}
						else{
							if(decParam == 0)
							tsGetId($1, &$$);
						}
						if(decEnt == 1){tsGetId($1, &$$); generaEntSal(1, $$);}
					}
				 |  ID ABRE_CORCHETE CONST_ENTERO_SIN_SIGNO CIERRA_CORCHETE {
						if(decVar == 1) {
							$1.nDim=1; $1.tDim1=atoi($3.lex); $1.tDim2=0; tsAddId($1);
							{ generaDecVar($1); }//CI
						}
						if(decEnt == 1){tsGetId($1, &$$); generaEntSal(1, $$);}
				}
				 |  ID ABRE_CORCHETE CONST_ENTERO_SIN_SIGNO  CIERRA_CORCHETE ABRE_CORCHETE CONST_ENTERO_SIN_SIGNO  CIERRA_CORCHETE {
					if(decVar == 1) {
						$1.nDim=2; $1.tDim1=atoi($3.lex); $1.tDim2=atoi($6.lex); tsAddId($1);
						{ generaDecVar($1); }//CI
					}
					if(decEnt == 1){tsGetId($1, &$$); generaEntSal(1, $$);}
				};

var_array			: ID {
					if(decVar == 1){
						$1.nDim=0; $1.tDim1 = 0; $1.tDim2 = 0; tsAddId($1);
					} else{
						if(decParam == 0)
							tsGetId($1, &$$);
					}

				}
				 |  ID ABRE_CORCHETE expresion CIERRA_CORCHETE {

						if(decVar == 2) {

							tsGetId($1, &$$);

							$$.tDim1 = $3.tDim1;
							$$.tDim2 = $3.tDim2;
							$$.nDim = $$.nDim -1;
						}
						char * sent;
						sent = (char *) malloc(1000);
						sprintf(sent,"%s[%s]",$1.lex,$3.lex);
						$$.lex=sent;
						//Fin de traducción de la asignación\n",a.lex,b.lex);

					}
				 |  ID ABRE_CORCHETE expresion CIERRA_CORCHETE ABRE_CORCHETE expresion CIERRA_CORCHETE {

					if(decVar == 2) {
						tsGetId($1, &$$);
						$$.tDim1 = $3.tDim1;
						$$.tDim2 = $6.tDim2;
						$$.nDim = $$.nDim -2;
					}
					char * sent;
					sent = (char *) malloc(1000);
					sprintf(sent,"%s[%s][%s]",$1.lex,$3.lex,$6.lex);
					$$.lex=sent;
				};

Cabecera_subprograma 		: TIPO_BASICO ID { decParam = 1; } { tsAddSubprog($2); generaCabeceraFuncion($2);} ABRE_PARENTESIS Cabecera_subprograma_2;

Cabecera_subprograma_2		: Lista_de_parametros CIERRA_PARENTESIS { tsUpdateNparam($1); nParam = 0; decParam = 0; } {$1.nDim=0;fputs(")\n",file);}
							| CIERRA_PARENTESIS {fputs(")\n",file); decParam = 0;};
;


Lista_de_parametros		: Lista_de_parametros COMA TIPO_BASICO  variable { $4.nDim=0; nParam++; setType($3); tsAddParam($4); generarListaParametros($3,$4);}
				 |  TIPO_BASICO  variable { $2.nDim=0; nParam++; setType($1); tsAddParam($2); generarPrimerParametro($1,$2);}
				 | error ;

Sentencias 			: Sentencias {decVar = 2; } Sentencia
				 | { decVar = 2; } Sentencia ;

Sentencia 			: bloque
				 | sentencia_asignacion
				 | sentencia_hacer_hasta {eliminaDesc();}
			   | sentencia_condicion {decIF--;eliminaDesc();}
			   | sentencia_mientras {eliminaDesc();}
				 | sentencia_entrada
				 | sentencia_salida
				 | sentencia_devolver;

sentencia_asignacion 	: var_array OP_ASIG {isAsig=1;} expresion PUNTO_Y_COMA  {

				if($1.type!=$4.type){
					printf("Error Semantico(%d): No son del mismo tipo.\n",line, $1.type, $3.type);
					//hayError=1;
				}
				if(!equalSize($1,$4)){
					printf("Error Semantico(%d): Los tamanios no son iguales.\n",line);
					//hayError=1;
				}
			}
			{ generaAsignacion($1,$2,$4); isAsig=0;} //CI ;

sentencia_hacer_hasta	: HACER {insertaDesc(2);insertaEtiqEntrada();fputs("{\n",file);} Sentencia HASTA ABRE_PARENTESIS expresion CIERRA_PARENTESIS PUNTO_Y_COMA {
						if($6.type != BOOLEANO){
							printf("Error Semantico(%d): No es una expresion logica.\n", line);
						}else{
							generaDoWhile($6);
							fputs("}\n",file);
						}
					} ;

sentencia_mientras 		: MIENTRAS ABRE_PARENTESIS {insertaDesc(2);insertaEtiqEntrada();fputs("{\n",file);} expresion CIERRA_PARENTESIS  {
						if($4.type != BOOLEANO){
							printf("Error Semantico(%d): No es una expresion logica..\n", line);
						}else{
							generaWhile($4);
							fputs("}\n",file);
						}
					} Sentencia {insertaGotoEntrada();insertaEtiqSalida();};

sentencia_condicion : SI { decIF++;insertaDesc(1);fputs("{ // comienzo de la traducción del if\n",file);}
								ABRE_PARENTESIS expresion
								{
									if($4.type != BOOLEANO){
										printf("Error Semantico(%d): No es una expresion logica..\n", line);
									}else{
										generaIf($4);
									}
								}
								sentencia_condicion_interior
								{$$.lex = $4.lex;
								fputs("}\n",file);
								fputs("} //fin de la traducción del if\n",file);
								insertaEtiqSalida();}

sentencia_condicion_interior: CIERRA_PARENTESIS ENTONCES Sentencia
	{
		//fputs("}\n",file);
		insertaEtiqElse();
		fputs("{\n",file);

	}
| CIERRA_PARENTESIS ENTONCES Sentencia SI_NO {
		//fputs("Aquí ELSE//\n",file);
		decElse=1;
		//fputs("}\n",file);
		insertaEtiqElse();
		fputs("{\n",file);
		decElse=0;}
	Sentencia
;

sentencia_entrada 		: ESCANEAR {decEnt=1;} Lista_de_variables PUNTO_Y_COMA  {decEnt=0;};

sentencia_salida 		: IMPRIMIR {decSal=1;} lista_expresiones_cadena PUNTO_Y_COMA {nParam = 0;} {decSal=0;} ;

sentencia_devolver		: DEVOLVER expresion { tsCheckReturn($2,&$$); fputs("return ",file); fputs($2.lex, file); fputs(";\n", file);} PUNTO_Y_COMA ;

expresion 			: ABRE_PARENTESIS expresion CIERRA_PARENTESIS {$$.lex=$2.lex; $$.type = $2.type; $$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2; }
				 | OP_UNARIO  expresion {tsOpUnary($1, $2, &$$); }
				 | OP_SIGNO expresion { tsOpSign($1, $2, &$$); generaExpresionSigno($1,$2,&$$);} %prec OP_UNARIO
				 | expresion OP_OR expresion {tsOpOr($1, $2, $3, &$$); generaExpresion($1,$2,$3,&$$); } //CI
				 | expresion OP_AND expresion {tsOpAnd($1, $2, $3, &$$); generaExpresion($1,$2,$3,&$$); } //CI
				 | expresion OP_XOR expresion {tsOpXor($1, $2, $3, &$$); generaExpresion($1,$2,$3,&$$); } //CI
				 | expresion OP_IGUALDAD expresion {tsOpEqual($1, $2, $3, &$$); generaExpresion($1,$2,$3,&$$); } //CI
				 | expresion OP_RELACION expresion {tsOpRel($1, $2, $3, &$$); generaExpresion($1,$2,$3,&$$); } //CI
				 | expresion OP_MULT expresion {tsOpMul($1, $2, $3, &$$); generaExpresion($1,$2,$3,&$$); } //CI
				 | expresion OP_SIGNO  expresion {tsOpSignBin($1, $2, $3, &$$); generaExpresion($1,$2,$3,&$$); } //CI
				 | var_array { decVar = 0 ;$$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2;}
				 | constante {$$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; }
				 | funcion {$$.lex=$1.lex; $$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; /*currentFunction = -1;*/}
				 | error;

lista_expresiones		: lista_expresiones COMA expresion { nParam++; tsCheckParam($3, nParam); generarListaExpresiones($3);}
				 | expresion { nParam++; tsCheckParam($1, nParam);generarPrimeraExpresion($1);}
				 | ;

lista_expresiones_cadena : lista_expresiones_cadena  COMA  exp_cad
                         | exp_cad ;

exp_cad : expresion {if(decSal == 1){generaEntSal(2,$1);}}
        | CADENA {generaEntSal(3,$1);};


constante	: CONST_ENTERO_SIN_SIGNO { $$.type = ENTERO; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
					| CONST_LOGICA { $$.type = BOOLEANO; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
					| CONST_FLOTANTE { $$.type = FLOTANTE; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
					| CONST_CARACTER  { $$.type = CARACTER; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; } ;
				  | const_matriz { aux = 1; $$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; };

const_matriz : INICIO_BLOQUE lista_tipos_basicos FIN_BLOQUE { $$.type = $2.type; $$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2;} ;

lista_tipos_basicos		: lista_tipos_basicos COMA  constante
				              | constante ;

funcion			: ID {currentFunction=tsSearchName($1);primeraExpresion=0;} ABRE_PARENTESIS lista_expresiones CIERRA_PARENTESIS { tsFunctionCall($1, &$$); nParam=0; generarNombreFuncion($1, &$$);};

%%

// Aqui incluimos el fichero generado por el ’lex’ que implementa la función
// ’yylex’

#ifdef DOSWINDOWS /* Variable de entorno que indica la plataforma */
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif

// Se debe implementar la función yyerror. En este caso simplemente escribimos
// el mensaje de error en pantalla
void yyerror( char *msg ){
	fprintf(stderr, "Línea %d: %s\n", yylineno, msg) ;
}
