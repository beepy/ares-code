/*Ares, a tactical space combat game.Copyright (C) 1997, 1999-2001, 2008 Nathan LamontThis program may be used, mofified, and redistributed either under the termsof the GNU General Public License version 2 or the GNU Lesser General PublicLicense version 3. See `LICENSE.md` for details.*//* Transitions.h */#ifndef __PALETTES__#include <Palettes.h>#endif#pragma options align=mac68kvoid InitTransitions( void);void ResetTransitions( void);void CleanupTransitions( void);void StartColorAnimation( long, long, unsigned char);void UpdateColorAnimation( long);void StartBooleanColorAnimation( long, long, unsigned char);void UpdateBooleanColorAnimation( long);void RestoreOriginalColors( void);void InstantGoalTransition( void);Boolean AutoFadeTo( long, RGBColor *, Boolean);Boolean AutoFadeFrom( long, Boolean);Boolean AutoMusicFadeTo( long, RGBColor *, Boolean);Boolean CustomPictFade( long, long, short, short, WindowPtr);Boolean StartCustomPictFade( long, long, short, short, WindowPtr, PaletteHandle *,	PaletteHandle *, CTabHandle *, Boolean);Boolean EndCustomPictFade( WindowPtr, PaletteHandle *, PaletteHandle *, CTabHandle *,	Boolean);#pragma options align=reset