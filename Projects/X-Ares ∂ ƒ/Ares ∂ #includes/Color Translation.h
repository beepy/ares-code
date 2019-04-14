/*Ares, a tactical space combat game.Copyright (C) 1997, 1999-2001, 2008 Nathan LamontThis program may be used, mofified, and redistributed either under the termsof the GNU General Public License version 2 or the GNU Lesser General PublicLicense version 3. See `LICENSE.md` for details.*/// Color Translation.h#pragma options align=mac68k#define kPaletteSize			256#define	kReferenceColorTableID	256/* EASY COLOR DEFINITIONS */#define	RED				15#define	ORANGE			1#define	YELLOW			2#define	BLUE			3#define	GREEN			4#define	PURPLE			5#define	INDIGO			6#define	SALMON			7#define	GOLD			8#define	AQUA			9#define	PINK			10#define	PALE_GREEN		11#define	PALE_PURPLE		12#define	SKY_BLUE		13#define	TAN				14#define	GRAY			0#define	BLACK			0xff#define	WHITE			0x00#define	VERY_LIGHT		16#define	LIGHTER			14#define	LIGHT			12#define	MEDIUM			9#define	DARK			7#define	DARKER			5#define	VERY_DARK		3#define	DARKEST			1#define	COLOR_NUM			16#define	kVisibleShadeNum	15#define	kLighterColor			2#define	kDarkerColor			-2#define	kSlightlyLighterColor	1#define	kSlightlyDarkerColor	-1typedef struct {	unsigned char			trueColor;	unsigned char			retroColor;	RGBColor				rgbcolor;	} transColorType;#define	mGetTranslateColorShade( mcolor, mshade, mresultColor, mtransColor) mtransColor = (transColorType *)*gColorTranslateTable + (long)(((long)16 -(long)(mshade)) + (long)1 + (long)(mcolor) * (long)16); mresultColor = mtransColor->trueColor;void ColorTranslatorInit( CTabHandle);void ColorTranslatorCleanup( void);void MakeColorTranslatorTable( CTabHandle);unsigned char GetRetroIndex( unsigned char);unsigned char GetTranslateIndex( unsigned char);unsigned char GetTranslateColorShade( unsigned char, unsigned char);void SetTranslateColorShadeFore( unsigned char, unsigned char);void GetRGBTranslateColorShade( RGBColor *, unsigned char, unsigned char);void SetTranslateColorFore( unsigned char);void GetRGBTranslateColor( RGBColor *, unsigned char);void DefaultColors( void);#pragma options align=reset