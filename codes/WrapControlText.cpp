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
    sub_1C372B4(0);
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
      sub_1C372B4(v3);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_63649048(v3, 0xAu, 0);
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
      sub_1C372B4(v3);
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
  const MethodInfo *v8; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C4257A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4257A = 1;
  }
  *(_QWORD *)lineOut = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1C372B4(IsNullOrEmpty);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v8);
  }
}


float WrapControlText__getFontWidth(UILabel_o *label, System_String_o *text, int32_t maxSize, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C4257B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4257B = 1;
  }
  *(_QWORD *)lineOut = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1C372B4(IsNullOrEmpty);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v9);
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
  Il2CppObject *v11; // x19
  const MethodInfo *v12; // [xsp+0h] [xbp-50h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C42579 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_15674/*"WrapControlText textAdjust error: "*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42579 = 1;
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
    sub_1C372B4(IsNullOrEmpty);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, v12);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, v12);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, text, 0);
  v11 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_15674/*"WrapControlText textAdjust error: "*/, text, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v11, 0);
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
  int stringLength; // w26
  float v49; // s10
  System_String_o *v50; // x1
  NGUIText_c *v52; // x0
  int v53; // s0
  int v54; // w23
  int32_t v55; // w22
  int v56; // w27
  int32_t v57; // w1
  float v58; // s12
  double v59; // d14
  float v60; // s15
  float v61; // s9
  int v62; // w25
  int32_t v63; // w28
  System_Text_StringBuilder_o *v64; // x21
  NGUIText_c *v65; // x8
  uint16_t v66; // w29
  int32_t v67; // w8
  int32_t v68; // w20
  BMSymbol_o *Symbol; // x21
  float v70; // s11
  int32_t v71; // w20
  int32_t v72; // w22
  uint16_t v73; // w0
  System_Text_StringBuilder_o *v74; // x20
  double v75; // d8
  unsigned __int64 v76; // x1
  double v77; // d0
  double v78; // d0
  double v79; // d1
  double v80; // d1
  float GlyphWidth; // s0
  NGUIText_c *v82; // x0
  float v83; // s8
  float v84; // s14
  System_String_o *v85; // x21
  int32_t v86; // w0
  unsigned __int16 v87; // w21
  NGUIText_c *v88; // x8
  int32_t v89; // w20
  int v90; // w9
  System_Text_StringBuilder_o *v91; // x22
  const MethodInfo *v92; // x1
  int v93; // w20
  float v94; // s0
  int32_t v95; // w20
  NGUIText_c *v96; // x0
  float v97; // s8
  System_Text_StringBuilder_o *v98; // x20
  float v99; // s8
  _BOOL4 v100; // w20
  int32_t *v101; // x8
  NGUIText_c *v102; // x0
  float v103; // s0
  float v104; // s0
  int32_t v105; // w1
  int32_t *v106; // x8
  System_String_o *v107; // x0
  NGUIText_c *v108; // x0
  float v109; // s0
  int v110; // w8
  int32_t v111; // w1
  NGUIText_c *v112; // x0
  int32_t v113; // w8
  char v114; // [xsp+Ch] [xbp-104h]
  int32_t *v115; // [xsp+10h] [xbp-100h]
  int32_t v116; // [xsp+1Ch] [xbp-F4h]
  float *v117; // [xsp+20h] [xbp-F0h]
  System_String_o *v118; // [xsp+28h] [xbp-E8h]
  int32_t v119; // [xsp+34h] [xbp-DCh]
  System_String_o *v120; // [xsp+38h] [xbp-D8h]
  int v122; // [xsp+44h] [xbp-CCh]
  signed int v124; // [xsp+4Ch] [xbp-C4h]
  System_String_o *v125; // [xsp+50h] [xbp-C0h]
  int32_t index; // [xsp+5Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+60h] [xbp-B0h] BYREF
  double iptr; // [xsp+68h] [xbp-A8h] BYREF

  if ( (byte_4C4257C & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4257C = 1;
  }
  s = 0;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C425EB )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C425EB = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v125 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4C425EC )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4C425EC = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v16 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4C425ED )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4C425ED = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_261;
  mHeight = label->fields.mHeight;
  v120 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  v119 = mHeight;
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
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  v43 = v42 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v44 = vcvtms_s32_f32(v43);
  if ( floorf(v43) == INFINITY )
    v45 = 0x80000000;
  else
    v45 = v44;
  v124 = v45;
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
  NGUIText__Prepare(text, 0);
  v46 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v46, 0);
  s = v46;
  if ( !text )
    goto LABEL_261;
  stringLength = text->fields._stringLength;
  v118 = v16;
  if ( fontSizeAdjust )
  {
    index = 0;
    v117 = widthOut;
    if ( stringLength <= 0 )
    {
      v101 = lineOut;
      v62 = 1;
      *widthOut = 0.0;
      *v101 = 1;
      v99 = 0.0;
      if ( !fontSizeAdjust )
        goto LABEL_240;
      goto LABEL_228;
    }
    v49 = 1000000.0;
    v115 = lineOut;
    v116 = minSize;
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
      v106 = lineOut;
      v62 = 1;
      *widthOut = 0.0;
      *v106 = 1;
      goto LABEL_240;
    }
    v115 = lineOut;
    v117 = widthOut;
    v116 = minSize;
    v49 = (float)v53;
  }
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0.0;
  v59 = -0.5;
  v60 = v49;
  v61 = 0.0;
  v62 = 1;
  v122 = 1;
  v114 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(text, v57, 0);
    v63 = (unsigned __int16)Chars;
    v56 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars != 10 )
    {
      v65 = NGUIText_TypeInfo;
      v66 = (unsigned __int16)Chars;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v65 = NGUIText_TypeInfo;
      }
      if ( v65->static_fields->encoding )
      {
        if ( !v65->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v65);
        if ( NGUIText__ParseSymbol(text, &index, 0) )
        {
          v67 = index;
LABEL_209:
          index = v67 - 1;
          goto LABEL_211;
        }
        v65 = NGUIText_TypeInfo;
      }
      if ( !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v65 = NGUIText_TypeInfo;
      }
      if ( v65->static_fields->useSymbols )
      {
        v68 = index;
        if ( !v65->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v65);
        Symbol = NGUIText__GetSymbol(text, v68, stringLength, 0);
        v65 = NGUIText_TypeInfo;
      }
      else
      {
        Symbol = 0;
      }
      if ( v65->_2.cctor_finished )
      {
        if ( Symbol )
        {
LABEL_114:
          v70 = NGUIText_TypeInfo->static_fields->finalSpacingX
              + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
          goto LABEL_115;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v65);
        if ( Symbol )
          goto LABEL_114;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v63, v55, 0);
      if ( GlyphWidth == 0.0 )
        goto LABEL_211;
      v82 = NGUIText_TypeInfo;
      v83 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v82 = NGUIText_TypeInfo;
      }
      v70 = v83 + v82->static_fields->finalSpacingX;
