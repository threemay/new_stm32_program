/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2019  SEGGER Microcontroller GmbH                *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.50 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only  be used  in accordance  with  a license  and should  not be  re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : bmButtonRound_50x22.c
Purpose     : Bitmap file.
----------------------------------------------------------------------
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmButtonRound_50x22;

static GUI_CONST_STORAGE U32 _acButtonRound_50x22[] = {
#if (GUI_USE_ARGB == 1)
  0xFFCFCFCF, 0xFFD0D0D0, 0xFFCFCFCF, 0xFFCFCFCF, 0xFFCFCFCF, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 
        0xFFD1D1D1, 0xFFD1D1D1, 0xFFD1D1D1, 0xFFD1D1D1, 0xFFD1D1D1, 0xFFD1D1D1, 0xFFD1D1D1, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 
        0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD0D0D0, 0xFFD1D1D1, 0xFFD1D1D1,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFC9C9C9, 0xFFC6C6C6, 0xFFC1C1C1, 0xFFBDBDBD, 0xFFB9B9B9, 0xFFB7B7B7, 0xFFB4B4B4, 0xFFB3B3B3, 0xFFB3B3B3, 0xFFAFAFAF, 0xFFADADAD, 0xFFACACAC, 0xFFABABAB, 0xFFAAAAAA, 0xFFA9A9A9, 0xFFA8A8A8, 0xFFA4A4A4, 0xFFA4A4A4, 0xFFA3A3A3, 
        0xFFA1A1A1, 0xFFA0A0A0, 0xFF9F9F9F, 0xFF9E9E9E, 0xFF9E9E9E, 0xFFA1A1A1, 0xFFA1A1A1, 0xFFA3A3A3, 0xFFA4A4A4, 0xFFA4A4A4, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFA9A9A9, 0xFFABABAB, 0xFFACACAC, 0xFFABABAB, 0xFFACACAC, 0xFFB0B0B0, 0xFFB1B1B1, 0xFFB1B1B1, 
        0xFFB1B1B1, 0xFFB3B3B3, 0xFFB4B4B4, 0xFFB6B6B6, 0xFFB3B3B3, 0xFFB1B1B1, 0xFFA9A9A9, 0xFF9D9D9D, 0xFF888888,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFCACACA, 0xFFC8C8C8, 0xFFC2C2C2, 0xFFBDBDBD, 0xFFB9B9B9, 0xFFB4B4B4, 0xFFB4B4B4, 0xFFB3B3B3, 0xFFB2B2B2, 0xFFAFAFAF, 0xFFADADAD, 0xFFACACAC, 0xFFABABAB, 0xFFAAAAAA, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA3A3A3, 0xFFA2A2A2, 0xFF9F9F9F, 
        0xFF9F9F9F, 0xFF9D9D9D, 0xFF9B9B9B, 0xFF9A9A9A, 0xFF9B9B9B, 0xFF9D9D9D, 0xFF9F9F9F, 0xFFA0A0A0, 0xFFA1A1A1, 0xFFA2A2A2, 0xFFA4A4A4, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFA9A9A9, 0xFFABABAB, 0xFFABABAB, 0xFFABABAB, 0xFFADADAD, 0xFFB0B0B0, 0xFFB1B1B1, 
        0xFFB0B0B0, 0xFFB2B2B2, 0xFFB5B5B5, 0xFFB6B6B6, 0xFFB3B3B3, 0xFFAFAFAF, 0xFFA8A8A8, 0xFF9A9A9A, 0xFF848484,
  0xFFD0D0D0, 0xFFBCBCBC, 0xFFCBCBCB, 0xFFC8C8C8, 0xFFC3C3C3, 0xFFBEBEBE, 0xFFB9B9B9, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFB4B4B4, 0xFFB0B0B0, 0xFFAFAFAF, 0xFFADADAD, 0xFFABABAB, 0xFFABABAB, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA4A4A4, 0xFFA2A2A2, 0xFFA0A0A0, 
        0xFF9F9F9F, 0xFF9D9D9D, 0xFF9B9B9B, 0xFF9B9B9B, 0xFF9B9B9B, 0xFF9D9D9D, 0xFFA0A0A0, 0xFFA2A2A2, 0xFFA2A2A2, 0xFFA2A2A2, 0xFFA3A3A3, 0xFFA4A4A4, 0xFFA7A7A7, 0xFFA9A9A9, 0xFFABABAB, 0xFFAAAAAA, 0xFFABABAB, 0xFFAEAEAE, 0xFFB0B0B0, 0xFFB1B1B1, 
        0xFFB1B1B1, 0xFFB2B2B2, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFB2B2B2, 0xFFAFAFAF, 0xFFA8A8A8, 0xFF9B9B9B, 0xFF828282,
  0xFFD0D0D0, 0xFFB9B9B9, 0xFFC8C8C8, 0xFFC5C5C5, 0xFFC0C0C0, 0xFFBBBBBB, 0xFFB6B6B6, 0xFFB3B3B3, 0xFFB2B2B2, 0xFFB1B1B1, 0xFFAEAEAE, 0xFFABABAB, 0xFFACACAC, 0xFFA9A9A9, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA4A4A4, 0xFFA3A3A3, 0xFFA1A1A1, 0xFFA1A1A1, 0xFF9F9F9F, 
        0xFF9C9C9C, 0xFF9B9B9B, 0xFF989898, 0xFF9A9A9A, 0xFF9A9A9A, 0xFF9C9C9C, 0xFF9E9E9E, 0xFF9F9F9F, 0xFF9F9F9F, 0xFFA0A0A0, 0xFFA2A2A2, 0xFFA2A2A2, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFA9A9A9, 0xFFA8A8A8, 0xFFABABAB, 0xFFABABAB, 0xFFACACAC, 0xFFAEAEAE, 
        0xFFB1B1B1, 0xFFB0B0B0, 0xFFB3B3B3, 0xFFB3B3B3, 0xFFB0B0B0, 0xFFADADAD, 0xFFA4A4A4, 0xFF999999, 0xFF7E7E7E,
  0xFFD0D0D0, 0xFFB9B9B9, 0xFFC8C8C8, 0xFFC5C5C5, 0xFFC1C1C1, 0xFFBBBBBB, 0xFFB6B6B6, 0xFFB5B5B5, 0xFFB2B2B2, 0xFFB1B1B1, 0xFFAFAFAF, 0xFFADADAD, 0xFFABABAB, 0xFFA9A9A9, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA5A5A5, 0xFFA4A4A4, 0xFFA3A3A3, 0xFF9F9F9F, 0xFFA0A0A0, 
        0xFF9D9D9D, 0xFF999999, 0xFF989898, 0xFF989898, 0xFF9A9A9A, 0xFF9C9C9C, 0xFF9E9E9E, 0xFF9D9D9D, 0xFF9E9E9E, 0xFFA1A1A1, 0xFFA3A3A3, 0xFFA3A3A3, 0xFFA5A5A5, 0xFFA5A5A5, 0xFFA6A6A6, 0xFFA8A8A8, 0xFFAAAAAA, 0xFFACACAC, 0xFFAEAEAE, 0xFFAEAEAE, 
        0xFFB1B1B1, 0xFFB2B2B2, 0xFFB3B3B3, 0xFFB3B3B3, 0xFFB0B0B0, 0xFFADADAD, 0xFFA4A4A4, 0xFF989898, 0xFF7C7C7C,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFC9C9C9, 0xFFC8C8C8, 0xFFC4C4C4, 0xFFBEBEBE, 0xFFB9B9B9, 0xFFB6B6B6, 0xFFB5B5B5, 0xFFB3B3B3, 0xFFB3B3B3, 0xFFAFAFAF, 0xFFACACAC, 0xFFACACAC, 0xFFAAAAAA, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA5A5A5, 0xFFA4A4A4, 0xFFA1A1A1, 0xFFA1A1A1, 
        0xFF9E9E9E, 0xFF9E9E9E, 0xFF9C9C9C, 0xFF9B9B9B, 0xFF9C9C9C, 0xFF9E9E9E, 0xFF9F9F9F, 0xFF9F9F9F, 0xFFA1A1A1, 0xFFA2A2A2, 0xFFA6A6A6, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFA8A8A8, 0xFFA8A8A8, 0xFFABABAB, 0xFFACACAC, 0xFFADADAD, 0xFFAFAFAF, 0xFFB0B0B0, 
        0xFFB1B1B1, 0xFFB3B3B3, 0xFFB3B3B3, 0xFFB4B4B4, 0xFFB3B3B3, 0xFFADADAD, 0xFFA6A6A6, 0xFF989898, 0xFF7C7C7C,
  0xFFD0D0D0, 0xFFBABABA, 0xFFC8C8C8, 0xFFC6C6C6, 0xFFC1C1C1, 0xFFBEBEBE, 0xFFB8B8B8, 0xFFB4B4B4, 0xFFB5B5B5, 0xFFB3B3B3, 0xFFB2B2B2, 0xFFAFAFAF, 0xFFACACAC, 0xFFABABAB, 0xFFAAAAAA, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA4A4A4, 0xFFA3A3A3, 0xFFA1A1A1, 0xFF9F9F9F, 
        0xFF9E9E9E, 0xFF9D9D9D, 0xFF9B9B9B, 0xFF9B9B9B, 0xFF9D9D9D, 0xFF9C9C9C, 0xFF9E9E9E, 0xFFA0A0A0, 0xFFA2A2A2, 0xFFA2A2A2, 0xFFA5A5A5, 0xFFA5A5A5, 0xFFA7A7A7, 0xFFA8A8A8, 0xFFA8A8A8, 0xFFAAAAAA, 0xFFACACAC, 0xFFACACAC, 0xFFAFAFAF, 0xFFB0B0B0, 
        0xFFB1B1B1, 0xFFB3B3B3, 0xFFB2B2B2, 0xFFB5B5B5, 0xFFB3B3B3, 0xFFAEAEAE, 0xFFA6A6A6, 0xFF8A8A8A, 0xFF7B7B7B,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFC9C9C9, 0xFFC8C8C8, 0xFFC3C3C3, 0xFFBDBDBD, 0xFFB9B9B9, 0xFFB6B6B6, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFB3B3B3, 0xFFB0B0B0, 0xFFADADAD, 0xFFABABAB, 0xFFABABAB, 0xFFA9A9A9, 0xFFA7A7A7, 0xFFA4A4A4, 0xFFA3A3A3, 0xFFA2A2A2, 0xFFA1A1A1, 
        0xFF9F9F9F, 0xFF9F9F9F, 0xFF9E9E9E, 0xFF9D9D9D, 0xFF9D9D9D, 0xFF9F9F9F, 0xFF9E9E9E, 0xFFA0A0A0, 0xFFA2A2A2, 0xFFA3A3A3, 0xFFA6A6A6, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFAAAAAA, 0xFFA9A9A9, 0xFFACACAC, 0xFFADADAD, 0xFFAEAEAE, 0xFFAFAFAF, 0xFFAFAFAF, 
        0xFFB2B2B2, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFB6B6B6, 0xFFB4B4B4, 0xFFAFAFAF, 0xFFA3A3A3, 0xFF888888, 0xFF7B7B7B,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFCBCBCB, 0xFFC9C9C9, 0xFFC4C4C4, 0xFFBCBCBC, 0xFFB7B7B7, 0xFFB4B4B4, 0xFFB5B5B5, 0xFFB3B3B3, 0xFFB1B1B1, 0xFFB0B0B0, 0xFFABABAB, 0xFFABABAB, 0xFFAAAAAA, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA4A4A4, 0xFFA2A2A2, 0xFFA0A0A0, 
        0xFF9E9E9E, 0xFF9D9D9D, 0xFF9B9B9B, 0xFF9B9B9B, 0xFF9D9D9D, 0xFF9E9E9E, 0xFF9F9F9F, 0xFFA0A0A0, 0xFFA0A0A0, 0xFFA2A2A2, 0xFFA5A5A5, 0xFFA6A6A6, 0xFFA8A8A8, 0xFFA9A9A9, 0xFFAAAAAA, 0xFFAAAAAA, 0xFFABABAB, 0xFFADADAD, 0xFFAFAFAF, 0xFFB0B0B0, 
        0xFFB1B1B1, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFB4B4B4, 0xFFAFAFAF, 0xFF989898, 0xFF888888, 0xFF7B7B7B,
  0xFFD0D0D0, 0xFFBCBCBC, 0xFFCCCCCC, 0xFFCBCBCB, 0xFFC5C5C5, 0xFFBFBFBF, 0xFFBABABA, 0xFFB7B7B7, 0xFFB5B5B5, 0xFFB3B3B3, 0xFFB2B2B2, 0xFFB1B1B1, 0xFFAFAFAF, 0xFFACACAC, 0xFFAAAAAA, 0xFFA9A9A9, 0xFFA7A7A7, 0xFFA7A7A7, 0xFFA7A7A7, 0xFFA2A2A2, 0xFFA2A2A2, 
        0xFFA0A0A0, 0xFF9F9F9F, 0xFF9D9D9D, 0xFF9D9D9D, 0xFFA0A0A0, 0xFF9F9F9F, 0xFFA2A2A2, 0xFFA3A3A3, 0xFFA2A2A2, 0xFFA3A3A3, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFA8A8A8, 0xFFABABAB, 0xFFACACAC, 0xFFABABAB, 0xFFADADAD, 0xFFAFAFAF, 0xFFB1B1B1, 0xFFB1B1B1, 
        0xFFB4B4B4, 0xFFB6B6B6, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFB5B5B5, 0xFFA8A8A8, 0xFF8E8E8E, 0xFF888888, 0xFF7B7B7B,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFCCCCCC, 0xFFC9C9C9, 0xFFC5C5C5, 0xFFBEBEBE, 0xFFBBBBBB, 0xFFB7B7B7, 0xFFB6B6B6, 0xFFB4B4B4, 0xFFB2B2B2, 0xFFB0B0B0, 0xFFAEAEAE, 0xFFADADAD, 0xFFABABAB, 0xFFAAAAAA, 0xFFA7A7A7, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA3A3A3, 0xFFA1A1A1, 
        0xFFA1A1A1, 0xFF9F9F9F, 0xFF9D9D9D, 0xFF9F9F9F, 0xFF9F9F9F, 0xFFA1A1A1, 0xFFA1A1A1, 0xFFA3A3A3, 0xFFA4A4A4, 0xFFA4A4A4, 0xFFA5A5A5, 0xFFA7A7A7, 0xFFAAAAAA, 0xFFABABAB, 0xFFACACAC, 0xFFACACAC, 0xFFAEAEAE, 0xFFB0B0B0, 0xFFB1B1B1, 0xFFB0B0B0, 
        0xFFB4B4B4, 0xFFB4B4B4, 0xFFB6B6B6, 0xFFB5B5B5, 0xFFB2B2B2, 0xFF969696, 0xFF8F8F8F, 0xFF878787, 0xFF7A7A7A,
  0xFFD0D0D0, 0xFFBDBDBD, 0xFFCDCDCD, 0xFFC9C9C9, 0xFFC4C4C4, 0xFFBFBFBF, 0xFFBABABA, 0xFFB8B8B8, 0xFFB7B7B7, 0xFFB6B6B6, 0xFFB3B3B3, 0xFFB1B1B1, 0xFFAFAFAF, 0xFFADADAD, 0xFFACACAC, 0xFFACACAC, 0xFFA7A7A7, 0xFFA8A8A8, 0xFFA6A6A6, 0xFFA4A4A4, 0xFFA3A3A3, 
        0xFFA2A2A2, 0xFF9F9F9F, 0xFF9D9D9D, 0xFF9E9E9E, 0xFF9F9F9F, 0xFFA1A1A1, 0xFFA1A1A1, 0xFFA4A4A4, 0xFFA3A3A3, 0xFFA4A4A4, 0xFFA5A5A5, 0xFFA7A7A7, 0xFFAAAAAA, 0xFFACACAC, 0xFFACACAC, 0xFFACACAC, 0xFFAEAEAE, 0xFFB0B0B0, 0xFFB2B2B2, 0xFFB1B1B1, 
        0xFFB4B4B4, 0xFFB5B5B5, 0xFFB9B9B9, 0xFFB7B7B7, 0xFFA0A0A0, 0xFF959595, 0xFF909090, 0xFF878787, 0xFF7A7A7A,
  0xFFD0D0D0, 0xFFBDBDBD, 0xFFCDCDCD, 0xFFCACACA, 0xFFC3C3C3, 0xFFBEBEBE, 0xFFBABABA, 0xFFB8B8B8, 0xFFB6B6B6, 0xFFB4B4B4, 0xFFB2B2B2, 0xFFB0B0B0, 0xFFAFAFAF, 0xFFADADAD, 0xFFABABAB, 0xFFABABAB, 0xFFA7A7A7, 0xFFA7A7A7, 0xFFA5A5A5, 0xFFA2A2A2, 0xFFA2A2A2, 
        0xFFA0A0A0, 0xFFA0A0A0, 0xFF9D9D9D, 0xFF9E9E9E, 0xFF9F9F9F, 0xFFA1A1A1, 0xFFA2A2A2, 0xFFA2A2A2, 0xFFA2A2A2, 0xFFA4A4A4, 0xFFA6A6A6, 0xFFA6A6A6, 0xFFA9A9A9, 0xFFABABAB, 0xFFABABAB, 0xFFABABAB, 0xFFAEAEAE, 0xFFAFAFAF, 0xFFB1B1B1, 0xFFB1B1B1, 
        0xFFB3B3B3, 0xFFB6B6B6, 0xFFB7B7B7, 0xFF9E9E9E, 0xFF979797, 0xFF949494, 0xFF909090, 0xFF868686, 0xFF797979,
  0xFFD0D0D0, 0xFFBABABA, 0xFFCACACA, 0xFFC8C8C8, 0xFFC3C3C3, 0xFFBDBDBD, 0xFFB9B9B9, 0xFFB6B6B6, 0xFFB4B4B4, 0xFFB2B2B2, 0xFFB0B0B0, 0xFFAFAFAF, 0xFFAEAEAE, 0xFFACACAC, 0xFFAAAAAA, 0xFFA9A9A9, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA3A3A3, 0xFFA0A0A0, 0xFFA0A0A0, 
        0xFF9F9F9F, 0xFF9E9E9E, 0xFF9C9C9C, 0xFF9C9C9C, 0xFF9D9D9D, 0xFF9F9F9F, 0xFFA0A0A0, 0xFFA2A2A2, 0xFFA1A1A1, 0xFFA3A3A3, 0xFFA5A5A5, 0xFFA5A5A5, 0xFFA8A8A8, 0xFFA8A8A8, 0xFFAAAAAA, 0xFFAAAAAA, 0xFFACACAC, 0xFFAFAFAF, 0xFFB0B0B0, 0xFFB0B0B0, 
        0xFFB2B2B2, 0xFFB0B0B0, 0xFF9E9E9E, 0xFF979797, 0xFF959595, 0xFF939393, 0xFF8D8D8D, 0xFF858585, 0xFF797979,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFC9C9C9, 0xFFC8C8C8, 0xFFC3C3C3, 0xFFBDBDBD, 0xFFB9B9B9, 0xFFB8B8B8, 0xFFB4B4B4, 0xFFB2B2B2, 0xFFB1B1B1, 0xFFB0B0B0, 0xFFADADAD, 0xFFACACAC, 0xFFA9A9A9, 0xFFA9A9A9, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA4A4A4, 0xFFA2A2A2, 0xFFA1A1A1, 
        0xFF9E9E9E, 0xFF9E9E9E, 0xFF9C9C9C, 0xFF9C9C9C, 0xFF9C9C9C, 0xFF9F9F9F, 0xFF9F9F9F, 0xFFA0A0A0, 0xFFA1A1A1, 0xFFA3A3A3, 0xFFA4A4A4, 0xFFA4A4A4, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFABABAB, 0xFFAAAAAA, 0xFFAEAEAE, 0xFFAFAFAF, 0xFFB1B1B1, 0xFFAFAFAF, 
        0xFFA9A9A9, 0xFF989898, 0xFF979797, 0xFF979797, 0xFF959595, 0xFF939393, 0xFF8D8D8D, 0xFF848484, 0xFF777777,
  0xFFD0D0D0, 0xFFBBBBBB, 0xFFCACACA, 0xFFC5C5C5, 0xFFC0C0C0, 0xFFBDBDBD, 0xFFB8B8B8, 0xFFB6B6B6, 0xFFB3B3B3, 0xFFB3B3B3, 0xFFB1B1B1, 0xFFAFAFAF, 0xFFACACAC, 0xFFAAAAAA, 0xFFA8A8A8, 0xFFA8A8A8, 0xFFA6A6A6, 0xFFA5A5A5, 0xFFA3A3A3, 0xFFA1A1A1, 0xFFA0A0A0, 
        0xFF9D9D9D, 0xFF9C9C9C, 0xFF9B9B9B, 0xFF9A9A9A, 0xFF9B9B9B, 0xFF9D9D9D, 0xFF9F9F9F, 0xFFA0A0A0, 0xFFA1A1A1, 0xFFA2A2A2, 0xFFA4A4A4, 0xFFA4A4A4, 0xFFA6A6A6, 0xFFA7A7A7, 0xFFA9A9A9, 0xFFAAAAAA, 0xFFAEAEAE, 0xFFADADAD, 0xFFA5A5A5, 0xFF989898, 
        0xFF969696, 0xFF969696, 0xFF969696, 0xFF979797, 0xFF959595, 0xFF929292, 0xFF8B8B8B, 0xFF828282, 0xFF767676,
  0xFFD0D0D0, 0xFFBCBCBC, 0xFFCBCBCB, 0xFFC6C6C6, 0xFFC3C3C3, 0xFFBFBFBF, 0xFFB8B8B8, 0xFFB7B7B7, 0xFFB5B5B5, 0xFFB3B3B3, 0xFFAFAFAF, 0xFFAEAEAE, 0xFFACACAC, 0xFFABABAB, 0xFFA9A9A9, 0xFFA9A9A9, 0xFFA6A6A6, 0xFFA5A5A5, 0xFFA2A2A2, 0xFFA2A2A2, 0xFFA1A1A1, 
        0xFF9E9E9E, 0xFF9B9B9B, 0xFF9B9B9B, 0xFF9C9C9C, 0xFF9C9C9C, 0xFF9E9E9E, 0xFF9F9F9F, 0xFFA0A0A0, 0xFFA1A1A1, 0xFFA1A1A1, 0xFFA4A4A4, 0xFFA3A3A3, 0xFFA6A6A6, 0xFFA4A4A4, 0xFFA3A3A3, 0xFFA0A0A0, 0xFF9C9C9C, 0xFF969696, 0xFF959595, 0xFF959595, 
        0xFF969696, 0xFF969696, 0xFF969696, 0xFF969696, 0xFF949494, 0xFF909090, 0xFF8B8B8B, 0xFF838383, 0xFF767676,
  0xFFD0D0D0, 0xFFB8B8B8, 0xFFC2C2C2, 0xFFBDBDBD, 0xFFB8B8B8, 0xFFB3B3B3, 0xFFAFAFAF, 0xFFADADAD, 0xFFAAAAAA, 0xFFA9A9A9, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA3A3A3, 0xFFA2A2A2, 0xFFA1A1A1, 0xFFA0A0A0, 0xFF9E9E9E, 0xFF9C9C9C, 0xFF9B9B9B, 0xFF9A9A9A, 0xFF989898, 
        0xFF969696, 0xFF959595, 0xFF949494, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF949494, 0xFF949494, 0xFF949494, 0xFF949494, 0xFF949494, 0xFF959595, 0xFF959595, 0xFF949494, 0xFF959595, 0xFF959595, 0xFF959595, 0xFF969696, 0xFF969696, 
        0xFF969696, 0xFF959595, 0xFF979797, 0xFF959595, 0xFF949494, 0xFF919191, 0xFF8C8C8C, 0xFF838383, 0xFF777777,
  0xFFD0D0D0, 0xFFB2B2B2, 0xFFBABABA, 0xFFB8B8B8, 0xFFB4B4B4, 0xFFB1B1B1, 0xFFAEAEAE, 0xFFACACAC, 0xFFAAAAAA, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA6A6A6, 0xFFA2A2A2, 0xFFA1A1A1, 0xFF9F9F9F, 0xFF9F9F9F, 0xFF9D9D9D, 0xFF9C9C9C, 0xFF9A9A9A, 0xFF999999, 0xFF979797, 
        0xFF969696, 0xFF959595, 0xFF939393, 0xFF929292, 0xFF929292, 0xFF919191, 0xFF929292, 0xFF929292, 0xFF939393, 0xFF939393, 0xFF949494, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF949494, 0xFF949494, 0xFF959595, 0xFF959595, 
        0xFF959595, 0xFF969696, 0xFF969696, 0xFF969696, 0xFF939393, 0xFF919191, 0xFF8B8B8B, 0xFF838383, 0xFF767676,
  0xFFD0D0D0, 0xFFB2B2B2, 0xFFBABABA, 0xFFB8B8B8, 0xFFB4B4B4, 0xFFB1B1B1, 0xFFACACAC, 0xFFABABAB, 0xFFA9A9A9, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA5A5A5, 0xFFA3A3A3, 0xFFA1A1A1, 0xFFA0A0A0, 0xFF9E9E9E, 0xFF9C9C9C, 0xFF9A9A9A, 0xFF999999, 0xFF989898, 0xFF979797, 
        0xFF959595, 0xFF939393, 0xFF929292, 0xFF929292, 0xFF929292, 0xFF919191, 0xFF929292, 0xFF929292, 0xFF929292, 0xFF929292, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF949494, 0xFF949494, 0xFF949494, 0xFF949494, 0xFF959595, 0xFF949494, 
        0xFF949494, 0xFF959595, 0xFF959595, 0xFF959595, 0xFF939393, 0xFF909090, 0xFF8A8A8A, 0xFF828282, 0xFF757575,
  0xFFD0D0D0, 0xFFB3B3B3, 0xFFBBBBBB, 0xFFB8B8B8, 0xFFB5B5B5, 0xFFB0B0B0, 0xFFADADAD, 0xFFACACAC, 0xFFAAAAAA, 0xFFA8A8A8, 0xFFA7A7A7, 0xFFA5A5A5, 0xFFA4A4A4, 0xFFA2A2A2, 0xFFA1A1A1, 0xFF9F9F9F, 0xFF9D9D9D, 0xFF9B9B9B, 0xFF9A9A9A, 0xFF989898, 0xFF989898, 
        0xFF969696, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF929292, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF939393, 0xFF949494, 0xFF959595, 0xFF949494, 0xFF949494, 0xFF949494, 0xFF949494, 0xFF959595, 0xFF959595, 
        0xFF959595, 0xFF969696, 0xFF969696, 0xFF959595, 0xFF939393, 0xFF909090, 0xFF8B8B8B, 0xFF828282, 0xFF767676
#else
  0x00CFCFCF, 0x00D0D0D0, 0x00CFCFCF, 0x00CFCFCF, 0x00CFCFCF, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 
        0x00D1D1D1, 0x00D1D1D1, 0x00D1D1D1, 0x00D1D1D1, 0x00D1D1D1, 0x00D1D1D1, 0x00D1D1D1, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 
        0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D0D0D0, 0x00D1D1D1, 0x00D1D1D1,
  0x00D0D0D0, 0x00BBBBBB, 0x00C9C9C9, 0x00C6C6C6, 0x00C1C1C1, 0x00BDBDBD, 0x00B9B9B9, 0x00B7B7B7, 0x00B4B4B4, 0x00B3B3B3, 0x00B3B3B3, 0x00AFAFAF, 0x00ADADAD, 0x00ACACAC, 0x00ABABAB, 0x00AAAAAA, 0x00A9A9A9, 0x00A8A8A8, 0x00A4A4A4, 0x00A4A4A4, 0x00A3A3A3, 
        0x00A1A1A1, 0x00A0A0A0, 0x009F9F9F, 0x009E9E9E, 0x009E9E9E, 0x00A1A1A1, 0x00A1A1A1, 0x00A3A3A3, 0x00A4A4A4, 0x00A4A4A4, 0x00A6A6A6, 0x00A7A7A7, 0x00A9A9A9, 0x00ABABAB, 0x00ACACAC, 0x00ABABAB, 0x00ACACAC, 0x00B0B0B0, 0x00B1B1B1, 0x00B1B1B1, 
        0x00B1B1B1, 0x00B3B3B3, 0x00B4B4B4, 0x00B6B6B6, 0x00B3B3B3, 0x00B1B1B1, 0x00A9A9A9, 0x009D9D9D, 0x00888888,
  0x00D0D0D0, 0x00BBBBBB, 0x00CACACA, 0x00C8C8C8, 0x00C2C2C2, 0x00BDBDBD, 0x00B9B9B9, 0x00B4B4B4, 0x00B4B4B4, 0x00B3B3B3, 0x00B2B2B2, 0x00AFAFAF, 0x00ADADAD, 0x00ACACAC, 0x00ABABAB, 0x00AAAAAA, 0x00A7A7A7, 0x00A6A6A6, 0x00A3A3A3, 0x00A2A2A2, 0x009F9F9F, 
        0x009F9F9F, 0x009D9D9D, 0x009B9B9B, 0x009A9A9A, 0x009B9B9B, 0x009D9D9D, 0x009F9F9F, 0x00A0A0A0, 0x00A1A1A1, 0x00A2A2A2, 0x00A4A4A4, 0x00A6A6A6, 0x00A7A7A7, 0x00A9A9A9, 0x00ABABAB, 0x00ABABAB, 0x00ABABAB, 0x00ADADAD, 0x00B0B0B0, 0x00B1B1B1, 
        0x00B0B0B0, 0x00B2B2B2, 0x00B5B5B5, 0x00B6B6B6, 0x00B3B3B3, 0x00AFAFAF, 0x00A8A8A8, 0x009A9A9A, 0x00848484,
  0x00D0D0D0, 0x00BCBCBC, 0x00CBCBCB, 0x00C8C8C8, 0x00C3C3C3, 0x00BEBEBE, 0x00B9B9B9, 0x00B5B5B5, 0x00B5B5B5, 0x00B4B4B4, 0x00B0B0B0, 0x00AFAFAF, 0x00ADADAD, 0x00ABABAB, 0x00ABABAB, 0x00A8A8A8, 0x00A7A7A7, 0x00A6A6A6, 0x00A4A4A4, 0x00A2A2A2, 0x00A0A0A0, 
        0x009F9F9F, 0x009D9D9D, 0x009B9B9B, 0x009B9B9B, 0x009B9B9B, 0x009D9D9D, 0x00A0A0A0, 0x00A2A2A2, 0x00A2A2A2, 0x00A2A2A2, 0x00A3A3A3, 0x00A4A4A4, 0x00A7A7A7, 0x00A9A9A9, 0x00ABABAB, 0x00AAAAAA, 0x00ABABAB, 0x00AEAEAE, 0x00B0B0B0, 0x00B1B1B1, 
        0x00B1B1B1, 0x00B2B2B2, 0x00B5B5B5, 0x00B5B5B5, 0x00B2B2B2, 0x00AFAFAF, 0x00A8A8A8, 0x009B9B9B, 0x00828282,
  0x00D0D0D0, 0x00B9B9B9, 0x00C8C8C8, 0x00C5C5C5, 0x00C0C0C0, 0x00BBBBBB, 0x00B6B6B6, 0x00B3B3B3, 0x00B2B2B2, 0x00B1B1B1, 0x00AEAEAE, 0x00ABABAB, 0x00ACACAC, 0x00A9A9A9, 0x00A8A8A8, 0x00A7A7A7, 0x00A4A4A4, 0x00A3A3A3, 0x00A1A1A1, 0x00A1A1A1, 0x009F9F9F, 
        0x009C9C9C, 0x009B9B9B, 0x00989898, 0x009A9A9A, 0x009A9A9A, 0x009C9C9C, 0x009E9E9E, 0x009F9F9F, 0x009F9F9F, 0x00A0A0A0, 0x00A2A2A2, 0x00A2A2A2, 0x00A6A6A6, 0x00A7A7A7, 0x00A9A9A9, 0x00A8A8A8, 0x00ABABAB, 0x00ABABAB, 0x00ACACAC, 0x00AEAEAE, 
        0x00B1B1B1, 0x00B0B0B0, 0x00B3B3B3, 0x00B3B3B3, 0x00B0B0B0, 0x00ADADAD, 0x00A4A4A4, 0x00999999, 0x007E7E7E,
  0x00D0D0D0, 0x00B9B9B9, 0x00C8C8C8, 0x00C5C5C5, 0x00C1C1C1, 0x00BBBBBB, 0x00B6B6B6, 0x00B5B5B5, 0x00B2B2B2, 0x00B1B1B1, 0x00AFAFAF, 0x00ADADAD, 0x00ABABAB, 0x00A9A9A9, 0x00A8A8A8, 0x00A7A7A7, 0x00A5A5A5, 0x00A4A4A4, 0x00A3A3A3, 0x009F9F9F, 0x00A0A0A0, 
        0x009D9D9D, 0x00999999, 0x00989898, 0x00989898, 0x009A9A9A, 0x009C9C9C, 0x009E9E9E, 0x009D9D9D, 0x009E9E9E, 0x00A1A1A1, 0x00A3A3A3, 0x00A3A3A3, 0x00A5A5A5, 0x00A5A5A5, 0x00A6A6A6, 0x00A8A8A8, 0x00AAAAAA, 0x00ACACAC, 0x00AEAEAE, 0x00AEAEAE, 
        0x00B1B1B1, 0x00B2B2B2, 0x00B3B3B3, 0x00B3B3B3, 0x00B0B0B0, 0x00ADADAD, 0x00A4A4A4, 0x00989898, 0x007C7C7C,
  0x00D0D0D0, 0x00BBBBBB, 0x00C9C9C9, 0x00C8C8C8, 0x00C4C4C4, 0x00BEBEBE, 0x00B9B9B9, 0x00B6B6B6, 0x00B5B5B5, 0x00B3B3B3, 0x00B3B3B3, 0x00AFAFAF, 0x00ACACAC, 0x00ACACAC, 0x00AAAAAA, 0x00A8A8A8, 0x00A7A7A7, 0x00A5A5A5, 0x00A4A4A4, 0x00A1A1A1, 0x00A1A1A1, 
        0x009E9E9E, 0x009E9E9E, 0x009C9C9C, 0x009B9B9B, 0x009C9C9C, 0x009E9E9E, 0x009F9F9F, 0x009F9F9F, 0x00A1A1A1, 0x00A2A2A2, 0x00A6A6A6, 0x00A6A6A6, 0x00A7A7A7, 0x00A8A8A8, 0x00A8A8A8, 0x00ABABAB, 0x00ACACAC, 0x00ADADAD, 0x00AFAFAF, 0x00B0B0B0, 
        0x00B1B1B1, 0x00B3B3B3, 0x00B3B3B3, 0x00B4B4B4, 0x00B3B3B3, 0x00ADADAD, 0x00A6A6A6, 0x00989898, 0x007C7C7C,
  0x00D0D0D0, 0x00BABABA, 0x00C8C8C8, 0x00C6C6C6, 0x00C1C1C1, 0x00BEBEBE, 0x00B8B8B8, 0x00B4B4B4, 0x00B5B5B5, 0x00B3B3B3, 0x00B2B2B2, 0x00AFAFAF, 0x00ACACAC, 0x00ABABAB, 0x00AAAAAA, 0x00A7A7A7, 0x00A6A6A6, 0x00A4A4A4, 0x00A3A3A3, 0x00A1A1A1, 0x009F9F9F, 
        0x009E9E9E, 0x009D9D9D, 0x009B9B9B, 0x009B9B9B, 0x009D9D9D, 0x009C9C9C, 0x009E9E9E, 0x00A0A0A0, 0x00A2A2A2, 0x00A2A2A2, 0x00A5A5A5, 0x00A5A5A5, 0x00A7A7A7, 0x00A8A8A8, 0x00A8A8A8, 0x00AAAAAA, 0x00ACACAC, 0x00ACACAC, 0x00AFAFAF, 0x00B0B0B0, 
        0x00B1B1B1, 0x00B3B3B3, 0x00B2B2B2, 0x00B5B5B5, 0x00B3B3B3, 0x00AEAEAE, 0x00A6A6A6, 0x008A8A8A, 0x007B7B7B,
  0x00D0D0D0, 0x00BBBBBB, 0x00C9C9C9, 0x00C8C8C8, 0x00C3C3C3, 0x00BDBDBD, 0x00B9B9B9, 0x00B6B6B6, 0x00B5B5B5, 0x00B5B5B5, 0x00B3B3B3, 0x00B0B0B0, 0x00ADADAD, 0x00ABABAB, 0x00ABABAB, 0x00A9A9A9, 0x00A7A7A7, 0x00A4A4A4, 0x00A3A3A3, 0x00A2A2A2, 0x00A1A1A1, 
        0x009F9F9F, 0x009F9F9F, 0x009E9E9E, 0x009D9D9D, 0x009D9D9D, 0x009F9F9F, 0x009E9E9E, 0x00A0A0A0, 0x00A2A2A2, 0x00A3A3A3, 0x00A6A6A6, 0x00A6A6A6, 0x00A7A7A7, 0x00AAAAAA, 0x00A9A9A9, 0x00ACACAC, 0x00ADADAD, 0x00AEAEAE, 0x00AFAFAF, 0x00AFAFAF, 
        0x00B2B2B2, 0x00B5B5B5, 0x00B5B5B5, 0x00B6B6B6, 0x00B4B4B4, 0x00AFAFAF, 0x00A3A3A3, 0x00888888, 0x007B7B7B,
  0x00D0D0D0, 0x00BBBBBB, 0x00CBCBCB, 0x00C9C9C9, 0x00C4C4C4, 0x00BCBCBC, 0x00B7B7B7, 0x00B4B4B4, 0x00B5B5B5, 0x00B3B3B3, 0x00B1B1B1, 0x00B0B0B0, 0x00ABABAB, 0x00ABABAB, 0x00AAAAAA, 0x00A8A8A8, 0x00A7A7A7, 0x00A6A6A6, 0x00A4A4A4, 0x00A2A2A2, 0x00A0A0A0, 
        0x009E9E9E, 0x009D9D9D, 0x009B9B9B, 0x009B9B9B, 0x009D9D9D, 0x009E9E9E, 0x009F9F9F, 0x00A0A0A0, 0x00A0A0A0, 0x00A2A2A2, 0x00A5A5A5, 0x00A6A6A6, 0x00A8A8A8, 0x00A9A9A9, 0x00AAAAAA, 0x00AAAAAA, 0x00ABABAB, 0x00ADADAD, 0x00AFAFAF, 0x00B0B0B0, 
        0x00B1B1B1, 0x00B5B5B5, 0x00B5B5B5, 0x00B5B5B5, 0x00B4B4B4, 0x00AFAFAF, 0x00989898, 0x00888888, 0x007B7B7B,
  0x00D0D0D0, 0x00BCBCBC, 0x00CCCCCC, 0x00CBCBCB, 0x00C5C5C5, 0x00BFBFBF, 0x00BABABA, 0x00B7B7B7, 0x00B5B5B5, 0x00B3B3B3, 0x00B2B2B2, 0x00B1B1B1, 0x00AFAFAF, 0x00ACACAC, 0x00AAAAAA, 0x00A9A9A9, 0x00A7A7A7, 0x00A7A7A7, 0x00A7A7A7, 0x00A2A2A2, 0x00A2A2A2, 
        0x00A0A0A0, 0x009F9F9F, 0x009D9D9D, 0x009D9D9D, 0x00A0A0A0, 0x009F9F9F, 0x00A2A2A2, 0x00A3A3A3, 0x00A2A2A2, 0x00A3A3A3, 0x00A6A6A6, 0x00A7A7A7, 0x00A8A8A8, 0x00ABABAB, 0x00ACACAC, 0x00ABABAB, 0x00ADADAD, 0x00AFAFAF, 0x00B1B1B1, 0x00B1B1B1, 
        0x00B4B4B4, 0x00B6B6B6, 0x00B5B5B5, 0x00B5B5B5, 0x00B5B5B5, 0x00A8A8A8, 0x008E8E8E, 0x00888888, 0x007B7B7B,
  0x00D0D0D0, 0x00BBBBBB, 0x00CCCCCC, 0x00C9C9C9, 0x00C5C5C5, 0x00BEBEBE, 0x00BBBBBB, 0x00B7B7B7, 0x00B6B6B6, 0x00B4B4B4, 0x00B2B2B2, 0x00B0B0B0, 0x00AEAEAE, 0x00ADADAD, 0x00ABABAB, 0x00AAAAAA, 0x00A7A7A7, 0x00A7A7A7, 0x00A6A6A6, 0x00A3A3A3, 0x00A1A1A1, 
        0x00A1A1A1, 0x009F9F9F, 0x009D9D9D, 0x009F9F9F, 0x009F9F9F, 0x00A1A1A1, 0x00A1A1A1, 0x00A3A3A3, 0x00A4A4A4, 0x00A4A4A4, 0x00A5A5A5, 0x00A7A7A7, 0x00AAAAAA, 0x00ABABAB, 0x00ACACAC, 0x00ACACAC, 0x00AEAEAE, 0x00B0B0B0, 0x00B1B1B1, 0x00B0B0B0, 
        0x00B4B4B4, 0x00B4B4B4, 0x00B6B6B6, 0x00B5B5B5, 0x00B2B2B2, 0x00969696, 0x008F8F8F, 0x00878787, 0x007A7A7A,
  0x00D0D0D0, 0x00BDBDBD, 0x00CDCDCD, 0x00C9C9C9, 0x00C4C4C4, 0x00BFBFBF, 0x00BABABA, 0x00B8B8B8, 0x00B7B7B7, 0x00B6B6B6, 0x00B3B3B3, 0x00B1B1B1, 0x00AFAFAF, 0x00ADADAD, 0x00ACACAC, 0x00ACACAC, 0x00A7A7A7, 0x00A8A8A8, 0x00A6A6A6, 0x00A4A4A4, 0x00A3A3A3, 
        0x00A2A2A2, 0x009F9F9F, 0x009D9D9D, 0x009E9E9E, 0x009F9F9F, 0x00A1A1A1, 0x00A1A1A1, 0x00A4A4A4, 0x00A3A3A3, 0x00A4A4A4, 0x00A5A5A5, 0x00A7A7A7, 0x00AAAAAA, 0x00ACACAC, 0x00ACACAC, 0x00ACACAC, 0x00AEAEAE, 0x00B0B0B0, 0x00B2B2B2, 0x00B1B1B1, 
        0x00B4B4B4, 0x00B5B5B5, 0x00B9B9B9, 0x00B7B7B7, 0x00A0A0A0, 0x00959595, 0x00909090, 0x00878787, 0x007A7A7A,
  0x00D0D0D0, 0x00BDBDBD, 0x00CDCDCD, 0x00CACACA, 0x00C3C3C3, 0x00BEBEBE, 0x00BABABA, 0x00B8B8B8, 0x00B6B6B6, 0x00B4B4B4, 0x00B2B2B2, 0x00B0B0B0, 0x00AFAFAF, 0x00ADADAD, 0x00ABABAB, 0x00ABABAB, 0x00A7A7A7, 0x00A7A7A7, 0x00A5A5A5, 0x00A2A2A2, 0x00A2A2A2, 
        0x00A0A0A0, 0x00A0A0A0, 0x009D9D9D, 0x009E9E9E, 0x009F9F9F, 0x00A1A1A1, 0x00A2A2A2, 0x00A2A2A2, 0x00A2A2A2, 0x00A4A4A4, 0x00A6A6A6, 0x00A6A6A6, 0x00A9A9A9, 0x00ABABAB, 0x00ABABAB, 0x00ABABAB, 0x00AEAEAE, 0x00AFAFAF, 0x00B1B1B1, 0x00B1B1B1, 
        0x00B3B3B3, 0x00B6B6B6, 0x00B7B7B7, 0x009E9E9E, 0x00979797, 0x00949494, 0x00909090, 0x00868686, 0x00797979,
  0x00D0D0D0, 0x00BABABA, 0x00CACACA, 0x00C8C8C8, 0x00C3C3C3, 0x00BDBDBD, 0x00B9B9B9, 0x00B6B6B6, 0x00B4B4B4, 0x00B2B2B2, 0x00B0B0B0, 0x00AFAFAF, 0x00AEAEAE, 0x00ACACAC, 0x00AAAAAA, 0x00A9A9A9, 0x00A7A7A7, 0x00A6A6A6, 0x00A3A3A3, 0x00A0A0A0, 0x00A0A0A0, 
        0x009F9F9F, 0x009E9E9E, 0x009C9C9C, 0x009C9C9C, 0x009D9D9D, 0x009F9F9F, 0x00A0A0A0, 0x00A2A2A2, 0x00A1A1A1, 0x00A3A3A3, 0x00A5A5A5, 0x00A5A5A5, 0x00A8A8A8, 0x00A8A8A8, 0x00AAAAAA, 0x00AAAAAA, 0x00ACACAC, 0x00AFAFAF, 0x00B0B0B0, 0x00B0B0B0, 
        0x00B2B2B2, 0x00B0B0B0, 0x009E9E9E, 0x00979797, 0x00959595, 0x00939393, 0x008D8D8D, 0x00858585, 0x00797979,
  0x00D0D0D0, 0x00BBBBBB, 0x00C9C9C9, 0x00C8C8C8, 0x00C3C3C3, 0x00BDBDBD, 0x00B9B9B9, 0x00B8B8B8, 0x00B4B4B4, 0x00B2B2B2, 0x00B1B1B1, 0x00B0B0B0, 0x00ADADAD, 0x00ACACAC, 0x00A9A9A9, 0x00A9A9A9, 0x00A7A7A7, 0x00A6A6A6, 0x00A4A4A4, 0x00A2A2A2, 0x00A1A1A1, 
        0x009E9E9E, 0x009E9E9E, 0x009C9C9C, 0x009C9C9C, 0x009C9C9C, 0x009F9F9F, 0x009F9F9F, 0x00A0A0A0, 0x00A1A1A1, 0x00A3A3A3, 0x00A4A4A4, 0x00A4A4A4, 0x00A6A6A6, 0x00A7A7A7, 0x00ABABAB, 0x00AAAAAA, 0x00AEAEAE, 0x00AFAFAF, 0x00B1B1B1, 0x00AFAFAF, 
        0x00A9A9A9, 0x00989898, 0x00979797, 0x00979797, 0x00959595, 0x00939393, 0x008D8D8D, 0x00848484, 0x00777777,
  0x00D0D0D0, 0x00BBBBBB, 0x00CACACA, 0x00C5C5C5, 0x00C0C0C0, 0x00BDBDBD, 0x00B8B8B8, 0x00B6B6B6, 0x00B3B3B3, 0x00B3B3B3, 0x00B1B1B1, 0x00AFAFAF, 0x00ACACAC, 0x00AAAAAA, 0x00A8A8A8, 0x00A8A8A8, 0x00A6A6A6, 0x00A5A5A5, 0x00A3A3A3, 0x00A1A1A1, 0x00A0A0A0, 
        0x009D9D9D, 0x009C9C9C, 0x009B9B9B, 0x009A9A9A, 0x009B9B9B, 0x009D9D9D, 0x009F9F9F, 0x00A0A0A0, 0x00A1A1A1, 0x00A2A2A2, 0x00A4A4A4, 0x00A4A4A4, 0x00A6A6A6, 0x00A7A7A7, 0x00A9A9A9, 0x00AAAAAA, 0x00AEAEAE, 0x00ADADAD, 0x00A5A5A5, 0x00989898, 
        0x00969696, 0x00969696, 0x00969696, 0x00979797, 0x00959595, 0x00929292, 0x008B8B8B, 0x00828282, 0x00767676,
  0x00D0D0D0, 0x00BCBCBC, 0x00CBCBCB, 0x00C6C6C6, 0x00C3C3C3, 0x00BFBFBF, 0x00B8B8B8, 0x00B7B7B7, 0x00B5B5B5, 0x00B3B3B3, 0x00AFAFAF, 0x00AEAEAE, 0x00ACACAC, 0x00ABABAB, 0x00A9A9A9, 0x00A9A9A9, 0x00A6A6A6, 0x00A5A5A5, 0x00A2A2A2, 0x00A2A2A2, 0x00A1A1A1, 
        0x009E9E9E, 0x009B9B9B, 0x009B9B9B, 0x009C9C9C, 0x009C9C9C, 0x009E9E9E, 0x009F9F9F, 0x00A0A0A0, 0x00A1A1A1, 0x00A1A1A1, 0x00A4A4A4, 0x00A3A3A3, 0x00A6A6A6, 0x00A4A4A4, 0x00A3A3A3, 0x00A0A0A0, 0x009C9C9C, 0x00969696, 0x00959595, 0x00959595, 
        0x00969696, 0x00969696, 0x00969696, 0x00969696, 0x00949494, 0x00909090, 0x008B8B8B, 0x00838383, 0x00767676,
  0x00D0D0D0, 0x00B8B8B8, 0x00C2C2C2, 0x00BDBDBD, 0x00B8B8B8, 0x00B3B3B3, 0x00AFAFAF, 0x00ADADAD, 0x00AAAAAA, 0x00A9A9A9, 0x00A8A8A8, 0x00A7A7A7, 0x00A3A3A3, 0x00A2A2A2, 0x00A1A1A1, 0x00A0A0A0, 0x009E9E9E, 0x009C9C9C, 0x009B9B9B, 0x009A9A9A, 0x00989898, 
        0x00969696, 0x00959595, 0x00949494, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00949494, 0x00949494, 0x00949494, 0x00949494, 0x00949494, 0x00959595, 0x00959595, 0x00949494, 0x00959595, 0x00959595, 0x00959595, 0x00969696, 0x00969696, 
        0x00969696, 0x00959595, 0x00979797, 0x00959595, 0x00949494, 0x00919191, 0x008C8C8C, 0x00838383, 0x00777777,
  0x00D0D0D0, 0x00B2B2B2, 0x00BABABA, 0x00B8B8B8, 0x00B4B4B4, 0x00B1B1B1, 0x00AEAEAE, 0x00ACACAC, 0x00AAAAAA, 0x00A8A8A8, 0x00A7A7A7, 0x00A6A6A6, 0x00A2A2A2, 0x00A1A1A1, 0x009F9F9F, 0x009F9F9F, 0x009D9D9D, 0x009C9C9C, 0x009A9A9A, 0x00999999, 0x00979797, 
        0x00969696, 0x00959595, 0x00939393, 0x00929292, 0x00929292, 0x00919191, 0x00929292, 0x00929292, 0x00939393, 0x00939393, 0x00949494, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00949494, 0x00949494, 0x00959595, 0x00959595, 
        0x00959595, 0x00969696, 0x00969696, 0x00969696, 0x00939393, 0x00919191, 0x008B8B8B, 0x00838383, 0x00767676,
  0x00D0D0D0, 0x00B2B2B2, 0x00BABABA, 0x00B8B8B8, 0x00B4B4B4, 0x00B1B1B1, 0x00ACACAC, 0x00ABABAB, 0x00A9A9A9, 0x00A8A8A8, 0x00A7A7A7, 0x00A5A5A5, 0x00A3A3A3, 0x00A1A1A1, 0x00A0A0A0, 0x009E9E9E, 0x009C9C9C, 0x009A9A9A, 0x00999999, 0x00989898, 0x00979797, 
        0x00959595, 0x00939393, 0x00929292, 0x00929292, 0x00929292, 0x00919191, 0x00929292, 0x00929292, 0x00929292, 0x00929292, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00949494, 0x00949494, 0x00949494, 0x00949494, 0x00959595, 0x00949494, 
        0x00949494, 0x00959595, 0x00959595, 0x00959595, 0x00939393, 0x00909090, 0x008A8A8A, 0x00828282, 0x00757575,
  0x00D0D0D0, 0x00B3B3B3, 0x00BBBBBB, 0x00B8B8B8, 0x00B5B5B5, 0x00B0B0B0, 0x00ADADAD, 0x00ACACAC, 0x00AAAAAA, 0x00A8A8A8, 0x00A7A7A7, 0x00A5A5A5, 0x00A4A4A4, 0x00A2A2A2, 0x00A1A1A1, 0x009F9F9F, 0x009D9D9D, 0x009B9B9B, 0x009A9A9A, 0x00989898, 0x00989898, 
        0x00969696, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00929292, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00939393, 0x00949494, 0x00959595, 0x00949494, 0x00949494, 0x00949494, 0x00949494, 0x00959595, 0x00959595, 
        0x00959595, 0x00969696, 0x00969696, 0x00959595, 0x00939393, 0x00909090, 0x008B8B8B, 0x00828282, 0x00767676
#endif
};

GUI_CONST_STORAGE GUI_BITMAP bmButtonRound_50x22 = {
  50, // xSize
  22, // ySize
  200, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_acButtonRound_50x22,  // Pointer to picture data
  NULL,  // Pointer to palette
#if (GUI_USE_ARGB == 1)
  GUI_DRAW_BMPM8888I
#else
  GUI_DRAW_BMP8888
#endif
};

/*************************** End of file ****************************/
