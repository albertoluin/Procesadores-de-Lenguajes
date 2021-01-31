/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */


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


#line 104 "yacc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 194 "yacc.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    86,    91,    92,    97,    91,   100,   101,
     103,   103,   103,   105,   106,   108,   105,   110,   112,   113,
     116,   117,   115,   118,   120,   121,   123,   134,   141,   149,
     158,   175,   189,   189,   189,   191,   191,   192,   196,   197,
     198,   200,   200,   201,   201,   203,   204,   205,   206,   207,
     208,   209,   210,   212,   212,   212,   225,   225,   234,   234,
     234,   243,   245,   243,   258,   265,   265,   275,   275,   277,
     277,   277,   279,   279,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   296,   297,
     298,   300,   301,   303,   304,   307,   308,   309,   310,   311,
     313,   315,   316,   318,   318
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_OR", "OP_AND", "OP_XOR",
  "OP_IGUALDAD", "OP_RELACION", "OP_SIGNO", "OP_MULT", "OP_UNARIO", "COMA",
  "PUNTO_Y_COMA", "CONST_LOGICA", "CONST_CARACTER", "CONST_FLOTANTE",
  "INIVAR", "FINVAR", "PRINCIPAL", "INICIO_BLOQUE", "FIN_BLOQUE",
  "TIPO_BASICO", "ABRE_CORCHETE", "CIERRA_CORCHETE", "ID",
  "CONST_ENTERO_SIN_SIGNO", "HACER", "HASTA", "SI", "ENTONCES", "SI_NO",
  "MIENTRAS", "ESCANEAR", "IMPRIMIR", "DEVOLVER", "CADENA",
  "ABRE_PARENTESIS", "CIERRA_PARENTESIS", "OP_ASIG", "$accept", "Programa",
  "$@1", "bloque", "$@2", "$@3", "$@4", "Declar_de_subprogs",
  "Declar_subprog", "$@5", "$@6", "Declar_de_variables_locales", "$@7",
  "$@8", "$@9", "Variables_locales", "Cuerpo_declar_variables", "$@10",
  "$@11", "Lista_de_variables", "variable", "var_array",
  "Cabecera_subprograma", "$@12", "$@13", "Cabecera_subprograma_2", "$@14",
  "Lista_de_parametros", "Sentencias", "$@15", "$@16", "Sentencia",
  "sentencia_asignacion", "@17", "$@18", "sentencia_hacer_hasta", "$@19",
  "sentencia_mientras", "$@20", "$@21", "sentencia_condicion", "$@22",
  "$@23", "sentencia_condicion_interior", "$@24", "sentencia_entrada",
  "$@25", "sentencia_salida", "$@26", "$@27", "sentencia_devolver", "@28",
  "expresion", "lista_expresiones", "lista_expresiones_cadena", "exp_cad",
  "constante", "const_matriz", "lista_tipos_basicos", "funcion", "$@29", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF -107

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-107)))

