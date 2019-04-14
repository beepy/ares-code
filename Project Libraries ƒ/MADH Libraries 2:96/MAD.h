/********************						***********************/////	Player PRO 4.5x -- MAD Music Driver Definition////	Library Version 4.0////	To use with MusicLibrary for Think C & CodeWarrior////	Antoine ROSSET//	16 Tranchees//	1206 GENEVA//	SWITZERLAND//	//	FAX:			(+41 22) 346 11 97//	PHONE: 		(+41 89) 203 74 62//	Compuserve:	100277,164//	Internet: 		rosset@dial.eunet.ch///********************						***********************/#ifndef __MADH__#define __MADH__#if defined(powerc) || defined (__powerc)#pragma options align=mac68k#else#if !defined(THINK_C)#pragma options align=mac68k#endif#endif// ***	// ***	PATTERN DESCRIPTION// ***	struct Cmd							// COMMAND{	Byte	ins;						// Instrument no		0x00: no ins cmd	Byte 	note;					// Note, see table		0xFF : no note cmd	Byte 	cmd;					// Effect cmd	Byte 	arg;					// Effect argument	Byte	vol;					// Volume				0xFF : no volume cmd	Byte	unused;};typedef struct Cmd Cmd;struct PatHeader					// HEADER{	long	size;					// Length of pattern: standard = 64	long	compMode;				// Compression mode, none = 'NONE'	char	name[ 32];	long	patBytes;				// Pattern Size in Bytes	long	unused2;};typedef struct PatHeader PatHeader;struct PatData						// DATA STRUCTURE : HEADER + COMMANDS{									// Pattern = 64 notes to play	PatHeader	header;	Cmd		Cmds[];};typedef struct PatData PatData;// ***	// ***	INSTRUMENT DESCRIPTION// ***	struct sData								// SAMPLE{	long 				size;				// Sample length	long				loopBeg;			// LoopStart	long				loopSize;			// LoopLength	Byte 				vol;				// Base volume	unsigned short		c2spd;				// c2spd	Byte				loopType;	Byte				amp;				// 8 or 16 bits	Byte				panning;	char				relNote;	char 				name[ 32];			// Sample name	Ptr					data;				// Used only in memory, not in files};typedef struct sData sData;struct EnvRec				// Volume Enveloppe{	short 	pos;				// pos	short	val;				// val};typedef struct EnvRec EnvRec;enum{	EF_ON			= 1,	EF_SUSTAIN	= 2,	EF_LOOP		= 4};struct InstrData				// INSTRUMENT{	char 	name[ 32];			// instrument name	Byte 	type;				// Instrument type = 0	short	numSamples;		// Number of samples in instrument	/**/	Byte		what[ 96];		// Sample number for all notes	EnvRec 		volEnv[ 12];	// Points for volume envelope	EnvRec		pannEnv[ 12];	// Points for panning envelope		Byte	volSize;			// Number of volume points	Byte	pannSize;			// Number of panning points		Byte	volSus;				// Volume sustain point	Byte	volBeg;				// Volume loop start point	Byte	volEnd;				// Volume loop end point		Byte	pannSus;			// Panning sustain point	Byte	pannBeg;			// Panning loop start point	Byte	pannEnd;			// Panning loop end point	Byte	volType;			// Volume type: bit 0: On; 1: Sustain; 2: Loop	Byte	pannType;			// Panning type: bit 0: On; 1: Sustain; 2: Loop		unsigned short	volFade;	// Volume fadeout		Byte	vibDepth;	Byte	vibRate;};typedef struct InstrData InstrData;// ***	// ***	MAD FILE HEADER DESCRIPTION// ***	struct MADSpec{	long		MAD;						// Mad Identification: MADG in version 2.0	char 		name[ 32];					// Music's name	char		infos[ 256];				// Informations & Author name of the music	Byte		numPat;					// Patterns number	Byte		numChn;					// Channels number	Byte 		numPointers;				// Partition length	Byte		oPointers[ 256];			// Partition : Patterns ID List	short		speed;						// Default speed	short		tempo;						// Default tempo	InstrData 	fid[ 64];					// Instruments description};typedef struct MADSpec MADSpec;#if defined(powerc) || defined (__powerc)#pragma options align=reset#else#if !defined(THINK_C)#pragma options align=reset#endif#endif#endif