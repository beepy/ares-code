/*Ares, a tactical space combat game.Copyright (C) 1997, 1999-2001, 2008 Nathan LamontThis program may be used, mofified, and redistributed either under the termsof the GNU General Public License version 2 or the GNU Lesser General PublicLicense version 3. See `LICENSE.md` for details.*/typedef struct screenBitsStruct{	Rect	bounds;} screenBitsStruct;typedef struct qdGlobalStruct{	long				randSeed;	Pattern				black;	Pattern				gray;	Pattern				white;	Port				thePort;	screenBitsStruct	screenBits;} qdGlobalType;void RestoreDeviceClut( GDHandle);