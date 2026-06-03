/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "interpreter.y"

#include <iostream>
#include <string>

/*******************************************/
/* NEW in example 5 */
/* pow */
#include <math.h>
/*******************************************/

/*******************************************/
/* NEW in example 6 */
/* Use for recovery of runtime errors */
#include <setjmp.h>
#include <signal.h>
/*******************************************/

/* Error recovery functions */
#include "../error/error.hpp"

/* Macros for the screen */
#include "../includes/macros.hpp"


/*******************************************/
/* 
  NEW in example 16
  AST class
  IMPORTANT: this file must be before init.hpp
*/
#include "../ast/ast.hpp"


/*******************************************/
/* NEW in example 7 */
/* Table of symbol */
#include "../table/table.hpp"
/*******************************************/

/*******************************************/
#include "../table/numericVariable.hpp"
/*******************************************/

/* NEW in example 15 */
#include "../table/logicalVariable.hpp"

/*******************************************/
/* NEW in example 11 */
#include "../table/numericConstant.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 15 */
#include "../table/logicalConstant.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 13 */
#include "../table/builtinParameter1.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 14 */
#include "../table/builtinParameter0.hpp"
#include "../table/builtinParameter2.hpp"
/*******************************************/


/*******************************************/
/* NEW in example 10 */
#include "../table/init.hpp"
/*******************************************/

/*! 
	\brief  Lexical or scanner function
	\return int
	\note   C++ requires that yylex returns an int value
	\sa     yyparser
*/
int yylex();


extern int lineNumber; //!< External line counter


/* NEW in example 15 */
extern bool interactiveMode; //!< Control the interactive mode of execution of the interpreter

/* New in example 17 */
extern int control; //!< External: to control the interactive mode in "if" and "while" sentences 

/***********************************************************/
/* NEW in example 2 */
extern std::string progname; //!<  Program name
/***********************************************************/

/*******************************************/
/* NEW in example 6 */
/*
 jhmp_buf
    This is an array type capable of storing the information of a calling environment to be restored later.
   This information is filled by calling macro setjmp and can be restored by calling function longjmp.
*/
jmp_buf begin; //!<  It enables recovery of runtime errors 
/*******************************************/


/*******************************************/
/* NEW in example 7 */
extern lp::Table table; //!< Extern Table of Symbols

/*******************************************/
/* NEW in example 16 */
extern lp::AST *root; //!< External root of the abstract syntax tree AST


