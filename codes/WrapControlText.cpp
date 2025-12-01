void WrapControlText___ctor(WrapControlText_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WrapControlText__CalcApproximateLabelHeight(
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
    sub_1C71608(0, width);
  stringLength = text->fields._stringLength;
  v7 = stringLength / (width / fontSize);
  v8 = stringLength % (width / fontSize);
  if ( v8 >= 1 )
    v8 = 1;
  return (v7 + marginLineCount + v8) * lineHeight;
}


void WrapControlText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w0

  v3 = *s;
  if ( !v3 )
    goto LABEL_10;
  v4 = System_Text_StringBuilder__get_Length(v3, 0) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_10;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0);
        return;
      }
LABEL_10:
      sub_1C71608(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_64118012(v3, 0xAu, 0);
}


bool WrapControlText__IsSpace(int32_t ch, const MethodInfo *method)
{
  unsigned int v2; // w9
  bool result; // w0

  v2 = ch - 8201;
  result = 1;
  if ( v2 >= 3 && ch != 32 )
    return 0;
  return result;
}


void WrapControlText__ReplaceSpaceWithNewline(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w0

  v3 = *s;
  if ( !v3 )
    goto LABEL_9;
  v4 = System_Text_StringBuilder__get_Length(v3, 0) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_9;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0);
        return;
      }
LABEL_9:
      sub_1C71608(v3, method);
    }
  }
}


void WrapControlText__fontSizeAdjust(
        UILabel_o *label,
        System_String_o *text,
        int32_t defaultSize,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CC69AB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC69AB = 1;
  }
  *(_QWORD *)lineOut = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1C71608(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v9);
  }
}


float WrapControlText__getFontWidth(UILabel_o *label, System_String_o *text, int32_t maxSize, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v10; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CC69AC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC69AC = 1;
  }
  *(_QWORD *)lineOut = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1C71608(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v10);
    return *(float *)&lineOut[1];
  }
}


int32_t WrapControlText__textAdjust(
        UILabel_o *label,
        System_String_o *text,
        int32_t maxSize,
        int32_t minSize,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  Il2CppObject *v12; // x19
  const MethodInfo *v13; // [xsp+0h] [xbp-50h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CC69AA & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Debug_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_15678/*"WrapControlText textAdjust error: "*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC69AA = 1;
  }
  *(_QWORD *)lineOut = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0) )
    return 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( IsNullOrEmpty )
  {
    if ( label )
    {
      UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
      return 0;
    }
LABEL_19:
    sub_1C71608(IsNullOrEmpty, v10);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, v13);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, v13);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, text, 0);
  v12 = (Il2CppObject *)System_String__Concat_64031724((System_String_o *)StringLiteral_15678/*"WrapControlText textAdjust error: "*/, text, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v12, 0);
  return lineOut[0];
}


