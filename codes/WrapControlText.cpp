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
    sub_1B68930(0LL, width);
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
      sub_1B68930(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_60583692(v3, 0xAu, 0LL);
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
      sub_1B68930(v3, method);
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

  if ( (byte_4A08248 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, text);
    byte_4A08248 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1B68930(IsNullOrEmpty, v8);
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

  if ( (byte_4A08249 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, text);
    byte_4A08249 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1B68930(IsNullOrEmpty, v8);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  Il2CppObject *v16; // x19
  int32_t v17; // [xsp+0h] [xbp-50h]
  const MethodInfo *v18; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A08247 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Debug_TypeInfo, text);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&StringLiteral_15602/*"WrapControlText textAdjust error: "*/, v11);
    sub_1B686D4(&StringLiteral_1/*""*/, v12);
    byte_4A08247 = 1;
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
    sub_1B68930(IsNullOrEmpty, v14);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, v17, v18);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, v17, v18);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, text, 0LL);
  v16 = (Il2CppObject *)System_String__Concat_61419468((System_String_o *)StringLiteral_15602/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v16, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_o *Chars; // x0
  System_String_o *v20; // x28
  int32_t mHeight; // w22
  __int64 v22; // x1
  NGUIText_c *v23; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  double v30; // d8
  __int64 v31; // x1
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  NGUIText_c *v36; // x0
  struct NGUIText_StaticFields *v37; // x8
  int v38; // w9
  float fontScale; // s0
  int fontSize; // s1
  float spacingY; // s2
  int regionWidth; // w9
  int regionHeight; // w9
  float finalLineHeight; // s1
  float v45; // s8
  int maxLines; // w21
  int32_t v47; // w21
  float v48; // s8
  float v49; // s8
  unsigned int v50; // w9
  unsigned int v51; // w8
  System_Text_StringBuilder_o *v52; // x20
  __int64 v53; // x2
  int32_t stringLength; // w26
  float v55; // s10
  System_String_o *v56; // x1
  NGUIText_c *v58; // x0
  int v59; // s0
  int v60; // w23
  int32_t v61; // w22
  int v62; // w27
  float v63; // s12
  double v64; // d14
  float v65; // s15
  float v66; // s9
  int v67; // w25
  int32_t v68; // w28
  System_Text_StringBuilder_o *v69; // x21
  NGUIText_c *v70; // x8
  uint16_t v71; // w29
  int32_t v72; // w8
  int32_t v73; // w20
  BMSymbol_o *Symbol; // x21
  float v75; // s11
  int32_t v76; // w20
  int32_t v77; // w22
  uint16_t v78; // w0
  System_Text_StringBuilder_o *v79; // x20
  double v80; // d8
  double v81; // d0
  double v82; // d0
  double v83; // d1
  double v84; // d1
  float GlyphWidth; // s0
  NGUIText_c *v86; // x0
  float v87; // s8
  float v88; // s14
  System_String_o *v89; // x21
  int32_t v90; // w0
  unsigned __int16 v91; // w21
  NGUIText_c *v92; // x8
  int32_t v93; // w20
  int v94; // w9
  System_Text_StringBuilder_o *v95; // x22
  int v96; // w20
  float v97; // s0
  int32_t v98; // w20
  NGUIText_c *v99; // x0
  float v100; // s8
  System_Text_StringBuilder_o *v101; // x20
  float v102; // s8
  _BOOL4 v103; // w20
  int32_t *v104; // x8
  NGUIText_c *v105; // x0
  float v106; // s0
  float v107; // s0
  int32_t v108; // w1
  int32_t *v109; // x8
  System_String_o *v110; // x0
  NGUIText_c *v111; // x0
  float v112; // s0
  int v113; // w8
  int32_t v114; // w1
  NGUIText_c *v115; // x0
  int v116; // w8
  char v117; // [xsp+Ch] [xbp-104h]
  int32_t *v118; // [xsp+10h] [xbp-100h]
  int32_t v119; // [xsp+1Ch] [xbp-F4h]
  float *v120; // [xsp+20h] [xbp-F0h]
  System_String_o *v121; // [xsp+28h] [xbp-E8h]
  int32_t v122; // [xsp+34h] [xbp-DCh]
  System_String_o *v123; // [xsp+38h] [xbp-D8h]
  int v125; // [xsp+44h] [xbp-CCh]
  int v127; // [xsp+4Ch] [xbp-C4h]
  System_String_o *v128; // [xsp+50h] [xbp-C0h]
  int32_t index; // [xsp+5Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+60h] [xbp-B0h] BYREF
  double iptr; // [xsp+68h] [xbp-A8h] BYREF

  v14 = text;
  if ( (byte_4A0824A & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, text);
    sub_1B686D4(&NGUIText_TypeInfo, v16);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v17);
    sub_1B686D4(&StringLiteral_1/*""*/, v18);
    byte_4A0824A = 1;
  }
  s = 0LL;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A08315 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, text);
    byte_4A08315 = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v128 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4A08316 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4A08316 = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v20 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4A08317 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4A08317 = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_261;
  mHeight = label->fields.mHeight;
  v123 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, 1000000, 0LL);
    fsize = minSize;
  }
  UILabel__set_fontSize(label, fsize, 0LL);
  UILabel__UpdateNGUIText(label, 0LL);
  v23 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v23 = NGUIText_TypeInfo;
  }
  static_fields = v23->static_fields;
  __asm { FMOV            V0.2S, #1.0 }
  static_fields->fontSize = fsize;
  *(_QWORD *)&static_fields->fontScale = _D0;
  if ( !byte_4A042F2 )
  {
    sub_1B686D4(&System_Math_TypeInfo, v22);
    byte_4A042F2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v30 = (float)fsize;
  v32 = modf(v30, &iptr);
  if ( (fsize & 0x80000000) != 0 )
  {
    if ( v32 != -0.5 )
    {
      v33 = ceil(v30 + -0.5);
      goto LABEL_36;
    }
    v33 = iptr;
    v34 = -1.0;
  }
  else
  {
    if ( v32 != 0.5 )
    {
      v33 = floor(v30 + 0.5);
      goto LABEL_36;
    }
    v33 = iptr;
    v34 = 1.0;
  }
  v35 = v33 + v34;
  if ( ((__int64)v33 & 1) != 0 )
    v33 = v35;
LABEL_36:
  v36 = NGUIText_TypeInfo;
  v37 = NGUIText_TypeInfo->static_fields;
  v38 = (int)v33;
  _ZF = v33 == INFINITY;
  fontSize = v37->fontSize;
  fontScale = v37->fontScale;
  if ( _ZF )
    v38 = 0x80000000;
  spacingY = v37->spacingY;
  v37->finalSize = v38;
  regionWidth = v37->regionWidth;
  v37->finalLineHeight = (float)(spacingY + (float)fontSize) * fontScale;
  if ( regionWidth < 1 )
    goto LABEL_79;
  if ( !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    v36 = NGUIText_TypeInfo;
    v37 = NGUIText_TypeInfo->static_fields;
  }
  if ( v37->regionHeight < 1 )
    goto LABEL_79;
  if ( !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    v36 = NGUIText_TypeInfo;
    v37 = NGUIText_TypeInfo->static_fields;
  }
  if ( v37->finalLineHeight < 1.0 )
    goto LABEL_79;
  v122 = mHeight;
  if ( !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    v36 = NGUIText_TypeInfo;
    v37 = NGUIText_TypeInfo->static_fields;
    maxLines = v37->maxLines;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v36 = NGUIText_TypeInfo;
      v37 = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = v37->regionHeight;
    if ( maxLines > 0 )
      goto LABEL_47;
LABEL_53:
    v45 = (float)regionHeight;
    goto LABEL_54;
  }
  regionHeight = v37->regionHeight;
  if ( v37->maxLines <= 0 )
    goto LABEL_53;
LABEL_47:
  finalLineHeight = v37->finalLineHeight;
  if ( (float)(finalLineHeight * (float)v37->maxLines) <= (float)regionHeight )
    v45 = finalLineHeight * (float)v37->maxLines;
  else
    v45 = (float)regionHeight;
LABEL_54:
  if ( !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    v36 = NGUIText_TypeInfo;
    v37 = NGUIText_TypeInfo->static_fields;
  }
  v47 = v37->maxLines;
  if ( v47 < 1 )
  {
    v47 = 1000000;
  }
  else if ( !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    v36 = NGUIText_TypeInfo;
    v47 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    v36 = NGUIText_TypeInfo;
  }
  if ( (float)(v45 / v36->static_fields->finalLineHeight) <= (float)v47 )
    v48 = v45 / v36->static_fields->finalLineHeight;
  else
    v48 = (float)v47;
  if ( !byte_4A03900 )
  {
    sub_1B686D4(&System_Math_TypeInfo, v31);
    byte_4A03900 = 1;
  }
  v49 = v48 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v50 = vcvtms_s32_f32(v49);
  if ( floorf(v49) == INFINITY )
    v51 = 0x80000000;
  else
    v51 = v50;
  v127 = v51;
  if ( !v51 )
  {
LABEL_79:
    v56 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_80:
    UILabel__set_text(label, v56, 0LL);
    return 0;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v14, 0LL);
  v52 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v52, 0LL);
  s = v52;
  if ( !v14 )
    goto LABEL_261;
  stringLength = v14->fields._stringLength;
  v121 = v20;
  if ( fontSizeAdjust )
  {
    index = 0;
    v120 = widthOut;
    if ( stringLength <= 0 )
    {
      v104 = lineOut;
      v67 = 1;
      *widthOut = 0.0;
      *v104 = 1;
      v102 = 0.0;
      if ( !fontSizeAdjust )
        goto LABEL_240;
      goto LABEL_228;
    }
    v55 = 1000000.0;
    v118 = lineOut;
    v119 = minSize;
  }
  else
  {
    v58 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v58 = NGUIText_TypeInfo;
    }
    v59 = v58->static_fields->regionWidth;
    index = 0;
    if ( stringLength <= 0 )
    {
      v109 = lineOut;
      v67 = 1;
      *widthOut = 0.0;
      *v109 = 1;
      goto LABEL_240;
    }
    v118 = lineOut;
    v120 = widthOut;
    v119 = minSize;
    v55 = (float)v59;
  }
  v60 = 0;
  v61 = 0;
  v62 = 0;
  LODWORD(text) = 0;
  v63 = 0.0;
  v64 = -0.5;
  v65 = v55;
  v66 = 0.0;
  v67 = 1;
  v125 = 1;
  v117 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
    v68 = (unsigned __int16)Chars;
    v62 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars != 10 )
    {
      v70 = NGUIText_TypeInfo;
      v71 = (unsigned __int16)Chars;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v70 = NGUIText_TypeInfo;
      }
      if ( v70->static_fields->encoding )
      {
        if ( !v70->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v70);
        if ( NGUIText__ParseSymbol(v14, &index, 0LL) )
        {
          v72 = index;
LABEL_209:
          index = v72 - 1;
          goto LABEL_211;
        }
        v70 = NGUIText_TypeInfo;
      }
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v70 = NGUIText_TypeInfo;
      }
      if ( v70->static_fields->useSymbols )
      {
        v73 = index;
        if ( !v70->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v70);
        Symbol = NGUIText__GetSymbol(v14, v73, stringLength, 0LL);
        v70 = NGUIText_TypeInfo;
      }
      else
      {
        Symbol = 0LL;
      }
      if ( v70->_2.cctor_finished )
      {
        if ( Symbol )
        {
LABEL_114:
          v75 = NGUIText_TypeInfo->static_fields->finalSpacingX
              + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
          goto LABEL_115;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v70);
        if ( Symbol )
          goto LABEL_114;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v68, v61, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_211;
      v86 = NGUIText_TypeInfo;
      v87 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v86 = NGUIText_TypeInfo;
      }
      v75 = v87 + v86->static_fields->finalSpacingX;