#line 188 "interpreter.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "interpreter.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* SEMICOLON  */
  YYSYMBOL_COMMA = 4,                      /* COMMA  */
  YYSYMBOL_LETFCURLYBRACKET = 5,           /* LETFCURLYBRACKET  */
  YYSYMBOL_RIGHTCURLYBRACKET = 6,          /* RIGHTCURLYBRACKET  */
  YYSYMBOL_ASSIGNMENT = 7,                 /* ASSIGNMENT  */
  YYSYMBOL_PRINT = 8,                      /* PRINT  */
  YYSYMBOL_READ = 9,                       /* READ  */
  YYSYMBOL_READ_STRING = 10,               /* READ_STRING  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_THEN = 12,                      /* THEN  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_END_IF = 14,                    /* END_IF  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_DO = 16,                        /* DO  */
  YYSYMBOL_END_WHILE = 17,                 /* END_WHILE  */
  YYSYMBOL_REPEAT = 18,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 19,                     /* UNTIL  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_FROM = 21,                      /* FROM  */
  YYSYMBOL_TO = 22,                        /* TO  */
  YYSYMBOL_STEP = 23,                      /* STEP  */
  YYSYMBOL_END_FOR = 24,                   /* END_FOR  */
  YYSYMBOL_SWITCH = 25,                    /* SWITCH  */
  YYSYMBOL_CASE = 26,                      /* CASE  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_END_SWITCH = 28,                /* END_SWITCH  */
  YYSYMBOL_CONCATENATION = 29,             /* CONCATENATION  */
  YYSYMBOL_DO_WHILE = 30,                  /* DO_WHILE  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_CLEAR_SCREEN_CMD = 34,          /* CLEAR_SCREEN_CMD  */
  YYSYMBOL_PLACE_CMD = 35,                 /* PLACE_CMD  */
  YYSYMBOL_INC = 36,                       /* INC  */
  YYSYMBOL_DEC = 37,                       /* DEC  */
  YYSYMBOL_FACT = 38,                      /* FACT  */
  YYSYMBOL_PLUS_ASSIGN = 39,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 40,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 41,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 42,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 43,                /* MOD_ASSIGN  */
  YYSYMBOL_QUESTION = 44,                  /* QUESTION  */
  YYSYMBOL_RED_TEXT = 45,                  /* RED_TEXT  */
  YYSYMBOL_GREEN_TEXT = 46,                /* GREEN_TEXT  */
  YYSYMBOL_BLUE_TEXT = 47,                 /* BLUE_TEXT  */
  YYSYMBOL_YELLOW_TEXT = 48,               /* YELLOW_TEXT  */
  YYSYMBOL_RESET_TEXT = 49,                /* RESET_TEXT  */
  YYSYMBOL_FACTORIAL_KW = 50,              /* FACTORIAL_KW  */
  YYSYMBOL_NUMBER = 51,                    /* NUMBER  */
  YYSYMBOL_BOOL = 52,                      /* BOOL  */
  YYSYMBOL_VARIABLE = 53,                  /* VARIABLE  */
  YYSYMBOL_UNDEFINED = 54,                 /* UNDEFINED  */
  YYSYMBOL_CONSTANT = 55,                  /* CONSTANT  */
  YYSYMBOL_BUILTIN = 56,                   /* BUILTIN  */
  YYSYMBOL_STRING = 57,                    /* STRING  */
  YYSYMBOL_GREATER_OR_EQUAL = 58,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 59,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_THAN = 60,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 61,                 /* LESS_THAN  */
  YYSYMBOL_EQUAL = 62,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 63,                 /* NOT_EQUAL  */
  YYSYMBOL_PLUS = 64,                      /* PLUS  */
  YYSYMBOL_MINUS = 65,                     /* MINUS  */
  YYSYMBOL_MULTIPLICATION = 66,            /* MULTIPLICATION  */
  YYSYMBOL_DIVISION = 67,                  /* DIVISION  */
  YYSYMBOL_MODULO = 68,                    /* MODULO  */
  YYSYMBOL_INTEGER_DIVISION = 69,          /* INTEGER_DIVISION  */
  YYSYMBOL_LPAREN = 70,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 71,                    /* RPAREN  */
  YYSYMBOL_UNARY = 72,                     /* UNARY  */
  YYSYMBOL_POWER = 73,                     /* POWER  */
  YYSYMBOL_74_ = 74,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 75,                  /* $accept  */
  YYSYMBOL_program = 76,                   /* program  */
  YYSYMBOL_stmtlist = 77,                  /* stmtlist  */
  YYSYMBOL_stmt = 78,                      /* stmt  */
  YYSYMBOL_if = 79,                        /* if  */
  YYSYMBOL_while = 80,                     /* while  */
  YYSYMBOL_for = 81,                       /* for  */
  YYSYMBOL_repeat = 82,                    /* repeat  */
  YYSYMBOL_do_while = 83,                  /* do_while  */
  YYSYMBOL_cond = 84,                      /* cond  */
  YYSYMBOL_block = 85,                     /* block  */
  YYSYMBOL_controlSymbol = 86,             /* controlSymbol  */
  YYSYMBOL_asgn = 87,                      /* asgn  */
  YYSYMBOL_print = 88,                     /* print  */
  YYSYMBOL_read = 89,                      /* read  */
  YYSYMBOL_read_string = 90,               /* read_string  */
  YYSYMBOL_exp = 91,                       /* exp  */
  YYSYMBOL_listOfExp = 92,                 /* listOfExp  */
  YYSYMBOL_restOfListOfExp = 93,           /* restOfListOfExp  */
  YYSYMBOL_clear_screen = 94,              /* clear_screen  */
  YYSYMBOL_place = 95,                     /* place  */
  YYSYMBOL_switch = 96,                    /* switch  */
  YYSYMBOL_case_list = 97,                 /* case_list  */
  YYSYMBOL_case = 98                       /* case  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   1397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   242,   242,   256,   260,   278,   285,   286,   290,   294,
     298,   302,   306,   310,   314,   318,   322,   326,   330,   334,
     338,   342,   346,   350,   354,   358,   362,   366,   370,   374,
     378,   385,   391,   403,   412,   417,   424,   431,   438,   440,
     447,   452,   457,   463,   468,   474,   480,   485,   491,   496,
     502,   507,   512,   517,   522,   527,   532,   537,   542,   547,
     552,   557,   562,   567,   572,   577,   582,   588,   635,   640,
     645,   650,   655,   660,   665,   670,   675,   684,   688,   697,
     701,   708,   714,   721,   726,   733,   738,   745
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SEMICOLON", "COMMA",
  "LETFCURLYBRACKET", "RIGHTCURLYBRACKET", "ASSIGNMENT", "PRINT", "READ",
  "READ_STRING", "IF", "THEN", "ELSE", "END_IF", "WHILE", "DO",
  "END_WHILE", "REPEAT", "UNTIL", "FOR", "FROM", "TO", "STEP", "END_FOR",
  "SWITCH", "CASE", "DEFAULT", "END_SWITCH", "CONCATENATION", "DO_WHILE",
  "AND", "OR", "NOT", "CLEAR_SCREEN_CMD", "PLACE_CMD", "INC", "DEC",
  "FACT", "PLUS_ASSIGN", "MINUS_ASSIGN", "MULT_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "QUESTION", "RED_TEXT", "GREEN_TEXT", "BLUE_TEXT",
  "YELLOW_TEXT", "RESET_TEXT", "FACTORIAL_KW", "NUMBER", "BOOL",
  "VARIABLE", "UNDEFINED", "CONSTANT", "BUILTIN", "STRING",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "GREATER_THAN", "LESS_THAN",
  "EQUAL", "NOT_EQUAL", "PLUS", "MINUS", "MULTIPLICATION", "DIVISION",
  "MODULO", "INTEGER_DIVISION", "LPAREN", "RPAREN", "UNARY", "POWER",
  "':'", "$accept", "program", "stmtlist", "stmt", "if", "while", "for",
  "repeat", "do_while", "cond", "block", "controlSymbol", "asgn", "print",
  "read", "read_string", "exp", "listOfExp", "restOfListOfExp",
  "clear_screen", "place", "switch", "case_list", "case", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -64,     3,   541,   -64,   -64,   -64,   -64,    33,   -63,   -45,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -43,    25,    34,
      40,    42,    61,    -1,    60,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,    67,    73,    74,    77,    78,    79,   -64,   690,
      33,   -64,   -64,   -64,    13,   -64,    33,    33,    33,  1201,
     -32,   -31,    15,    15,    82,   -64,    46,    15,    33,   -64,
     -64,   -64,   -64,   -64,   385,   102,   105,    33,    33,    33,
      33,   385,   -64,   -64,   -64,   -64,   -64,   -64,   -64,    87,
      33,    -4,    -4,  1072,    33,    33,    33,   -64,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    38,    39,    41,    43,    33,    99,   104,   100,
     739,   101,    97,   276,   117,    60,   -64,  1201,   -64,   -64,
      75,   147,   190,   233,   -64,  1201,   319,    56,   -64,    27,
    1283,  1242,   362,  1324,  1324,  1324,  1324,  1324,  1324,     6,
       6,    -4,    -4,    -4,    -4,    55,   -64,   -64,   -64,   -64,
    1115,   -64,   -64,    15,    15,    33,    33,    -9,   -64,    33,
     -64,   -64,   -64,   -64,    33,   -64,   -64,    33,   -64,   639,
     788,   127,   -64,   983,  1026,    58,   -64,   -64,  1158,   319,
    1201,   -64,   -64,   -64,   -64,    33,   -64,   -64,   -64,   -64,
     837,   416,   590,   886,   -64,   -64,    33,   -64,   935,   470,
     -64,   -64,   984,   -64
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     5,     6,     3,     0,     0,     0,
      40,    40,    40,    40,    40,    40,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     4,    13,    14,    15,    16,
      19,    17,     0,     0,     0,     0,     0,     0,    18,     0,
       0,    50,    65,    66,     0,    51,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     3,     0,     0,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    39,    76,
      77,    61,    62,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,    42,    41,    20,    21,
       0,     0,     0,     0,    44,    43,    79,     0,    60,    59,
      74,    75,     0,    69,    71,    68,    70,    72,    73,    54,
      55,    56,    57,    63,    58,    64,    46,    47,    48,    49,
       0,     3,     3,     0,     0,     0,     0,     0,    85,     0,
      22,    23,    24,    25,     0,    78,    67,     0,    38,     0,
       0,     0,    36,     0,     0,     0,    83,    86,     0,    79,
      53,     3,    31,    33,    37,     0,     3,     3,    82,    80,
       0,     0,     0,     0,    32,     3,     0,    84,     0,     0,
      34,     3,     0,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,    -6,   -64,   -64,   -64,   -64,   -64,   -64,   -52,
      95,     1,   -60,   -64,   -64,   -64,   -38,   -64,   -22,   -64,
     -64,   -64,   -64,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    25,    26,    27,    28,    29,    30,   107,
      31,    52,    32,    33,    34,    35,    49,   127,   165,    36,
      37,    38,   157,   158
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   108,    79,     3,   116,   112,    64,    50,    81,    82,
      83,   124,    53,    54,    55,    56,    57,   156,   175,   176,
     113,   102,   104,   103,   105,    51,   117,    58,    59,   120,
     121,   122,   123,   125,    87,    65,    66,    60,    67,    68,
      69,    70,   126,    61,    87,    62,   129,   130,   131,   110,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    63,    87,    40,    71,   150,   101,
      72,    88,    97,    98,    99,   100,    73,    74,   160,   101,
      75,    76,    77,    80,    41,   106,    42,     6,    43,    44,
      45,    95,    96,    97,    98,    99,   100,    46,    47,   111,
     101,   171,   172,    48,    84,   118,    85,    86,   119,   146,
     147,   151,   148,    87,   149,   153,    84,   173,   174,    88,
     152,   178,   155,   156,    64,    87,   179,   166,   101,   180,
     184,    88,   187,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   169,   170,   191,   101,   109,
     161,    95,    96,    97,    98,    99,   100,   189,   199,   177,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   190,    84,     0,    85,    86,
     192,   193,     0,     0,     0,    87,     0,     0,     0,   198,
       0,    88,     0,   162,     0,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     0,     0,    84,
     101,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,     0,    84,   101,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
     159,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,    84,   101,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,    84,   101,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     0,
       0,    84,   101,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   195,     0,     0,   101,    41,     0,   114,   196,
     115,    44,    45,     0,     0,    84,     0,    85,    86,    46,
      47,     0,     0,     0,    87,    48,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   201,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,    -2,     4,   101,     5,     0,     6,     0,     0,     7,
       8,     9,    10,     0,     0,     0,    11,    12,     0,    13,
       0,    14,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    19,    20,    21,
      22,     4,     0,     5,    23,     6,    24,     0,     7,     8,
       9,    10,     0,     0,     0,    11,    12,     0,    13,     0,
      14,     0,     0,     0,     0,    15,   -87,   -87,   -87,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,    21,    22,
       4,     0,     5,    23,     6,    24,     0,     7,     8,     9,
      10,     0,   181,   182,    11,    12,     0,    13,     0,    14,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,     0,
       0,     4,    23,     5,    24,     6,    78,     0,     7,     8,
       9,    10,     0,     0,     0,    11,    12,     0,    13,     0,
      14,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,    21,    22,
       4,     0,     5,    23,     6,    24,     0,     7,     8,     9,
      10,     0,     0,     0,    11,    12,     0,    13,   154,    14,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,     4,
       0,     5,    23,     6,    24,     0,     7,     8,     9,    10,
       0,     0,     0,    11,    12,   183,    13,     0,    14,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,     4,     0,
       5,    23,     6,    24,     0,     7,     8,     9,    10,     0,
       0,   194,    11,    12,     0,    13,     0,    14,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,    20,    21,    22,     4,     0,     5,
      23,     6,    24,     0,     7,     8,     9,    10,     0,     0,
       0,    11,    12,     0,    13,     0,    14,     0,     0,     0,
       0,    15,     0,     0,   197,     0,     0,     0,     0,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    19,    20,    21,    22,     4,     0,     5,    23,
       6,    24,     0,     7,     8,     9,    10,     0,     0,     0,
      11,    12,     0,    13,     0,    14,     0,     0,     0,   200,
      15,     0,     0,     0,     0,     0,     0,     0,     0,    16,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,    20,    21,    22,     4,     0,     5,    23,     6,
      24,     0,     7,     8,     9,    10,     0,     0,     0,    11,
      12,     0,    13,     0,    14,   185,     0,     0,   203,    15,
       0,     0,    84,     0,    85,    86,     0,     0,    16,    17,
       0,    87,     0,     0,     0,     0,     0,    88,     0,    18,
      19,    20,    21,    22,     0,     0,     0,    23,     0,    24,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,    84,   101,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,     0,   101,
     186,    84,     0,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,   128,    84,   101,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,   168,    84,   101,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     0,   188,
      84,   101,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    84,     0,    85,   101,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    84,     0,     0,   101,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    84,     0,     0,   101,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,    95,    96,
      97,    98,    99,   100,     0,     0,     0,   101
};

static const yytype_int16 yycheck[] =
{
       6,    53,    40,     0,    64,    57,     7,    70,    46,    47,
      48,    71,    11,    12,    13,    14,    15,    26,    27,    28,
      58,    53,    53,    55,    55,    70,    64,    70,     3,    67,
      68,    69,    70,    71,    38,    36,    37,     3,    39,    40,
      41,    42,    80,     3,    38,     3,    84,    85,    86,    55,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     3,    38,    33,     7,   106,    73,
       3,    44,    66,    67,    68,    69,     3,     3,     3,    73,
       3,     3,     3,    70,    51,    70,    53,     5,    55,    56,
      57,    64,    65,    66,    67,    68,    69,    64,    65,    53,
      73,   153,   154,    70,    29,     3,    31,    32,     3,    71,
      71,    12,    71,    38,    71,    15,    29,   155,   156,    44,
      16,   159,    21,    26,     7,    38,   164,    71,    73,   167,
       3,    44,    74,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,   151,   152,   185,    73,    54,
       3,    64,    65,    66,    67,    68,    69,   179,   196,   157,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   181,    29,    -1,    31,    32,
     186,   187,    -1,    -1,    -1,    38,    -1,    -1,    -1,   195,
      -1,    44,    -1,     3,    -1,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    29,
      73,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    29,    73,    31,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    29,    73,    31,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    -1,    29,    73,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    29,    73,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    16,    -1,    -1,    73,    51,    -1,    53,    23,
      55,    56,    57,    -1,    -1,    29,    -1,    31,    32,    64,
      65,    -1,    -1,    -1,    38,    70,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    16,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,     0,     1,    73,     3,    -1,     5,    -1,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,     1,    -1,     3,    53,     5,    55,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    15,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
       1,    -1,     3,    53,     5,    55,    -1,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      -1,     1,    53,     3,    55,     5,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    15,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
       1,    -1,     3,    53,     5,    55,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,     1,
      -1,     3,    53,     5,    55,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,     1,    -1,
       3,    53,     5,    55,    -1,     8,     9,    10,    11,    -1,
      -1,    14,    15,    16,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,     1,    -1,     3,
      53,     5,    55,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    15,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,     1,    -1,     3,    53,
       5,    55,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      15,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,     1,    -1,     3,    53,     5,
      55,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    -1,    18,    -1,    20,    22,    -1,    -1,    24,    25,
      -1,    -1,    29,    -1,    31,    32,    -1,    -1,    34,    35,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    -1,    55,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    29,    73,    31,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    -1,    -1,    73,
      74,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    29,    73,    31,    32,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    29,    73,    31,
      32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      29,    73,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    29,    -1,    31,    73,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    29,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    29,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    76,    77,     0,     1,     3,     5,     8,     9,    10,
      11,    15,    16,    18,    20,    25,    34,    35,    45,    46,
      47,    48,    49,    53,    55,    78,    79,    80,    81,    82,
      83,    85,    87,    88,    89,    90,    94,    95,    96,    77,
      33,    51,    53,    55,    56,    57,    64,    65,    70,    91,
      70,    70,    86,    86,    86,    86,    86,    86,    70,     3,
       3,     3,     3,     3,     7,    36,    37,    39,    40,    41,
      42,     7,     3,     3,     3,     3,     3,     3,     6,    91,
      70,    91,    91,    91,    29,    31,    32,    38,    44,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    73,    53,    55,    53,    55,    70,    84,    84,    85,
      77,    53,    84,    91,    53,    55,    87,    91,     3,     3,
      91,    91,    91,    91,    87,    91,    91,    92,    71,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    71,    71,    71,    71,
      91,    12,    16,    15,    19,    21,    26,    97,    98,     4,
       3,     3,     3,     3,     4,    93,    71,     4,    71,    77,
      77,    84,    84,    91,    91,    27,    28,    98,    91,    91,
      91,    13,    14,    17,     3,    22,    74,    74,    71,    93,
      77,    91,    77,    77,    14,    16,    23,    28,    77,    91,
      24,    16,    77,    24
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    76,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    81,    81,    82,    83,    84,    85,
      86,    87,    87,    87,    87,    88,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      93,    94,    95,    96,    96,    97,    97,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     4,     4,     4,     4,     2,     2,     2,     2,
       2,     6,     8,     6,    10,    12,     5,     6,     3,     3,
       0,     3,     3,     3,     3,     2,     4,     4,     4,     4,
       1,     1,     2,     5,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     1,     1,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     0,     2,     0,
       3,     1,     6,     5,     8,     1,     2,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: stmtlist  */