bool WrapControlText__wrapText(
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
  System_String_o *Chars; // x0
  System_String_o *v16; // x28
  int32_t mHeight; // w22
  NGUIText_c *v18; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  double v25; // d8
  double v26; // d0
  double v27; // d0
  double v28; // d1
  double v29; // d1
  NGUIText_c *v30; // x0
  struct NGUIText_StaticFields *v31; // x8
  int v32; // w9
  float fontScale; // s0
  int fontSize; // s1
  float spacingY; // s2
  int regionWidth; // w9
  int regionHeight; // w9
  float finalLineHeight; // s1
  float v39; // s8
  int maxLines; // w21
  int32_t v41; // w21
  float v42; // s8
  float v43; // s8
  unsigned int v44; // w9
  unsigned int v45; // w8
  System_Text_StringBuilder_o *v46; // x20
  __int64 v47; // x2
  int32_t stringLength; // w26
  float v49; // s10
  System_String_o *v50; // x1
  NGUIText_c *v52; // x0
  int v53; // s0
  int v54; // w23
  int32_t v55; // w22
  int v56; // w27
  float v57; // s12
  double v58; // d14
  float v59; // s15
  float v60; // s9
  int v61; // w25
  int32_t v62; // w28
  System_Text_StringBuilder_o *v63; // x21
  NGUIText_c *v64; // x8
  uint16_t v65; // w29
  int32_t v66; // w8
  int32_t v67; // w20
  BMSymbol_o *Symbol; // x21
  float v69; // s11
  int32_t v70; // w20
  int32_t v71; // w22
  uint16_t v72; // w0
  System_Text_StringBuilder_o *v73; // x20
  double v74; // d8
  double v75; // d0
  double v76; // d0
  double v77; // d1
  double v78; // d1
  float GlyphWidth; // s0
  NGUIText_c *v80; // x0
  float v81; // s8
  float v82; // s14
  System_String_o *v83; // x21
  int32_t v84; // w0
  unsigned __int16 v85; // w21
  NGUIText_c *v86; // x8
  int32_t v87; // w20
  int v88; // w9
  System_Text_StringBuilder_o *v89; // x22
  int v90; // w20
  float v91; // s0
  int32_t v92; // w20
  NGUIText_c *v93; // x0
  float v94; // s8
  System_Text_StringBuilder_o *v95; // x20
  float v96; // s8
  _BOOL4 v97; // w20
  int32_t *v98; // x8
  NGUIText_c *v99; // x0
  float v100; // s0
  float v101; // s0
  int32_t v102; // w1
  int32_t *v103; // x8
  System_String_o *v104; // x0
  NGUIText_c *v105; // x0
  float v106; // s0
  int v107; // w8
  int32_t v108; // w1
  NGUIText_c *v109; // x0
  int32_t v110; // w8
  char v111; // [xsp+Ch] [xbp-104h]
  int32_t *v112; // [xsp+10h] [xbp-100h]
  int32_t v113; // [xsp+1Ch] [xbp-F4h]
  float *v114; // [xsp+20h] [xbp-F0h]
  System_String_o *v115; // [xsp+28h] [xbp-E8h]
  int32_t v116; // [xsp+34h] [xbp-DCh]
  System_String_o *v117; // [xsp+38h] [xbp-D8h]
  int v119; // [xsp+44h] [xbp-CCh]
  signed int v121; // [xsp+4Ch] [xbp-C4h]
  System_String_o *v122; // [xsp+50h] [xbp-C0h]
  int32_t index; // [xsp+5Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+60h] [xbp-B0h] BYREF
  double iptr; // [xsp+68h] [xbp-A8h] BYREF

  v13 = text;
  if ( (byte_4CC69AD & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC69AD = 1;
  }
  s = 0;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CC6A1C )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC6A1C = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v122 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4CC6A1D )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4CC6A1D = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v16 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4CC6A1E )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4CC6A1E = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_261;
  mHeight = label->fields.mHeight;
  v117 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, 1000000, 0);
    fsize = minSize;
  }
  UILabel__set_fontSize(label, fsize, 0);
  UILabel__UpdateNGUIText(label, 0);
  v18 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v18 = NGUIText_TypeInfo;
  }
  static_fields = v18->static_fields;
  __asm { FMOV            V0.2S, #1.0 }
  static_fields->fontSize = fsize;
  *(_QWORD *)&static_fields->fontScale = _D0;
  if ( !byte_4CC24D5 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC24D5 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v25 = (float)fsize;
  v26 = modf(v25, &iptr);
  if ( fsize < 0 )
  {
    if ( v26 != -0.5 )
    {
      v27 = ceil(v25 + -0.5);
      goto LABEL_36;
    }
    v27 = iptr;
    v28 = -1.0;
  }
  else
  {
    if ( v26 != 0.5 )
    {
      v27 = floor(v25 + 0.5);
      goto LABEL_36;
    }
    v27 = iptr;
    v28 = 1.0;
  }
  v29 = v27 + v28;
  if ( ((__int64)v27 & 1) != 0 )
    v27 = v29;
LABEL_36:
  v30 = NGUIText_TypeInfo;
  v31 = NGUIText_TypeInfo->static_fields;
  v32 = (int)v27;
  _ZF = v27 == INFINITY;
  fontSize = v31->fontSize;
  fontScale = v31->fontScale;
  if ( _ZF )
    v32 = 0x80000000;
  spacingY = v31->spacingY;
  v31->finalSize = v32;
  regionWidth = v31->regionWidth;
  v31->finalLineHeight = (float)(spacingY + (float)fontSize) * fontScale;
  if ( regionWidth < 1 )
    goto LABEL_79;
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = NGUIText_TypeInfo;
    v31 = NGUIText_TypeInfo->static_fields;
  }
  if ( v31->regionHeight < 1 )
    goto LABEL_79;
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = NGUIText_TypeInfo;
    v31 = NGUIText_TypeInfo->static_fields;
  }
  if ( v31->finalLineHeight < 1.0 )
    goto LABEL_79;
  v116 = mHeight;
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = NGUIText_TypeInfo;
    v31 = NGUIText_TypeInfo->static_fields;
    maxLines = v31->maxLines;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v30 = NGUIText_TypeInfo;
      v31 = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = v31->regionHeight;
    if ( maxLines > 0 )
      goto LABEL_47;