LABEL_115:
      v65 = v65 - v75;
      if ( (unsigned int)v71 - 8201 < 3 || v71 == 32 )
      {
        text = (System_String_o *)(unsigned int)index;
        v76 = index - v60;
        if ( index > v60 && ((v62 ^ 1) & 1) != 0 )
        {
          v77 = v76 + 1;
          if ( v67 == v127 && v65 <= 0.0 && index < stringLength )
          {
            v78 = System_String__get_Chars(v14, index, 0LL);
            if ( v78 < 0x20u || (unsigned int)v78 - 8201 < 3 || v78 == 32 )
              v77 = v76;
          }
          v79 = s;
          Chars = System_String__Substring_61438472(v14, v60, v77, 0LL);
          if ( !v79 )
            goto LABEL_261;
          System_Text_StringBuilder__Append_60581364(v79, Chars, 0LL);
          v61 = v68;
          v125 = 0;
          v60 = index + 1;
        }
      }
      if ( !byte_4A042F2 )
      {
        sub_1B686D4(&System_Math_TypeInfo, text);
        byte_4A042F2 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v80 = v65;
      v81 = modf(v65, &iptr);
      if ( v65 >= 0.0 )
      {
        if ( v81 != 0.5 )
        {
          v82 = floor(v80 + 0.5);
          goto LABEL_147;
        }
        v82 = iptr;
        v83 = 1.0;
      }
      else
      {
        if ( v81 != v64 )
        {
          v82 = ceil(v80 + v64);
          goto LABEL_147;
        }
        v82 = iptr;
        v83 = -1.0;
      }
      v84 = v82 + v83;
      if ( ((__int64)v82 & 1) != 0 )
        v82 = v84;
LABEL_147:
      v88 = v63 + v75;
      if ( v82 != INFINITY && ((int)v82 & 0x80000000) == 0 )
      {
        v63 = v63 + v75;
LABEL_207:
        v64 = -0.5;
        if ( !Symbol )
        {
          v61 = v68;
          goto LABEL_211;
        }
        v98 = index;
        v72 = v98 + BMSymbol__get_length(Symbol, 0LL);
        v61 = 0;
        goto LABEL_209;
      }
      if ( !fontSizeAdjust )
      {
        text = (System_String_o *)(unsigned int)index;
        v89 = v128;
        while ( (_DWORD)text )
        {
          Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
          if ( !v89 )
            goto LABEL_261;
          v71 = (unsigned __int16)Chars;
          v90 = System_String__IndexOf(v89, (uint16_t)Chars, 0LL);
          text = (System_String_o *)(unsigned int)(index - 1);
          if ( (v90 & 0x80000000) != 0 )
          {
            Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
            if ( !v121 )
              goto LABEL_261;
            v91 = (unsigned __int16)Chars;
            if ( (System_String__IndexOf(v121, (uint16_t)Chars, 0LL) & 0x80000000) != 0 )
            {
              if ( v71 != v91 )
                goto LABEL_167;
              Chars = v123;
              if ( !v123 )
                goto LABEL_261;
              if ( (System_String__IndexOf(v123, v71, 0LL) & 0x80000000) != 0 )
              {
LABEL_167:
                if ( ((unsigned __int16)(v71 - 48) > 9u || (unsigned __int16)(v91 - 48) > 9u)
                  && ((unsigned __int16)(v91 - 58) >= 0x21u && (unsigned __int16)(v91 - 97) > 0x19u
                   || (unsigned __int16)(v71 - 58) >= 0x21u && (unsigned __int16)(v71 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v89 = v128;
            text = (System_String_o *)(unsigned int)--index;
          }
          else
          {
            --index;
          }
        }
        v92 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v92 = NGUIText_TypeInfo;
        }
        if ( v92->static_fields->useSymbols )
        {
          v93 = index;
          if ( !v92->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v92);
          Symbol = NGUIText__GetSymbol(v14, v93, stringLength, 0LL);
          v92 = NGUIText_TypeInfo;
        }
        else
        {
          Symbol = 0LL;
        }
        if ( !v92->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v92);
        if ( !Symbol )
        {
          v97 = NGUIText__GetGlyphWidth(v71, v61, 0LL);
          if ( v97 == 0.0 )
          {
            v63 = v63 + v75;
            goto LABEL_193;
          }
          v99 = NGUIText_TypeInfo;
          v100 = v97;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v99 = NGUIText_TypeInfo;
          }
          v94 = v125;
          Symbol = 0LL;
          v75 = v100 + v99->static_fields->finalSpacingX;
          goto LABEL_180;
        }
        v75 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
      }
      v94 = v125;
LABEL_180:
      if ( ((v67 != v127) & (v94 ^ 1)) == 0 )
      {
        v95 = s;
        Chars = System_String__Substring_61438472(v14, v60, (index - v60) & (unsigned int)~((index - v60) >> 31), 0LL);
        if ( !v95 )
          goto LABEL_261;
        System_Text_StringBuilder__Append_60581364(v95, Chars, 0LL);
        v96 = 1;
        if ( (unsigned int)v71 - 8201 >= 3 )
        {
          mHeight = v122;
          if ( v71 != 32 )
          {
            v96 = 0;
            v117 &= v62;
          }
        }
        else
        {
          mHeight = v122;
        }
        _ZF = v67++ == v127;
        if ( _ZF )
        {
          minSize = v119;
          v63 = v88;
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
        if ( v96 )
          v65 = v55;
        else
          v65 = v55 - v75;
        v60 = index + v96;
        v63 = 0.0;
        v68 = 0;
        v125 = 1;
        if ( v66 < v88 )
          v66 = v88;
        goto LABEL_207;
      }
      index = v60 - 1;
      if ( v66 < v88 )
        v66 = v88;
      ++v67;
      if ( keepCharCount )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        v61 = 0;
        v63 = 0.0;
        v125 = 1;
        v65 = v55;
LABEL_193:
        v64 = -0.5;
        goto LABEL_211;
      }
      v64 = -0.5;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v61 = 0;
      v63 = 0.0;
      goto LABEL_103;
    }
    if ( v67 == v127 )
      break;
    v69 = s;
    if ( v66 < v63 )
      v66 = v63;
    if ( index <= v60 )
    {
      if ( !s )
        goto LABEL_261;
      System_Text_StringBuilder__Append_60583692(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_61438472(v14, v60, index - v60 + 1, 0LL);
      if ( !v69 )
        goto LABEL_261;
      System_Text_StringBuilder__Append_60581364(v69, Chars, 0LL);
    }
    v61 = 0;
    ++v67;
    v63 = 0.0;
    v60 = index + 1;
LABEL_103:
    v125 = 1;
    v65 = v55;
LABEL_211:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= stringLength )
      goto LABEL_217;
  }
  text = (System_String_o *)(unsigned int)index;
  v67 = v127;
LABEL_217:
  minSize = v119;
  mHeight = v122;
  v53 = (unsigned int)((_DWORD)text - v60);
  if ( (int)text > v60 )
  {
    v101 = s;
    Chars = System_String__Substring_61438472(v14, v60, v53, 0LL);
    if ( v101 )
    {
      System_Text_StringBuilder__Append_60581364(v101, Chars, 0LL);
      goto LABEL_220;
    }
LABEL_261:
    sub_1B68930(Chars, text);
  }
LABEL_220:
  if ( v66 >= v63 )
    v102 = v66;
  else
    v102 = v63;
  *v120 = v102;
  *v118 = v67;
  if ( fontSizeAdjust )
  {
LABEL_228:
    v105 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v105 = NGUIText_TypeInfo;
    }
    v106 = (float)v105->static_fields->regionWidth;
    if ( v102 > v106 )
    {
      if ( !v105->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v105);
        v106 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      v107 = (float)(v106 / v102) * (float)label->fields.mFontSize;
      if ( v107 == INFINITY )
        v108 = 0x80000000;
      else
        v108 = (int)v107;
      UILabel__set_fontSize(label, v108, 0LL);
      *v120 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    Chars = (System_String_o *)s;
    if ( !s )
      goto LABEL_261;
    v56 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                               s,
                               s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    goto LABEL_80;
  }
  if ( (v117 & 1) == 0 )
  {
    v103 = 1;
    if ( minSize < 1 )
      return v103;
    goto LABEL_242;
  }
LABEL_240:
  if ( index == stringLength )
  {
    v103 = 0;
  }
  else
  {
    v115 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v115 = NGUIText_TypeInfo;
    }
    v116 = v115->static_fields->maxLines;
    if ( v116 >= v127 )
      v116 = v127;
    v103 = v67 > v116;
    if ( v67 > v116 && minSize <= 0 )
      return 1;
  }
LABEL_242:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_261;
  v110 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer, __int64))s->klass->vtable._3_ToString.method)(
                              s,
                              s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr,
                              v53);
  UILabel__set_text(label, v110, 0LL);
  if ( minSize >= 1 )
  {
    v111 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v111 = NGUIText_TypeInfo;
    }
    v112 = v111->static_fields->finalLineHeight * (float)v67;
    v113 = (int)v112;
    if ( v112 == INFINITY )
      v113 = 0x80000000;
    if ( mHeight >= v113 )
      v114 = mHeight;
    else
      v114 = v113;
    UIWidget__set_height((UIWidget_o *)label, v114, 0LL);
  }
  return v103;
}