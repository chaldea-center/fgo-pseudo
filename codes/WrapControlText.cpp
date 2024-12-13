void __fastcall WrapControlText___ctor(WrapControlText_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WrapControlText__CalcApproximateLabelHeight(
        System_String_o *text,
        int32_t width,
        int32_t fontSize,
        int32_t lineHeight,
        int32_t marginLineCount,
        const MethodInfo *method)
{
  int32_t stringLength; // w8
  int v7; // w10
  int v8; // w8

  if ( !text )
    sub_1BD36B4(0LL, width);
  stringLength = text->fields._stringLength;
  v7 = stringLength / (width / fontSize);
  v8 = stringLength % (width / fontSize);
  if ( v8 >= 1 )
    v8 = 1;
  return (v7 + marginLineCount + v8) * lineHeight;
}


void __fastcall WrapControlText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w0

  v3 = *s;
  if ( !v3 )
    goto LABEL_10;
  v4 = System_Text_StringBuilder__get_Length(v3, 0LL) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_10;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0LL);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0LL);
        return;
      }
LABEL_10:
      sub_1BD36B4(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_61689472(v3, 0xAu, 0LL);
}


bool __fastcall WrapControlText__IsSpace(int32_t ch, const MethodInfo *method)
{
  unsigned int v2; // w9
  bool result; // w0

  v2 = ch - 8201;
  result = 1;
  if ( v2 >= 3 && ch != 32 )
    return 0;
  return result;
}


void __fastcall WrapControlText__ReplaceSpaceWithNewline(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w0

  v3 = *s;
  if ( !v3 )
    goto LABEL_9;
  v4 = System_Text_StringBuilder__get_Length(v3, 0LL) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_9;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0LL);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0LL);
        return;
      }
LABEL_9:
      sub_1BD36B4(v3, method);
    }
  }
}


void __fastcall WrapControlText__fontSizeAdjust(
        UILabel_o *label,
        System_String_o *text,
        int32_t defaultSize,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B3673F & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, text);
    byte_4B3673F = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1BD36B4(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v9);
  }
}


float __fastcall WrapControlText__getFontWidth(
        UILabel_o *label,
        System_String_o *text,
        int32_t maxSize,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v10; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B36740 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, text);
    byte_4B36740 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1BD36B4(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v10);
    return *(float *)&lineOut[1];
  }
}


int32_t __fastcall WrapControlText__textAdjust(
        UILabel_o *label,
        System_String_o *text,
        int32_t maxSize,
        int32_t minSize,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  Il2CppObject *v15; // x19
  const MethodInfo *v16; // [xsp+0h] [xbp-50h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B3673E & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Debug_TypeInfo, text);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_15854/*"WrapControlText textAdjust error: "*/, v10);
    sub_1BD3458(&StringLiteral_1/*""*/, v11);
    byte_4B3673E = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
    return 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( label )
    {
      UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return 0;
    }
LABEL_19:
    sub_1BD36B4(IsNullOrEmpty, v13);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, v16);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, v16);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, text, 0LL);
  v15 = (Il2CppObject *)System_String__Concat_62525248((System_String_o *)StringLiteral_15854/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v15, 0LL);
  return lineOut[0];
}


