/*Ares, a tactical space combat game.Copyright (C) 1997, 1999-2001, 2008 Nathan LamontThis program may be used, mofified, and redistributed either under the termsof the GNU General Public License version 2 or the GNU Lesser General PublicLicense version 3. See `LICENSE.md` for details.*//******************************************\|**| Ares_GameRanger.c\******************************************/#pragma mark ��INCLUDES��/******************************************\|**| #includes\******************************************/#pragma mark _system includes_/* - system*******************************************/#pragma mark _third party includes_/* - third party libraries*******************************************/#include "Wrap_GameRanger.h"#pragma mark _bp libraries includes_/* - bp libraries*******************************************/#pragma mark _this library includes_/* - this project*******************************************/#include "Ares Global Type.h"#include "Processor.h"#include "Ares_GameRanger.h"#pragma mark ��DEFINITIONS��/******************************************\|**| #defines\******************************************//* - definitions*******************************************/#pragma mark _macros_/* - macros*******************************************/#pragma mark ��TYPEDEFS��/******************************************\|**| typedefs\******************************************/#pragma mark ��EXTERNAL GLOBALS��/******************************************\|**| external globals\******************************************/extern aresGlobalType			*gAresGlobal;#pragma mark ��PRIVATE GLOBALS��/******************************************\|**| private globals\******************************************/#pragma mark ��PRIVATE PROTOTYPES��/******************************************\|**| private function prototypes\******************************************/#pragma mark ��PRIVATE FUNCTIONS��/******************************************\|**| private functions\******************************************/#pragma mark ��PUBLIC FUNCTIONS��/******************************************\|**| public functions\******************************************/OSErr AGR_Init( void){	OSErr result = noErr;	if ( Wrap_UseGameRanger())	{		result = Wrap_GRInstallResumeHandler();		if ( result == noErr) gAresGlobal->useGameRanger = true;		else gAresGlobal->useGameRanger = false;	} else	{		gAresGlobal->useGameRanger = false;	}		return result;}