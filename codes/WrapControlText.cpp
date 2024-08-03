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
    sub_1B64324(0LL);
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
      sub_1B64324(v3);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_60538876(v3, 0xAu, 0LL);
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
      sub_1B64324(v3);
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
  const MethodInfo *v8; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FBA00 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, text);
    byte_49FBA00 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1B64324(IsNullOrEmpty);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, 0, v8);
  }
}


float __fastcall WrapControlText__getFontWidth(
        UILabel_o *label,
        System_String_o *text,
        int32_t maxSize,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FBA01 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, text);
    byte_49FBA01 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1B64324(IsNullOrEmpty);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, 0, v9);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppObject *v16; // x19
  const MethodInfo *v17; // [xsp+8h] [xbp-58h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FB9FF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, text);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_15600/*"WrapControlText textAdjust error: "*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FB9FF = 1;
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
LABEL_20:
    sub_1B64324(IsNullOrEmpty);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, 0, v17);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, maxHeight, v17);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_20;
  UILabel__set_text(label, text, 0LL);
  v16 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_15600/*"WrapControlText textAdjust error: "*/, text, 0LL);
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
  __int64 v52; // x1
  __int64 v53; // x2
  System_Text_StringBuilder_o *v54; // x20
  __int64 v55; // x2
  int stringLength; // w26
  float v57; // s10
  System_String_o *v58; // x1
  NGUIText_c *v60; // x0
  int v61; // s0
  int v62; // w23
  int32_t v63; // w22
  int v64; // w27
  int32_t v65; // w1
  float v66; // s12
  double v67; // d14
  float v68; // s15
  float v69; // s9
  int v70; // w25
  __int64 v71; // x1
  int32_t v72; // w28
  System_Text_StringBuilder_o *v73; // x21
  NGUIText_c *v74; // x8
  uint16_t v75; // w29
  int32_t v76; // w8
  int32_t v77; // w20
  BMSymbol_o *Symbol; // x21
  float v79; // s11
  int32_t v80; // w20
  int32_t v81; // w22
  uint16_t v82; // w0
  System_Text_StringBuilder_o *v83; // x20
  double v84; // d8
  unsigned __int64 v85; // x1
  double v86; // d0
  double v87; // d0
  double v88; // d1
  double v89; // d1
  float GlyphWidth; // s0
  NGUIText_c *v91; // x0
  float v92; // s8
  float v93; // s14
  System_String_o *v94; // x21
  int32_t v95; // w0
  unsigned __int16 v96; // w21
  NGUIText_c *v97; // x8
  int32_t v98; // w20
  int v99; // w9
  System_Text_StringBuilder_o *v100; // x22
  const MethodInfo *v101; // x1
  int v102; // w20
  float v103; // s0
  int32_t v104; // w20
  NGUIText_c *v105; // x0
  float v106; // s8
  System_Text_StringBuilder_o *v107; // x20
  float v108; // s8
  _BOOL4 v109; // w20
  int32_t *v110; // x8
  NGUIText_c *v111; // x0
  float v112; // s0
  float v113; // s0
  int32_t v114; // w1
  int32_t *v115; // x8
  System_String_o *v116; // x0
  NGUIText_c *v117; // x0
  float v118; // s0
  int v119; // w8
  int32_t v120; // w1
  NGUIText_c *v121; // x0
  int v122; // w8
  char v123; // [xsp+Ch] [xbp-104h]
  int32_t *v124; // [xsp+10h] [xbp-100h]
  int32_t v125; // [xsp+1Ch] [xbp-F4h]
  float *v126; // [xsp+20h] [xbp-F0h]
  System_String_o *v127; // [xsp+28h] [xbp-E8h]
  int32_t v128; // [xsp+34h] [xbp-DCh]
  System_String_o *v129; // [xsp+38h] [xbp-D8h]
  int v131; // [xsp+44h] [xbp-CCh]
  int v133; // [xsp+4Ch] [xbp-C4h]
  System_String_o *v134; // [xsp+50h] [xbp-C0h]
  int32_t index; // [xsp+5Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+60h] [xbp-B0h] BYREF
  double iptr; // [xsp+68h] [xbp-A8h] BYREF

  if ( (byte_49FBA02 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, text);
    sub_1B640C8(&NGUIText_TypeInfo, v16);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49FBA02 = 1;
  }
  s = 0LL;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49FBACD )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, text);
    byte_49FBACD = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v134 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_49FBACE )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_49FBACE = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v20 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_49FBACF )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_49FBACF = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_261;
  mHeight = label->fields.mHeight;
  v129 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, maxHeight, 0LL);
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
  if ( !byte_49F7B73 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v22);
    byte_49F7B73 = 1;
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
  v128 = mHeight;
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
  if ( !byte_49F7110 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v31);
    byte_49F7110 = 1;
  }
  v49 = v48 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v50 = vcvtms_s32_f32(v49);
  if ( floorf(v49) == INFINITY )
    v51 = 0x80000000;
  else
    v51 = v50;
  v133 = v51;
  if ( !v51 )
  {
LABEL_79:
    v58 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_80:
    UILabel__set_text(label, v58, 0LL);
    return 0;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(text, 0LL);
  v54 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v52, v53);
  System_Text_StringBuilder___ctor(v54, 0LL);
  s = v54;
  if ( !text )
    goto LABEL_261;
  stringLength = text->fields._stringLength;
  v127 = v20;
  if ( fontSizeAdjust )
  {
    index = 0;
    v126 = widthOut;
    if ( stringLength <= 0 )
    {
      v110 = lineOut;
      v70 = 1;
      *widthOut = 0.0;
      *v110 = 1;
      v108 = 0.0;
      if ( !fontSizeAdjust )
        goto LABEL_240;
      goto LABEL_228;
    }
    v57 = 1000000.0;
    v124 = lineOut;
    v125 = minSize;
  }
  else
  {
    v60 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v60 = NGUIText_TypeInfo;
    }
    v61 = v60->static_fields->regionWidth;
    index = 0;
    if ( stringLength <= 0 )
    {
      v115 = lineOut;
      v70 = 1;
      *widthOut = 0.0;
      *v115 = 1;
      goto LABEL_240;
    }
    v124 = lineOut;
    v126 = widthOut;
    v125 = minSize;
    v57 = (float)v61;
  }
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0.0;
  v67 = -0.5;
  v68 = v57;
  v69 = 0.0;
  v70 = 1;
  v131 = 1;
  v123 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(text, v65, 0LL);
    v72 = (unsigned __int16)Chars;
    v64 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars != 10 )
    {
      v74 = NGUIText_TypeInfo;
      v75 = (unsigned __int16)Chars;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v74 = NGUIText_TypeInfo;
      }
      if ( v74->static_fields->encoding )
      {
        if ( !v74->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v74);
        if ( NGUIText__ParseSymbol(text, &index, 0LL) )
        {
          v76 = index;
LABEL_209:
          index = v76 - 1;
          goto LABEL_211;
        }
        v74 = NGUIText_TypeInfo;
      }
      if ( !v74->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v74);
        v74 = NGUIText_TypeInfo;
      }
      if ( v74->static_fields->useSymbols )
      {
        v77 = index;
        if ( !v74->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v74);
        Symbol = NGUIText__GetSymbol(text, v77, stringLength, 0LL);
        v74 = NGUIText_TypeInfo;
      }
      else
      {
        Symbol = 0LL;
      }
      if ( v74->_2.cctor_finished )
      {
        if ( Symbol )
        {
LABEL_114:
          v79 = NGUIText_TypeInfo->static_fields->finalSpacingX
              + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
          goto LABEL_115;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v74);
        if ( Symbol )
          goto LABEL_114;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v72, v63, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_211;
      v91 = NGUIText_TypeInfo;
      v92 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v91 = NGUIText_TypeInfo;
      }
      v79 = v92 + v91->static_fields->finalSpacingX;
