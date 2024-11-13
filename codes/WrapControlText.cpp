void __fastcall WrapControlText___ctor(WrapControlText_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&width);
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
      sub_1BCAA3C(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_61565444(v3, 0xAu, 0LL);
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
      sub_1BCAA3C(v3, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B157A3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, text, *(_QWORD *)&defaultSize);
    byte_4B157A3 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1BCAA3C(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B157A4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, text, *(_QWORD *)&maxSize);
    byte_4B157A4 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_1BCAA3C(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v10, v11);
    return *(float *)&lineOut[1];
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WrapControlText__textAdjust(
        UILabel_o *label,
        System_String_o *text,
        int32_t maxSize,
        int32_t minSize,
        int32_t maxHeight,
        const MethodInfo *method)
{
  int32_t v7; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  __int64 v19; // x1
  Il2CppObject *v20; // x19
  int32_t v21; // [xsp+0h] [xbp-50h]
  const MethodInfo *v22; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  v7 = maxSize;
  if ( (byte_4B157A2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, text, *(_QWORD *)&maxSize);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15835/*"WrapControlText textAdjust error: "*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B157A2 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
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
    sub_1BCAA3C(IsNullOrEmpty, v17);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, v7, 0, 0, (float *)&lineOut[1], lineOut, 0, v21, v22);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == v7 )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, v21, v22);
      return lineOut[0];
    }
    --v7;
  }
  while ( v7 );
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, text, 0LL);
  v20 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_15835/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v19);
  UnityEngine_Debug__Log(v20, 0LL);
  return lineOut[0];
}


// local variable allocation has failed, the output may be wrong!
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
  int v13; // w21
  System_String_o *v14; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *Chars; // x0
  System_String_o *v23; // x28
  int32_t mHeight; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  NGUIText_c *v27; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  double v34; // d8
  __int64 v35; // x1
  __int64 v36; // x2
  double v37; // d0
  double v38; // d0
  double v39; // d1
  double v40; // d1
  NGUIText_c *v41; // x0
  struct NGUIText_StaticFields *v42; // x8
  int v43; // w9
  float fontScale; // s0
  int fontSize; // s1
  float spacingY; // s2
  int regionWidth; // w9
  int regionHeight; // w9
  float finalLineHeight; // s1
  float v50; // s8
  int maxLines; // w21
  int32_t v52; // w21
  float v53; // s8
  float v54; // s8
  unsigned int v55; // w9
  unsigned int v56; // w8
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Text_StringBuilder_o *v60; // x20
  __int64 v61; // x2
  int32_t stringLength; // w26
  float v63; // s10
  System_String_o *v64; // x1
  NGUIText_c *v66; // x0
  int v67; // s0
  int v68; // w23
  int32_t v69; // w22
  int v70; // w27
  float v71; // s12
  double v72; // d14
  float v73; // s15
  float v74; // s9
  int v75; // w25
  __int64 v76; // x2
  int32_t v77; // w28
  System_Text_StringBuilder_o *v78; // x21
  NGUIText_c *v79; // x8
  uint16_t v80; // w29
  int32_t v81; // w8
  int32_t v82; // w20
  BMSymbol_o *Symbol; // x21
  float v84; // s11
  int32_t v85; // w20
  int32_t v86; // w22
  uint16_t v87; // w0
  System_Text_StringBuilder_o *v88; // x20
  double v89; // d8
  double v90; // d0
  double v91; // d0
  double v92; // d1
  double v93; // d1
  float GlyphWidth; // s0
  NGUIText_c *v95; // x0
  float v96; // s8
  float v97; // s14
  System_String_o *v98; // x21
  int32_t v99; // w0
  unsigned __int16 v100; // w21
  NGUIText_c *v101; // x8
  int32_t v102; // w20
  int v103; // w9
  System_Text_StringBuilder_o *v104; // x22
  int v105; // w20
  float v106; // s0
  int32_t v107; // w20
  NGUIText_c *v108; // x0
  float v109; // s8
  System_Text_StringBuilder_o *v110; // x20
  float v111; // s8
  _BOOL4 v112; // w20
  int32_t *v113; // x8
  NGUIText_c *v114; // x0
  float v115; // s0
  float v116; // s0
  int32_t v117; // w1
  int32_t *v118; // x8
  System_String_o *v119; // x0
  __int64 v120; // x1
  NGUIText_c *v121; // x0
  float v122; // s0
  int v123; // w8
  int32_t v124; // w1
  NGUIText_c *v125; // x0
  int v126; // w8
  char v127; // [xsp+Ch] [xbp-104h]
  int32_t *v128; // [xsp+10h] [xbp-100h]
  int32_t v129; // [xsp+1Ch] [xbp-F4h]
  float *v130; // [xsp+20h] [xbp-F0h]
  System_String_o *v131; // [xsp+28h] [xbp-E8h]
  int32_t v132; // [xsp+34h] [xbp-DCh]
  System_String_o *v133; // [xsp+38h] [xbp-D8h]
  int v135; // [xsp+44h] [xbp-CCh]
  int v137; // [xsp+4Ch] [xbp-C4h]
  System_String_o *v138; // [xsp+50h] [xbp-C0h]
  int32_t index; // [xsp+5Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+60h] [xbp-B0h] BYREF
  double iptr; // [xsp+68h] [xbp-A8h] BYREF

  v13 = fsize;
  v14 = text;
  if ( (byte_4B157A5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, text, *(_QWORD *)&fsize);
    sub_1BCA7E0(&NGUIText_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B157A5 = 1;
  }
  s = 0LL;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text);
  if ( !byte_4B15813 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, text, *(_QWORD *)&fsize);
    byte_4B15813 = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v138 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4B15814 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, text, *(_QWORD *)&fsize);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4B15814 = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v23 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4B15815 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, text, *(_QWORD *)&fsize);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4B15815 = 1;
  }
  if ( !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_261;
  mHeight = label->fields.mHeight;
  v133 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, 1000000, 0LL);
    v13 = minSize;
  }
  UILabel__set_fontSize(label, v13, 0LL);
  UILabel__UpdateNGUIText(label, 0LL);
  v27 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v25);
    v27 = NGUIText_TypeInfo;
  }
  static_fields = v27->static_fields;
  __asm { FMOV            V0.2S, #1.0 }
  static_fields->fontSize = v13;
  *(_QWORD *)&static_fields->fontScale = _D0;
  if ( !byte_4B11755 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v25, v26);
    byte_4B11755 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v25);
  v34 = (float)v13;
  v37 = modf(v34, &iptr);
  if ( (v13 & 0x80000000) != 0 )
  {
    if ( v37 != -0.5 )
    {
      v38 = ceil(v34 + -0.5);
      goto LABEL_36;
    }
    v38 = iptr;
    v39 = -1.0;
  }
  else
  {
    if ( v37 != 0.5 )
    {
      v38 = floor(v34 + 0.5);
      goto LABEL_36;
    }
    v38 = iptr;
    v39 = 1.0;
  }
  v40 = v38 + v39;
  if ( ((__int64)v38 & 1) != 0 )
    v38 = v40;
LABEL_36:
  v41 = NGUIText_TypeInfo;
  v42 = NGUIText_TypeInfo->static_fields;
  v43 = (int)v38;
  _ZF = v38 == INFINITY;
  fontSize = v42->fontSize;
  fontScale = v42->fontScale;
  if ( _ZF )
    v43 = 0x80000000;
  spacingY = v42->spacingY;
  v42->finalSize = v43;
  regionWidth = v42->regionWidth;
  v42->finalLineHeight = (float)(spacingY + (float)fontSize) * fontScale;
  if ( regionWidth < 1 )
    goto LABEL_79;
  if ( !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41, v35);
    v41 = NGUIText_TypeInfo;
    v42 = NGUIText_TypeInfo->static_fields;
  }
  if ( v42->regionHeight < 1 )
    goto LABEL_79;
  if ( !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41, v35);
    v41 = NGUIText_TypeInfo;
    v42 = NGUIText_TypeInfo->static_fields;
  }
  if ( v42->finalLineHeight < 1.0 )
    goto LABEL_79;
  v132 = mHeight;
  if ( !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41, v35);
    v41 = NGUIText_TypeInfo;
    v42 = NGUIText_TypeInfo->static_fields;
    maxLines = v42->maxLines;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v35);
      v41 = NGUIText_TypeInfo;
      v42 = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = v42->regionHeight;
    if ( maxLines > 0 )
      goto LABEL_47;
LABEL_53:
    v50 = (float)regionHeight;
    goto LABEL_54;
  }
  regionHeight = v42->regionHeight;
  if ( v42->maxLines <= 0 )
    goto LABEL_53;
LABEL_47:
  finalLineHeight = v42->finalLineHeight;
  if ( (float)(finalLineHeight * (float)v42->maxLines) <= (float)regionHeight )
    v50 = finalLineHeight * (float)v42->maxLines;
  else
    v50 = (float)regionHeight;
LABEL_54:
  if ( !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41, v35);
    v41 = NGUIText_TypeInfo;
    v42 = NGUIText_TypeInfo->static_fields;
  }
  v52 = v42->maxLines;
  if ( v52 < 1 )
  {
    v52 = 1000000;
  }
  else if ( !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41, v35);
    v41 = NGUIText_TypeInfo;
    v52 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41, v35);
    v41 = NGUIText_TypeInfo;
  }
  if ( (float)(v50 / v41->static_fields->finalLineHeight) <= (float)v52 )
    v53 = v50 / v41->static_fields->finalLineHeight;
  else
    v53 = (float)v52;
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v35, v36);
    byte_4B109C0 = 1;
  }
  v54 = v53 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v35);
  v55 = vcvtms_s32_f32(v54);
  if ( floorf(v54) == INFINITY )
    v56 = 0x80000000;
  else
    v56 = v55;
  v137 = v56;
  if ( !v56 )
  {
LABEL_79:
    v64 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_80:
    UILabel__set_text(label, v64, 0LL);
    return 0;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v35);
  NGUIText__Prepare(v14, 0LL);
  v60 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v57, v58, v59);
  System_Text_StringBuilder___ctor(v60, 0LL);
  s = v60;
  if ( !v14 )
    goto LABEL_261;
  stringLength = v14->fields._stringLength;
  v131 = v23;
  if ( fontSizeAdjust )
  {
    index = 0;
    v130 = widthOut;
    if ( stringLength <= 0 )
    {
      v113 = lineOut;
      v75 = 1;
      *widthOut = 0.0;
      *v113 = 1;
      v111 = 0.0;
      if ( !fontSizeAdjust )
        goto LABEL_240;
      goto LABEL_228;
    }
    v63 = 1000000.0;
    v128 = lineOut;
    v129 = minSize;
  }
  else
  {
    v66 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
      v66 = NGUIText_TypeInfo;
    }
    v67 = v66->static_fields->regionWidth;
    index = 0;
    if ( stringLength <= 0 )
    {
      v118 = lineOut;
      v75 = 1;
      *widthOut = 0.0;
      *v118 = 1;
      goto LABEL_240;
    }
    v128 = lineOut;
    v130 = widthOut;
    v129 = minSize;
    v63 = (float)v67;
  }
  v68 = 0;
  v69 = 0;
  v70 = 0;
  LODWORD(text) = 0;
  v71 = 0.0;
  v72 = -0.5;
  v73 = v63;
  v74 = 0.0;
  v75 = 1;
  v135 = 1;
  v127 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
    v77 = (unsigned __int16)Chars;
    v70 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars != 10 )
    {
      v79 = NGUIText_TypeInfo;
      v80 = (unsigned __int16)Chars;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
        v79 = NGUIText_TypeInfo;
      }
      if ( v79->static_fields->encoding )
      {
        if ( !v79->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v79, text);
        if ( NGUIText__ParseSymbol(v14, &index, 0LL) )
        {
          v81 = index;
LABEL_209:
          index = v81 - 1;
          goto LABEL_211;
        }
        v79 = NGUIText_TypeInfo;
      }
      if ( !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79, text);
        v79 = NGUIText_TypeInfo;
      }
      if ( v79->static_fields->useSymbols )
      {
        v82 = index;
        if ( !v79->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v79, text);
        Symbol = NGUIText__GetSymbol(v14, v82, stringLength, 0LL);
        v79 = NGUIText_TypeInfo;
      }
      else
      {
        Symbol = 0LL;
      }
      if ( v79->_2.cctor_finished )
      {
        if ( Symbol )
        {
LABEL_114:
          v84 = NGUIText_TypeInfo->static_fields->finalSpacingX
              + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
          goto LABEL_115;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v79, text);
        if ( Symbol )
          goto LABEL_114;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v77, v69, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_211;
      v95 = NGUIText_TypeInfo;
      v96 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
        v95 = NGUIText_TypeInfo;
      }
      v84 = v96 + v95->static_fields->finalSpacingX;
LABEL_115:
      v73 = v73 - v84;
      if ( (unsigned int)v80 - 8201 < 3 || v80 == 32 )
      {
        text = (System_String_o *)(unsigned int)index;
        v85 = index - v68;
        if ( index > v68 && ((v70 ^ 1) & 1) != 0 )
        {
          v86 = v85 + 1;
          if ( v75 == v137 && v73 <= 0.0 && index < stringLength )
          {
            v87 = System_String__get_Chars(v14, index, 0LL);
            if ( v87 < 0x20u || (unsigned int)v87 - 8201 < 3 || v87 == 32 )
              v86 = v85;
          }
          v88 = s;
          Chars = System_String__Substring_62420224(v14, v68, v86, 0LL);
          if ( !v88 )
            goto LABEL_261;
          System_Text_StringBuilder__Append_61563116(v88, Chars, 0LL);
          v69 = v77;
          v135 = 0;
          v68 = index + 1;
        }
      }
      if ( !byte_4B11755 )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, text, v76);
        byte_4B11755 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, text);
      v89 = v73;
      v90 = modf(v73, &iptr);
      if ( v73 >= 0.0 )
      {
        if ( v90 != 0.5 )
        {
          v91 = floor(v89 + 0.5);
          goto LABEL_147;
        }
        v91 = iptr;
        v92 = 1.0;
      }
      else
      {
        if ( v90 != v72 )
        {
          v91 = ceil(v89 + v72);
          goto LABEL_147;
        }
        v91 = iptr;
        v92 = -1.0;
      }
      v93 = v91 + v92;
      if ( ((__int64)v91 & 1) != 0 )
        v91 = v93;
LABEL_147:
      v97 = v71 + v84;
      if ( v91 != INFINITY && ((int)v91 & 0x80000000) == 0 )
      {
        v71 = v71 + v84;
LABEL_207:
        v72 = -0.5;
        if ( !Symbol )
        {
          v69 = v77;
          goto LABEL_211;
        }
        v107 = index;
        v81 = v107 + BMSymbol__get_length(Symbol, 0LL);
        v69 = 0;
        goto LABEL_209;
      }
      if ( !fontSizeAdjust )
      {
        text = (System_String_o *)(unsigned int)index;
        v98 = v138;
        while ( (_DWORD)text )
        {
          Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
          if ( !v98 )
            goto LABEL_261;
          v80 = (unsigned __int16)Chars;
          v99 = System_String__IndexOf(v98, (uint16_t)Chars, 0LL);
          text = (System_String_o *)(unsigned int)(index - 1);
          if ( (v99 & 0x80000000) != 0 )
          {
            Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0LL);
            if ( !v131 )
              goto LABEL_261;
            v100 = (unsigned __int16)Chars;
            if ( (System_String__IndexOf(v131, (uint16_t)Chars, 0LL) & 0x80000000) != 0 )
            {
              if ( v80 != v100 )
                goto LABEL_167;
              Chars = v133;
              if ( !v133 )
                goto LABEL_261;
              if ( (System_String__IndexOf(v133, v80, 0LL) & 0x80000000) != 0 )
              {
LABEL_167:
                if ( ((unsigned __int16)(v80 - 48) > 9u || (unsigned __int16)(v100 - 48) > 9u)
                  && ((unsigned __int16)(v100 - 58) >= 0x21u && (unsigned __int16)(v100 - 97) > 0x19u
                   || (unsigned __int16)(v80 - 58) >= 0x21u && (unsigned __int16)(v80 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v98 = v138;
            text = (System_String_o *)(unsigned int)--index;
          }
          else
          {
            --index;
          }
        }
        v101 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
          v101 = NGUIText_TypeInfo;
        }
        if ( v101->static_fields->useSymbols )
        {
          v102 = index;
          if ( !v101->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v101, text);
          Symbol = NGUIText__GetSymbol(v14, v102, stringLength, 0LL);
          v101 = NGUIText_TypeInfo;
        }
        else
        {
          Symbol = 0LL;
        }
        if ( !v101->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v101, text);
        if ( !Symbol )
        {
          v106 = NGUIText__GetGlyphWidth(v80, v69, 0LL);
          if ( v106 == 0.0 )
          {
            v71 = v71 + v84;
            goto LABEL_193;
          }
          v108 = NGUIText_TypeInfo;
          v109 = v106;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
            v108 = NGUIText_TypeInfo;
          }
          v103 = v135;
          Symbol = 0LL;
          v84 = v109 + v108->static_fields->finalSpacingX;
          goto LABEL_180;
        }
        v84 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)Symbol->fields.mAdvance);
      }
      v103 = v135;
LABEL_180:
      if ( ((v75 != v137) & (v103 ^ 1)) == 0 )
      {
        v104 = s;
        Chars = System_String__Substring_62420224(v14, v68, (index - v68) & (unsigned int)~((index - v68) >> 31), 0LL);
        if ( !v104 )
          goto LABEL_261;
        System_Text_StringBuilder__Append_61563116(v104, Chars, 0LL);
        v105 = 1;
        if ( (unsigned int)v80 - 8201 >= 3 )
        {
          mHeight = v132;
          if ( v80 != 32 )
          {
            v105 = 0;
            v127 &= v70;
          }
        }
        else
        {
          mHeight = v132;
        }
        _ZF = v75++ == v137;
        if ( _ZF )
        {
          minSize = v129;
          v71 = v97;
          goto LABEL_220;
        }
        if ( keepCharCount )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        }
        else
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v105 )
          v73 = v63;
        else
          v73 = v63 - v84;
        v68 = index + v105;
        v71 = 0.0;
        v77 = 0;
        v135 = 1;
        if ( v74 < v97 )
          v74 = v97;
        goto LABEL_207;
      }
      index = v68 - 1;
      if ( v74 < v97 )
        v74 = v97;
      ++v75;
      if ( keepCharCount )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        v69 = 0;
        v71 = 0.0;
        v135 = 1;
        v73 = v63;
LABEL_193:
        v72 = -0.5;
        goto LABEL_211;
      }
      v72 = -0.5;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
      NGUIText__EndLine(&s, 0LL);
      v69 = 0;
      v71 = 0.0;
      goto LABEL_103;
    }
    if ( v75 == v137 )
      break;
    v78 = s;
    if ( v74 < v71 )
      v74 = v71;
    if ( index <= v68 )
    {
      if ( !s )
        goto LABEL_261;
      System_Text_StringBuilder__Append_61565444(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_62420224(v14, v68, index - v68 + 1, 0LL);
      if ( !v78 )
        goto LABEL_261;
      System_Text_StringBuilder__Append_61563116(v78, Chars, 0LL);
    }
    v69 = 0;
    ++v75;
    v71 = 0.0;
    v68 = index + 1;
LABEL_103:
    v135 = 1;
    v73 = v63;
LABEL_211:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= stringLength )
      goto LABEL_217;
  }
  text = (System_String_o *)(unsigned int)index;
  v75 = v137;
LABEL_217:
  minSize = v129;
  mHeight = v132;
  v61 = (unsigned int)((_DWORD)text - v68);
  if ( (int)text > v68 )
  {
    v110 = s;
    Chars = System_String__Substring_62420224(v14, v68, v61, 0LL);
    if ( v110 )
    {
      System_Text_StringBuilder__Append_61563116(v110, Chars, 0LL);
      goto LABEL_220;
    }
LABEL_261:
    sub_1BCAA3C(Chars, text);
  }
LABEL_220:
  if ( v74 >= v71 )
    v111 = v74;
  else
    v111 = v71;
  *v130 = v111;
  *v128 = v75;
  if ( fontSizeAdjust )
  {
LABEL_228:
    v114 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
      v114 = NGUIText_TypeInfo;
    }
    v115 = (float)v114->static_fields->regionWidth;
    if ( v111 > v115 )
    {
      if ( !v114->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v114, text);
        v115 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      v116 = (float)(v115 / v111) * (float)label->fields.mFontSize;
      if ( v116 == INFINITY )
        v117 = 0x80000000;
      else
        v117 = (int)v116;
      UILabel__set_fontSize(label, v117, 0LL);
      *v130 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    Chars = (System_String_o *)s;
    if ( !s )
      goto LABEL_261;
    v64 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                               s,
                               s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    goto LABEL_80;
  }
  if ( (v127 & 1) == 0 )
  {
    v112 = 1;
    if ( minSize < 1 )
      return v112;
    goto LABEL_242;
  }
LABEL_240:
  if ( index == stringLength )
  {
    v112 = 0;
  }
  else
  {
    v125 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
      v125 = NGUIText_TypeInfo;
    }
    v126 = v125->static_fields->maxLines;
    if ( v126 >= v137 )
      v126 = v137;
    v112 = v75 > v126;
    if ( v75 > v126 && minSize <= 0 )
      return 1;
  }
LABEL_242:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_261;
  v119 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer, __int64))s->klass->vtable._3_ToString.method)(
                              s,
                              s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr,
                              v61);
  UILabel__set_text(label, v119, 0LL);
  if ( minSize >= 1 )
  {
    v121 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v120);
      v121 = NGUIText_TypeInfo;
    }
    v122 = v121->static_fields->finalLineHeight * (float)v75;
    v123 = (int)v122;
    if ( v122 == INFINITY )
      v123 = 0x80000000;
    if ( mHeight >= v123 )
      v124 = mHeight;
    else
      v124 = v123;
    UIWidget__set_height((UIWidget_o *)label, v124, 0LL);
  }
  return v112;
}