LABEL_115:
      v60 = v60 - v70;
      if ( (unsigned int)v66 - 8201 < 3 || v66 == 32 )
      {
        v71 = index - v54;
        if ( index > v54 && ((v56 ^ 1) & 1) != 0 )
        {
          v72 = v71 + 1;
          if ( v62 == v124 && v60 <= 0.0 && index < stringLength )
          {
            v73 = System_String__get_Chars(text, index, 0);
            if ( v73 < 0x20u || (unsigned int)v73 - 8201 < 3 || v73 == 32 )
              v72 = v71;
          }
          v74 = s;
          Chars = System_String__Substring_63607580(text, v54, v72, 0);
          if ( !v74 )
            goto LABEL_261;
          System_Text_StringBuilder__Append_63646720(v74, Chars, 0);
          v55 = v63;
          v122 = 0;
          v54 = index + 1;
        }
      }
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v75 = v60;
      v77 = modf(v60, &iptr);
      if ( v60 >= 0.0 )
      {
        if ( v77 != 0.5 )
        {
          v78 = floor(v75 + 0.5);
          goto LABEL_147;
        }
        v78 = iptr;
        v79 = 1.0;
      }
      else
      {
        if ( v77 != v59 )
        {
          v78 = ceil(v75 + v59);
          goto LABEL_147;
        }
        v78 = iptr;
        v79 = -1.0;
      }
      v80 = v78 + v79;
      if ( ((__int64)v78 & 1) != 0 )
        v78 = v80;
