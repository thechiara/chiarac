

# define makecc(val,i)  lastcon = (lastcon<<8)|((val<<24)>>24);  

# define  ARGINIT 32 
# define  AUTOINIT 0 
# define  SZCHAR 8
# define  SZBOOL 8
# define  SZINT 32
# define  SZFLOAT 32
# define  SZDOUBLE 64
# define  SZLDOUBLE 64	/* XXX use longer? */
# define  SZLONG 32
# define  SZLONGLONG 64
# define  SZSHORT 16
# define SZPOINT(t) 32
# define ALCHAR 8
# define ALBOOL 8
# define ALINT 32
# define ALFLOAT 32
# define ALDOUBLE 32
# define ALLDOUBLE 32
# define ALLONG 32
# define ALLONGLONG 32
# define ALSHORT 16
# define ALPOINT 32
# define ALSTRUCT 8
# define  ALSTACK 32 
#define MYVAARGSZ SZINT

/*
 * Min/max values.
 */
#define MIN_CHAR        -128
#define MAX_CHAR        127
#define MAX_UCHAR       255
#define MIN_SHORT       -32768
#define MAX_SHORT       32767
#define MAX_USHORT      65535
#define MIN_INT         (-0x7fffffff-1)
#define MAX_INT         0x7fffffff
#define MAX_UNSIGNED    0xffffffff
#define MIN_LONG        MIN_INT
#define MAX_LONG        MAX_INT
#define MAX_ULONG       MAX_UNSIGNED
#define MIN_LONGLONG    0x8000000000000000LL
#define MAX_LONGLONG    0x7fffffffffffffffLL
#define MAX_ULONGLONG   0xffffffffffffffffULL

/* Default char is signed */
#undef  CHAR_UNSIGNED
#define BOOL_TYPE       CHAR    /* what used to store _Bool */
#define	HASP2ALIGN
/*	size in which constants are converted */
/*	should be long if feasable */

typedef long long CONSZ;
typedef unsigned long long U_CONSZ;

# define CONFMT "%lld"
# define LABFMT ".L%d"
# define STABLBL ".LL%d"

/*	size in which offsets are kept
 *	should be large enough to cover address space in bits
 */
typedef long long OFFSZ;

/* register cookie for stack poINTer */


/* show stack grows negatively */
#define BACKAUTO
#define BACKTEMP

/* show field hardware support on VAX */
/* XXX notyet */
#undef FIELDOPS

/* bytes are numbered from right to left */
#define TARGET_ENDIAN TARGET_LE
#define	UNALIGNED_ACCESS

/* we want prtree included */
# define STDPRTREE



#define R0  0
#define R1  1
#define R2  2
#define R3  3
#define R4  4
#define R5  5
#define R6  6
#define R7  7
#define R8  8
#define R9  9
#define R10  10
#define R11  11
#define R12  12
#define R13  13
#define R14  14
#define R15  15
#define R16  16
#define R17  17
#define R18  18
#define R19  19
#define R20  20
#define R21  21
#define R22  22
#define R23  23
#define R24  24
#define R25  25
#define R26  26
#define R27  27
#define R28  28
#define R29  29
#define R30  30
#define R31  31

	/* special purpose */
# define AP 0		/* argument pointer */
# define FP 1		/* frame pointer */
# define SP 2	/* stack pointer */
# define PC 3	/* program counter */

#define F0  31
#define F1  32
#define F2  33
#define F3  34
#define F4  35
#define F5  36
#define F6  37
#define F7  38
#define F8  39
#define F9  40
#define F10  41
#define F11  42
#define F12  43
#define F13  44
#define F14  45
#define F15  46
#define F16  47
#define F17  48
#define F18  49
#define F19  50
#define F20  51
#define F21  52
#define F22  53
#define F23  54
#define F24  55
#define F25  56
#define F26  57
#define F27  58
#define F28  59
#define F29  60
#define F30  61
#define F31  62





extern int fregs;
extern int maxargs;

# define BYTEOFF(x) ((x)&03)
# define wdal(k) (BYTEOFF(k)==0)

# define REGSZ 16

# define TMPREG FP

//# define R2REGS   /* permit double indexing */

# define STOARG(p)     /* just evaluate the arguments, and be done with it... */
# define STOFARG(p)
# define STOSTARG(p)
# define genfcall(a,b) gencall(a,b)

# define NESTCALL


#define MAXREGS 63    