LABEL_53:
    v39 = (float)regionHeight;
    goto LABEL_54;
  }
  regionHeight = v31->regionHeight;
  if ( v31->maxLines <= 0 )
    goto LABEL_53;
LABEL_47:
  finalLineHeight = v31->finalLineHeight;
  if ( (float)(finalLineHeight * (float)v31->maxLines) <= (float)regionHeight )
    v39 = finalLineHeight * (float)v31->maxLines;
  else
    v39 = (float)regionHeight;
LABEL_54:
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = NGUIText_TypeInfo;
    v31 = NGUIText_TypeInfo->static_fields;
  }
  v41 = v31->maxLines;
  if ( v41 < 1 )
  {
    v41 = 1000000;
  }
  else if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = NGUIText_TypeInfo;
    v41 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = NGUIText_TypeInfo;
  }
  if ( (float)(v39 / v30->static_fields->finalLineHeight) <= (float)v41 )
    v42 = v39 / v30->static_fields->finalLineHeight;
  else
    v42 = (float)v41;
  if ( !byte_4CC0D08 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D08 = 1;
  }
  v43 = v42 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v44 = vcvtms_s32_f32(v43);
  if ( floorf(v43) == INFINITY )
    v45 = 0x80000000;
  else
    v45 = v44;
  v121 = v45;
  if ( !v45 )
  {
LABEL_79:
    v50 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_80:
    UILabel__set_text(label, v50, 0);
    return 0;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v13, 0);
  v46 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v46, 0);
  s = v46;
  if ( !v13 )
    goto LABEL_261;
  stringLength = v13->fields._stringLength;
  v115 = v16;
  if ( fontSizeAdjust )
  {
    index = 0;
    v114 = widthOut;
    if ( stringLength <= 0 )
    {
      v98 = lineOut;
      v61 = 1;
      *widthOut = 0.0;
      *v98 = 1;
      v96 = 0.0;
      if ( !fontSizeAdjust )
        goto LABEL_240;
      goto LABEL_228;
    }
    v49 = 1000000.0;
    v112 = lineOut;
    v113 = minSize;
  }
  else
  {
    v52 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v52 = NGUIText_TypeInfo;
    }
    v53 = v52->static_fields->regionWidth;
    index = 0;
    if ( stringLength <= 0 )
    {
      v103 = lineOut;
      v61 = 1;
      *widthOut = 0.0;
      *v103 = 1;
      goto LABEL_240;
    }
    v112 = lineOut;
    v114 = widthOut;
    v113 = minSize;
    v49 = (float)v53;
  }
  v54 = 0;
  v55 = 0;
  v56 = 0;
  LODWORD(text) = 0;
  v57 = 0.0;
  v58 = -0.5;
  v59 = v49;
  v60 = 0.0;
  v61 = 1;
  v119 = 1;
  v111 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v13, (int32_t)text, 0);
    v62 = (unsigned __int16)Chars;
    v56 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars != 10 )
    {
      v64 = NGUIText_TypeInfo;
      v65 = (unsigned __int16)Chars;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v64 = NGUIText_TypeInfo;
      }
      if ( v64->static_fields->encoding )
      {
        if ( !v64->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v64);
        if ( NGUIText__ParseSymbol(v13, &index, 0) )
        {
          v66 = index;
LABEL_209:
          index = v66 - 1;
          goto LABEL_211;
        }
        v64 = NGUIText_TypeInfo;
      }
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = NGUIText_TypeInfo;
      }
      if ( v64->static_fields->useSymbols )
      {
        v67 = index;
        if ( !v64->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v64);
        Symbol = NGUIText__GetSymbol(v13, v67, stringLength, 0);
        v64 = NGUIText_TypeInfo;
      }
      else
      {
        Symbol = 0;
      }
      if ( v64->_2.cctor_finished )
      {
        if ( Symbol )
        {
LABEL_114:
          v69 = NGUIText_TypeInfo->static_fields->finalSpacingX
              + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
          goto LABEL_115;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v64);
        if ( Symbol )
          goto LABEL_114;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v62, v55, 0);
      if ( GlyphWidth == 0.0 )
        goto LABEL_211;
      v80 = NGUIText_TypeInfo;
      v81 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v80 = NGUIText_TypeInfo;
      }
      v69 = v81 + v80->static_fields->finalSpacingX;