#define YYTABLE_NINF -104

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -107,    36,    30,  -107,     4,  -107,  -107,  -107,    42,  -107,
      76,    63,  -107,  -107,    77,    90,   156,    25,    96,  -107,
    -107,   156,    97,  -107,  -107,    78,  -107,  -107,   117,  -107,
      83,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,    24,  -107,  -107,     4,  -107,  -107,   117,   156,    86,
    -107,   100,    80,  -107,   117,   117,  -107,  -107,  -107,    98,
      11,  -107,   117,  -107,   198,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,   153,   101,   117,   117,   112,    27,
    -107,  -107,   198,    67,  -107,  -107,  -107,  -107,    20,    99,
       5,   117,   117,   117,   117,   117,   117,   117,   125,   117,
     100,  -107,   102,   118,   116,   198,    12,   129,   100,  -107,
      80,  -107,    98,  -107,    72,  -107,   204,    56,    47,    68,
      92,   161,  -107,  -107,   188,    95,     6,   117,   117,   134,
    -107,   149,  -107,  -107,  -107,  -107,   198,    13,  -107,  -107,
    -107,   100,  -107,  -107,    23,   160,   141,   144,  -107,   156,
     152,   117,  -107,  -107,  -107,   158,  -107,  -107,   165,   156,
    -107,   173,   198,   100,  -107,  -107,   151,   162,  -107,  -107,
    -107,   156,  -107
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     3,     5,    17,     9,
       0,    43,    14,     8,     0,    41,     0,     0,     0,    11,
       6,     0,    29,    56,    61,     0,    67,    69,     0,    45,
       0,    44,    46,    47,    49,    48,    50,    51,    52,    23,
      20,     0,    19,    32,     0,     7,    42,     0,     0,     0,
      58,     0,     0,    87,     0,     0,    96,    98,    97,     0,
      29,    95,     0,    84,    72,    85,    99,    86,    53,    21,
      15,    18,    33,    12,     0,     0,     0,     0,    26,     0,
      25,    94,    93,     0,    92,    76,    75,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,    30,     0,    62,     0,     0,     0,    68,
       0,    70,     0,   100,     0,    74,    77,    78,    79,    80,
      81,    83,    82,    73,     0,     0,     0,     0,     0,     0,
      59,     0,    24,    91,    71,   101,    89,     0,    54,    22,
      40,     0,    37,    34,     0,     0,     0,     0,    63,     0,
      27,     0,   104,    55,    39,     0,    35,    31,     0,     0,
      60,     0,    88,     0,    36,    57,    64,     0,    38,    65,
      28,     0,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,   145,  -107,  -107,   114,
    -106,   -16,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,   -20,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,   -25,  -107,  -107,    89,   -53,  -107,  -107,  -107,
    -107
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    29,     7,     8,    45,    11,    13,    14,
      44,     9,    10,    17,   101,    41,    42,    69,   100,    79,
      80,    63,    19,    72,   102,   143,   164,   144,    15,    21,
      16,    31,    32,    99,   153,    33,    48,    34,    77,   149,
      35,    49,   129,   148,   171,    36,    51,    37,    52,   134,
      38,    98,    82,   137,    83,    84,    65,    66,    88,    67,
      89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    46,   132,    64,     6,    30,    87,   140,    91,    92,
      93,    94,    95,    96,    97,    91,    92,    93,    94,    95,
      96,    97,    74,     5,   151,    39,    39,   141,    75,    85,
      86,   112,    30,    47,   155,   154,     3,    90,   108,   109,
     113,    70,   115,   142,    73,    40,    40,  -103,     4,   130,
     152,   105,   106,    94,    95,    96,    97,   168,   -13,   135,
     156,    93,    94,    95,    96,    97,   116,   117,   118,   119,
     120,   121,   122,    53,   124,    95,    96,    97,   110,   111,
      54,    53,    55,   -90,   -10,    56,    57,    58,    54,   136,
      55,    59,    12,    56,    57,    58,    60,    61,    18,    59,
      96,    97,   145,   146,    60,    61,   108,   139,    62,   -90,
      20,    56,    57,    58,    50,    81,    62,    59,    53,    47,
      43,    68,    76,    61,    78,    54,   162,    55,   104,   160,
      56,    57,    58,    30,   107,   114,    59,   123,   126,   166,
     127,    60,    61,    30,    91,    92,    93,    94,    95,    96,
      97,   172,   128,    62,   131,    30,    91,    92,    93,    94,
      95,    96,    97,    91,    92,    93,    94,    95,    96,    97,
      97,   147,   150,   159,   161,     5,   103,   165,   158,   163,
      22,   169,    23,   157,    24,   170,    71,    25,    26,    27,
      28,    91,    92,    93,    94,    95,    96,    97,   167,   133,
     138,    91,    92,    93,    94,    95,    96,    97,    92,    93,
      94,    95,    96,    97,   125
};