bool __fastcall WrapControlText__wrapText(
        UILabel_o *label,
        System_String_o *text,
        int32_t fsize,
        bool fontSizeAdjust,
        bool keepCharCount,
        float *widthOut,
        int32_t *lineOut,
        int32_t minSize,
        const MethodInfo *method)
{
  System_String_o *v13; // x24
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *Chars; // x0
  System_String_o *v19; // x28
  int32_t mHeight; // w22
  __int64 v21; // x1
  NGUIText_c *v22; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  double v29; // d8
  __int64 v30; // x1
  double v31; // d0
  double v32; // d0
  double v33; // d1
  double v34; // d1
  NGUIText_c *v35; // x0
  struct NGUIText_StaticFields *v36; // x8
  int v37; // w9
  float fontScale; // s0
  int fontSize; // s1
  float spacingY; // s2
  int regionWidth; // w9
  int regionHeight; // w9
  float finalLineHeight; // s1
  float v44; // s8
  int maxLines; // w21
  int32_t v46; // w21
  float v47; // s8
  float v48; // s8
  unsigned int v49; // w9
  unsigned int v50; // w8
  System_Text_StringBuilder_o *v51; // x20
  __int64 v52; // x2
  int32_t stringLength; // w26
  float v54; // s10
  System_String_o *v55; // x1
  NGUIText_c *v57; // x0
  int v58; // s0
  int v59; // w23
  int32_t v60; // w22
  int v61; // w27
  float v62; // s12
  double v63; // d14
  float v64; // s15
  float v65; // s9
  int v66; // w25
  int32_t v67; // w28
  System_Text_StringBuilder_o *v68; // x21
  NGUIText_c *v69; // x8
  uint16_t v70; // w29
  int32_t v71; // w8
  int32_t v72; // w20
  BMSymbol_o *Symbol; // x21
  float v74; // s11
  int32_t v75; // w20
  int32_t v76; // w22
  uint16_t v77; // w0
  System_Text_StringBuilder_o *v78; // x20
  double v79; // d8
  double v80; // d0
  double v81; // d0
  double v82; // d1
  double v83; // d1
  float GlyphWidth; // s0
  NGUIText_c *v85; // x0
  float v86; // s8
  float v87; // s14
  System_String_o *v88; // x21
  int32_t v89; // w0
  unsigned __int16 v90; // w21
  NGUIText_c *v91; // x8
  int32_t v92; // w20
  int v93; // w9
  System_Text_StringBuilder_o *v94; // x22
  int v95; // w20
  float v96; // s0
  int32_t v97; // w20
  NGUIText_c *v98; // x0
  float v99; // s8
  System_Text_StringBuilder_o *v100; // x20
  float v101; // s8
  _BOOL4 v102; // w20
  int32_t *v103; // x8
  NGUIText_c *v104; // x0
  float v105; // s0
  float v106; // s0
  int32_t v107; // w1
  int32_t *v108; // x8
  System_String_o *v109; // x0
  NGUIText_c *v110; // x0
  float v111; // s0
  int v112; // w8
  int32_t v113; // w1
  NGUIText_c *v114; // x0
  int v115; // w8
  char v116; // [xsp+Ch] [xbp-104h]
  int32_t *v117; // [xsp+10h] [xbp-100h]
  int32_t v118; // [xsp+1Ch] [xbp-F4h]
  float *v119; // [xsp+20h] [xbp-F0h]
  System_String_o *v120; // [xsp+28h] [xbp-E8h]
  int32_t v121; // [xsp+34h] [xbp-DCh]
  System_String_o *v122; // [xsp+38h] [xbp-D8h]
  int v124; // [xsp+44h] [xbp-CCh]
  int v126; // [xsp+4Ch] [xbp-C4h]
  System_String_o *v127; // [xsp+50h] [xbp-C0h]
  int32_t index; // [xsp+5Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+60h] [xbp-B0h] BYREF
  double iptr; // [xsp+68h] [xbp-A8h] BYREF

  v13 = text;
  if ( (byte_4B36741 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, text);
    sub_1BD3458(&NGUIText_TypeInfo, v15);
    sub_1BD3458(&System_Text_StringBuilder_TypeInfo, v16);
    sub_1BD3458(&StringLiteral_1/*""*/, v17);
    byte_4B36741 = 1;
  }
  s = 0LL;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B367AE )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, text);
    byte_4B367AE = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v127 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4B367AF )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4B367AF = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v19 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4B367B0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4B367B0 = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_261;
  mHeight = label->fields.mHeight;
  v122 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, 1000000, 0LL);
    fsize = minSize;
  }
  UILabel__set_fontSize(label, fsize, 0LL);
  UILabel__UpdateNGUIText(label, 0LL);
  v22 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v22 = NGUIText_TypeInfo;
  }
  static_fields = v22->static_fields;
  __asm { FMOV            V0.2S, #1.0 }
  static_fields->fontSize = fsize;
  *(_QWORD *)&static_fields->fontScale = _D0;
  if ( !byte_4B326D8 )
  {
    sub_1BD3458(&System_Math_TypeInfo, v21);
    byte_4B326D8 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v29 = (float)fsize;
  v31 = modf(v29, &iptr);
  if ( (fsize & 0x80000000) != 0 )
  {
    if ( v31 != -0.5 )
    {
      v32 = ceil(v29 + -0.5);
      goto LABEL_36;
    }
    v32 = iptr;
    v33 = -1.0;
  }
  else
  {
    if ( v31 != 0.5 )
    {
      v32 = floor(v29 + 0.5);
      goto LABEL_36;
    }
    v32 = iptr;
    v33 = 1.0;
  }
  v34 = v32 + v33;
  if ( ((__int64)v32 & 1) != 0 )
    v32 = v34;
LABEL_36:
  v35 = NGUIText_TypeInfo;
  v36 = NGUIText_TypeInfo->static_fields;
  v37 = (int)v32;
  _ZF = v32 == INFINITY;
  fontSize = v36->fontSize;
  fontScale = v36->fontScale;
  if ( _ZF )
    v37 = 0x80000000;
  spacingY = v36->spacingY;
  v36->finalSize = v37;
  regionWidth = v36->regionWidth;
  v36->finalLineHeight = (float)(spacingY + (float)fontSize) * fontScale;
  if ( regionWidth < 1 )
    goto LABEL_79;
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = NGUIText_TypeInfo;
    v36 = NGUIText_TypeInfo->static_fields;
  }
  if ( v36->regionHeight < 1 )
    goto LABEL_79;
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = NGUIText_TypeInfo;
    v36 = NGUIText_TypeInfo->static_fields;
  }
  if ( v36->finalLineHeight < 1.0 )
    goto LABEL_79;
  v121 = mHeight;
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = NGUIText_TypeInfo;
    v36 = NGUIText_TypeInfo->static_fields;
    maxLines = v36->maxLines;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v35 = NGUIText_TypeInfo;
      v36 = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = v36->regionHeight;
    if ( maxLines > 0 )
      goto LABEL_47;