LABEL_115:
      v68 = v68 - v79;
      if ( (unsigned int)v75 - 8201 < 3 || v75 == 32 )
      {
        v71 = (unsigned int)index;
        v80 = index - v62;
        if ( index > v62 && ((v64 ^ 1) & 1) != 0 )
        {
          v81 = v80 + 1;
          if ( v70 == v133 && v68 <= 0.0 && index < stringLength )
          {
            v82 = System_String__get_Chars(text, index, 0LL);
            if ( v82 < 0x20u || (unsigned int)v82 - 8201 < 3 || v82 == 32 )
              v81 = v80;
          }
          v83 = s;
          Chars = System_String__Substring_61394392(text, v62, v81, 0LL);
          if ( !v83 )
            goto LABEL_261;
          System_Text_StringBuilder__Append_60536548(v83, Chars, 0LL);
          v63 = v72;
          v131 = 0;
          v62 = index + 1;
        }
      }
      if ( !byte_49F7B73 )
      {
        sub_1B640C8(&System_Math_TypeInfo, v71);
        byte_49F7B73 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v84 = v68;
      v86 = modf(v68, &iptr);
      if ( v68 >= 0.0 )
      {
        if ( v86 != 0.5 )
        {
          v87 = floor(v84 + 0.5);
          goto LABEL_147;
        }
        v87 = iptr;
        v88 = 1.0;
      }
      else
      {
        if ( v86 != v67 )
        {
          v87 = ceil(v84 + v67);
          goto LABEL_147;
        }
        v87 = iptr;
        v88 = -1.0;
      }
      v89 = v87 + v88;
      if ( ((__int64)v87 & 1) != 0 )
        v87 = v89;
LABEL_147:
      v93 = v66 + v79;
      if ( v87 != INFINITY && ((int)v87 & 0x80000000) == 0 )
      {
        v66 = v66 + v79;
LABEL_207:
        v67 = -0.5;
        if ( !Symbol )
        {
          v63 = v72;
          goto LABEL_211;
        }
        v104 = index;
        v76 = v104 + BMSymbol__get_length(Symbol, 0LL);
        v63 = 0;
        goto LABEL_209;
      }
      if ( !fontSizeAdjust )
      {
        v85 = (unsigned int)index;
        v94 = v134;
        while ( (_DWORD)v85 )
        {
          Chars = (System_String_o *)System_String__get_Chars(text, v85, 0LL);
          if ( !v94 )
            goto LABEL_261;
          v75 = (unsigned __int16)Chars;
          v95 = System_String__IndexOf(v94, (uint16_t)Chars, 0LL);
          v85 = (unsigned int)(index - 1);
          if ( (v95 & 0x80000000) != 0 )
          {
            Chars = (System_String_o *)System_String__get_Chars(text, v85, 0LL);
            if ( !v127 )
              goto LABEL_261;
            v96 = (unsigned __int16)Chars;
            if ( (System_String__IndexOf(v127, (uint16_t)Chars, 0LL) & 0x80000000) != 0 )
            {
              if ( v75 != v96 )
                goto LABEL_167;
              Chars = v129;
              if ( !v129 )
                goto LABEL_261;
              if ( (System_String__IndexOf(v129, v75, 0LL) & 0x80000000) != 0 )
              {
LABEL_167:
                if ( ((unsigned __int16)(v75 - 48) > 9u || (unsigned __int16)(v96 - 48) > 9u)
                  && ((unsigned __int16)(v96 - 58) >= 0x21u && (unsigned __int16)(v96 - 97) > 0x19u
                   || (unsigned __int16)(v75 - 58) >= 0x21u && (unsigned __int16)(v75 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v94 = v134;
            v85 = (unsigned int)--index;
          }
          else
          {
            --index;
          }
        }
        v97 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v97 = NGUIText_TypeInfo;
        }
        if ( v97->static_fields->useSymbols )
        {
          v98 = index;
          if ( !v97->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v97);
          Symbol = NGUIText__GetSymbol(text, v98, stringLength, 0LL);
          v97 = NGUIText_TypeInfo;
        }
        else
        {
          Symbol = 0LL;
        }
        if ( !v97->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v97);
        if ( !Symbol )
        {
          v103 = NGUIText__GetGlyphWidth(v75, v63, 0LL);
          if ( v103 == 0.0 )
          {
            v66 = v66 + v79;
            goto LABEL_193;
          }
          v105 = NGUIText_TypeInfo;
          v106 = v103;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v105 = NGUIText_TypeInfo;
          }
          v99 = v131;
          Symbol = 0LL;
          v79 = v106 + v105->static_fields->finalSpacingX;
          goto LABEL_180;
        }
        v79 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
      }
      v99 = v131;
LABEL_180:
      if ( ((v70 != v133) & (v99 ^ 1)) == 0 )
      {
        v100 = s;
        Chars = System_String__Substring_61394392(text, v62, (index - v62) & (unsigned int)~((index - v62) >> 31), 0LL);
        if ( !v100 )
          goto LABEL_261;
        System_Text_StringBuilder__Append_60536548(v100, Chars, 0LL);
        v102 = 1;
        if ( (unsigned int)v75 - 8201 >= 3 )
        {
          mHeight = v128;
          if ( v75 != 32 )
          {
            v102 = 0;
            v123 &= v64;
          }
        }
        else
        {
          mHeight = v128;
        }
        _ZF = v70++ == v133;
        if ( _ZF )
        {
          minSize = v125;
          v66 = v93;
          goto LABEL_220;
        }
        if ( keepCharCount )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, v101);
        }
        else
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v102 )
          v68 = v57;
        else
          v68 = v57 - v79;
        v62 = index + v102;
        v66 = 0.0;
        v72 = 0;
        v131 = 1;
        if ( v69 < v93 )
          v69 = v93;
        goto LABEL_207;
      }
      index = v62 - 1;
      if ( v69 < v93 )
        v69 = v93;
      ++v70;
      if ( keepCharCount )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)v85);
        v63 = 0;
        v66 = 0.0;
        v131 = 1;
        v68 = v57;