#line 243 "interpreter.y"
                  { 
		    // Create a new AST
			(yyval.prog) = new lp::AST((yyvsp[0].stmts)); 

			// Assign the AST to the root
			root = (yyval.prog); 

			// End of parsing
			//	return 1;
		  }
#line 1926 "interpreter.tab.c"
    break;

  case 3: /* stmtlist: %empty  */
#line 256 "interpreter.y"
                  { 
			(yyval.stmts) = new std::list<lp::Statement *>(); 
		  }
#line 1934 "interpreter.tab.c"
    break;

  case 4: /* stmtlist: stmtlist stmt  */
#line 261 "interpreter.y"
                  { 
			(yyval.stmts) = (yyvsp[-1].stmts);
			(yyval.stmts)->push_back((yyvsp[0].st));

			if (interactiveMode == true && control == 0)
 			{
				for(std::list<lp::Statement *>::iterator it = (yyval.stmts)->begin(); 
						it != (yyval.stmts)->end(); 
						it++)
				{
					// (*it)->printAST();
					(*it)->evaluate();
				}
				(yyval.stmts)->clear();
			}
		}
#line 1955 "interpreter.tab.c"
    break;

  case 5: /* stmtlist: stmtlist error  */
#line 279 "interpreter.y"
      { 
			 (yyval.stmts) = (yyvsp[-1].stmts);
			 yyclearin; 
       }
