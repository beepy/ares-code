/*Ares, a tactical space combat game.Copyright (C) 1997, 1999-2001, 2008 Nathan LamontThis program may be used, mofified, and redistributed either under the termsof the GNU General Public License version 2 or the GNU Lesser General PublicLicense version 3. See `LICENSE.md` for details.*//* NatePixTable.h *///#ifndef kNatePix//#include "NatePix.h"//#endif#ifndef kSpriteHandling#include "Sprite Handling.h"#endif#pragma options align=mac68kHandle CreateNatePixTable( void);void MoveNatePixTableData( Handle, long, long);unsigned long GetNatePixTableSize( Handle);void SetNatePixTableSize( Handle, unsigned long);long GetNatePixTablePixNum( Handle);void SetNatePixTablePixNum( Handle, long);unsigned long GetNatePixTablePixOffset( Handle, long);void SetNatePixTablePixOffset( Handle, long, unsigned long);int GetNatePixTableNatePixWidth( Handle, long);void SetNatePixTableNatePixWidth( Handle, long, int);int GetNatePixTableNatePixHeight( Handle, long);void SetNatePixTableNatePixHeight( Handle, long, int);int GetNatePixTableNatePixHRef( Handle, long);void SetNatePixTableNatePixHRef( Handle, long, int);int GetNatePixTableNatePixVRef( Handle, long);void SetNatePixTableNatePixVRef( Handle, long, int);char *GetNatePixTableNatePixData( Handle, long);unsigned char GetNatePixTableNatePixDataPixel( Handle, long, int, int);void SetNatePixTableNatePixDataPixel( Handle, long, int, int, unsigned char);Handle GetNatePixTableNatePixDataCopy( Handle, long);/*void GetNatePixTableNatePixPtr( natePix *, Handle, int);void GetNatePixTableNatePixDuplicate( natePix *, Handle, int);*/unsigned long GetNatePixTableNatePixDataSize( Handle, long);void InsertNatePix( Handle, Rect *, int);void DeleteNatePix( Handle, int);void RemapNatePixTableColor( Handle);void ColorizeNatePixTableColor( Handle, unsigned char);void RetromapNatePixTableColor( Handle);#pragma options align=reset