LABEL_193:
        v67 = -0.5;
        goto LABEL_211;
      }
      v67 = -0.5;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v63 = 0;
      v66 = 0.0;
      goto LABEL_103;
    }
    if ( v70 == v133 )
      break;
    v73 = s;
    if ( v69 < v66 )
      v69 = v66;
    if ( index <= v62 )
    {
      if ( !s )
        goto LABEL_261;
      System_Text_StringBuilder__Append_60538876(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_61394392(text, v62, index - v62 + 1, 0LL);
      if ( !v73 )
        goto LABEL_261;
      System_Text_StringBuilder__Append_60536548(v73, Chars, 0LL);
    }
    v63 = 0;
    ++v70;
    v66 = 0.0;
    v62 = index + 1;
LABEL_103:
    v131 = 1;
    v68 = v57;
LABEL_211:
    v65 = ++index;
    if ( index >= stringLength )
      goto LABEL_217;
  }
  v65 = index;
  v70 = v133;
LABEL_217:
  minSize = v125;
  mHeight = v128;
  v55 = (unsigned int)(v65 - v62);
  if ( v65 > v62 )
  {
    v107 = s;
    Chars = System_String__Substring_61394392(text, v62, v55, 0LL);
    if ( v107 )
    {
      System_Text_StringBuilder__Append_60536548(v107, Chars, 0LL);
      goto LABEL_220;
    }
LABEL_261:
    sub_1B64324(Chars);
  }