LABEL_147:
      v84 = v58 + v70;
      if ( v78 != INFINITY && ((int)v78 & 0x80000000) == 0 )
      {
        v58 = v58 + v70;
LABEL_207:
        v59 = -0.5;
        if ( !Symbol )
        {
          v55 = v63;
          goto LABEL_211;
        }
        v95 = index;
        v67 = v95 + BMSymbol__get_length(Symbol, 0);
        v55 = 0;
        goto LABEL_209;
      }
      if ( !fontSizeAdjust )
      {
        v76 = (unsigned int)index;
        v85 = v125;
        while ( (_DWORD)v76 )
        {
          Chars = (System_String_o *)System_String__get_Chars(text, v76, 0);
          if ( !v85 )
            goto LABEL_261;
          v66 = (unsigned __int16)Chars;
          v86 = System_String__IndexOf(v85, (uint16_t)Chars, 0);
          v76 = (unsigned int)(index - 1);
          if ( v86 < 0 )
          {
            Chars = (System_String_o *)System_String__get_Chars(text, v76, 0);
            if ( !v118 )
              goto LABEL_261;
            v87 = (unsigned __int16)Chars;
            if ( System_String__IndexOf(v118, (uint16_t)Chars, 0) < 0 )
            {
              if ( v66 != v87 )
                goto LABEL_167;
              Chars = v120;
              if ( !v120 )
                goto LABEL_261;
              if ( System_String__IndexOf(v120, v66, 0) < 0 )
              {
LABEL_167:
                if ( ((unsigned __int16)(v66 - 48) > 9u || (unsigned __int16)(v87 - 48) > 9u)
                  && ((unsigned __int16)(v87 - 58) >= 0x21u && (unsigned __int16)(v87 - 97) > 0x19u
                   || (unsigned __int16)(v66 - 58) >= 0x21u && (unsigned __int16)(v66 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v85 = v125;
            v76 = (unsigned int)--index;
          }
          else
          {
            --index;
          }
        }
        v88 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v88 = NGUIText_TypeInfo;
        }
        if ( v88->static_fields->useSymbols )
        {
          v89 = index;
          if ( !v88->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v88);
          Symbol = NGUIText__GetSymbol(text, v89, stringLength, 0);
          v88 = NGUIText_TypeInfo;
        }
        else
        {
          Symbol = 0;
        }
        if ( !v88->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v88);
        if ( !Symbol )
        {
          v94 = NGUIText__GetGlyphWidth(v66, v55, 0);
          if ( v94 == 0.0 )
          {
            v58 = v58 + v70;
            goto LABEL_193;
          }
          v96 = NGUIText_TypeInfo;
          v97 = v94;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v96 = NGUIText_TypeInfo;
          }
          v90 = v122;
          Symbol = 0;
          v70 = v97 + v96->static_fields->finalSpacingX;
          goto LABEL_180;
        }
        v70 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
      }
      v90 = v122;
LABEL_180:
      if ( ((v62 != v124) & (v90 ^ 1)) == 0 )
      {
        v91 = s;
        Chars = System_String__Substring_63607580(text, v54, (index - v54) & (unsigned int)~((index - v54) >> 31), 0);
        if ( !v91 )
          goto LABEL_261;
        System_Text_StringBuilder__Append_63646720(v91, Chars, 0);
        v93 = 1;
        if ( (unsigned int)v66 - 8201 >= 3 )
        {
          mHeight = v119;
          if ( v66 != 32 )
          {
            v93 = 0;
            v114 &= v56;
          }
        }
        else
        {
          mHeight = v119;
        }
        _ZF = v62++ == v124;
        if ( _ZF )
        {
          minSize = v116;
          v58 = v84;
          goto LABEL_220;
        }
        if ( keepCharCount )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, v92);
        }
        else
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0);
        }
        if ( v93 )
          v60 = v49;
        else
          v60 = v49 - v70;
        v54 = index + v93;
        v58 = 0.0;
        v63 = 0;
        v122 = 1;
        if ( v61 < v84 )
          v61 = v84;
        goto LABEL_207;
      }
      index = v54 - 1;
      if ( v61 < v84 )
        v61 = v84;
      ++v62;
      if ( keepCharCount )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)v76);
        v55 = 0;
        v58 = 0.0;
        v122 = 1;
        v60 = v49;