LABEL_53:
    v44 = (float)regionHeight;
    goto LABEL_54;
  }
  regionHeight = v36->regionHeight;
  if ( v36->maxLines <= 0 )
    goto LABEL_53;
LABEL_47:
  finalLineHeight = v36->finalLineHeight;
  if ( (float)(finalLineHeight * (float)v36->maxLines) <= (float)regionHeight )
    v44 = finalLineHeight * (float)v36->maxLines;
  else
    v44 = (float)regionHeight;
LABEL_54:
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = NGUIText_TypeInfo;
    v36 = NGUIText_TypeInfo->static_fields;
  }
  v46 = v36->maxLines;
  if ( v46 < 1 )
  {
    v46 = 1000000;
  }
  else if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = NGUIText_TypeInfo;
    v46 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = NGUIText_TypeInfo;
  }
  if ( (float)(v44 / v35->static_fields->finalLineHeight) <= (float)v46 )
    v47 = v44 / v35->static_fields->finalLineHeight;
  else
    v47 = (float)v46;
  if ( !byte_4B31940 )
  {
    sub_1BD3458(&System_Math_TypeInfo, v30);
    byte_4B31940 = 1;
  }
  v48 = v47 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v49 = vcvtms_s32_f32(v48);
  if ( floorf(v48) == INFINITY )
    v50 = 0x80000000;
  else
    v50 = v49;
  v126 = v50;
  if ( !v50 )
  {
LABEL_79:
    v55 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_80:
    UILabel__set_text(label, v55, 0LL);
    return 0;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v13, 0LL);
  v51 = (System_Text_StringBuilder_o *)sub_1BD36A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v51, 0LL);
  s = v51;
  if ( !v13 )
    goto LABEL_261;
  stringLength = v13->fields._stringLength;
  v120 = v19;
  if ( fontSizeAdjust )
  {
    index = 0;
    v119 = widthOut;
    if ( stringLength <= 0 )
    {
      v103 = lineOut;
      v66 = 1;
      *widthOut = 0.0;
      *v103 = 1;
      v101 = 0.0;
      if ( !fontSizeAdjust )
        goto LABEL_240;
      goto LABEL_228;
    }
    v54 = 1000000.0;
    v117 = lineOut;
    v118 = minSize;
  }
  else
  {
    v57 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v57 = NGUIText_TypeInfo;
    }
    v58 = v57->static_fields->regionWidth;
    index = 0;
    if ( stringLength <= 0 )
    {
      v108 = lineOut;
      v66 = 1;
      *widthOut = 0.0;
      *v108 = 1;
      goto LABEL_240;
    }
    v117 = lineOut;
    v119 = widthOut;
    v118 = minSize;
    v54 = (float)v58;
  }
  v59 = 0;
  v60 = 0;
  v61 = 0;
  LODWORD(text) = 0;
  v62 = 0.0;
  v63 = -0.5;
  v64 = v54;
  v65 = 0.0;
  v66 = 1;
  v124 = 1;
  v116 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v13, (int32_t)text, 0LL);
    v67 = (unsigned __int16)Chars;
    v61 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars != 10 )
    {
      v69 = NGUIText_TypeInfo;
      v70 = (unsigned __int16)Chars;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v69 = NGUIText_TypeInfo;
      }
      if ( v69->static_fields->encoding )
      {
        if ( !v69->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v69);
        if ( NGUIText__ParseSymbol(v13, &index, 0LL) )
        {
          v71 = index;
LABEL_209:
          index = v71 - 1;
          goto LABEL_211;
        }
        v69 = NGUIText_TypeInfo;
      }
      if ( !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v69 = NGUIText_TypeInfo;
      }
      if ( v69->static_fields->useSymbols )
      {
        v72 = index;
        if ( !v69->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v69);
        Symbol = NGUIText__GetSymbol(v13, v72, stringLength, 0LL);
        v69 = NGUIText_TypeInfo;
      }
      else
      {
        Symbol = 0LL;
      }
      if ( v69->_2.cctor_finished )
      {
        if ( Symbol )
        {
LABEL_114:
          v74 = NGUIText_TypeInfo->static_fields->finalSpacingX
              + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
          goto LABEL_115;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v69);
        if ( Symbol )
          goto LABEL_114;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v67, v60, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_211;
      v85 = NGUIText_TypeInfo;
      v86 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v85 = NGUIText_TypeInfo;
      }
      v74 = v86 + v85->static_fields->finalSpacingX;