#line 1964 "interpreter.tab.c"
    break;

  case 6: /* stmt: SEMICOLON  */
#line 285 "interpreter.y"
                { (yyval.st) = new lp::EmptyStmt(); }
#line 1970 "interpreter.tab.c"
    break;

  case 7: /* stmt: asgn SEMICOLON  */
#line 287 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[-1].st); 
		}
#line 1978 "interpreter.tab.c"
    break;

  case 8: /* stmt: print SEMICOLON  */
#line 291 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[-1].st); 
		}
#line 1986 "interpreter.tab.c"
    break;

  case 9: /* stmt: read SEMICOLON  */
#line 295 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[-1].st); 
		}
#line 1994 "interpreter.tab.c"
    break;

  case 10: /* stmt: read_string SEMICOLON  */
#line 299 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[-1].st); 
		}
#line 2002 "interpreter.tab.c"
    break;

  case 11: /* stmt: clear_screen SEMICOLON  */
#line 303 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[-1].st); 
		}
#line 2010 "interpreter.tab.c"
    break;

  case 12: /* stmt: place SEMICOLON  */
#line 307 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[-1].st); 
		}
#line 2018 "interpreter.tab.c"
    break;

  case 13: /* stmt: if  */
#line 311 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[0].st); 
		}
#line 2026 "interpreter.tab.c"
    break;

  case 14: /* stmt: while  */