LABEL_220:
  if ( v69 >= v66 )
    v108 = v69;
  else
    v108 = v66;
  *v126 = v108;
  *v124 = v70;
  if ( fontSizeAdjust )
  {
LABEL_228:
    v111 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v111 = NGUIText_TypeInfo;
    }
    v112 = (float)v111->static_fields->regionWidth;
    if ( v108 > v112 )
    {
      if ( !v111->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v111);
        v112 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      v113 = (float)(v112 / v108) * (float)label->fields.mFontSize;
      if ( v113 == INFINITY )
        v114 = 0x80000000;
      else
        v114 = (int)v113;
      UILabel__set_fontSize(label, v114, 0LL);
      *v126 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    Chars = (System_String_o *)s;
    if ( !s )
      goto LABEL_261;
    v58 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                               s,
                               s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    goto LABEL_80;
  }
  if ( (v123 & 1) == 0 )
  {
    v109 = 1;
    if ( minSize < 1 )
      return v109;
    goto LABEL_242;
  }
LABEL_240:
  if ( index == stringLength )
  {
    v109 = 0;
  }
  else
  {
    v121 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v121 = NGUIText_TypeInfo;
    }
    v122 = v121->static_fields->maxLines;
    if ( v122 >= v133 )
      v122 = v133;
    v109 = v70 > v122;
    if ( v70 > v122 && minSize <= 0 )
      return 1;
  }
LABEL_242:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_261;
  v116 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer, __int64))s->klass->vtable._3_ToString.method)(
                              s,
                              s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr,
                              v55);
  UILabel__set_text(label, v116, 0LL);
  if ( minSize >= 1 )
  {
    v117 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v117 = NGUIText_TypeInfo;
    }
    v118 = v117->static_fields->finalLineHeight * (float)v70;
    v119 = (int)v118;
    if ( v118 == INFINITY )
      v119 = 0x80000000;
    if ( mHeight >= v119 )
      v120 = mHeight;
    else
      v120 = v119;
    UIWidget__set_height((UIWidget_o *)label, v120, 0LL);
  }
  return v109;
}