LABEL_115:
      v64 = v64 - v74;
      if ( (unsigned int)v70 - 8201 < 3 || v70 == 32 )
      {
        text = (System_String_o *)(unsigned int)index;
        v75 = index - v59;
        if ( index > v59 && ((v61 ^ 1) & 1) != 0 )
        {
          v76 = v75 + 1;
          if ( v66 == v126 && v64 <= 0.0 && index < stringLength )
          {
            v77 = System_String__get_Chars(v13, index, 0LL);
            if ( v77 < 0x20u || (unsigned int)v77 - 8201 < 3 || v77 == 32 )
              v76 = v75;
          }
          v78 = s;
          Chars = System_String__Substring_62544252(v13, v59, v76, 0LL);
          if ( !v78 )
            goto LABEL_261;
          System_Text_StringBuilder__Append_61687144(v78, Chars, 0LL);
          v60 = v67;
          v124 = 0;
          v59 = index + 1;
        }
      }
      if ( !byte_4B326D8 )
      {
        sub_1BD3458(&System_Math_TypeInfo, text);
        byte_4B326D8 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v79 = v64;
      v80 = modf(v64, &iptr);
      if ( v64 >= 0.0 )
      {
        if ( v80 != 0.5 )
        {
          v81 = floor(v79 + 0.5);
          goto LABEL_147;
        }
        v81 = iptr;
        v82 = 1.0;
      }
      else
      {
        if ( v80 != v63 )
        {
          v81 = ceil(v79 + v63);
          goto LABEL_147;
        }
        v81 = iptr;
        v82 = -1.0;
      }
      v83 = v81 + v82;
      if ( ((__int64)v81 & 1) != 0 )
        v81 = v83;
LABEL_147:
      v87 = v62 + v74;
      if ( v81 != INFINITY && ((int)v81 & 0x80000000) == 0 )
      {
        v62 = v62 + v74;
LABEL_207:
        v63 = -0.5;
        if ( !Symbol )
        {
          v60 = v67;
          goto LABEL_211;
        }
        v97 = index;
        v71 = v97 + BMSymbol__get_length(Symbol, 0LL);
        v60 = 0;
        goto LABEL_209;
      }
      if ( !fontSizeAdjust )
      {
        text = (System_String_o *)(unsigned int)index;
        v88 = v127;
        while ( (_DWORD)text )
        {
          Chars = (System_String_o *)System_String__get_Chars(v13, (int32_t)text, 0LL);
          if ( !v88 )
            goto LABEL_261;
          v70 = (unsigned __int16)Chars;
          v89 = System_String__IndexOf(v88, (uint16_t)Chars, 0LL);
          text = (System_String_o *)(unsigned int)(index - 1);
          if ( (v89 & 0x80000000) != 0 )
          {
            Chars = (System_String_o *)System_String__get_Chars(v13, (int32_t)text, 0LL);
            if ( !v120 )
              goto LABEL_261;
            v90 = (unsigned __int16)Chars;
            if ( (System_String__IndexOf(v120, (uint16_t)Chars, 0LL) & 0x80000000) != 0 )
            {
              if ( v70 != v90 )
                goto LABEL_167;
              Chars = v122;
              if ( !v122 )
                goto LABEL_261;
              if ( (System_String__IndexOf(v122, v70, 0LL) & 0x80000000) != 0 )
              {
LABEL_167:
                if ( ((unsigned __int16)(v70 - 48) > 9u || (unsigned __int16)(v90 - 48) > 9u)
                  && ((unsigned __int16)(v90 - 58) >= 0x21u && (unsigned __int16)(v90 - 97) > 0x19u
                   || (unsigned __int16)(v70 - 58) >= 0x21u && (unsigned __int16)(v70 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v88 = v127;
            text = (System_String_o *)(unsigned int)--index;
          }
          else
          {
            --index;
          }
        }
        v91 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v91 = NGUIText_TypeInfo;
        }
        if ( v91->static_fields->useSymbols )
        {
          v92 = index;
          if ( !v91->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v91);
          Symbol = NGUIText__GetSymbol(v13, v92, stringLength, 0LL);
          v91 = NGUIText_TypeInfo;
        }
        else
        {
          Symbol = 0LL;
        }
        if ( !v91->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v91);
        if ( !Symbol )
        {
          v96 = NGUIText__GetGlyphWidth(v70, v60, 0LL);
          if ( v96 == 0.0 )
          {
            v62 = v62 + v74;
            goto LABEL_193;
          }
          v98 = NGUIText_TypeInfo;
          v99 = v96;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v98 = NGUIText_TypeInfo;
          }
          v93 = v124;
          Symbol = 0LL;
          v74 = v99 + v98->static_fields->finalSpacingX;
          goto LABEL_180;
        }
        v74 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
      }
      v93 = v124;
LABEL_180:
      if ( ((v66 != v126) & (v93 ^ 1)) == 0 )
      {
        v94 = s;
        Chars = System_String__Substring_62544252(v13, v59, (index - v59) & (unsigned int)~((index - v59) >> 31), 0LL);
        if ( !v94 )
          goto LABEL_261;
        System_Text_StringBuilder__Append_61687144(v94, Chars, 0LL);
        v95 = 1;
        if ( (unsigned int)v70 - 8201 >= 3 )
        {
          mHeight = v121;
          if ( v70 != 32 )
          {
            v95 = 0;
            v116 &= v61;
          }
        }
        else
        {
          mHeight = v121;
        }
        _ZF = v66++ == v126;
        if ( _ZF )
        {
          minSize = v118;
          v62 = v87;
          goto LABEL_220;
        }
        if ( keepCharCount )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        }
        else
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v95 )
          v64 = v54;
        else
          v64 = v54 - v74;
        v59 = index + v95;
        v62 = 0.0;
        v67 = 0;
        v124 = 1;
        if ( v65 < v87 )
          v65 = v87;
        goto LABEL_207;
      }
      index = v59 - 1;
      if ( v65 < v87 )
        v65 = v87;
      ++v66;
      if ( keepCharCount )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        v60 = 0;
        v62 = 0.0;
        v124 = 1;
        v64 = v54;
LABEL_193:
        v63 = -0.5;
        goto LABEL_211;
      }
      v63 = -0.5;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v60 = 0;
      v62 = 0.0;
      goto LABEL_103;
    }
    if ( v66 == v126 )
      break;
    v68 = s;
    if ( v65 < v62 )
      v65 = v62;
    if ( index <= v59 )
    {
      if ( !s )
        goto LABEL_261;
      System_Text_StringBuilder__Append_61689472(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_62544252(v13, v59, index - v59 + 1, 0LL);
      if ( !v68 )
        goto LABEL_261;
      System_Text_StringBuilder__Append_61687144(v68, Chars, 0LL);
    }
    v60 = 0;
    ++v66;
    v62 = 0.0;
    v59 = index + 1;
LABEL_103:
    v124 = 1;
    v64 = v54;
LABEL_211:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= stringLength )
      goto LABEL_217;
  }
  text = (System_String_o *)(unsigned int)index;
  v66 = v126;