#line 315 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[0].st); 
		}
#line 2034 "interpreter.tab.c"
    break;

  case 15: /* stmt: for  */
#line 319 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[0].st); 
		}
#line 2042 "interpreter.tab.c"
    break;

  case 16: /* stmt: repeat  */
#line 323 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[0].st); 
		}
#line 2050 "interpreter.tab.c"
    break;

  case 17: /* stmt: block  */
#line 327 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[0].st); 
		}
#line 2058 "interpreter.tab.c"
    break;

  case 18: /* stmt: switch  */
#line 331 "interpreter.y"
                { 
			(yyval.st) = (yyvsp[0].st); 
		}
#line 2066 "interpreter.tab.c"
    break;

  case 19: /* stmt: do_while  */
#line 335 "interpreter.y"
                {
			(yyval.st) = (yyvsp[0].st);
		}
#line 2074 "interpreter.tab.c"
    break;

  case 20: /* stmt: VARIABLE INC SEMICOLON  */
#line 339 "interpreter.y"
                { 
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), new lp::PlusNode(new lp::VariableNode((yyvsp[-2].string)), new lp::NumberNode(1))); 
		}
#line 2082 "interpreter.tab.c"
    break;

  case 21: /* stmt: VARIABLE DEC SEMICOLON  */
#line 343 "interpreter.y"
                { 
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), new lp::MinusNode(new lp::VariableNode((yyvsp[-2].string)), new lp::NumberNode(1))); 
		}
#line 2090 "interpreter.tab.c"
    break;

  case 22: /* stmt: VARIABLE PLUS_ASSIGN exp SEMICOLON  */
#line 347 "interpreter.y"
                { 
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-3].string), new lp::PlusNode(new lp::VariableNode((yyvsp[-3].string)), (yyvsp[-1].expNode))); 
		}
#line 2098 "interpreter.tab.c"
    break;

  case 23: /* stmt: VARIABLE MINUS_ASSIGN exp SEMICOLON  */
#line 351 "interpreter.y"
                { 
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-3].string), new lp::MinusNode(new lp::VariableNode((yyvsp[-3].string)), (yyvsp[-1].expNode))); 
		}
#line 2106 "interpreter.tab.c"
    break;

  case 24: /* stmt: VARIABLE MULT_ASSIGN exp SEMICOLON  */
#line 355 "interpreter.y"
                {
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-3].string), new lp::MultiplicationNode(new lp::VariableNode((yyvsp[-3].string)), (yyvsp[-1].expNode))); 
		}
#line 2114 "interpreter.tab.c"
    break;

  case 25: /* stmt: VARIABLE DIV_ASSIGN exp SEMICOLON  */
#line 359 "interpreter.y"
                {
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-3].string), new lp::DivisionNode(new lp::VariableNode((yyvsp[-3].string)), (yyvsp[-1].expNode))); 
		}
#line 2122 "interpreter.tab.c"
    break;

  case 26: /* stmt: RED_TEXT SEMICOLON  */
#line 363 "interpreter.y"
                { 
			(yyval.st) = new lp::ColorStmt("\033[31m"); 
		}