#define RSTATUS \
 SAREG,  /*GPR0 stack pointer */  \  
 SAREG,  /*GPR1*/  \  
 SAREG,  /*GPR2*/  \  
 SAREG,  /*GPR3*/  \  
 SAREG,  /*GPR4*/  \  
 SAREG,  /*GPR5*/  \  
 SAREG,  /*GPR6*/  \  
 SAREG,  /*GPR7*/  \  
 SAREG,  /*GPR8*/  \  
 SAREG,  /*GPR9*/  \  
 SAREG,  /*GPR10*/  \  
 SAREG,  /*GPR11*/  \  
 SAREG,  /*GPR12*/  \  
 SAREG,  /*GPR13*/  \  
 SAREG,  /*GPR14*/  \  
 SAREG,  /*GPR15*/  \  
 SAREG,  /*GPR16*/  \  
 SAREG,  /*GPR17*/  \  
 SAREG,  /*GPR18*/  \  
 SAREG,  /*GPR19*/  \  
 SAREG,  /*GPR20*/  \  
 SAREG,  /*GPR21*/  \  
 SAREG,  /*GPR22*/  \  
 SAREG,  /*GPR23*/  \  
 SAREG,  /*GPR24*/  \  
 SAREG,  /*GPR25*/  \  
 SAREG,  /*GPR26*/  \  
 SAREG,  /*GPR27*/  \  
 SAREG,  /*GPR28*/  \  
 SAREG,  /*GPR29*/  \  
 SAREG,  /*GPR30*/  \  
 SAREG,  /*GPR31*/ \
 SAREG,  /*FPR0*/  \  
 SAREG,  /*FPR1*/  \  
 SAREG,  /*FPR2*/  \  
 SAREG,  /*FPR3*/  \  
 SAREG,  /*FPR4*/  \  
 SAREG,  /*FPR5*/  \  
 SAREG,  /*FPR6*/  \  
 SAREG,  /*FPR7*/  \  
 SAREG,  /*FPR8*/  \  
 SAREG,  /*FPR9*/  \  
 SAREG,  /*FPR10*/  \  
 SAREG,  /*FPR11*/  \  
 SAREG,  /*FPR12*/  \  
 SAREG,  /*FPR13*/  \  
 SAREG,  /*FPR14*/  \  
 SAREG,  /*FPR15*/  \  
 SAREG,  /*FPR16*/  \  
 SAREG,  /*FPR17*/  \  
 SAREG,  /*FPR18*/  \  
 SAREG,  /*FPR19*/  \  
 SAREG,  /*FPR20*/  \  
 SAREG,  /*FPR21*/  \  
 SAREG,  /*FPR22*/  \  
 SAREG,  /*FPR23*/  \  
 SAREG,  /*FPR24*/  \  
 SAREG,  /*FPR25*/  \  
 SAREG,  /*FPR26*/  \  
 SAREG,  /*FPR27*/  \  
 SAREG,  /*FPR28*/  \  
 SAREG,  /*FPR29*/  \  
 SAREG,  /*FPR30*/  \  
 SAREG,  /*FPR31*/  \ 
 
#define ROVERLAP \
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \ 
  {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \  
 {-1}, \ 
#define NUMCLASS        2       /* highest number of reg classes used */

/* size, in registers, needed to hold thing of type t */
#define	szty(t)	(((t) == DOUBLE || (t) == LONGLONG || (t) == ULONGLONG) ? 2 : 1)
#define FPREG	FP	/* frame pointer */
#define STKREG	SP
#define ARGREG	AP

#define DECRA(x,y)      (((x) >> (y*6)) & 63)   /* decode encoded regs */
#define ENCRD(x)        (x)             /* Encode dest reg in n_reg */
#define ENCRA1(x)       ((x) << 6)      /* A1 */
#define ENCRA2(x)       ((x) << 12)     /* A2 */
#define ENCRA(x,y)      ((x) << (6+y*6))        /* encode regs in int */

#define PCLASS(p)	(szty(p->n_type) == 2 ? SBREG : SAREG)
#define RETREG(x)	(szty(x) == 2 ? XR0 : R0)
#define GCLASS(x)	(x < XR0 ? CLASSA : CLASSB)
int xasmconstregs(char *s);
#define XASMCONSTREGS(x) xasmconstregs(x)
int COLORMAP(int c, int *r);

#define	SNCON		(MAXSPECIAL+1)	/* named constand */

#define TARGET_FLT_EVAL_METHOD	0	/* all as their type */
/*
 * Builtins.
 */
#ifdef LANG_CXX
#define P1ND struct node
#else
#define P1ND struct p1node
#endif
struct p1node;
struct bitable;

#define	TARGET_FFS		/* target-specific ffs */
P1ND *builtin_ffs(const struct bitable *, P1ND *a);
P1ND *builtin_ffsl(const struct bitable *, P1ND *a);
P1ND *builtin_ffsll(const struct bitable *, P1ND *a);
#undef P1ND