LABEL_115:
      v59 = v59 - v69;
      if ( (unsigned int)v65 - 8201 < 3 || v65 == 32 )
      {
        v70 = index - v54;
        if ( index > v54 && ((v56 ^ 1) & 1) != 0 )
        {
          v71 = v70 + 1;
          if ( v61 == v121 && v59 <= 0.0 && index < stringLength )
          {
            v72 = System_String__get_Chars(v13, index, 0);
            if ( v72 < 0x20u || (unsigned int)v72 - 8201 < 3 || v72 == 32 )
              v71 = v70;
          }
          v73 = s;
          Chars = System_String__Substring_64077664(v13, v54, v71, 0);
          if ( !v73 )
            goto LABEL_261;
          System_Text_StringBuilder__Append_64115684(v73, Chars, 0);
          v55 = v62;
          v119 = 0;
          v54 = index + 1;
        }
      }
      if ( !byte_4CC24D5 )
      {
        sub_1C713B0(&System_Math_TypeInfo);
        byte_4CC24D5 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v74 = v59;
      v75 = modf(v59, &iptr);
      if ( v59 >= 0.0 )
      {
        if ( v75 != 0.5 )
        {
          v76 = floor(v74 + 0.5);
          goto LABEL_147;
        }
        v76 = iptr;
        v77 = 1.0;
      }
      else
      {
        if ( v75 != v58 )
        {
          v76 = ceil(v74 + v58);
          goto LABEL_147;
        }
        v76 = iptr;
        v77 = -1.0;
      }
      v78 = v76 + v77;
      if ( ((__int64)v76 & 1) != 0 )
        v76 = v78;
LABEL_147:
      v82 = v57 + v69;
      if ( v76 != INFINITY && ((int)v76 & 0x80000000) == 0 )
      {
        v57 = v57 + v69;
LABEL_207:
        v58 = -0.5;
        if ( !Symbol )
        {
          v55 = v62;
          goto LABEL_211;
        }
        v92 = index;
        v66 = v92 + BMSymbol__get_length(Symbol, 0);
        v55 = 0;
        goto LABEL_209;
      }
      if ( !fontSizeAdjust )
      {
        text = (System_String_o *)(unsigned int)index;
        v83 = v122;
        while ( (_DWORD)text )
        {
          Chars = (System_String_o *)System_String__get_Chars(v13, (int32_t)text, 0);
          if ( !v83 )
            goto LABEL_261;
          v65 = (unsigned __int16)Chars;
          v84 = System_String__IndexOf(v83, (uint16_t)Chars, 0);
          text = (System_String_o *)(unsigned int)(index - 1);
          if ( v84 < 0 )
          {
            Chars = (System_String_o *)System_String__get_Chars(v13, (int32_t)text, 0);
            if ( !v115 )
              goto LABEL_261;
            v85 = (unsigned __int16)Chars;
            if ( System_String__IndexOf(v115, (uint16_t)Chars, 0) < 0 )
            {
              if ( v65 != v85 )
                goto LABEL_167;
              Chars = v117;
              if ( !v117 )
                goto LABEL_261;
              if ( System_String__IndexOf(v117, v65, 0) < 0 )
              {
LABEL_167:
                if ( ((unsigned __int16)(v65 - 48) > 9u || (unsigned __int16)(v85 - 48) > 9u)
                  && ((unsigned __int16)(v85 - 58) >= 0x21u && (unsigned __int16)(v85 - 97) > 0x19u
                   || (unsigned __int16)(v65 - 58) >= 0x21u && (unsigned __int16)(v65 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v83 = v122;
            text = (System_String_o *)(unsigned int)--index;
          }
          else
          {
            --index;
          }
        }
        v86 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v86 = NGUIText_TypeInfo;
        }
        if ( v86->static_fields->useSymbols )
        {
          v87 = index;
          if ( !v86->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v86);
          Symbol = NGUIText__GetSymbol(v13, v87, stringLength, 0);
          v86 = NGUIText_TypeInfo;
        }
        else
        {
          Symbol = 0;
        }
        if ( !v86->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v86);
        if ( !Symbol )
        {
          v91 = NGUIText__GetGlyphWidth(v65, v55, 0);
          if ( v91 == 0.0 )
          {
            v57 = v57 + v69;
            goto LABEL_193;
          }
          v93 = NGUIText_TypeInfo;
          v94 = v91;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v93 = NGUIText_TypeInfo;
          }
          v88 = v119;
          Symbol = 0;
          v69 = v94 + v93->static_fields->finalSpacingX;
          goto LABEL_180;
        }
        v69 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
      }
      v88 = v119;
LABEL_180:
      if ( ((v61 != v121) & (v88 ^ 1)) == 0 )
      {
        v89 = s;
        Chars = System_String__Substring_64077664(v13, v54, (index - v54) & (unsigned int)~((index - v54) >> 31), 0);
        if ( !v89 )
          goto LABEL_261;
        System_Text_StringBuilder__Append_64115684(v89, Chars, 0);
        v90 = 1;
        if ( (unsigned int)v65 - 8201 >= 3 )
        {
          mHeight = v116;
          if ( v65 != 32 )
          {
            v90 = 0;
            v111 &= v56;
          }
        }
        else
        {
          mHeight = v116;
        }
        _ZF = v61++ == v121;
        if ( _ZF )
        {
          minSize = v113;
          v57 = v82;
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
          NGUIText__EndLine(&s, 0);
        }
        if ( v90 )
          v59 = v49;
        else
          v59 = v49 - v69;
        v54 = index + v90;
        v57 = 0.0;
        v62 = 0;
        v119 = 1;
        if ( v60 < v82 )
          v60 = v82;
        goto LABEL_207;
      }
      index = v54 - 1;
      if ( v60 < v82 )
        v60 = v82;
      ++v61;
      if ( keepCharCount )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        v55 = 0;
        v57 = 0.0;
        v119 = 1;
        v59 = v49;
LABEL_193:
        v58 = -0.5;
        goto LABEL_211;
      }
      v58 = -0.5;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0);
      v55 = 0;
      v57 = 0.0;
      goto LABEL_103;
    }
    if ( v61 == v121 )
      break;
    v63 = s;
    if ( v60 < v57 )
      v60 = v57;
    if ( index <= v54 )
    {
      if ( !s )
        goto LABEL_261;
      System_Text_StringBuilder__Append_64118012(s, 0xAu, 0);
    }
    else
    {
      Chars = System_String__Substring_64077664(v13, v54, index - v54 + 1, 0);
      if ( !v63 )
        goto LABEL_261;
      System_Text_StringBuilder__Append_64115684(v63, Chars, 0);
    }
    v55 = 0;
    ++v61;
    v57 = 0.0;
    v54 = index + 1;
LABEL_103:
    v119 = 1;
    v59 = v49;
LABEL_211:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= stringLength )
      goto LABEL_217;
  }
  text = (System_String_o *)(unsigned int)index;
  v61 = v121;