#line 2130 "interpreter.tab.c"
    break;

  case 27: /* stmt: GREEN_TEXT SEMICOLON  */
#line 367 "interpreter.y"
                { 
			(yyval.st) = new lp::ColorStmt("\033[32m"); 
		}
#line 2138 "interpreter.tab.c"
    break;

  case 28: /* stmt: BLUE_TEXT SEMICOLON  */
#line 371 "interpreter.y"
                { 
			(yyval.st) = new lp::ColorStmt("\033[34m"); 
		}
#line 2146 "interpreter.tab.c"
    break;

  case 29: /* stmt: YELLOW_TEXT SEMICOLON  */
#line 375 "interpreter.y"
                { 
			(yyval.st) = new lp::ColorStmt("\033[33m"); 
		}
#line 2154 "interpreter.tab.c"
    break;

  case 30: /* stmt: RESET_TEXT SEMICOLON  */
#line 379 "interpreter.y"
                { 
			(yyval.st) = new lp::ColorStmt("\033[0m"); 
		}
#line 2162 "interpreter.tab.c"
    break;

  case 31: /* if: IF controlSymbol cond THEN stmtlist END_IF  */
#line 386 "interpreter.y"
         { 
           lp::BlockStmt *aux_1 = new lp::BlockStmt((yyvsp[-1].stmts));
           (yyval.st) = new lp::IfStmt((yyvsp[-3].expNode), aux_1); 
           control--; 
         }
#line 2172 "interpreter.tab.c"
    break;

  case 32: /* if: IF controlSymbol cond THEN stmtlist ELSE stmtlist END_IF  */
#line 392 "interpreter.y"
         { 
           lp::BlockStmt *aux_1 = new lp::BlockStmt((yyvsp[-3].stmts));
           lp::BlockStmt *aux_2 = new lp::BlockStmt((yyvsp[-1].stmts));
           
           (yyval.st) = new lp::IfStmt((yyvsp[-5].expNode), aux_1, aux_2); 

           control--; 
         }
#line 2185 "interpreter.tab.c"
    break;

  case 33: /* while: WHILE controlSymbol cond DO stmtlist END_WHILE  */
#line 404 "interpreter.y"
            { 
              lp::BlockStmt *aux_1 = new lp::BlockStmt((yyvsp[-1].stmts));
              (yyval.st) = new lp::WhileStmt((yyvsp[-3].expNode), aux_1); 
              control--; 
            }
#line 2195 "interpreter.tab.c"
    break;

  case 34: /* for: FOR controlSymbol VARIABLE FROM exp TO exp DO stmtlist END_FOR  */
#line 413 "interpreter.y"
          { 
            (yyval.st) = new lp::ForStmt((yyvsp[-7].string), (yyvsp[-5].expNode), (yyvsp[-3].expNode), new lp::NumberNode(1), (yyvsp[-1].stmts)); 
            control--;
          }
#line 2204 "interpreter.tab.c"
    break;

  case 35: /* for: FOR controlSymbol VARIABLE FROM exp TO exp STEP exp DO stmtlist END_FOR  */
#line 418 "interpreter.y"
          { 
            (yyval.st) = new lp::ForStmt((yyvsp[-9].string), (yyvsp[-7].expNode), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts)); 
            control--;
          }
#line 2213 "interpreter.tab.c"
    break;

  case 36: /* repeat: REPEAT controlSymbol stmtlist UNTIL cond  */
#line 425 "interpreter.y"
    {
        (yyval.st) = new lp::RepeatStmt((yyvsp[-2].stmts), (yyvsp[0].expNode));
        control--;
    }
#line 2222 "interpreter.tab.c"
    break;

  case 37: /* do_while: DO controlSymbol block WHILE cond SEMICOLON  */
#line 432 "interpreter.y"
          {
              (yyval.st) = new lp::DoWhileStmt((yyvsp[-3].st), (yyvsp[-1].expNode));
              control--;
          }
#line 2231 "interpreter.tab.c"
    break;

  case 38: /* cond: LPAREN exp RPAREN  */
#line 438 "interpreter.y"
                        { (yyval.expNode) = (yyvsp[-1].expNode); }
#line 2237 "interpreter.tab.c"
    break;

  case 39: /* block: LETFCURLYBRACKET stmtlist RIGHTCURLYBRACKET  */
#line 441 "interpreter.y"
                {
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 2245 "interpreter.tab.c"
    break;

  case 40: /* controlSymbol: %empty  */
#line 447 "interpreter.y"
                {
			control++;
		}
#line 2253 "interpreter.tab.c"
    break;

  case 41: /* asgn: VARIABLE ASSIGNMENT exp  */
#line 453 "interpreter.y"
                { 
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (yyvsp[0].expNode));
		}
#line 2261 "interpreter.tab.c"
    break;

  case 42: /* asgn: VARIABLE ASSIGNMENT asgn  */
#line 458 "interpreter.y"
                { 
			
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (lp::AssignmentStmt *) (yyvsp[0].st));
		}
#line 2270 "interpreter.tab.c"
    break;

  case 43: /* asgn: CONSTANT ASSIGNMENT exp  */
#line 464 "interpreter.y"
                {   
 			execerror("Semantic error in assignment: it is not allowed to modify a constant ", (yyvsp[-2].string));
		}
#line 2278 "interpreter.tab.c"
    break;

  case 44: /* asgn: CONSTANT ASSIGNMENT asgn  */
#line 469 "interpreter.y"
                {   
 			execerror("Semantic error in multiple assignment: it is not allowed to modify a constant ",(yyvsp[-2].string));
		}
#line 2286 "interpreter.tab.c"
    break;

  case 45: /* print: PRINT exp  */