static const yytype_uint8 yycheck[] =
{
      16,    21,   108,    28,     4,    21,    59,     1,     3,     4,
       5,     6,     7,     8,     9,     3,     4,     5,     6,     7,
       8,     9,    47,    19,    11,     1,     1,    21,    48,    54,
      55,    11,    48,    22,    11,   141,     0,    62,    11,    12,
      20,    17,    37,    37,    44,    21,    21,    36,    18,    37,
      37,    76,    77,     6,     7,     8,     9,   163,    16,   112,
      37,     5,     6,     7,     8,     9,    91,    92,    93,    94,
      95,    96,    97,     1,    99,     7,     8,     9,    11,    12,
       8,     1,    10,    11,    21,    13,    14,    15,     8,   114,
      10,    19,    16,    13,    14,    15,    24,    25,    21,    19,
       8,     9,   127,   128,    24,    25,    11,    12,    36,    37,
      20,    13,    14,    15,    36,    35,    36,    19,     1,    22,
      24,    38,    36,    25,    24,     8,   151,    10,    27,   149,
      13,    14,    15,   149,    22,    36,    19,    12,    36,   159,
      22,    24,    25,   159,     3,     4,     5,     6,     7,     8,
       9,   171,    36,    36,    25,   171,     3,     4,     5,     6,
       7,     8,     9,     3,     4,     5,     6,     7,     8,     9,
       9,    37,    23,    29,    22,    19,    23,    12,    37,    21,
      24,    30,    26,    23,    28,    23,    41,    31,    32,    33,
      34,     3,     4,     5,     6,     7,     8,     9,    25,   110,
      12,     3,     4,     5,     6,     7,     8,     9,     4,     5,
       6,     7,     8,     9,   100
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,    18,    19,    42,    43,    44,    50,
      51,    46,    16,    47,    48,    67,    69,    52,    21,    61,
      20,    68,    24,    26,    28,    31,    32,    33,    34,    42,
      60,    70,    71,    74,    76,    79,    84,    86,    89,     1,
      21,    54,    55,    24,    49,    45,    70,    22,    75,    80,
      36,    85,    87,     1,     8,    10,    13,    14,    15,    19,
      24,    25,    36,    60,    91,    95,    96,    98,    38,    56,
      17,    55,    62,    42,    91,    70,    36,    77,    24,    58,
      59,    35,    91,    93,    94,    91,    91,    95,    97,    99,
      91,     3,     4,     5,     6,     7,     8,     9,    90,    72,
      57,    53,    63,    23,    27,    91,    91,    22,    11,    12,
      11,    12,    11,    20,    36,    37,    91,    91,    91,    91,
      91,    91,    91,    12,    91,    58,    36,    22,    36,    81,
      37,    25,    59,    94,    88,    95,    91,    92,    12,    12,
       1,    21,    37,    64,    66,    91,    91,    37,    82,    78,
      23,    11,    37,    73,    59,    11,    37,    23,    37,    29,
      70,    22,    91,    21,    65,    12,    70,    25,    59,    30,
      23,    83,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    41,    40,    43,    44,    45,    42,    46,    46,
      48,    49,    47,    51,    52,    53,    50,    50,    54,    54,
      56,    57,    55,    55,    58,    58,    59,    59,    59,    60,
      60,    60,    62,    63,    61,    65,    64,    64,    66,    66,
      66,    68,    67,    69,    67,    70,    70,    70,    70,    70,
      70,    70,    70,    72,    73,    71,    75,    74,    77,    78,
      76,    80,    81,    79,    82,    83,    82,    85,    84,    87,
      88,    86,    90,    89,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    93,    93,    94,    94,    95,    95,    95,    95,    95,
      96,    97,    97,    99,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     0,     0,     8,     2,     0,
       0,     0,     4,     0,     0,     0,     6,     0,     2,     1,
       0,     0,     5,     1,     3,     1,     1,     4,     7,     1,
       4,     7,     0,     0,     6,     0,     3,     1,     4,     2,
       1,     0,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     6,     0,     8,     0,     0,
       7,     0,     0,     6,     3,     0,     6,     0,     4,     0,
       0,     5,     0,     4,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     0,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 86 "yacc.y" /* yacc.c:1646  */
    { generaFich(); }
#line 1419 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "yacc.y" /* yacc.c:1646  */
    { closeInter(); }
#line 1425 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "yacc.y" /* yacc.c:1646  */
    { tsAddMark(); }
#line 1431 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 92 "yacc.y" /* yacc.c:1646  */
    {if (isMain==0){ fputs("{\n",file); }}
#line 1437 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "yacc.y" /* yacc.c:1646  */
    { fputs("}\n",file); }
#line 1443 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "yacc.y" /* yacc.c:1646  */
    { tsCleanIn(); }
#line 1449 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 103 "yacc.y" /* yacc.c:1646  */
    {numSubPro++;if(numSubPro==1)file = fileSubProg;}
#line 1455 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "yacc.y" /* yacc.c:1646  */
    { subProg = 1; }
#line 1461 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 103 "yacc.y" /* yacc.c:1646  */
    {subProg=0;numSubPro--;if(numSubPro==0)file=fileMain;}
#line 1467 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 105 "yacc.y" /* yacc.c:1646  */
    { varPrinc++;	}
#line 1473 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 106 "yacc.y" /* yacc.c:1646  */
    { decVar = 1; }
#line 1479 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 108 "yacc.y" /* yacc.c:1646  */
    { decVar = 0; }
#line 1485 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 109 "yacc.y" /* yacc.c:1646  */
    {if(isMain==1){fputs("\n#include \"dec_fun.c\"\n\nint main(int argc, char *argv[] ){\n",file); isMain=0;}}
#line 1491 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 116 "yacc.y" /* yacc.c:1646  */
    {printf("hola\n" );tipoTMP = (yyvsp[0]).type;tipoArray = (yyvsp[0]).type;}
#line 1497 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 117 "yacc.y" /* yacc.c:1646  */
    { setType((yyvsp[-1])); }
#line 1503 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "yacc.y" /* yacc.c:1646  */
    {hayError=1;}
#line 1509 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 123 "yacc.y" /* yacc.c:1646  */
    {
						if(decVar == 1){
							(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
							{ generaDecVar((yyvsp[0])); }//CI
						}
						else{
							if(decParam == 0)
							tsGetId((yyvsp[0]), &(yyval));
						}
						if(decEnt == 1){tsGetId((yyvsp[0]), &(yyval)); generaEntSal(1, (yyval));}
					}
#line 1525 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 134 "yacc.y" /* yacc.c:1646  */
    {
						if(decVar == 1) {
							(yyvsp[-3]).nDim=1; (yyvsp[-3]).tDim1=atoi((yyvsp[-1]).lex); (yyvsp[-3]).tDim2=0; tsAddId((yyvsp[-3]));
							{ generaDecVar((yyvsp[-3])); }//CI
						}
						if(decEnt == 1){tsGetId((yyvsp[-3]), &(yyval)); generaEntSal(1, (yyval));}
				}
#line 1537 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 141 "yacc.y" /* yacc.c:1646  */
    {
					if(decVar == 1) {
						(yyvsp[-6]).nDim=2; (yyvsp[-6]).tDim1=atoi((yyvsp[-4]).lex); (yyvsp[-6]).tDim2=atoi((yyvsp[-1]).lex); tsAddId((yyvsp[-6]));
						{ generaDecVar((yyvsp[-6])); }//CI
					}
					if(decEnt == 1){tsGetId((yyvsp[-6]), &(yyval)); generaEntSal(1, (yyval));}
				}
#line 1549 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "yacc.y" /* yacc.c:1646  */
    {
					if(decVar == 1){
						(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
					} else{
						if(decParam == 0)
							tsGetId((yyvsp[0]), &(yyval));
					}

				}
#line 1563 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 158 "yacc.y" /* yacc.c:1646  */
    {

						if(decVar == 2) {

							tsGetId((yyvsp[-3]), &(yyval));

							(yyval).tDim1 = (yyvsp[-1]).tDim1;
							(yyval).tDim2 = (yyvsp[-1]).tDim2;
							(yyval).nDim = (yyval).nDim -1;
						}
						char * sent;
						sent = (char *) malloc(1000);
						sprintf(sent,"%s[%s]",(yyvsp[-3]).lex,(yyvsp[-1]).lex);
						(yyval).lex=sent;
						//Fin de traducción de la asignación\n",a.lex,b.lex);

					}
#line 1585 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 175 "yacc.y" /* yacc.c:1646  */
    {

					if(decVar == 2) {
						tsGetId((yyvsp[-6]), &(yyval));
						(yyval).tDim1 = (yyvsp[-4]).tDim1;
						(yyval).tDim2 = (yyvsp[-1]).tDim2;
						(yyval).nDim = (yyval).nDim -2;
					}
					char * sent;
					sent = (char *) malloc(1000);
					sprintf(sent,"%s[%s][%s]",(yyvsp[-6]).lex,(yyvsp[-4]).lex,(yyvsp[-1]).lex);
					(yyval).lex=sent;
				}
#line 1603 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 189 "yacc.y" /* yacc.c:1646  */
    { printf("hola 2\n" ); decParam = 1; }
#line 1609 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 189 "yacc.y" /* yacc.c:1646  */
    { tsAddSubprog((yyvsp[-1])); generaCabeceraFuncion((yyvsp[-1]));}
#line 1615 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 191 "yacc.y" /* yacc.c:1646  */
    { tsUpdateNparam((yyvsp[-1])); nParam = 0; decParam = 0; }
#line 1621 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 191 "yacc.y" /* yacc.c:1646  */
    {(yyvsp[-2]).nDim=0;fputs(")\n",file);}
#line 1627 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 192 "yacc.y" /* yacc.c:1646  */
    {fputs(")\n",file); decParam = 0;}
#line 1633 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 196 "yacc.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); generarListaParametros((yyvsp[-1]),(yyvsp[0]));}
#line 1639 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 197 "yacc.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); generarPrimerParametro((yyvsp[-1]),(yyvsp[0]));}
#line 1645 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 200 "yacc.y" /* yacc.c:1646  */
    {decVar = 2; }
#line 1651 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 201 "yacc.y" /* yacc.c:1646  */
    { decVar = 2; }
#line 1657 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 205 "yacc.y" /* yacc.c:1646  */
    {eliminaDesc();}
#line 1663 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 206 "yacc.y" /* yacc.c:1646  */
    {decIF--;eliminaDesc();}
#line 1669 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 207 "yacc.y" /* yacc.c:1646  */
    {eliminaDesc();}
#line 1675 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 212 "yacc.y" /* yacc.c:1646  */
    {isAsig=1;}
#line 1681 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 212 "yacc.y" /* yacc.c:1646  */
    {

				if((yyvsp[-4]).type!=(yyvsp[-1]).type){
					printf("Error Semantico(%d): No son del mismo tipo.\n",line, (yyvsp[-4]).type, (yyvsp[-2]).type);
					//hayError=1;
				}
				if(!equalSize((yyvsp[-4]),(yyvsp[-1]))){
					printf("Error Semantico(%d): Los tamanios no son iguales.\n",line);
					//hayError=1;
				}
			}
#line 1697 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 223 "yacc.y" /* yacc.c:1646  */
    { generaAsignacion((yyvsp[-5]),(yyvsp[-4]),(yyvsp[-2])); isAsig=0;}
#line 1703 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 225 "yacc.y" /* yacc.c:1646  */
    {insertaDesc(2);insertaEtiqEntrada();fputs("{\n",file);}
#line 1709 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "yacc.y" /* yacc.c:1646  */
    {
						if((yyvsp[-2]).type != BOOLEANO){
							printf("Error Semantico(%d): No es una expresion logica.\n", line);
						}else{
							generaDoWhile((yyvsp[-2]));
							fputs("}\n",file);
						}
					}
#line 1722 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 234 "yacc.y" /* yacc.c:1646  */
    {insertaDesc(2);insertaEtiqEntrada();fputs("{\n",file);}
#line 1728 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 234 "yacc.y" /* yacc.c:1646  */
    {
						if((yyvsp[-1]).type != BOOLEANO){
							printf("Error Semantico(%d): No es una expresion logica..\n", line);
						}else{
							generaWhile((yyvsp[-1]));
							fputs("}\n",file);
						}
					}
#line 1741 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 241 "yacc.y" /* yacc.c:1646  */
    {insertaGotoEntrada();insertaEtiqSalida();}
#line 1747 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 243 "yacc.y" /* yacc.c:1646  */
    { decIF++;insertaDesc(1);fputs("{ // comienzo de la traducción del if\n",file);}
#line 1753 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 245 "yacc.y" /* yacc.c:1646  */
    {
									if((yyvsp[0]).type != BOOLEANO){
										printf("Error Semantico(%d): No es una expresion logica..\n", line);
									}else{
										generaIf((yyvsp[0]));
									}
								}
#line 1765 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 253 "yacc.y" /* yacc.c:1646  */
    {(yyval).lex = (yyvsp[-2]).lex;
								fputs("}\n",file);
								fputs("} //fin de la traducción del if\n",file);
								insertaEtiqSalida();}
#line 1774 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 259 "yacc.y" /* yacc.c:1646  */
    {
		//fputs("}\n",file);
		insertaEtiqElse();
		fputs("{\n",file);

	}
#line 1785 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 265 "yacc.y" /* yacc.c:1646  */
    {
		//fputs("Aquí ELSE//\n",file);
		decElse=1;
		//fputs("}\n",file);
		insertaEtiqElse();
		fputs("{\n",file);
		decElse=0;}
#line 1797 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 275 "yacc.y" /* yacc.c:1646  */
    {decEnt=1;}
#line 1803 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 275 "yacc.y" /* yacc.c:1646  */
    {decEnt=0;}
#line 1809 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 277 "yacc.y" /* yacc.c:1646  */
    {decSal=1;}
#line 1815 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 277 "yacc.y" /* yacc.c:1646  */
    {nParam = 0;}
#line 1821 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 277 "yacc.y" /* yacc.c:1646  */
    {decSal=0;}
#line 1827 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 279 "yacc.y" /* yacc.c:1646  */
    { tsCheckReturn((yyvsp[0]),&(yyval)); fputs("return ",file); fputs((yyvsp[0]).lex, file); fputs(";\n", file);}
#line 1833 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 281 "yacc.y" /* yacc.c:1646  */
    {(yyval).lex=(yyvsp[-1]).lex; (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2; }
#line 1839 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 282 "yacc.y" /* yacc.c:1646  */
    {tsOpUnary((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1845 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 283 "yacc.y" /* yacc.c:1646  */
    { tsOpSign((yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresionSigno((yyvsp[-1]),(yyvsp[0]),&(yyval));}
#line 1851 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 284 "yacc.y" /* yacc.c:1646  */
    {tsOpOr((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval)); }
#line 1857 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 285 "yacc.y" /* yacc.c:1646  */
    {tsOpAnd((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval)); }
#line 1863 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 286 "yacc.y" /* yacc.c:1646  */
    {tsOpXor((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval)); }
#line 1869 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 287 "yacc.y" /* yacc.c:1646  */
    {tsOpEqual((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval)); }
#line 1875 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 288 "yacc.y" /* yacc.c:1646  */
    {tsOpRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval)); }
#line 1881 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 289 "yacc.y" /* yacc.c:1646  */
    {tsOpMul((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval)); }
#line 1887 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 290 "yacc.y" /* yacc.c:1646  */
    {tsOpSignBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); generaExpresion((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),&(yyval)); }
#line 1893 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 291 "yacc.y" /* yacc.c:1646  */
    { decVar = 0 ;(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2;}
#line 1899 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 292 "yacc.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1905 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 293 "yacc.y" /* yacc.c:1646  */
    {(yyval).lex=(yyvsp[0]).lex; (yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; /*currentFunction = -1;*/}
#line 1911 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 296 "yacc.y" /* yacc.c:1646  */
    { nParam++; tsCheckParam((yyvsp[0]), nParam); generarListaExpresiones((yyvsp[0]));}
#line 1917 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 297 "yacc.y" /* yacc.c:1646  */
    { nParam++; tsCheckParam((yyvsp[0]), nParam);generarPrimeraExpresion((yyvsp[0]));}
#line 1923 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 303 "yacc.y" /* yacc.c:1646  */
    {if(decSal == 1){generaEntSal(2,(yyvsp[0]));}}
#line 1929 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 304 "yacc.y" /* yacc.c:1646  */
    {generaEntSal(3,(yyvsp[0]));}
#line 1935 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 307 "yacc.y" /* yacc.c:1646  */
    { (yyval).type = ENTERO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1941 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 308 "yacc.y" /* yacc.c:1646  */
    { (yyval).type = BOOLEANO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1947 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 309 "yacc.y" /* yacc.c:1646  */
    { (yyval).type = FLOTANTE; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1953 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 310 "yacc.y" /* yacc.c:1646  */
    { (yyval).type = CARACTER; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1959 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 311 "yacc.y" /* yacc.c:1646  */
    { aux = 1; (yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1965 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 313 "yacc.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2;}
#line 1971 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 318 "yacc.y" /* yacc.c:1646  */
    {currentFunction=tsSearchName((yyvsp[0]));primeraExpresion=0;}
#line 1977 "yacc.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 318 "yacc.y" /* yacc.c:1646  */
    { tsFunctionCall((yyvsp[-4]), &(yyval)); nParam=0; generarNombreFuncion((yyvsp[-4]), &(yyval));}
#line 1983 "yacc.tab.c" /* yacc.c:1646  */
    break;


#line 1987 "yacc.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 320 "yacc.y" /* yacc.c:1906  */


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
