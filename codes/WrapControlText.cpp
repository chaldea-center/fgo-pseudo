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
    sub_1B8880C(0LL, width);
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
      sub_1B8880C(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_60871256(v3, 0xAu, 0LL);
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
      sub_1B8880C(v3, method);
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
  int32_t v9; // [xsp+0h] [xbp-40h]
  const MethodInfo *v10; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5A739 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A739 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1B8880C(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v9, v10);
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
  int32_t v10; // [xsp+0h] [xbp-40h]
  const MethodInfo *v11; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5A73A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A73A = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1B8880C(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v10, v11);
    return *(float *)&lineOut[1];
  }
}


int32_t __fastcall WrapControlText__textAdjust(
        UILabel_o *label,
        System_String_o *text,
        int32_t maxSize,
        int32_t minSize,
        int32_t maxHeight,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  Il2CppObject *v13; // x19
  int32_t v14; // [xsp+0h] [xbp-50h]
  const MethodInfo *v15; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5A738 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_15668/*"WrapControlText textAdjust error: "*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A738 = 1;
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
    sub_1B8880C(IsNullOrEmpty, v11);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, v14, v15);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, v14, v15);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, text, 0LL);
  v13 = (Il2CppObject *)System_String__Concat_61707032((System_String_o *)StringLiteral_15668/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v13, 0LL);
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
        int32_t maxHeight,
        const MethodInfo *method)
{
  System_String_o *v14; // x24
  System_String_o *Chars; // x0
  System_String_o *v17; // x28
  int32_t mHeight; // w22
  NGUIText_c *v19; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  double v26; // d8
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  NGUIText_c *v31; // x0
  struct NGUIText_StaticFields *v32; // x8
  int v33; // w9
  float fontScale; // s0
  int fontSize; // s1
  float spacingY; // s2
  int regionWidth; // w9
  int regionHeight; // w9
  float finalLineHeight; // s1
  float v40; // s8
  int maxLines; // w21
  int32_t v42; // w21
  float v43; // s8
  float v44; // s8
  unsigned int v45; // w9
  unsigned int v46; // w8
  System_Text_StringBuilder_o *v47; // x20
  __int64 v48; // x2
  int32_t stringLength; // w26
  float v50; // s10
  System_String_o *v51; // x1
  NGUIText_c *v53; // x0
  int v54; // s0
  int v55; // w23
  int32_t v56; // w22
  int v57; // w27
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
  double v76; // d0
  double v77; // d0
  double v78; // d1
  double v79; // d1
  float GlyphWidth; // s0
  NGUIText_c *v81; // x0
  float v82; // s8
  float v83; // s14
  System_String_o *v84; // x21
  int32_t v85; // w0
  unsigned __int16 v86; // w21
  NGUIText_c *v87; // x8
  int32_t v88; // w20
  int v89; // w9
  System_Text_StringBuilder_o *v90; // x22
  int v91; // w20
  float v92; // s0
  int32_t v93; // w20
  NGUIText_c *v94; // x0
  float v95; // s8
  System_Text_StringBuilder_o *v96; // x20
  float v97; // s8
  _BOOL4 v98; // w20
  int32_t *v99; // x8
  NGUIText_c *v100; // x0
  float v101; // s0
  float v102; // s0
  int32_t v103; // w1
  int32_t *v104; // x8
  System_String_o *v105; // x0
  NGUIText_c *v106; // x0
  float v107; // s0
  int v108; // w8
  int32_t v109; // w1
  NGUIText_c *v110; // x0
  int v111; // w8
  char v112; // [xsp+Ch] [xbp-104h]
  int32_t *v113; // [xsp+10h] [xbp-100h]
  int32_t v114; // [xsp+1Ch] [xbp-F4h]
  float *v115; // [xsp+20h] [xbp-F0h]
  System_String_o *v116; // [xsp+28h] [xbp-E8h]
  int32_t v117; // [xsp+34h] [xbp-DCh]
  System_String_o *v118; // [xsp+38h] [xbp-D8h]
  int v120; // [xsp+44h] [xbp-CCh]
  int v122; // [xsp+4Ch] [xbp-C4h]
  System_String_o *v123; // [xsp+50h] [xbp-C0h]
  int32_t index; // [xsp+5Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+60h] [xbp-B0h] BYREF
  double iptr; // [xsp+68h] [xbp-A8h] BYREF

  v14 = text;
  if ( (byte_4A5A73B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NGUIText_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A73B = 1;
  }
  s = 0LL;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A5A7AA )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5A7AA = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v123 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4A5A7AB )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4A5A7AB = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v17 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4A5A7AC )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4A5A7AC = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_261;
  mHeight = label->fields.mHeight;
  v118 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, 1000000, 0LL);
    fsize = minSize;
  }
  UILabel__set_fontSize(label, fsize, 0LL);
  UILabel__UpdateNGUIText(label, 0LL);
  v19 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v19 = NGUIText_TypeInfo;
  }
  static_fields = v19->static_fields;
  __asm { FMOV            V0.2S, #1.0 }
  static_fields->fontSize = fsize;
  *(_QWORD *)&static_fields->fontScale = _D0;
  if ( !byte_4A567B3 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A567B3 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = (float)fsize;
  v27 = modf(v26, &iptr);
  if ( (fsize & 0x80000000) != 0 )
  {
    if ( v27 != -0.5 )
    {
      v28 = ceil(v26 + -0.5);
      goto LABEL_36;
    }
    v28 = iptr;
    v29 = -1.0;
  }
  else
  {
    if ( v27 != 0.5 )
    {
      v28 = floor(v26 + 0.5);
      goto LABEL_36;
    }
    v28 = iptr;
    v29 = 1.0;
  }
  v30 = v28 + v29;
  if ( ((__int64)v28 & 1) != 0 )
    v28 = v30;
LABEL_36:
  v31 = NGUIText_TypeInfo;
  v32 = NGUIText_TypeInfo->static_fields;
  v33 = (int)v28;
  _ZF = v28 == INFINITY;
  fontSize = v32->fontSize;
  fontScale = v32->fontScale;
  if ( _ZF )
    v33 = 0x80000000;
  spacingY = v32->spacingY;
  v32->finalSize = v33;
  regionWidth = v32->regionWidth;
  v32->finalLineHeight = (float)(spacingY + (float)fontSize) * fontScale;
  if ( regionWidth < 1 )
    goto LABEL_79;
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
    v32 = NGUIText_TypeInfo->static_fields;
  }
  if ( v32->regionHeight < 1 )
    goto LABEL_79;
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
    v32 = NGUIText_TypeInfo->static_fields;
  }
  if ( v32->finalLineHeight < 1.0 )
    goto LABEL_79;
  v117 = mHeight;
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
    v32 = NGUIText_TypeInfo->static_fields;
    maxLines = v32->maxLines;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v31 = NGUIText_TypeInfo;
      v32 = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = v32->regionHeight;
    if ( maxLines > 0 )
      goto LABEL_47;
LABEL_53:
    v40 = (float)regionHeight;
    goto LABEL_54;
  }
  regionHeight = v32->regionHeight;
  if ( v32->maxLines <= 0 )
    goto LABEL_53;
LABEL_47:
  finalLineHeight = v32->finalLineHeight;
  if ( (float)(finalLineHeight * (float)v32->maxLines) <= (float)regionHeight )
    v40 = finalLineHeight * (float)v32->maxLines;
  else
    v40 = (float)regionHeight;
LABEL_54:
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
    v32 = NGUIText_TypeInfo->static_fields;
  }
  v42 = v32->maxLines;
  if ( v42 < 1 )
  {
    v42 = 1000000;
  }
  else if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
    v42 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
  }
  if ( (float)(v40 / v31->static_fields->finalLineHeight) <= (float)v42 )
    v43 = v40 / v31->static_fields->finalLineHeight;
  else
    v43 = (float)v42;
  if ( !byte_4A55CE0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE0 = 1;
  }
  v44 = v43 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v45 = vcvtms_s32_f32(v44);
  if ( floorf(v44) == INFINITY )
    v46 = 0x80000000;
  else
    v46 = v45;
  v122 = v46;
  if ( !v46 )
  {
LABEL_79:
    v51 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_80:
    UILabel__set_text(label, v51, 0LL);
    return 0;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v14, 0LL);
  v47 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v47, 0LL);
  s = v47;
  if ( !v14 )
    goto LABEL_261;
  stringLength = v14->fields._stringLength;
  v116 = v17;
  if ( fontSizeAdjust )
  {
    index = 0;
    v115 = widthOut;
    if ( stringLength <= 0 )
    {
      v99 = lineOut;
      v62 = 1;
      *widthOut = 0.0;
      *v99 = 1;
      v97 = 0.0;
      if ( !fontSizeAdjust )
        goto LABEL_240;
      goto LABEL_228;
    }
    v50 = 1000000.0;
    v113 = lineOut;
    v114 = minSize;
  }
  else
  {
    v53 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v53 = NGUIText_TypeInfo;
    }
    v54 = v53->static_fields->regionWidth;
    index = 0;
    if ( stringLength <= 0 )
    {
      v104 = lineOut;
      v62 = 1;
      *widthOut = 0.0;
      *v104 = 1;
      goto LABEL_240;
    }
    v113 = lineOut;
    v115 = widthOut;
    v114 = minSize;
    v50 = (float)v54;
  }
  v55 = 0;
  v56 = 0;
  v57 = 0;
  LODWORD(text) = 0;
  v58 = 0.0;
  v59 = -0.5;
  v60 = v50;
  v61 = 0.0;
  v62 = 1;
  v120 = 1;
  v112 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
    v63 = (unsigned __int16)Chars;
    v57 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
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
        if ( NGUIText__ParseSymbol(v14, &index, 0LL) )
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
        Symbol = NGUIText__GetSymbol(v14, v68, stringLength, 0LL);
        v65 = NGUIText_TypeInfo;
      }
      else
      {
        Symbol = 0LL;
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
      GlyphWidth = NGUIText__GetGlyphWidth(v63, v56, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_211;
      v81 = NGUIText_TypeInfo;
      v82 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v81 = NGUIText_TypeInfo;
      }
      v70 = v82 + v81->static_fields->finalSpacingX;
LABEL_115:
      v60 = v60 - v70;
      if ( (unsigned int)v66 - 8201 < 3 || v66 == 32 )
      {
        v71 = index - v55;
        if ( index > v55 && ((v57 ^ 1) & 1) != 0 )
        {
          v72 = v71 + 1;
          if ( v62 == v122 && v60 <= 0.0 && index < stringLength )
          {
            v73 = System_String__get_Chars(v14, index, 0LL);
            if ( v73 < 0x20u || (unsigned int)v73 - 8201 < 3 || v73 == 32 )
              v72 = v71;
          }
          v74 = s;
          Chars = System_String__Substring_61726036(v14, v55, v72, 0LL);
          if ( !v74 )
            goto LABEL_261;
          System_Text_StringBuilder__Append_60868928(v74, Chars, 0LL);
          v56 = v63;
          v120 = 0;
          v55 = index + 1;
        }
      }
      if ( !byte_4A567B3 )
      {
        sub_1B885B0(&System_Math_TypeInfo);
        byte_4A567B3 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v75 = v60;
      v76 = modf(v60, &iptr);
      if ( v60 >= 0.0 )
      {
        if ( v76 != 0.5 )
        {
          v77 = floor(v75 + 0.5);
          goto LABEL_147;
        }
        v77 = iptr;
        v78 = 1.0;
      }
      else
      {
        if ( v76 != v59 )
        {
          v77 = ceil(v75 + v59);
          goto LABEL_147;
        }
        v77 = iptr;
        v78 = -1.0;
      }
      v79 = v77 + v78;
      if ( ((__int64)v77 & 1) != 0 )
        v77 = v79;
LABEL_147:
      v83 = v58 + v70;
      if ( v77 != INFINITY && ((int)v77 & 0x80000000) == 0 )
      {
        v58 = v58 + v70;
LABEL_207:
        v59 = -0.5;
        if ( !Symbol )
        {
          v56 = v63;
          goto LABEL_211;
        }
        v93 = index;
        v67 = v93 + BMSymbol__get_length(Symbol, 0LL);
        v56 = 0;
        goto LABEL_209;
      }
      if ( !fontSizeAdjust )
      {
        text = (System_String_o *)(unsigned int)index;
        v84 = v123;
        while ( (_DWORD)text )
        {
          Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
          if ( !v84 )
            goto LABEL_261;
          v66 = (unsigned __int16)Chars;
          v85 = System_String__IndexOf(v84, (uint16_t)Chars, 0LL);
          text = (System_String_o *)(unsigned int)(index - 1);
          if ( (v85 & 0x80000000) != 0 )
          {
            Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
            if ( !v116 )
              goto LABEL_261;
            v86 = (unsigned __int16)Chars;
            if ( (System_String__IndexOf(v116, (uint16_t)Chars, 0LL) & 0x80000000) != 0 )
            {
              if ( v66 != v86 )
                goto LABEL_167;
              Chars = v118;
              if ( !v118 )
                goto LABEL_261;
              if ( (System_String__IndexOf(v118, v66, 0LL) & 0x80000000) != 0 )
              {
LABEL_167:
                if ( ((unsigned __int16)(v66 - 48) > 9u || (unsigned __int16)(v86 - 48) > 9u)
                  && ((unsigned __int16)(v86 - 58) >= 0x21u && (unsigned __int16)(v86 - 97) > 0x19u
                   || (unsigned __int16)(v66 - 58) >= 0x21u && (unsigned __int16)(v66 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v84 = v123;
            text = (System_String_o *)(unsigned int)--index;
          }
          else
          {
            --index;
          }
        }
        v87 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v87 = NGUIText_TypeInfo;
        }
        if ( v87->static_fields->useSymbols )
        {
          v88 = index;
          if ( !v87->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v87);
          Symbol = NGUIText__GetSymbol(v14, v88, stringLength, 0LL);
          v87 = NGUIText_TypeInfo;
        }
        else
        {
          Symbol = 0LL;
        }
        if ( !v87->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v87);
        if ( !Symbol )
        {
          v92 = NGUIText__GetGlyphWidth(v66, v56, 0LL);
          if ( v92 == 0.0 )
          {
            v58 = v58 + v70;
            goto LABEL_193;
          }
          v94 = NGUIText_TypeInfo;
          v95 = v92;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v94 = NGUIText_TypeInfo;
          }
          v89 = v120;
          Symbol = 0LL;
          v70 = v95 + v94->static_fields->finalSpacingX;
          goto LABEL_180;
        }
        v70 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
      }
      v89 = v120;
LABEL_180:
      if ( ((v62 != v122) & (v89 ^ 1)) == 0 )
      {
        v90 = s;
        Chars = System_String__Substring_61726036(v14, v55, (index - v55) & (unsigned int)~((index - v55) >> 31), 0LL);
        if ( !v90 )
          goto LABEL_261;
        System_Text_StringBuilder__Append_60868928(v90, Chars, 0LL);
        v91 = 1;
        if ( (unsigned int)v66 - 8201 >= 3 )
        {
          mHeight = v117;
          if ( v66 != 32 )
          {
            v91 = 0;
            v112 &= v57;
          }
        }
        else
        {
          mHeight = v117;
        }
        _ZF = v62++ == v122;
        if ( _ZF )
        {
          minSize = v114;
          v58 = v83;
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
        if ( v91 )
          v60 = v50;
        else
          v60 = v50 - v70;
        v55 = index + v91;
        v58 = 0.0;
        v63 = 0;
        v120 = 1;
        if ( v61 < v83 )
          v61 = v83;
        goto LABEL_207;
      }
      index = v55 - 1;
      if ( v61 < v83 )
        v61 = v83;
      ++v62;
      if ( keepCharCount )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        v56 = 0;
        v58 = 0.0;
        v120 = 1;
        v60 = v50;
LABEL_193:
        v59 = -0.5;
        goto LABEL_211;
      }
      v59 = -0.5;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v56 = 0;
      v58 = 0.0;
      goto LABEL_103;
    }
    if ( v62 == v122 )
      break;
    v64 = s;
    if ( v61 < v58 )
      v61 = v58;
    if ( index <= v55 )
    {
      if ( !s )
        goto LABEL_261;
      System_Text_StringBuilder__Append_60871256(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_61726036(v14, v55, index - v55 + 1, 0LL);
      if ( !v64 )
        goto LABEL_261;
      System_Text_StringBuilder__Append_60868928(v64, Chars, 0LL);
    }
    v56 = 0;
    ++v62;
    v58 = 0.0;
    v55 = index + 1;
LABEL_103:
    v120 = 1;
    v60 = v50;
LABEL_211:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= stringLength )
      goto LABEL_217;
  }
  text = (System_String_o *)(unsigned int)index;
  v62 = v122;
LABEL_217:
  minSize = v114;
  mHeight = v117;
  v48 = (unsigned int)((_DWORD)text - v55);
  if ( (int)text > v55 )
  {
    v96 = s;
    Chars = System_String__Substring_61726036(v14, v55, v48, 0LL);
    if ( v96 )
    {
      System_Text_StringBuilder__Append_60868928(v96, Chars, 0LL);
      goto LABEL_220;
    }
LABEL_261:
    sub_1B8880C(Chars, text);
  }
LABEL_220:
  if ( v61 >= v58 )
    v97 = v61;
  else
    v97 = v58;
  *v115 = v97;
  *v113 = v62;
  if ( fontSizeAdjust )
  {
LABEL_228:
    v100 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v100 = NGUIText_TypeInfo;
    }
    v101 = (float)v100->static_fields->regionWidth;
    if ( v97 > v101 )
    {
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100);
        v101 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      v102 = (float)(v101 / v97) * (float)label->fields.mFontSize;
      if ( v102 == INFINITY )
        v103 = 0x80000000;
      else
        v103 = (int)v102;
      UILabel__set_fontSize(label, v103, 0LL);
      *v115 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    Chars = (System_String_o *)s;
    if ( !s )
      goto LABEL_261;
    v51 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                               s,
                               s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    goto LABEL_80;
  }
  if ( (v112 & 1) == 0 )
  {
    v98 = 1;
    if ( minSize < 1 )
      return v98;
    goto LABEL_242;
  }
LABEL_240:
  if ( index == stringLength )
  {
    v98 = 0;
  }
  else
  {
    v110 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v110 = NGUIText_TypeInfo;
    }
    v111 = v110->static_fields->maxLines;
    if ( v111 >= v122 )
      v111 = v122;
    v98 = v62 > v111;
    if ( v62 > v111 && minSize <= 0 )
      return 1;
  }
LABEL_242:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_261;
  v105 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer, __int64))s->klass->vtable._3_ToString.method)(
                              s,
                              s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr,
                              v48);
  UILabel__set_text(label, v105, 0LL);
  if ( minSize >= 1 )
  {
    v106 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v106 = NGUIText_TypeInfo;
    }
    v107 = v106->static_fields->finalLineHeight * (float)v62;
    v108 = (int)v107;
    if ( v107 == INFINITY )
      v108 = 0x80000000;
    if ( mHeight >= v108 )
      v109 = mHeight;
    else
      v109 = v108;
    UIWidget__set_height((UIWidget_o *)label, v109, 0LL);
  }
  return v98;
}