#line 475 "interpreter.y"
                {
			 (yyval.st) = new lp::PrintStmt((yyvsp[0].expNode));
		}
#line 2294 "interpreter.tab.c"
    break;

  case 46: /* read: READ LPAREN VARIABLE RPAREN  */
#line 481 "interpreter.y"
                {
			 (yyval.st) = new lp::ReadStmt((yyvsp[-1].string));
		}
#line 2302 "interpreter.tab.c"
    break;

  case 47: /* read: READ LPAREN CONSTANT RPAREN  */
#line 486 "interpreter.y"
                {   
 			execerror("Semantic error in \"read statement\": it is not allowed to modify a constant ",(yyvsp[-1].string));
		}
#line 2310 "interpreter.tab.c"
    break;

  case 48: /* read_string: READ_STRING LPAREN VARIABLE RPAREN  */
#line 492 "interpreter.y"
    {
        (yyval.st) = new lp::ReadStringStmt((yyvsp[-1].string));
    }
#line 2318 "interpreter.tab.c"
    break;

  case 49: /* read_string: READ_STRING LPAREN CONSTANT RPAREN  */
#line 497 "interpreter.y"
                {
			execerror("Semantic error in \"read statement\": it is not allowed to modify a constant ",(yyvsp[-1].string));
		}
#line 2326 "interpreter.tab.c"
    break;

  case 50: /* exp: NUMBER  */
#line 503 "interpreter.y"
                { 
			(yyval.expNode) = new lp::NumberNode((yyvsp[0].number));
		}
#line 2334 "interpreter.tab.c"
    break;

  case 51: /* exp: STRING  */
#line 508 "interpreter.y"
                {
		(yyval.expNode) = new lp::StringNode((yyvsp[0].string));
		}
#line 2342 "interpreter.tab.c"
    break;

  case 52: /* exp: exp FACT  */
#line 513 "interpreter.y"
                {
			(yyval.expNode) = new lp::FactorialNode((yyvsp[-1].expNode));
		}
#line 2350 "interpreter.tab.c"
    break;

  case 53: /* exp: exp QUESTION exp COMMA exp  */
