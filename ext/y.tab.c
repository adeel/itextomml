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


/* Substitute the variable and function names.  */
#define yyparse         itex2MML_yyparse
#define yylex           itex2MML_yylex
#define yyerror         itex2MML_yyerror
#define yydebug         itex2MML_yydebug
#define yynerrs         itex2MML_yynerrs

#define yylval          itex2MML_yylval
#define yychar          itex2MML_yychar

/* Copy the first part of user declarations.  */
#line 7 "itex2MML.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "itex2MML.h"

#define YYSTYPE char *
#define YYPARSE_PARAM_TYPE char **
#define YYPARSE_PARAM ret_str

#define yytext itex2MML_yytext

 extern int yylex ();
 int itex2MML_do_html_filter (const char * buffer, size_t length, const int forbid_markup);

 extern char * yytext;

 static void itex2MML_default_error (const char * msg)
   {
     if (msg)
       fprintf(stderr, "Line: %d Error: %s\n", itex2MML_lineno, msg);
   }

 void (*itex2MML_error) (const char * msg) = itex2MML_default_error;

 static void yyerror (char **ret_str, char * s)
   {
     char * msg = itex2MML_copy3 (s, " at token ", yytext);
     if (itex2MML_error)
       (*itex2MML_error) (msg);
     itex2MML_free_string (msg);
   }

 /* Note: If length is 0, then buffer is treated like a string; otherwise only length bytes are written.
  */
 static void itex2MML_default_write (const char * buffer, size_t length)
   {
     if (buffer)
       {
	 if (length)
	   fwrite (buffer, 1, length, stdout);
	 else
	   fputs (buffer, stdout);
       }
   }

 static void itex2MML_default_write_mathml (const char * mathml)
   {
     if (itex2MML_write)
       (*itex2MML_write) (mathml, 0);
   }

#ifdef itex2MML_CAPTURE
    static char * itex2MML_output_string = "" ;

    const char * itex2MML_output ()
    {
        char * copy = (char *) malloc((itex2MML_output_string ? strlen(itex2MML_output_string) : 0) + 1);
        if (copy)
          {
           if (itex2MML_output_string)
             {
               strcpy(copy, itex2MML_output_string);
               if (*itex2MML_output_string != '\0')
                   free(itex2MML_output_string);
             }
           else
             copy[0] = 0;
           itex2MML_output_string = "";
          }
        return copy;
    }

 static void itex2MML_capture (const char * buffer, size_t length)
    {
     if (buffer)
       {
         if (length)
           {
              size_t first_length = itex2MML_output_string ? strlen(itex2MML_output_string) : 0;
              char * copy  = (char *) malloc(first_length + length + 1);
              if (copy)
                {
                  if (itex2MML_output_string)
                    {
                       strcpy(copy, itex2MML_output_string);
                       if (*itex2MML_output_string != '\0')
                          free(itex2MML_output_string);
                    }
                  else
                     copy[0] = 0;
                  strncat(copy, buffer, length);
                  itex2MML_output_string = copy;
                 }
            }
         else
            {
              char * copy = itex2MML_copy2(itex2MML_output_string, buffer);
              if (*itex2MML_output_string != '\0')
                 free(itex2MML_output_string);
              itex2MML_output_string = copy;
            }
        }
    }

    static void itex2MML_capture_mathml (const char * buffer)
    {
       char * temp = itex2MML_copy2(itex2MML_output_string, buffer);
       if (*itex2MML_output_string != '\0')
         free(itex2MML_output_string);
       itex2MML_output_string = temp;
    }
    void (*itex2MML_write) (const char * buffer, size_t length) = itex2MML_capture;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_capture_mathml;
#else
    void (*itex2MML_write) (const char * buffer, size_t length) = itex2MML_default_write;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_default_write_mathml;