LABEL_217:
  minSize = v118;
  mHeight = v121;
  v52 = (unsigned int)((_DWORD)text - v59);
  if ( (int)text > v59 )
  {
    v100 = s;
    Chars = System_String__Substring_62544252(v13, v59, v52, 0LL);
    if ( v100 )
    {
      System_Text_StringBuilder__Append_61687144(v100, Chars, 0LL);
      goto LABEL_220;
    }
LABEL_261:
    sub_1BD36B4(Chars, text);
  }
LABEL_220:
  if ( v65 >= v62 )
    v101 = v65;
  else
    v101 = v62;
  *v119 = v101;
  *v117 = v66;
  if ( fontSizeAdjust )
  {
LABEL_228:
    v104 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v104 = NGUIText_TypeInfo;
    }
    v105 = (float)v104->static_fields->regionWidth;
    if ( v101 > v105 )
    {
      if ( !v104->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v104);
        v105 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      v106 = (float)(v105 / v101) * (float)label->fields.mFontSize;
      if ( v106 == INFINITY )
        v107 = 0x80000000;
      else
        v107 = (int)v106;
      UILabel__set_fontSize(label, v107, 0LL);
      *v119 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    Chars = (System_String_o *)s;
    if ( !s )
      goto LABEL_261;
    v55 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                               s,
                               s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    goto LABEL_80;
  }
  if ( (v116 & 1) == 0 )
  {
    v102 = 1;
    if ( minSize < 1 )
      return v102;
    goto LABEL_242;
  }
LABEL_240:
  if ( index == stringLength )
  {
    v102 = 0;
  }
  else
  {
    v114 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v114 = NGUIText_TypeInfo;
    }
    v115 = v114->static_fields->maxLines;
    if ( v115 >= v126 )
      v115 = v126;
    v102 = v66 > v115;
    if ( v66 > v115 && minSize <= 0 )
      return 1;
  }
LABEL_242:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_261;
  v109 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer, __int64))s->klass->vtable._3_ToString.method)(
                              s,
                              s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr,
                              v52);
  UILabel__set_text(label, v109, 0LL);
  if ( minSize >= 1 )
  {
    v110 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v110 = NGUIText_TypeInfo;
    }
    v111 = v110->static_fields->finalLineHeight * (float)v66;
    v112 = (int)v111;
    if ( v111 == INFINITY )
      v112 = 0x80000000;
    if ( mHeight >= v112 )
      v113 = mHeight;
    else
      v113 = v112;
    UIWidget__set_height((UIWidget_o *)label, v113, 0LL);
  }
  return v102;
}