#line 518 "interpreter.y"
                {
			(yyval.expNode) = new lp::TernaryNode((yyvsp[-4].expNode), (yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2358 "interpreter.tab.c"
    break;

  case 54: /* exp: exp PLUS exp  */
#line 523 "interpreter.y"
                { 
			 (yyval.expNode) = new lp::PlusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		 }
#line 2366 "interpreter.tab.c"
    break;

  case 55: /* exp: exp MINUS exp  */
#line 528 "interpreter.y"
        {
			(yyval.expNode) = new lp::MinusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2374 "interpreter.tab.c"
    break;

  case 56: /* exp: exp MULTIPLICATION exp  */
#line 533 "interpreter.y"
                { 
			(yyval.expNode) = new lp::MultiplicationNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2382 "interpreter.tab.c"
    break;

  case 57: /* exp: exp DIVISION exp  */
#line 538 "interpreter.y"
                {
		  (yyval.expNode) = new lp::DivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2390 "interpreter.tab.c"
    break;

  case 58: /* exp: exp INTEGER_DIVISION exp  */
#line 543 "interpreter.y"
        {
			(yyval.expNode) = new lp::IntegerDivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2398 "interpreter.tab.c"
    break;

  case 59: /* exp: exp CONCATENATION exp  */
#line 548 "interpreter.y"
        {
          (yyval.expNode) = new lp::ConcatenationNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
        }
#line 2406 "interpreter.tab.c"
    break;

  case 60: /* exp: LPAREN exp RPAREN  */
#line 553 "interpreter.y"
        { 
			(yyval.expNode) = (yyvsp[-1].expNode);
		 }
#line 2414 "interpreter.tab.c"
    break;

  case 61: /* exp: PLUS exp  */
#line 558 "interpreter.y"
                { 
  		  (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode));
		}
#line 2422 "interpreter.tab.c"
    break;

  case 62: /* exp: MINUS exp  */
#line 563 "interpreter.y"
                { 
  		  (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode));
		}
#line 2430 "interpreter.tab.c"
    break;

  case 63: /* exp: exp MODULO exp  */
#line 568 "interpreter.y"
                {
		  (yyval.expNode) = new lp::ModuloNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
       }
#line 2438 "interpreter.tab.c"
    break;

  case 64: /* exp: exp POWER exp  */
#line 573 "interpreter.y"
        { 
  		  (yyval.expNode) = new lp::PowerNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2446 "interpreter.tab.c"
    break;

  case 65: /* exp: VARIABLE  */
#line 578 "interpreter.y"
                {
		  (yyval.expNode) = new lp::VariableNode((yyvsp[0].string));
		}
#line 2454 "interpreter.tab.c"
    break;

  case 66: /* exp: CONSTANT  */
#line 583 "interpreter.y"
                {
		  (yyval.expNode) = new lp::ConstantNode((yyvsp[0].string));

		}
#line 2463 "interpreter.tab.c"
    break;

  case 67: /* exp: BUILTIN LPAREN listOfExp RPAREN  */
#line 589 "interpreter.y"
                {
			// Get the identifier in the table of symbols as Builtin
			lp::Builtin *f= (lp::Builtin *) table.getSymbol((yyvsp[-3].string));

			// Check the number of parameters 
			if (f->getNParameters() ==  (int) (yyvsp[-1].parameters)->size())
			{
				switch(f->getNParameters())
				{
					case 0:
						{
							// Create a new Builtin Function with 0 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_0((yyvsp[-3].string));
						}
						break;

					case 1:
						{
							// Get the expression from the list of expressions
							lp::ExpNode *e = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 1 parameter node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_1((yyvsp[-3].string),e);
						}
						break;

					case 2:
						{
							// Get the expressions from the list of expressions
							lp::ExpNode *e1 = (yyvsp[-1].parameters)->front();
							(yyvsp[-1].parameters)->pop_front();
							lp::ExpNode *e2 = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 2 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_2((yyvsp[-3].string),e1,e2);
						}
						break;

					default:
				  			 execerror("Syntax error: too many parameters for function ", (yyvsp[-3].string));
				} 
			}
			else
	  			 execerror("Syntax error: incompatible number of parameters for function", (yyvsp[-3].string));
		}
#line 2513 "interpreter.tab.c"
    break;

  case 68: /* exp: exp GREATER_THAN exp  */
#line 636 "interpreter.y"
                {
 			(yyval.expNode) = new lp::GreaterThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2521 "interpreter.tab.c"
    break;

  case 69: /* exp: exp GREATER_OR_EQUAL exp  */
#line 641 "interpreter.y"
                {
 			(yyval.expNode) = new lp::GreaterOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2529 "interpreter.tab.c"
    break;

  case 70: /* exp: exp LESS_THAN exp  */
#line 646 "interpreter.y"
                {
 			(yyval.expNode) = new lp::LessThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2537 "interpreter.tab.c"
    break;

  case 71: /* exp: exp LESS_OR_EQUAL exp  */
#line 651 "interpreter.y"
                {
 			(yyval.expNode) = new lp::LessOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2545 "interpreter.tab.c"
    break;

  case 72: /* exp: exp EQUAL exp  */
#line 656 "interpreter.y"
                {
 			(yyval.expNode) = new lp::EqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2553 "interpreter.tab.c"
    break;

  case 73: /* exp: exp NOT_EQUAL exp  */
#line 661 "interpreter.y"
                {
 			(yyval.expNode) = new lp::NotEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2561 "interpreter.tab.c"
    break;

  case 74: /* exp: exp AND exp  */
#line 666 "interpreter.y"
                {
 			(yyval.expNode) = new lp::AndNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2569 "interpreter.tab.c"
    break;

  case 75: /* exp: exp OR exp  */
#line 671 "interpreter.y"
                {
 			(yyval.expNode) = new lp::OrNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2577 "interpreter.tab.c"
    break;

  case 76: /* exp: NOT exp  */
#line 676 "interpreter.y"
                {
 			(yyval.expNode) = new lp::NotNode((yyvsp[0].expNode));
		}
#line 2585 "interpreter.tab.c"
    break;

  case 77: /* listOfExp: %empty  */
#line 684 "interpreter.y"
                        {
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2593 "interpreter.tab.c"
    break;

  case 78: /* listOfExp: exp restOfListOfExp  */
#line 689 "interpreter.y"
                        {
				(yyval.parameters) = (yyvsp[0].parameters);
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2602 "interpreter.tab.c"
    break;

  case 79: /* restOfListOfExp: %empty  */
#line 697 "interpreter.y"
                        {
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2610 "interpreter.tab.c"
    break;

  case 80: /* restOfListOfExp: COMMA exp restOfListOfExp  */
#line 702 "interpreter.y"
                        {
				(yyval.parameters) = (yyvsp[0].parameters);
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2619 "interpreter.tab.c"
    break;

  case 81: /* clear_screen: CLEAR_SCREEN_CMD  */
#line 709 "interpreter.y"
    { 
        (yyval.st) = new lp::ClearScreenStmt(); 
    }
#line 2627 "interpreter.tab.c"
    break;

  case 82: /* place: PLACE_CMD LPAREN exp COMMA exp RPAREN  */
#line 715 "interpreter.y"
    { 
        (yyval.st) = new lp::PlaceStmt((yyvsp[-3].expNode), (yyvsp[-1].expNode)); 
    }
#line 2635 "interpreter.tab.c"
    break;

  case 83: /* switch: SWITCH controlSymbol cond case_list END_SWITCH  */
#line 722 "interpreter.y"
             {
               (yyval.st) = new lp::SwitchStmt((yyvsp[-2].expNode), (yyvsp[-1].cases), NULL);
               control--;
             }
#line 2644 "interpreter.tab.c"
    break;

  case 84: /* switch: SWITCH controlSymbol cond case_list DEFAULT ':' stmtlist END_SWITCH  */
#line 727 "interpreter.y"
             {
               (yyval.st) = new lp::SwitchStmt((yyvsp[-5].expNode), (yyvsp[-4].cases), new lp::BlockStmt((yyvsp[-1].stmts)));
               control--;
             }
#line 2653 "interpreter.tab.c"
    break;

  case 85: /* case_list: case  */
#line 734 "interpreter.y"
           { 
             (yyval.cases) = new std::list<lp::CaseStmt *>(); 
             (yyval.cases)->push_back((yyvsp[0].casestmt)); 
           }
#line 2662 "interpreter.tab.c"
    break;

  case 86: /* case_list: case_list case  */
#line 739 "interpreter.y"
           { 
             (yyval.cases) = (yyvsp[-1].cases); 
             (yyval.cases)->push_back((yyvsp[0].casestmt)); 
           }
#line 2671 "interpreter.tab.c"
    break;

  case 87: /* case: CASE exp ':' stmtlist  */
#line 746 "interpreter.y"
           { 
             (yyval.casestmt) = new lp::CaseStmt((yyvsp[-2].expNode), new lp::BlockStmt((yyvsp[0].stmts))); 
           }
#line 2679 "interpreter.tab.c"
    break;


#line 2683 "interpreter.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 750 "interpreter.y"

// %precedence ELSE

// %token IF ELSE