#endif 

 char * itex2MML_empty_string = "";

 /* Create a copy of a string, adding space for extra chars
  */
 char * itex2MML_copy_string_extra (const char * str, unsigned extra)
   {
     char * copy = (char *) malloc(extra + (str ? strlen (str) : 0) + 1);
     if (copy)
       {
	 if (str)
	   strcpy(copy, str);
	 else
	   copy[0] = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending two strings
  */
 char * itex2MML_copy3 (const char * first, const char * second, const char * third)
   {
     size_t first_length =  first ? strlen( first) : 0;
     size_t second_length = second ? strlen(second) : 0;
     size_t third_length =  third ? strlen( third) : 0;

     char * copy = (char *) malloc(first_length + second_length + third_length + 1);

     if (copy)
       {
	 if (first)
	   strcpy(copy, first);
	 else
	   copy[0] = 0;

	 if (second) strcat(copy, second);
	 if ( third) strcat(copy,  third);
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending a second string
  */
 char * itex2MML_copy2 (const char * first, const char * second)
   {
     return itex2MML_copy3(first, second, 0);
   }

 /* Create a copy of a string
  */
 char * itex2MML_copy_string (const char * str)
   {
     return itex2MML_copy3(str, 0, 0);
   }

 /* Create a copy of a string, escaping unsafe characters for XML
  */
 char * itex2MML_copy_escaped (const char * str)
   {
     size_t length = 0;

     const char * ptr1 = str;

     char * ptr2 = 0;
     char * copy = 0;

     if ( str == 0) return itex2MML_empty_string;
     if (*str == 0) return itex2MML_empty_string;

     while (*ptr1)
       {
	 switch (*ptr1)
	   {
	   case '<':  /* &lt;   */
	   case '>':  /* &gt;   */
	     length += 4;
	     break;
	   case '&':  /* &amp;  */
	     length += 5;
	     break;
	   case '\'': /* &apos; */
	   case '"':  /* &quot; */
	   case '-':  /* &#x2d; */
	     length += 6;
	     break;
	   default:
	     length += 1;
	     break;
	   }
	 ++ptr1;
       }

     copy = (char *) malloc (length + 1);

     if (copy)
       {
	 ptr1 = str;
	 ptr2 = copy;

	 while (*ptr1)
	   {
	     switch (*ptr1)
	       {
	       case '<':
		 strcpy (ptr2, "&lt;");
		 ptr2 += 4;
		 break;
	       case '>':
		 strcpy (ptr2, "&gt;");
		 ptr2 += 4;
		 break;
	       case '&':  /* &amp;  */
		 strcpy (ptr2, "&amp;");
		 ptr2 += 5;
		 break;
	       case '\'': /* &apos; */
		 strcpy (ptr2, "&apos;");
		 ptr2 += 6;
		 break;
	       case '"':  /* &quot; */
		 strcpy (ptr2, "&quot;");
		 ptr2 += 6;
		 break;
	       case '-':  /* &#x2d; */
		 strcpy (ptr2, "&#x2d;");
		 ptr2 += 6;
		 break;
	       default:
		 *ptr2++ = *ptr1;
		 break;
	       }
	     ++ptr1;
	   }
	 *ptr2 = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a hex character reference string corresponding to code
  */
 char * itex2MML_character_reference (unsigned long int code)
   {
#define ENTITY_LENGTH 10
     char * entity = (char *) malloc(ENTITY_LENGTH);
     sprintf(entity, "&#x%05lx;", code);
     return entity;
   }

 void itex2MML_free_string (char * str)
   {
     if (str && str != itex2MML_empty_string)
       free(str);
   }


#line 349 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_ITEX2MML_YY_Y_TAB_H_INCLUDED
# define YY_ITEX2MML_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int itex2MML_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TEXOVER = 258,
    TEXATOP = 259,
    CHAR = 260,
    STARTMATH = 261,
    STARTDMATH = 262,
    ENDMATH = 263,
    MI = 264,
    MIB = 265,
    MN = 266,
    MO = 267,
    SUP = 268,
    SUB = 269,
    MROWOPEN = 270,
    MROWCLOSE = 271,
    LEFT = 272,
    RIGHT = 273,
    BIG = 274,
    BBIG = 275,
    BIGG = 276,
    BBIGG = 277,
    BIGL = 278,
    BBIGL = 279,
    BIGGL = 280,
    BBIGGL = 281,
    FRAC = 282,
    TFRAC = 283,
    OPERATORNAME = 284,
    MATHOP = 285,
    MATHBIN = 286,
    MATHREL = 287,
    MOP = 288,
    MOL = 289,
    MOLL = 290,
    MOF = 291,
    MOR = 292,
    PERIODDELIM = 293,
    OTHERDELIM = 294,
    LEFTDELIM = 295,
    RIGHTDELIM = 296,
    MOS = 297,
    MOB = 298,
    SQRT = 299,
    ROOT = 300,
    BINOM = 301,
    TBINOM = 302,
    UNDER = 303,
    OVER = 304,
    OVERBRACE = 305,
    UNDERLINE = 306,
    UNDERBRACE = 307,
    UNDEROVER = 308,
    TENSOR = 309,
    MULTI = 310,
    ARRAYALIGN = 311,
    COLUMNALIGN = 312,
    ARRAY = 313,
    COLSEP = 314,
    ROWSEP = 315,
    ARRAYOPTS = 316,
    COLLAYOUT = 317,
    COLALIGN = 318,
    ROWALIGN = 319,
    ALIGN = 320,
    EQROWS = 321,
    EQCOLS = 322,
    ROWLINES = 323,
    COLLINES = 324,
    FRAME = 325,
    PADDING = 326,
    ATTRLIST = 327,
    ITALICS = 328,
    SANS = 329,
    TT = 330,
    BOLD = 331,
    BOXED = 332,
    SLASHED = 333,
    RM = 334,
    BB = 335,
    ST = 336,
    END = 337,
    BBLOWERCHAR = 338,
    BBUPPERCHAR = 339,
    BBDIGIT = 340,
    CALCHAR = 341,
    FRAKCHAR = 342,
    CAL = 343,
    SCR = 344,
    FRAK = 345,
    CLAP = 346,
    LLAP = 347,
    RLAP = 348,
    ROWOPTS = 349,
    TEXTSIZE = 350,
    SCSIZE = 351,
    SCSCSIZE = 352,
    DISPLAY = 353,
    TEXTSTY = 354,
    TEXTBOX = 355,
    TEXTSTRING = 356,
    XMLSTRING = 357,
    CELLOPTS = 358,
    ROWSPAN = 359,
    COLSPAN = 360,
    THINSPACE = 361,
    MEDSPACE = 362,
    THICKSPACE = 363,
    QUAD = 364,
    QQUAD = 365,
    NEGSPACE = 366,
    NEGMEDSPACE = 367,
    NEGTHICKSPACE = 368,
    PHANTOM = 369,
    HREF = 370,
    UNKNOWNCHAR = 371,
    EMPTYMROW = 372,
    STATLINE = 373,
    TOOLTIP = 374,
    TOGGLE = 375,
    TOGGLESTART = 376,
    TOGGLEEND = 377,
    FGHIGHLIGHT = 378,
    BGHIGHLIGHT = 379,
    SPACE = 380,
    INTONE = 381,
    INTTWO = 382,
    INTTHREE = 383,
    BAR = 384,
    WIDEBAR = 385,
    VEC = 386,
    WIDEVEC = 387,
    WIDELVEC = 388,
    HAT = 389,
    WIDEHAT = 390,
    CHECK = 391,
    WIDECHECK = 392,
    TILDE = 393,
    WIDETILDE = 394,
    DOT = 395,
    DDOT = 396,
    DDDOT = 397,
    DDDDOT = 398,
    UNARYMINUS = 399,
    UNARYPLUS = 400,
    BEGINENV = 401,
    ENDENV = 402,
    MATRIX = 403,
    PMATRIX = 404,
    BMATRIX = 405,
    BBMATRIX = 406,
    VMATRIX = 407,
    VVMATRIX = 408,
    SVG = 409,
    ENDSVG = 410,
    SMALLMATRIX = 411,
    CASES = 412,
    ALIGNED = 413,
    GATHERED = 414,
    SUBSTACK = 415,
    PMOD = 416,
    RMCHAR = 417,
    COLOR = 418,
    BGCOLOR = 419,
    XARROW = 420,
    OPTARGOPEN = 421,
    OPTARGCLOSE = 422,
    ITEXNUM = 423,
    RAISEBOX = 424,
    NEG = 425
  };
#endif
/* Tokens.  */
#define TEXOVER 258
#define TEXATOP 259
#define CHAR 260
#define STARTMATH 261
#define STARTDMATH 262
#define ENDMATH 263
#define MI 264
#define MIB 265
#define MN 266
#define MO 267
#define SUP 268
#define SUB 269
#define MROWOPEN 270
#define MROWCLOSE 271
#define LEFT 272
#define RIGHT 273
#define BIG 274
#define BBIG 275
#define BIGG 276
#define BBIGG 277
#define BIGL 278
#define BBIGL 279
#define BIGGL 280
#define BBIGGL 281
#define FRAC 282
#define TFRAC 283
#define OPERATORNAME 284
#define MATHOP 285
#define MATHBIN 286
#define MATHREL 287
#define MOP 288
#define MOL 289
#define MOLL 290
#define MOF 291
#define MOR 292
#define PERIODDELIM 293
#define OTHERDELIM 294
#define LEFTDELIM 295
#define RIGHTDELIM 296
#define MOS 297
#define MOB 298
#define SQRT 299
#define ROOT 300
#define BINOM 301
#define TBINOM 302
#define UNDER 303
#define OVER 304
#define OVERBRACE 305
#define UNDERLINE 306
#define UNDERBRACE 307
#define UNDEROVER 308
#define TENSOR 309
#define MULTI 310
#define ARRAYALIGN 311
#define COLUMNALIGN 312
#define ARRAY 313
#define COLSEP 314
#define ROWSEP 315
#define ARRAYOPTS 316
#define COLLAYOUT 317
#define COLALIGN 318
#define ROWALIGN 319
#define ALIGN 320
#define EQROWS 321
#define EQCOLS 322
#define ROWLINES 323
#define COLLINES 324
#define FRAME 325
#define PADDING 326
#define ATTRLIST 327
#define ITALICS 328
#define SANS 329
#define TT 330
#define BOLD 331
#define BOXED 332
#define SLASHED 333
#define RM 334
#define BB 335
#define ST 336
#define END 337
#define BBLOWERCHAR 338
#define BBUPPERCHAR 339
#define BBDIGIT 340
#define CALCHAR 341
#define FRAKCHAR 342
#define CAL 343
#define SCR 344
#define FRAK 345
#define CLAP 346
#define LLAP 347
#define RLAP 348
#define ROWOPTS 349
#define TEXTSIZE 350
#define SCSIZE 351
#define SCSCSIZE 352
#define DISPLAY 353
#define TEXTSTY 354
#define TEXTBOX 355
#define TEXTSTRING 356
#define XMLSTRING 357
#define CELLOPTS 358
#define ROWSPAN 359
#define COLSPAN 360
#define THINSPACE 361
#define MEDSPACE 362
#define THICKSPACE 363
#define QUAD 364
#define QQUAD 365
#define NEGSPACE 366
#define NEGMEDSPACE 367
#define NEGTHICKSPACE 368
#define PHANTOM 369
#define HREF 370
#define UNKNOWNCHAR 371
#define EMPTYMROW 372
#define STATLINE 373
#define TOOLTIP 374
#define TOGGLE 375
#define TOGGLESTART 376
#define TOGGLEEND 377
#define FGHIGHLIGHT 378
#define BGHIGHLIGHT 379
#define SPACE 380
#define INTONE 381
#define INTTWO 382
#define INTTHREE 383
#define BAR 384
#define WIDEBAR 385
#define VEC 386
#define WIDEVEC 387
#define WIDELVEC 388
#define HAT 389
#define WIDEHAT 390
#define CHECK 391
#define WIDECHECK 392
#define TILDE 393
#define WIDETILDE 394
#define DOT 395
#define DDOT 396
#define DDDOT 397
#define DDDDOT 398
#define UNARYMINUS 399
#define UNARYPLUS 400
#define BEGINENV 401
#define ENDENV 402
#define MATRIX 403
#define PMATRIX 404
#define BMATRIX 405
#define BBMATRIX 406
#define VMATRIX 407
#define VVMATRIX 408
#define SVG 409
#define ENDSVG 410
#define SMALLMATRIX 411
#define CASES 412
#define ALIGNED 413
#define GATHERED 414
#define SUBSTACK 415
#define PMOD 416
#define RMCHAR 417
#define COLOR 418
#define BGCOLOR 419
#define XARROW 420
#define OPTARGOPEN 421
#define OPTARGCLOSE 422
#define ITEXNUM 423
#define RAISEBOX 424
#define NEG 425

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE itex2MML_yylval;

int itex2MML_yyparse (char **ret_str);

#endif /* !YY_ITEX2MML_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 740 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  203
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5076

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  327
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  582

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   425

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   287,   287,   290,   291,   292,   293,   294,   296,   298,
     299,   300,   316,   333,   337,   343,   362,   376,   395,   409,
     428,   442,   461,   475,   485,   495,   502,   509,   513,   517,
     522,   523,   524,   525,   526,   530,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   603,   607,   615,   616,   617,   618,   620,   625,
     630,   636,   640,   644,   649,   654,   658,   662,   667,   671,
     675,   680,   684,   688,   693,   697,   701,   706,   711,   716,
     721,   726,   731,   736,   742,   746,   750,   754,   756,   762,
     763,   769,   775,   776,   777,   782,   787,   792,   796,   801,
     805,   809,   813,   818,   823,   828,   833,   838,   843,   849,
     860,   868,   876,   883,   888,   896,   904,   911,   919,   924,
     929,   934,   939,   944,   949,   954,   959,   964,   969,   974,
     979,   984,   989,   994,   999,  1003,  1009,  1014,  1018,  1024,
    1028,  1032,  1040,  1045,  1049,  1055,  1060,  1065,  1070,  1074,
    1080,  1085,  1089,  1093,  1097,  1101,  1105,  1109,  1113,  1117,
    1122,  1132,  1139,  1147,  1157,  1166,  1174,  1178,  1184,  1189,
    1193,  1197,  1202,  1209,  1217,  1222,  1229,  1243,  1250,  1264,
    1271,  1279,  1284,  1289,  1294,  1298,  1303,  1307,  1312,  1317,
    1322,  1327,  1332,  1337,  1341,  1346,  1350,  1355,  1359,  1364,
    1369,  1376,  1384,  1397,  1410,  1420,  1432,  1441,  1451,  1458,
    1466,  1473,  1481,  1491,  1500,  1504,  1508,  1512,  1516,  1520,
    1524,  1528,  1532,  1536,  1540,  1544,  1554,  1561,  1565,  1569,
    1574,  1579,  1584,  1588,  1596,  1600,  1606,  1610,  1614,  1618,
    1622,  1626,  1630,  1634,  1638,  1642,  1647,  1652,  1657,  1662,
    1667,  1672,  1677,  1682,  1687,  1692,  1699,  1703,  1709,  1713,
    1718,  1722,  1728,  1736,  1740,  1746,  1750,  1755,  1758,  1762,
    1770,  1774,  1780,  1784,  1788,  1792,  1797,  1802
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXOVER", "TEXATOP", "CHAR",
  "STARTMATH", "STARTDMATH", "ENDMATH", "MI", "MIB", "MN", "MO", "SUP",
  "SUB", "MROWOPEN", "MROWCLOSE", "LEFT", "RIGHT", "BIG", "BBIG", "BIGG",
  "BBIGG", "BIGL", "BBIGL", "BIGGL", "BBIGGL", "FRAC", "TFRAC",
  "OPERATORNAME", "MATHOP", "MATHBIN", "MATHREL", "MOP", "MOL", "MOLL",
  "MOF", "MOR", "PERIODDELIM", "OTHERDELIM", "LEFTDELIM", "RIGHTDELIM",
  "MOS", "MOB", "SQRT", "ROOT", "BINOM", "TBINOM", "UNDER", "OVER",
  "OVERBRACE", "UNDERLINE", "UNDERBRACE", "UNDEROVER", "TENSOR", "MULTI",
  "ARRAYALIGN", "COLUMNALIGN", "ARRAY", "COLSEP", "ROWSEP", "ARRAYOPTS",
  "COLLAYOUT", "COLALIGN", "ROWALIGN", "ALIGN", "EQROWS", "EQCOLS",
  "ROWLINES", "COLLINES", "FRAME", "PADDING", "ATTRLIST", "ITALICS",
  "SANS", "TT", "BOLD", "BOXED", "SLASHED", "RM", "BB", "ST", "END",
  "BBLOWERCHAR", "BBUPPERCHAR", "BBDIGIT", "CALCHAR", "FRAKCHAR", "CAL",
  "SCR", "FRAK", "CLAP", "LLAP", "RLAP", "ROWOPTS", "TEXTSIZE", "SCSIZE",
  "SCSCSIZE", "DISPLAY", "TEXTSTY", "TEXTBOX", "TEXTSTRING", "XMLSTRING",
  "CELLOPTS", "ROWSPAN", "COLSPAN", "THINSPACE", "MEDSPACE", "THICKSPACE",
  "QUAD", "QQUAD", "NEGSPACE", "NEGMEDSPACE", "NEGTHICKSPACE", "PHANTOM",
  "HREF", "UNKNOWNCHAR", "EMPTYMROW", "STATLINE", "TOOLTIP", "TOGGLE",
  "TOGGLESTART", "TOGGLEEND", "FGHIGHLIGHT", "BGHIGHLIGHT", "SPACE",
  "INTONE", "INTTWO", "INTTHREE", "BAR", "WIDEBAR", "VEC", "WIDEVEC",
  "WIDELVEC", "HAT", "WIDEHAT", "CHECK", "WIDECHECK", "TILDE", "WIDETILDE",
  "DOT", "DDOT", "DDDOT", "DDDDOT", "UNARYMINUS", "UNARYPLUS", "BEGINENV",
  "ENDENV", "MATRIX", "PMATRIX", "BMATRIX", "BBMATRIX", "VMATRIX",
  "VVMATRIX", "SVG", "ENDSVG", "SMALLMATRIX", "CASES", "ALIGNED",
  "GATHERED", "SUBSTACK", "PMOD", "RMCHAR", "COLOR", "BGCOLOR", "XARROW",
  "OPTARGOPEN", "OPTARGCLOSE", "ITEXNUM", "RAISEBOX", "NEG", "$accept",
  "doc", "xmlmmlTermList", "char", "expression", "compoundTermList",
  "compoundTerm", "closedTerm", "left", "right", "bigdelim",
  "unrecognized", "unaryminus", "unaryplus", "mi", "mib", "mn", "mob",
  "mo", "space", "statusline", "tooltip", "toggle", "fghighlight",
  "bghighlight", "color", "mathrlap", "mathllap", "mathclap", "textstring",
  "displaystyle", "textstyle", "textsize", "scriptsize",
  "scriptscriptsize", "italics", "sans", "mono", "slashed", "boxed",
  "bold", "roman", "rmchars", "bbold", "bbchars", "bbchar", "frak",
  "frakletters", "frakletter", "cal", "scr", "calletters", "calletter",
  "thinspace", "medspace", "thickspace", "quad", "qquad", "negspace",
  "negmedspace", "negthickspace", "phantom", "href", "tensor", "multi",
  "subsupList", "subsupTerm", "mfrac", "pmod", "texover", "texatop",
  "binom", "munderbrace", "munderline", "moverbrace", "bar", "vec", "lvec",
  "dot", "ddot", "dddot", "ddddot", "tilde", "check", "hat", "msqrt",
  "mroot", "raisebox", "munder", "mover", "munderover", "emptymrow",
  "mathenv", "columnAlignList", "substack", "array", "arrayopts",
  "anarrayopt", "collayout", "colalign", "rowalign", "align", "eqrows",
  "eqcols", "rowlines", "collines", "frame", "padding", "tableRowList",
  "tableRow", "simpleTableRow", "optsTableRow", "rowopts", "arowopt",
  "tableCell", "cellopts", "acellopt", "rowspan", "colspan", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425
};
# endif

#define YYPACT_NINF -416

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-416)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     200,  -416,  1362,  1524,    38,   200,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  4746,  4746,  3458,   171,   174,   177,   180,
     184,    80,    90,   134,   210,  4746,  4746,   -70,   -57,   -39,
     -28,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  3619,  4746,  4746,  4746,  4746,  4746,  4746,  4746,
    4746,  4746,  4746,   -11,    44,  4746,  4746,  4746,  4746,  4746,
    4746,   -15,     8,    11,    36,    46,  4746,  4746,  4746,  3458,
    3458,  3458,  3458,  3458,    32,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  4746,    51,  -416,  -416,    59,    64,  4746,
    3458,    73,    95,   106,  4746,  4746,  4746,  4746,  4746,  4746,
    4746,  4746,  4746,  4746,  4746,  4746,  4746,  4746,  4746,  -416,
    -416,   -10,   197,  4746,  -416,   131,   157,  3780,    98,   -80,
    1686,  -416,    39,  3458,  -416,  -416,  -416,  -416,  -416,   141,
    -416,   238,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,    76,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  1848,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    1037,   121,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  4746,  4746,  -416,  -416,  -416,
    -416,  3458,  -416,  4746,  4746,  4746,  4746,  4746,  -416,  -416,
    -416,  4746,   213,   242,  4746,  2009,  -416,  -416,  -416,  -416,
    -416,  -416,    78,   152,   161,   161,   175,  -416,  -416,  -416,
    3458,  3458,  3458,  3458,  3458,  -416,  -416,  4746,  4746,  4746,
    4746,  2331,  4746,  4746,   135,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
     -27,  2170,  2170,  2170,  2170,  2170,  2170,   -83,  2170,  2170,
    2170,  2170,  2170,  -416,  3458,  3458,  3458,  -416,  -416,  3941,
     163,  -416,  -416,  4746,  4746,  1200,  4746,  4746,  4746,  4746,
    -416,  -416,  3458,  3458,  -416,  -416,  -416,  -416,  2492,  -416,
    -416,  -416,  -416,  -416,  4746,  4746,  4102,   242,   242,  -416,
     137,   250,   251,   252,   258,  3458,    31,  -416,   215,  -416,
    -416,   -62,  -416,  -416,  -416,    41,  -416,  -416,   -22,  -416,
     -21,  -416,   -32,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,   193,   195,   220,   -53,   -52,   -48,   -46,   -43,   -42,
     123,  -416,   -38,   -37,   -36,   -35,    42,  3458,  3458,  2653,
    4263,  -416,  4424,   266,   268,  3458,  3458,   120,  -416,   269,
     271,   273,   275,  2814,  2975,  4746,  -416,  -416,  4746,   276,
     150,  -416,  4746,   242,   127,   194,    52,  -416,  2170,  3136,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,   201,   220,
    -416,    -8,   142,   143,   144,   146,   153,   158,  -416,   160,
     162,   159,   165,  -416,  4907,  4746,  -416,  4585,  -416,  4746,
    4746,  3297,  3297,  -416,  -416,  -416,  4746,  4746,  4746,  4746,
    -416,  -416,  -416,  -416,  4746,  -416,    -9,   155,   246,   248,
     249,   253,   254,   260,   261,   262,   263,   265,   115,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,    14,  -416,   267,   270,  -416,  -416,    -7,  -416,
    -416,  -416,  -416,  -416,   211,    -6,  -416,  2170,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  4746,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,   242,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  2170,  -416,  3136,  -416,  -416,
    -416,  3458,  -416,   240,  2170,   -34,  -416,   188,    47,   215,
    3458,   259,   -33,   283,  -416,  -416,   216,   285,  -416,   272,
    -416,  -416
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     8,     0,     0,     0,     2,     4,     5,     9,   137,
     138,   139,   144,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   145,   146,   150,   154,   151,   149,   148,   147,
     152,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,   203,   204,   205,
     206,   207,   208,     0,     0,   134,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,     0,     0,   184,     0,     0,     0,     0,     0,
       0,    13,    29,     0,   143,   107,    31,    32,    34,    33,
      35,   142,    36,    81,    93,    94,    95,    96,    97,    98,
      63,    62,    61,    82,    64,    65,    66,    67,    68,    69,
      70,    71,    77,    78,    72,    73,    74,    75,    76,    79,
      80,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    37,    38,    39,   106,    99,   100,    40,    57,    58,
      56,    46,    47,    48,    50,    51,    52,    53,    55,    54,
      49,    41,    42,    43,    44,    45,    59,    60,   104,   105,
      30,    10,     0,     1,     6,     7,    28,    33,   142,    27,
       0,    29,   110,   109,   108,   116,   114,   115,   119,   117,
     118,   122,   120,   121,   125,   123,   124,   127,   126,   129,
     128,   131,   130,   133,   132,     0,     0,   155,   156,   157,
     158,     0,   249,     0,     0,     0,     0,     0,   233,   232,
     231,     0,     0,     0,     0,   317,   177,   178,   179,   182,
     181,   180,     0,     0,     0,     0,     0,   170,   169,   168,
     174,   175,   176,   172,   173,   171,   209,     0,     0,     0,
       0,     0,     0,     0,     0,   234,   235,   236,   237,   238,
     247,   248,   245,   246,   243,   244,   239,   240,   241,   242,
       0,   317,   317,   317,   317,   317,   317,     0,   317,   317,
     317,   317,   317,   224,     0,     0,     0,   260,   140,     0,
       0,    11,    14,     0,     0,     0,     0,     0,     0,     0,
     185,    12,     0,     0,   102,   101,   222,   223,     0,   251,
     229,   230,   259,   261,     0,     0,     0,     0,   212,   216,
       0,     0,     0,     0,     0,   318,     0,   306,   308,   309,
     310,     0,   189,   190,   191,     0,   187,   200,     0,   198,
       0,   195,     0,   193,   210,   160,   161,   162,   163,   164,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   278,     0,     0,     0,     0,     0,   166,   167,     0,
       0,   256,     0,    26,    25,     0,     0,     0,   103,    22,
      20,    18,    16,     0,     0,     0,   263,   220,     0,   219,
       0,   217,     0,     0,     0,     0,     0,   282,   317,   317,
     183,   186,   188,   196,   199,   197,   192,   194,     0,     0,
     280,     0,     0,     0,     0,     0,     0,     0,   277,     0,
       0,     0,     0,   281,     0,     0,   254,     0,   257,     0,
       0,     0,     0,   113,   112,   111,     0,     0,     0,     0,
     225,   227,   250,   221,     0,   211,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   284,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     315,   316,     0,   313,     0,     0,   322,   323,     0,   320,
     324,   325,   307,   311,     0,     0,   279,   317,   265,   267,
     268,   270,   269,   271,   272,   273,   274,   266,   258,   262,
     252,     0,   255,    24,    23,   226,   228,    21,    19,    17,
      15,   218,     0,   214,   215,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   317,   285,   317,   314,   326,
     327,     0,   321,     0,   317,     0,   253,     0,     0,   312,
     319,     0,     0,     0,   213,   283,     0,     0,   276,     0,
     275,   159
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -416,  -416,  -416,   342,   343,    13,   -40,   570,  -416,  -202,
    -416,  -416,  -416,  -416,  -416,    -2,  -416,   173,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,    87,  -416,  -416,   -14,  -416,  -416,   -20,  -416,
    -416,    85,  -289,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -251,  -345,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -416,
    -416,  -416,  -416,   -84,  -416,  -416,  -416,  -132,  -416,  -415,
    -380,  -416,  -416,  -416,  -416,  -416,  -416,  -416,  -269,   -68,
    -196,  -416,  -416,  -140,   -66,  -416,  -144,  -416,  -416
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   355,   121,   122,   123,   408,
     124,   125,   126,   127,   128,   207,   130,   208,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   365,   366,   158,   372,   373,   159,
     160,   368,   369,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   348,   349,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   441,   199,   200,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   356,   357,
     358,   359,   502,   503,   360,   508,   509,   510,   511
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     129,   129,   350,   421,   253,   421,   542,   428,   428,   561,
     500,   506,   428,   129,   428,   120,   202,   428,   428,   390,
     430,   319,   428,   428,   428,   428,   428,   428,   210,   382,
     557,   237,   384,   385,   386,   387,   388,   389,   203,   392,
     393,   394,   395,   396,   238,   501,   507,   427,   300,   516,
     436,   516,   323,   324,   383,   371,   479,   480,   453,   255,
     433,   435,   239,   575,   367,   367,   262,   129,   129,   129,
     129,   129,   391,   240,   517,   421,   564,   479,   480,   434,
     322,   434,   270,   271,   272,   273,   274,   500,   129,   263,
     320,   428,   264,   506,   442,   443,   420,   504,   505,   444,
     330,   445,   428,   281,   446,   447,   254,   428,   543,   449,
     450,   451,   452,   573,   577,   479,   480,   265,   129,   227,
     228,   129,   501,   431,   362,   363,   364,   266,   507,   229,
     230,   555,   421,   275,   323,   324,   325,   335,   301,   302,
     303,   304,   305,   306,   307,   282,   308,   309,   310,   311,
     345,   346,   277,   422,   326,   327,   504,   505,   463,   464,
     278,   465,   322,   345,   346,   279,   475,   283,   345,   346,
     322,   544,   477,   231,   232,   131,   131,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   284,   131,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   318,
     129,   345,   346,   314,   574,     1,     2,     3,   129,   212,
     213,   214,   312,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   421,   224,   225,   226,   345,   346,   347,   315,
     322,   322,   322,   322,   322,   362,   363,   364,   330,   129,
     114,   322,   131,   131,   131,   131,   131,   367,   565,   233,
     234,   328,   329,   129,   338,   345,   346,   479,   480,   535,
     536,   381,   371,   131,   402,   423,   424,   425,   129,   129,
     129,   129,   129,   426,   429,   438,   439,   440,   448,   129,
     459,   460,   514,   466,   467,   322,   568,   468,   469,   474,
     518,   567,   519,   131,   520,   572,   131,   521,   322,   129,
     129,   129,   129,   129,   129,   522,   129,   129,   129,   129,
     129,   523,   129,   129,   129,   322,   524,   526,   545,   525,
     546,   547,   571,   129,   527,   548,   549,   397,   398,   399,
     129,   129,   550,   551,   552,   553,   129,   554,   563,   559,
     576,   578,   560,   580,   579,   413,   414,   204,   205,   361,
     370,   432,   437,   129,   581,   515,   556,   322,   322,   322,
     512,   569,   558,   513,   562,     0,     0,     0,     0,     0,
       0,     0,     0,   322,   322,   131,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   129,   129,     0,     0,
       0,     0,     0,   129,   129,     0,     0,     0,     0,     0,
       0,   129,   129,     0,   131,     0,     0,     0,   461,   462,
       0,   322,   322,     0,     0,     0,   129,   129,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,   131,   131,   131,   131,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,   129,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,   131,   131,   131,   131,   131,
       0,   131,   131,   131,   131,   131,     0,   131,   131,   131,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
       0,     0,     0,     0,     0,   131,   131,     0,     0,     0,
       0,   131,     0,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
     322,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,   129,     0,     0,     0,   129,
       0,     0,   129,     0,     0,     0,     0,     0,   129,     0,
     131,   131,   131,     0,   570,     0,     0,     0,   131,   131,
       0,     0,     0,   206,   209,   211,   131,   131,     0,     0,
       0,     0,     0,     0,     0,   235,   236,     0,     0,     0,
       0,   131,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,     0,     0,   256,   257,   258,   259,   260,
     261,     0,     0,     0,   131,   131,   267,   268,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   276,     0,     0,     0,     0,     0,   280,
       0,     0,     0,     0,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
       0,     0,     0,   313,     0,     0,     0,   317,     0,     0,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
     131,     0,     0,     0,   131,     0,     0,   131,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   336,   337,     0,     0,     0,
       0,     0,     0,   339,   340,   341,   342,   343,     0,     0,
       0,   344,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   374,   375,   376,
     377,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,   403,   404,     0,   409,   410,   411,   412,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   416,   417,   419,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     456,     0,   458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   472,     0,     0,   473,     0,
       0,     0,   476,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   529,   530,     0,   532,     0,   533,
     534,     0,     0,     0,     0,     0,   537,   538,   539,   540,
     332,   333,     0,     0,   541,     0,     9,    10,    11,    12,
      13,    14,    15,   334,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,     0,
       0,   566,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     0,
      91,    92,    93,     0,     0,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,   405,   406,   118,   119,     0,     0,     9,
      10,    11,    12,    13,    14,    15,     0,    16,   407,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    69,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,    91,    92,    93,     0,     0,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   113,   114,   115,   116,   117,     0,     0,   118,   119,
       8,     9,    10,    11,    12,    13,    14,    15,     0,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,     0,     0,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,   117,     0,     0,
     118,   119,   201,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,    91,    92,    93,
       0,     0,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   113,   114,   115,   116,   117,
       0,     0,   118,   119,   321,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,     0,     0,   118,   119,   331,     9,    10,    11,
      12,    13,    14,    15,     0,    16,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,     0,    69,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,    91,    92,    93,     0,     0,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,     0,     0,   118,   119,     9,    10,
      11,    12,    13,    14,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    54,     0,     0,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,   353,    69,    70,    71,    72,    73,    74,
       0,     0,   354,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,    91,    92,    93,     0,     0,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   114,   115,   116,   117,     0,     0,   118,   119,     9,
      10,    11,    12,    13,    14,    15,     0,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,   353,    69,    70,    71,    72,    73,
      74,     0,     0,   354,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,    91,    92,    93,     0,     0,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   113,   114,   115,   116,   117,     0,     0,   118,   119,
       9,    10,    11,    12,    13,    14,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    69,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   378,    91,    92,    93,     0,     0,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   114,   115,   116,   117,     0,     0,   118,
     119,     9,    10,    11,    12,    13,    14,    15,     0,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,     0,     0,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,   117,     0,   415,
     118,   119,     9,    10,    11,    12,    13,    14,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,    93,     0,
       0,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   114,   115,   116,   117,     0,
     454,   118,   119,     9,    10,    11,    12,    13,    14,    15,
     470,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,    91,    92,    93,
       0,     0,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   113,   114,   115,   116,   117,
       0,     0,   118,   119,     9,    10,    11,    12,    13,    14,
      15,   471,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     0,    91,    92,
      93,     0,     0,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   113,   114,   115,   116,
     117,     0,     0,   118,   119,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,   354,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,     0,     0,   118,   119,     9,    10,    11,    12,
      13,    14,    15,     0,    16,   407,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     0,
      91,    92,    93,     0,     0,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,     0,     0,   118,   119,     9,    10,    11,
      12,    13,    14,    15,     0,    16,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,     0,    69,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,    91,    92,    93,     0,     0,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,     0,     0,   118,   119,     9,    10,
      11,    12,     0,     0,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,     0,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,    91,    92,    93,     0,     0,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   114,   115,   116,   117,   241,     0,   118,   119,     9,
      10,    11,    12,     0,     0,    15,     0,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    69,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,    91,    92,    93,     0,     0,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   113,   114,   115,   116,   117,   316,     0,   118,   119,
       9,    10,    11,    12,     0,     0,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    69,    70,    71,    72,
      73,    74,   400,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,    91,    92,    93,     0,     0,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   114,   115,   116,   117,     0,     0,   118,
     119,     9,    10,    11,    12,   418,     0,    15,     0,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,     0,     0,
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,   117,     0,     0,
     118,   119,     9,    10,    11,    12,     0,     0,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,   455,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,    91,    92,    93,     0,
       0,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   114,   115,   116,   117,     0,
       0,   118,   119,     9,    10,    11,    12,     0,     0,    15,
       0,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,   457,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,    91,    92,    93,
       0,     0,     0,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   113,   114,   115,   116,   117,
       0,     0,   118,   119,     9,    10,    11,    12,     0,     0,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      69,    70,    71,    72,    73,    74,   531,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     0,    91,    92,
      93,     0,     0,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   113,   114,   115,   116,
     117,     0,     0,   118,   119,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,     0,     0,   118,   119,     9,    10,    11,    12,
       0,     0,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   528,    87,    88,    89,    90,     0,
      91,    92,    93,     0,     0,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,     0,     0,   118,   119
};

static const yytype_int16 yycheck[] =
{
       2,     3,   253,   348,    15,   350,    15,    60,    60,    16,
     425,   426,    60,    15,    60,     2,     3,    60,    60,   102,
      82,   101,    60,    60,    60,    60,    60,    60,    15,    56,
      16,   101,   301,   302,   303,   304,   305,   306,     0,   308,
     309,   310,   311,   312,   101,   425,   426,    16,    58,    57,
      82,    57,    13,    14,    81,    87,    63,    64,    16,    15,
      82,    82,   101,    16,    86,    86,    81,    69,    70,    71,
      72,    73,   155,   101,    82,   420,    82,    63,    64,   368,
     120,   370,    69,    70,    71,    72,    73,   502,    90,    81,
     170,    60,    81,   508,   147,   147,   347,   104,   105,   147,
     162,   147,    60,    90,   147,   147,   117,    60,   117,   147,
     147,   147,   147,   147,   147,    63,    64,    81,   120,    39,
      40,   123,   502,    82,    83,    84,    85,    81,   508,    39,
      40,    16,   477,   101,    13,    14,   123,    16,   148,   149,
     150,   151,   152,   153,   154,    72,   156,   157,   158,   159,
      13,    14,   101,    16,    13,    14,   104,   105,    38,    39,
     101,    41,   202,    13,    14,   101,    16,    72,    13,    14,
     210,    16,   423,    39,    40,     2,     3,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    81,    15,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,   101,
     202,    13,    14,    72,    16,     5,     6,     7,   210,    38,
      39,    40,    15,    39,    40,    41,    39,    40,    41,    39,
      40,    41,   567,    39,    40,    41,    13,    14,    15,    72,
     270,   271,   272,   273,   274,    83,    84,    85,   162,   241,
     162,   281,    69,    70,    71,    72,    73,    86,   517,    39,
      40,    13,    14,   255,   241,    13,    14,    63,    64,   461,
     462,   126,    87,    90,   101,    15,    15,    15,   270,   271,
     272,   273,   274,    15,    59,    82,    81,    57,   155,   281,
      14,    13,    81,    14,    13,   325,   555,    14,    13,    13,
     148,   542,   149,   120,   150,   564,   123,   151,   338,   301,
     302,   303,   304,   305,   306,   152,   308,   309,   310,   311,
     312,   153,   314,   315,   316,   355,   156,   158,    72,   157,
      72,    72,    82,   325,   159,    72,    72,   314,   315,   316,
     332,   333,    72,    72,    72,    72,   338,    72,   127,    72,
      81,    58,    72,    58,   128,   332,   333,     5,     5,   262,
     265,   365,   372,   355,    82,   439,   488,   397,   398,   399,
     428,   557,   502,   429,   508,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   413,   414,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   397,   398,   399,    -1,    -1,
      -1,    -1,    -1,   405,   406,    -1,    -1,    -1,    -1,    -1,
      -1,   413,   414,    -1,   241,    -1,    -1,    -1,   405,   406,
      -1,   461,   462,    -1,    -1,    -1,   428,   429,   255,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   270,   271,   272,   273,   274,    -1,    -1,
      -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,   461,
     462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   301,   302,   303,   304,   305,   306,
      -1,   308,   309,   310,   311,   312,    -1,   314,   315,   316,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,
      -1,    -1,    -1,    -1,    -1,   332,   333,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
     570,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   555,    -1,   557,    -1,    -1,    -1,   561,
      -1,    -1,   564,    -1,    -1,    -1,    -1,    -1,   570,    -1,
     397,   398,   399,    -1,   561,    -1,    -1,    -1,   405,   406,
      -1,    -1,    -1,    13,    14,    15,   413,   414,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,   461,   462,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,   117,    -1,    -1,
     517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   555,    -1,
     557,    -1,    -1,    -1,   561,    -1,    -1,   564,    -1,    -1,
      -1,    -1,    -1,   570,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,   236,    -1,    -1,    -1,
      -1,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
      -1,   251,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,   278,   279,
     280,    -1,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,    -1,    -1,   323,   324,    -1,   326,   327,   328,   329,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   344,   345,   346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     400,    -1,   402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,   418,    -1,
      -1,    -1,   422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   454,   455,    -1,   457,    -1,   459,
     460,    -1,    -1,    -1,    -1,    -1,   466,   467,   468,   469,
       3,     4,    -1,    -1,   474,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,   531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,   125,    -1,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,   162,
     163,   164,   165,     3,     4,   168,   169,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,   125,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,   164,   165,    -1,    -1,   168,   169,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,   125,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,   161,   162,   163,   164,   165,    -1,    -1,
     168,   169,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    -1,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,   161,   162,   163,   164,   165,
      -1,    -1,   168,   169,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,   161,   162,   163,
     164,   165,    -1,    -1,   168,   169,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    -1,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,   124,   125,    -1,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,    -1,    -1,   168,   169,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,    -1,   103,    -1,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,   125,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
     161,   162,   163,   164,   165,    -1,    -1,   168,   169,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,   103,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,   125,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,   164,   165,    -1,    -1,   168,   169,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    96,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    -1,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,   161,   162,   163,   164,   165,    -1,    -1,   168,
     169,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,   125,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    96,
      97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,    -1,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    -1,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,   161,   162,   163,   164,   165,
      -1,    -1,   168,   169,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
     125,    -1,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,   161,   162,   163,   164,
     165,    -1,    -1,   168,   169,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,   103,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,   161,   162,   163,
     164,   165,    -1,    -1,   168,   169,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,   125,    -1,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,   162,
     163,   164,   165,    -1,    -1,   168,   169,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    -1,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,   124,   125,    -1,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,    -1,    -1,   168,   169,     9,    10,
      11,    12,    -1,    -1,    15,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    96,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,   125,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
     161,   162,   163,   164,   165,   166,    -1,   168,   169,     9,
      10,    11,    12,    -1,    -1,    15,    -1,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,   125,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,   164,   165,   166,    -1,   168,   169,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,   125,    -1,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,   161,   162,   163,   164,   165,    -1,    -1,   168,
     169,     9,    10,    11,    12,    13,    -1,    15,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,   125,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,   161,   162,   163,   164,   165,    -1,    -1,
     168,   169,     9,    10,    11,    12,    -1,    -1,    15,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,    -1,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,   161,   162,   163,   164,   165,    -1,
      -1,   168,   169,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    -1,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,   161,   162,   163,   164,   165,
      -1,    -1,   168,   169,     9,    10,    11,    12,    -1,    -1,
      15,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
     125,    -1,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,   161,   162,   163,   164,
     165,    -1,    -1,   168,   169,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,   161,   162,   163,
     164,   165,    -1,    -1,   168,   169,     9,    10,    11,    12,
      -1,    -1,    15,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,   125,    -1,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,   162,
     163,   164,   165,    -1,    -1,   168,   169
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     5,     6,     7,   172,   173,   174,   175,     8,     9,
      10,    11,    12,    13,    14,    15,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    58,    73,    74,    75,    76,    77,
      78,    79,    80,    88,    89,    90,    91,    92,    93,    95,
      96,    97,    98,    99,   100,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   123,   124,   125,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   160,   161,   162,   163,   164,   165,   168,   169,
     176,   177,   178,   179,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   217,   220,
     221,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   265,
     266,     8,   176,     0,   174,   175,   178,   186,   188,   178,
     176,   178,    38,    39,    40,    39,    40,    41,    39,    40,
      41,    39,    40,    41,    39,    40,    41,    39,    40,    39,
      40,    39,    40,    39,    40,   178,   178,   101,   101,   101,
     101,   166,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,    15,   117,    15,   178,   178,   178,   178,
     178,   178,    81,    81,    81,    81,    81,   178,   178,   178,
     176,   176,   176,   176,   176,   101,   178,   101,   101,   101,
     178,   176,    72,    72,    81,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
      58,   148,   149,   150,   151,   152,   153,   154,   156,   157,
     158,   159,    15,   178,    72,    72,   166,   178,   101,   101,
     170,     8,   177,    13,    14,   176,    13,    14,    13,    14,
     162,     8,     3,     4,    16,    16,   178,   178,   176,   178,
     178,   178,   178,   178,   178,    13,    14,    15,   236,   237,
     236,   178,    61,    94,   103,   176,   279,   280,   281,   282,
     285,   213,    83,    84,    85,   215,   216,    86,   222,   223,
     222,    87,   218,   219,   178,   178,   178,   178,   122,   178,
     178,   126,    56,    81,   279,   279,   279,   279,   279,   279,
     102,   155,   279,   279,   279,   279,   279,   176,   176,   176,
     101,   178,   101,   178,   178,     3,     4,    18,   180,   178,
     178,   178,   178,   176,   176,   167,   178,   178,    13,   178,
     236,   237,    16,    15,    15,    15,    15,    16,    60,    59,
      82,    82,   216,    82,   223,    82,    82,   219,    82,    81,
      57,   264,   147,   147,   147,   147,   147,   147,   155,   147,
     147,   147,   147,    16,   167,   101,   178,   101,   178,    14,
      13,   176,   176,    38,    39,    41,    14,    13,    14,    13,
      16,    16,   178,   178,    13,    16,   178,   236,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     270,   271,   283,   284,   104,   105,   270,   271,   286,   287,
     288,   289,   280,   285,    81,   264,    57,    82,   148,   149,
     150,   151,   152,   153,   156,   157,   158,   159,   117,   178,
     178,   101,   178,   178,   178,   180,   180,   178,   178,   178,
     178,   178,    15,   117,    16,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    16,   268,    16,   284,    72,
      72,    16,   287,   127,    82,   279,   178,   236,   279,   281,
     176,    82,   279,   147,    16,    16,    81,   147,    58,   128,
      58,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   171,   172,   173,   173,   173,   173,   173,   174,   175,
     175,   175,   175,   176,   176,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   179,   179,
     179,   180,   180,   180,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   182,   183,   184,   185,   186,   187,
     187,   188,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   190,
     191,   192,   193,   193,   194,   195,   196,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   213,   214,   215,   215,   216,
     216,   216,   217,   218,   218,   219,   220,   221,   222,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   234,   235,   235,   235,   236,   236,   237,   237,
     237,   237,   238,   238,   239,   240,   240,   241,   241,   242,
     242,   243,   244,   245,   246,   246,   247,   247,   248,   249,
     250,   251,   252,   253,   253,   254,   254,   255,   255,   256,
     257,   257,   258,   258,   258,   258,   258,   258,   259,   259,
     260,   260,   261,   261,   262,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   264,
     264,   265,   266,   266,   267,   267,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   279,   280,   280,
     281,   281,   282,   283,   283,   284,   284,   285,   285,   285,
     286,   286,   287,   287,   287,   287,   288,   289
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     1,     2,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     5,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,    10,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     2,     4,     1,     2,     1,
       1,     1,     4,     1,     2,     1,     4,     4,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     5,     3,     8,     6,     6,     1,     2,     4,     2,
       2,     3,     3,     3,     2,     5,     5,     5,     5,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       5,     3,     5,     6,     4,     5,     3,     4,     5,     3,
       2,     3,     5,     4,     1,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     9,     8,     4,     3,     2,
       1,     4,     4,     8,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     1,     1,
       1,     3,     5,     1,     2,     1,     1,     0,     1,     5,
       1,     2,     1,     1,     1,     1,     2,     2
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
      yyerror (ret_str, YY_("syntax error: cannot back up")); \
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
                  Type, Value, ret_str); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, char **ret_str)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (ret_str);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, char **ret_str)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ret_str);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, char **ret_str)
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
                                              , ret_str);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, ret_str); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, char **ret_str)
{
  YYUSE (yyvaluep);
  YYUSE (ret_str);
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
yyparse (char **ret_str)
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
#line 287 "itex2MML.y" /* yacc.c:1646  */
    {/* all processing done in body*/}
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 290 "itex2MML.y" /* yacc.c:1646  */
    {/* nothing - do nothing*/}
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 291 "itex2MML.y" /* yacc.c:1646  */
    {/* proc done in body*/}
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 292 "itex2MML.y" /* yacc.c:1646  */
    {/* all proc. in body*/}
#line 3209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 293 "itex2MML.y" /* yacc.c:1646  */
    {/* all proc. in body*/}
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 294 "itex2MML.y" /* yacc.c:1646  */
    {/* all proc. in body*/}
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 296 "itex2MML.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0]));}
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 298 "itex2MML.y" /* yacc.c:1646  */
    {/* empty math group - ignore*/}
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 299 "itex2MML.y" /* yacc.c:1646  */
    {/* ditto */}
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 300 "itex2MML.y" /* yacc.c:1646  */
    {
  char ** r = (char **) ret_str;
  char * p = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'><semantics><mrow>", (yyvsp[-1]), "</mrow><annotation encoding='application/x-tex'>");
  char * s = itex2MML_copy3(p, (yyvsp[0]), "</annotation></semantics></math>");
  itex2MML_free_string(p);
  itex2MML_free_string((yyvsp[-1]));  
  itex2MML_free_string((yyvsp[0]));
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
#line 3260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 316 "itex2MML.y" /* yacc.c:1646  */
    {
  char ** r = (char **) ret_str;
  char * p = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'><semantics><mrow>", (yyvsp[-1]), "</mrow><annotation encoding='application/x-tex'>");
  char * s = itex2MML_copy3(p, (yyvsp[0]), "</annotation></semantics></math>");
  itex2MML_free_string(p);
  itex2MML_free_string((yyvsp[-1]));  
  itex2MML_free_string((yyvsp[0]));
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
#line 3281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 333 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 337 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 343 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 362 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 376 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 395 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 409 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 428 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 442 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
    char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 461 "itex2MML.y" /* yacc.c:1646  */
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", (yyvsp[-2]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 475 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
  char * s2 = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 485 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[-4]), " ");
  char * s2 = itex2MML_copy3((yyvsp[0]), " ", (yyvsp[-2]));
  (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 495 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msub>", (yyvsp[-2]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msub>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 502 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<msup>", (yyvsp[-2]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</msup>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 509 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<msub><mo/>", (yyvsp[0]), "</msub>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 513 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<msup><mo/>", (yyvsp[0]), "</msup>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 517 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 526 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[0]), "</mi>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 530 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mn>", (yyvsp[0]), "</mn>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 599 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 603 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow>", (yyvsp[-1]), "</mrow>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 3589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 607 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[-2]), (yyvsp[-1]));
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 620 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 625 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 630 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy_string("");
  itex2MML_free_string((yyvsp[0]));
}
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 636 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 640 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 644 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("");
  itex2MML_free_string((yyvsp[0]));
}
#line 3659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 649 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 654 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 658 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 662 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 667 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 671 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 675 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 680 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 684 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 688 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 693 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 697 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 701 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 706 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 711 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 716 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 721 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 726 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 731 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 736 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 742 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<merror><mtext>Unknown character</mtext></merror>");
}
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 746 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">&minus;</mo>");
}
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 750 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">+</mo>");
}
#line 3875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 756 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn=2;
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[0]), "</mi>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 763 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 769 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"thinmathspace\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 777 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 782 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 787 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"0\"><mo>", (yyvsp[0]), "</mo></mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 792 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 796 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 801 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 805 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 809 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 813 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn=2;
  (yyval) = itex2MML_copy3("<mo lspace=\"mediummathspace\" rspace=\"mediummathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 3991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 818 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 823 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"verythinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 828 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 833 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"thinmathspace\" rspace=\"thinmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 838 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"mediummathspace\" rspace=\"mediummathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 843 "itex2MML.y" /* yacc.c:1646  */
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"thickmathspace\" rspace=\"thickmathspace\">", (yyvsp[0]), "</mo>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 849 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mspace height=\"", (yyvsp[-7]), "ex\" depth=\"");
  char * s2 = itex2MML_copy3((yyvsp[-4]), "ex\" width=\"", (yyvsp[-1]));
  (yyval) = itex2MML_copy3(s1, s2, "em\"/>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-7]));
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 860 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"statusline\">", (yyvsp[0]), "<mtext>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mtext></maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 868 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"tooltip\">", (yyvsp[0]), "<mtext>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mtext></maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 876 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"toggle\" selection=\"2\">", (yyvsp[-1]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 883 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<maction actiontype=\"toggle\">", (yyvsp[-1]), "</maction>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 888 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='color=", (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 896 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='background=", (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 904 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mstyle mathcolor=", (yyvsp[-1]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 911 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mstyle mathbackground=", (yyvsp[-1]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 919 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mpadded width=\"0\">", (yyvsp[0]), "</mpadded>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 924 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mpadded width=\"0\" lspace=\"-100%width\">", (yyvsp[0]), "</mpadded>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 929 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mpadded width=\"0\" lspace=\"-50%width\">", (yyvsp[0]), "</mpadded>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 934 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mtext>", (yyvsp[0]), "</mtext>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 939 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle displaystyle=\"true\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 944 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle displaystyle=\"false\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 949 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"0\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 954 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"1\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 959 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"2\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 964 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"italic\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 969 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"sans-serif\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 974 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"monospace\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 979 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<menclose notation=\"updiagonalstrike\">", (yyvsp[0]), "</menclose>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 984 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<menclose notation=\"box\">", (yyvsp[0]), "</menclose>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 989 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"bold\">", (yyvsp[0]), "</mstyle>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 994 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi mathvariant=\"normal\">", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 999 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1003 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1009 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1014 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1018 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1024 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "opf;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1028 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "opf;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1032 "itex2MML.y" /* yacc.c:1646  */
    {
  /* Blackboard digits 0-9 correspond to Unicode characters 0x1D7D8-0x1D7E1 */
  char * end = (yyvsp[0]) + 1;
  int code = 0x1D7D8 + strtoul((yyvsp[0]), &end, 10);
  (yyval) = itex2MML_character_reference(code);
  itex2MML_free_string((yyvsp[0]));
}
#line 4380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1040 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1045 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1049 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1055 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "fr;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1060 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1065 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mi class='mathscript'>", (yyvsp[-1]), "</mi>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 4435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1070 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1074 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[-1]), (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1080 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[0]), "scr;");
  itex2MML_free_string((yyvsp[0]));
}
#line 4463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1085 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"thinmathspace\"/>");
}
#line 4471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1089 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"mediummathspace\"/>");
}
#line 4479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1093 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"thickmathspace\"/>");
}
#line 4487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1097 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"1em\"/>");
}
#line 4495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1101 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"2em\"/>");
}
#line 4503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1105 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"negativethinmathspace\"/>");
}
#line 4511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1109 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"negativemediummathspace\"/>");
}
#line 4519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1113 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"negativethickmathspace\"/>");
}
#line 4527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1117 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mphantom>", (yyvsp[0]), "</mphantom>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1122 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow href=\"", (yyvsp[-1]), "\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xlink:type=\"simple\" xlink:href=\"");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "\">");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1132 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-3]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1139 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1147 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-3]), (yyvsp[-1]));
  char * s2 = itex2MML_copy3("<mprescripts/>", (yyvsp[-5]), "</mmultiscripts>");
  (yyval) = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-5]));
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1157 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy2("<mmultiscripts>", (yyvsp[-1]));
  char * s2 = itex2MML_copy3("<mprescripts/>", (yyvsp[-3]), "</mmultiscripts>");
  (yyval) = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1166 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[-3]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1])); 
}
#line 4615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1174 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1178 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1184 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1189 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2((yyvsp[0]), " <none/>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1193 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("<none/> ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1197 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("<none/> ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1202 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mfrac>", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1209 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mstyle displaystyle=\"false\"><mfrac>", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac></mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1217 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3( "<mrow><mo lspace=\"mediummathspace\">(</mo><mo rspace=\"thinmathspace\">mod</mo>", (yyvsp[0]), "<mo rspace=\"mediummathspace\">)</mo></mrow>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1222 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mfrac><mrow>", (yyvsp[-3]), "</mrow><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1229 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[-4]), "<mfrac><mrow>");
  char * s2 = itex2MML_copy3((yyvsp[-3]), "</mrow><mrow>", (yyvsp[-1]));
  char * s3 = itex2MML_copy3("</mrow></mfrac>", (yyvsp[0]), "</mrow>");
  (yyval) = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1243 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mfrac linethickness=\"0\"><mrow>", (yyvsp[-3]), "</mrow><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 4746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1250 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[-4]), "<mfrac linethickness=\"0\"><mrow>");
  char * s2 = itex2MML_copy3((yyvsp[-3]), "</mrow><mrow>", (yyvsp[-1]));
  char * s3 = itex2MML_copy3("</mrow></mfrac>", (yyvsp[0]), "</mrow>");
  (yyval) = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1264 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow><mo>(</mo><mfrac linethickness=\"0\">", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac><mo>)</mo></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1271 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow><mo>(</mo><mstyle displaystyle=\"false\"><mfrac linethickness=\"0\">", (yyvsp[-1]), (yyvsp[0]));
  (yyval) = itex2MML_copy2(s1, "</mfrac></mstyle><mo>)</mo></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1279 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<munder>", (yyvsp[0]), "<mo>&UnderBrace;</mo></munder>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1284 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<munder>", (yyvsp[0]), "<mo>&#x00332;</mo></munder>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1289 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&OverBrace;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1294 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&#x000AF;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1298 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&#x000AF;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1303 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&rightarrow;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1307 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&rightarrow;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1312 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&leftarrow;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1317 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&dot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1322 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&Dot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1327 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&tdot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1332 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&DotDot;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1337 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&tilde;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1341 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&tilde;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1346 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&#x2c7;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1350 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&#x2c7;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1355 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo stretchy=\"false\">&#x5E;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1359 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[0]), "<mo>&#x5E;</mo></mover>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1364 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<msqrt>", (yyvsp[0]), "</msqrt>");
  itex2MML_free_string((yyvsp[0]));
}
#line 4959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1369 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mroot>", (yyvsp[0]), (yyvsp[-2]));
  (yyval) = itex2MML_copy2(s1, "</mroot>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1376 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mroot>", (yyvsp[0]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mroot>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 4983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1384 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='", (yyvsp[-3]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-2]), "' depth='");
  char * s3 = itex2MML_copy3(s2, (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s3, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1397 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", (yyvsp[-3]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-2]), "' depth='");
  char * s3 = itex2MML_copy3(s2, (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s3, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1410 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='", (yyvsp[-2]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "' depth='depth'>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1420 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", (yyvsp[-2]), "' height='");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "' depth='+");
  char * s3 = itex2MML_copy3(s2, (yyvsp[-2]), "'>");
  (yyval) = itex2MML_copy3(s3, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1432 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='", (yyvsp[-1]), "' height='+");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "' depth='depth'>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1441 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", (yyvsp[-1]), "' height='0pt' depth='+");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-1]), "'>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1451 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munder><mo>", (yyvsp[-4]), "</mo><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-2]), "</mrow></munder>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
}
#line 5091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1458 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munder>", (yyvsp[0]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</munder>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1466 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mover><mo>", (yyvsp[-1]), "</mo>");
  (yyval) =  itex2MML_copy3(s1, (yyvsp[0]), "</mover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1473 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mover>", (yyvsp[0]), (yyvsp[-1]));
  (yyval) = itex2MML_copy2(s1, "</mover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1481 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munderover><mo>", (yyvsp[-4]), "</mo><mrow>");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-2]), "</mrow>");
  (yyval) = itex2MML_copy3(s2, (yyvsp[0]), "</munderover>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1491 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<munderover>", (yyvsp[0]), (yyvsp[-2]));
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</munderover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1500 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mrow/>");
}
#line 5163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1504 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1508 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable displaystyle=\"true\" rowspacing=\"1.0ex\">", (yyvsp[-2]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1512 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>(</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>)</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1516 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>[</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>]</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1520 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>&VerticalBar;</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>&VerticalBar;</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1524 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>}</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1528 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>&DoubleVerticalBar;</mo><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow><mo>&DoubleVerticalBar;</mo></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1532 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"2\"><mrow><mtable displaystyle=\"false\" rowspacing=\"0.5ex\">", (yyvsp[-2]), "</mtable></mrow></mstyle>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1536 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable displaystyle=\"false\" columnalign=\"left left\">", (yyvsp[-2]), "</mtable></mrow></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1540 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable displaystyle=\"true\" columnalign=\"right left right left right left right left right left\" columnspacing=\"0em\">", (yyvsp[-2]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-2]));
}
#line 5253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1544 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtable displaystyle=\"false\" rowspacing=\"0.5ex\" align=\"", (yyvsp[-6]), "\" columnalign=\"");
  char * s2 = itex2MML_copy3(s1, (yyvsp[-4]), "\">");
  (yyval) = itex2MML_copy3(s2, (yyvsp[-2]), "</mtable>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[-6]));
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
}
#line 5268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1554 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtable displaystyle=\"false\" rowspacing=\"0.5ex\" columnalign=\"", (yyvsp[-4]), "\">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-2]), "</mtable>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-4]));
  itex2MML_free_string((yyvsp[-2]));
}
#line 5280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1561 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<semantics><annotation-xml encoding=\"SVG1.1\">", (yyvsp[-1]), "</annotation-xml></semantics>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 5289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1565 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string(" ");
}
#line 5297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1569 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1574 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1579 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable columnalign=\"center\" rowspacing=\"0.5ex\">", (yyvsp[-1]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 5325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1584 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mrow><mtable>", (yyvsp[-1]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[-1]));
}
#line 5334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1588 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mrow><mtable ", (yyvsp[-3]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[-1]), "</mtable></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-3]));
  itex2MML_free_string((yyvsp[-1]));
}
#line 5346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1596 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1600 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1606 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1610 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1614 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1618 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1622 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1626 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1630 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1634 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1638 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1642 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1647 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnalign=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1652 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnalign=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1657 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("rowalign=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1662 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("align=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1667 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("equalrows=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1672 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("equalcolumns=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1677 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("rowlines=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1682 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnlines=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1687 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("frame=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1692 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("rowspacing=", (yyvsp[0]), " columnspacing=");
  (yyval) = itex2MML_copy2(s1, (yyvsp[0]));
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[0]));
}
#line 5547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1699 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1703 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1709 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mtr>", (yyvsp[0]), "</mtr>");
  itex2MML_free_string((yyvsp[0]));
}
#line 5575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1713 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1718 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1722 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-2]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1728 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtr ", (yyvsp[-2]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mtr>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1736 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1740 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1746 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1750 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1755 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string("<mtd/>");
}
#line 5660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1758 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3("<mtd>", (yyvsp[0]), "</mtd>");
  itex2MML_free_string((yyvsp[0]));
}
#line 5669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1762 "itex2MML.y" /* yacc.c:1646  */
    {
  char * s1 = itex2MML_copy3("<mtd ", (yyvsp[-2]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[0]), "</mtd>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[-2]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1770 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1774 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy3((yyvsp[-1]), " ", (yyvsp[0]));
  itex2MML_free_string((yyvsp[-1]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1780 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1784 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1788 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1792 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy_string((yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1797 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("rowspan=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1802 "itex2MML.y" /* yacc.c:1646  */
    {
  (yyval) = itex2MML_copy2("columnspan=", (yyvsp[0]));
  itex2MML_free_string((yyvsp[0]));
}
#line 5754 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5758 "y.tab.c" /* yacc.c:1646  */
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
      yyerror (ret_str, YY_("syntax error"));
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
        yyerror (ret_str, yymsgp);
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
                      yytoken, &yylval, ret_str);
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
                  yystos[yystate], yyvsp, ret_str);
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
  yyerror (ret_str, YY_("memory exhausted"));
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
                  yytoken, &yylval, ret_str);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, ret_str);
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
#line 1807 "itex2MML.y" /* yacc.c:1906  */


char * itex2MML_parse (const char * buffer, size_t length)
{
  char * mathml = 0;

  int result;

  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  result = itex2MML_yyparse (&mathml);

  if (result && mathml) /* shouldn't happen? */
    {
      itex2MML_free_string (mathml);
      mathml = 0;
    }
  return mathml;
}

int itex2MML_filter (const char * buffer, size_t length)
{
  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  return itex2MML_yyparse (0);
}

#define ITEX_DELIMITER_DOLLAR 0
#define ITEX_DELIMITER_DOUBLE 1
#define ITEX_DELIMITER_SQUARE 2
#define ITEX_DELIMITER_PAREN  3

static char * itex2MML_last_error = 0;

static void itex2MML_keep_error (const char * msg)
{
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_last_error = itex2MML_copy_escaped (msg);
}

int itex2MML_html_filter (const char * buffer, size_t length)
{
  return itex2MML_do_html_filter (buffer, length, 0);
}

int itex2MML_strict_html_filter (const char * buffer, size_t length)
{
  return itex2MML_do_html_filter (buffer, length, 1);
}

int itex2MML_do_html_filter (const char * buffer, size_t length, const int forbid_markup)
{
  int result = 0;

  int type = 0;
  int skip = 0;
  int match = 0;

  const char * ptr1 = buffer;
  const char * ptr2 = 0;

  const char * end = buffer + length;

  char * mathml = 0;

  void (*save_error_fn) (const char * msg) = itex2MML_error;

  itex2MML_error = itex2MML_keep_error;

 _until_math:
  ptr2 = ptr1;

  while (ptr2 < end)
    {
      if (*ptr2 == '$') break;
      if ((*ptr2 == '\\') && (ptr2 + 1 < end))
	{
	  if (*(ptr2+1) == '[' || *(ptr2+1) == '(') break;
	}
      ++ptr2;
    }
  if (itex2MML_write && ptr2 > ptr1)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

  if (ptr2 == end) goto _finish;

 _until_html:
  ptr1 = ptr2;

  if (ptr2 + 1 < end)
    {
      if ((*ptr2 == '\\') && (*(ptr2+1) == '['))
	{
	  type = ITEX_DELIMITER_SQUARE;
	  ptr2 += 2;
	}
      else if ((*ptr2 == '\\') && (*(ptr2+1) == '('))
	{
	  type = ITEX_DELIMITER_PAREN;
	  ptr2 += 2;
	}
      else if ((*ptr2 == '$') && (*(ptr2+1) == '$'))
	{
	  type = ITEX_DELIMITER_DOUBLE;
	  ptr2 += 2;
	}
      else
	{
	  type = ITEX_DELIMITER_DOLLAR;
	  ptr2 += 2;
	}
    }
  else goto _finish;

  skip = 0;
  match = 0;

  while (ptr2 < end)
    {
      switch (*ptr2)
	{
	case '<':
	case '>':
	  if (forbid_markup == 1) skip = 1;
	  break;

	case '\\':
	  if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '[' || *(ptr2 + 1) == '(')
		{
		  skip = 1;
		}
	      else if (*(ptr2 + 1) == ']')
		{
		  if (type == ITEX_DELIMITER_SQUARE)
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	      else if (*(ptr2 + 1) == ')')
		{
		  if (type == ITEX_DELIMITER_PAREN)
		    {
		      ptr2 += 2;
		      match = 1;
		    }
	  else
	    {
	      skip = 1;
	    }
	}

	    }
	  break;

	case '$':
	  if (*(ptr2-1) == '\\')
	    {
	      skip = 0;
	    }
	  else if (type == ITEX_DELIMITER_SQUARE || type == ITEX_DELIMITER_PAREN)
	    {
	      skip = 1;
	    }
	  else if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '$')
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		}
	      else
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	    }
	  else
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		{
		  ptr2++;
		  match = 1;
		}
	      else
		{
		  skip = 1;
		}
	    }
	  break;

	default:
	  break;
	}
      if (skip || match) break;

      ++ptr2;
    }
  if (skip)
    {
      if (type == ITEX_DELIMITER_DOLLAR)
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 1);
	  ptr1++;
	}
      else
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 2);
	  ptr1 += 2;
	}
      goto _until_math;
    }
  if (match)
    {
      mathml = itex2MML_parse (ptr1, ptr2 - ptr1);

      if (mathml)
	{
	  if (itex2MML_write_mathml)
	    (*itex2MML_write_mathml) (mathml);
	  itex2MML_free_string (mathml);
	  mathml = 0;
	}
      else
	{
	  ++result;
	  if (itex2MML_write)
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'><merror><mtext>", 0);
	      else
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'><merror><mtext>", 0);

	      (*itex2MML_write) (itex2MML_last_error, 0);
	      (*itex2MML_write) ("</mtext></merror></math>", 0);
	    }
	}
      ptr1 = ptr2;

      goto _until_math;
    }
  if (itex2MML_write)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

 _finish:
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_error = save_error_fn;

  return result;
}