LABEL_193:
        v59 = -0.5;
        goto LABEL_211;
      }
      v59 = -0.5;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0);
      v55 = 0;
      v58 = 0.0;
      goto LABEL_103;
    }
    if ( v62 == v124 )
      break;
    v64 = s;
    if ( v61 < v58 )
      v61 = v58;
    if ( index <= v54 )
    {
      if ( !s )
        goto LABEL_261;
      System_Text_StringBuilder__Append_63649048(s, 0xAu, 0);
    }
    else
    {
      Chars = System_String__Substring_63607580(text, v54, index - v54 + 1, 0);
      if ( !v64 )
        goto LABEL_261;
      System_Text_StringBuilder__Append_63646720(v64, Chars, 0);
    }
    v55 = 0;
    ++v62;
    v58 = 0.0;
    v54 = index + 1;
LABEL_103:
    v122 = 1;
    v60 = v49;
LABEL_211:
    v57 = ++index;
    if ( index >= stringLength )
      goto LABEL_217;
  }
  v57 = index;
  v62 = v124;
LABEL_217:
  minSize = v116;
  mHeight = v119;
  v47 = (unsigned int)(v57 - v54);
  if ( v57 > v54 )
  {
    v98 = s;
    Chars = System_String__Substring_63607580(text, v54, v47, 0);
    if ( v98 )
    {
      System_Text_StringBuilder__Append_63646720(v98, Chars, 0);
      goto LABEL_220;
    }
LABEL_261:
    sub_1C372B4(Chars);
  }
LABEL_220:
  if ( v61 >= v58 )
    v99 = v61;
  else
    v99 = v58;
  *v117 = v99;
  *v115 = v62;
  if ( fontSizeAdjust )
  {
LABEL_228:
    v102 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v102 = NGUIText_TypeInfo;
    }
    v103 = (float)v102->static_fields->regionWidth;
    if ( v99 > v103 )
    {
      if ( !v102->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v102);
        v103 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      v104 = (float)(v103 / v99) * (float)label->fields.mFontSize;
      if ( v104 == INFINITY )
        v105 = 0x80000000;
      else
        v105 = (int)v104;
      UILabel__set_fontSize(label, v105, 0);
      *v117 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    Chars = (System_String_o *)s;
    if ( !s )
      goto LABEL_261;
    v50 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))s->klass->vtable._3_ToString.methodPtr)(
                               s,
                               s->klass->vtable._3_ToString.method);
    goto LABEL_80;
  }
  if ( (v114 & 1) == 0 )
  {
    v100 = 1;
    if ( minSize < 1 )
      return v100;
    goto LABEL_242;
  }
LABEL_240:
  if ( index == stringLength )
  {
    v100 = 0;
  }
  else
  {
    v112 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v112 = NGUIText_TypeInfo;
    }
    v113 = v112->static_fields->maxLines;
    if ( v113 >= v124 )
      v113 = v124;
    v100 = v62 > v113;
    if ( v62 > v113 && minSize <= 0 )
      return 1;
  }
LABEL_242:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_261;
  v107 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *, __int64))s->klass->vtable._3_ToString.methodPtr)(
                              s,
                              s->klass->vtable._3_ToString.method,
                              v47);
  UILabel__set_text(label, v107, 0);
  if ( minSize >= 1 )
  {
    v108 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v108 = NGUIText_TypeInfo;
    }
    v109 = v108->static_fields->finalLineHeight * (float)v62;
    v110 = (int)v109;
    if ( v109 == INFINITY )
      v110 = 0x80000000;
    if ( mHeight >= v110 )
      v111 = mHeight;
    else
      v111 = v110;
    UIWidget__set_height((UIWidget_o *)label, v111, 0);
  }
  return v100;
}