LABEL_217:
  minSize = v113;
  mHeight = v116;
  v47 = (unsigned int)((_DWORD)text - v54);
  if ( (int)text > v54 )
  {
    v95 = s;
    Chars = System_String__Substring_64077664(v13, v54, v47, 0);
    if ( v95 )
    {
      System_Text_StringBuilder__Append_64115684(v95, Chars, 0);
      goto LABEL_220;
    }
LABEL_261:
    sub_1C71608(Chars, text);
  }
LABEL_220:
  if ( v60 >= v57 )
    v96 = v60;
  else
    v96 = v57;
  *v114 = v96;
  *v112 = v61;
  if ( fontSizeAdjust )
  {
LABEL_228:
    v99 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v99 = NGUIText_TypeInfo;
    }
    v100 = (float)v99->static_fields->regionWidth;
    if ( v96 > v100 )
    {
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        v100 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      v101 = (float)(v100 / v96) * (float)label->fields.mFontSize;
      if ( v101 == INFINITY )
        v102 = 0x80000000;
      else
        v102 = (int)v101;
      UILabel__set_fontSize(label, v102, 0);
      *v114 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    Chars = (System_String_o *)s;
    if ( !s )
      goto LABEL_261;
    v50 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))s->klass->vtable._3_ToString.methodPtr)(
                               s,
                               s->klass->vtable._3_ToString.method);
    goto LABEL_80;
  }
  if ( (v111 & 1) == 0 )
  {
    v97 = 1;
    if ( minSize < 1 )
      return v97;
    goto LABEL_242;
  }
LABEL_240:
  if ( index == stringLength )
  {
    v97 = 0;
  }
  else
  {
    v109 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v109 = NGUIText_TypeInfo;
    }
    v110 = v109->static_fields->maxLines;
    if ( v110 >= v121 )
      v110 = v121;
    v97 = v61 > v110;
    if ( v61 > v110 && minSize <= 0 )
      return 1;
  }
LABEL_242:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_261;
  v104 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *, __int64))s->klass->vtable._3_ToString.methodPtr)(
                              s,
                              s->klass->vtable._3_ToString.method,
                              v47);
  UILabel__set_text(label, v104, 0);
  if ( minSize >= 1 )
  {
    v105 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v105 = NGUIText_TypeInfo;
    }
    v106 = v105->static_fields->finalLineHeight * (float)v61;
    v107 = (int)v106;
    if ( v106 == INFINITY )
      v107 = 0x80000000;
    if ( mHeight >= v107 )
      v108 = mHeight;
    else
      v108 = v107;
    UIWidget__set_height((UIWidget_o *)label, v108, 0);
  }
  return v97;
}