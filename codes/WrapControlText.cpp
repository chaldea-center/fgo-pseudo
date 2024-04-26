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
  int v6; // w8

  if ( !text )
    sub_B7076C(0LL, width);
  return (UnityEngine_Mathf__Min_41127788(text->fields.m_stringLength % (width / fontSize), 1, 0LL)
        + marginLineCount
        + v6 / (width / fontSize))
       * lineHeight;
}


void __fastcall WrapControlText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w0

  v3 = *s;
  if ( !v3 )
    goto LABEL_11;
  v4 = System_Text_StringBuilder__get_Length(v3, 0LL) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_11;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0LL);
    if ( Chars == 32 || Chars == 8202 || (Chars | 2) == 8203 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0LL);
        return;
      }
LABEL_11:
      sub_B7076C(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_11;
  System_Text_StringBuilder__Append_42605224(v3, 0xAu, 0LL);
}


bool __fastcall WrapControlText__IsSpace(int32_t ch, const MethodInfo *method)
{
  return ch == 32 || ch == 8202 || (ch | 2) == 8203;
}


void __fastcall WrapControlText__ReplaceSpaceWithNewline(System_Text_StringBuilder_o **s, const MethodInfo *method)
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
    if ( Chars == 32 || Chars == 8202 || (Chars | 2) == 8203 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0LL);
        return;
      }
LABEL_10:
      sub_B7076C(v3, method);
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
  const MethodInfo *v9; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_435016C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435016C = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B7076C(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, 0, v9);
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
  const MethodInfo *v10; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_435016D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435016D = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B7076C(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, 0, v10);
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
  __int64 v12; // x1
  Il2CppObject *v14; // x19
  const MethodInfo *v15; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_435016B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_15725/*"WrapControlText textAdjust error: "*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435016B = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_22:
    sub_B7076C(IsNullOrEmpty, v12);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, 0, v15);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, maxHeight, v15);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_22;
  UILabel__set_text(label, text, 0LL);
  v14 = (Il2CppObject *)System_String__Concat_44758168((System_String_o *)StringLiteral_15725/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(v14, 0LL);
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
  System_String_o *v16; // x24
  System_String_o *Chars; // x0
  int32_t mHeight; // w22
  NGUIText_c *v20; // x0
  int32_t v21; // w0
  NGUIText_c *v22; // x8
  struct NGUIText_StaticFields *static_fields; // x9
  __int16 v24; // w10
  int v25; // w11
  int maxLines; // w10
  float v27; // s0
  float regionHeight; // s8
  int regionWidth; // w21
  int32_t v30; // w20
  float v31; // s0
  System_Text_StringBuilder_o *v32; // x20
  int32_t m_stringLength; // w25
  NGUIText_c *v34; // x0
  float v35; // s11
  int v36; // w23
  int32_t v37; // w27
  int v38; // w26
  float v39; // s12
  float v40; // s10
  int32_t v41; // w28
  float v42; // s8
  System_String_o *v43; // x1
  int32_t v45; // w21
  float *v46; // x22
  char v47; // w9
  int v48; // w20
  int32_t v49; // w22
  System_Text_StringBuilder_o *v50; // x21
  NGUIText_c *v51; // x8
  uint16_t v52; // w21
  int32_t v53; // w20
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v55; // x25
  float v56; // s9
  float GlyphWidth; // s0
  NGUIText_c *v58; // x0
  float v59; // s9
  _BOOL4 v60; // w8
  int32_t v61; // w20
  int32_t v62; // w27
  uint16_t v63; // w0
  System_Text_StringBuilder_o *v64; // x20
  float v65; // s13
  const MethodInfo *v66; // x1
  int32_t v67; // w20
  int v68; // w22
  int v69; // w1
  System_String_o *v70; // x22
  int32_t v71; // w0
  uint16_t v72; // w22
  NGUIText_c *v73; // x8
  int32_t v74; // w20
  BMSymbol_o *v75; // x0
  float v76; // s0
  NGUIText_c *v77; // x0
  float v78; // s9
  System_Text_StringBuilder_o *v79; // x22
  int32_t v80; // w0
  System_Text_StringBuilder_o *v82; // x20
  float v83; // s8
  NGUIText_c *v84; // x0
  float v85; // s0
  float v86; // s0
  double v87; // d0
  _BOOL4 v88; // w20
  System_String_o *v89; // x0
  NGUIText_c *v90; // x0
  float v91; // s0
  double v92; // d0
  int32_t v93; // w1
  NGUIText_c *v94; // x0
  int32_t v95; // w0
  int v96; // [xsp+4h] [xbp-DCh]
  int32_t *v97; // [xsp+8h] [xbp-D8h]
  char v98; // [xsp+10h] [xbp-D0h]
  bool v99; // [xsp+14h] [xbp-CCh]
  float *v100; // [xsp+18h] [xbp-C8h]
  int32_t v101; // [xsp+24h] [xbp-BCh]
  bool v102; // [xsp+28h] [xbp-B8h]
  int32_t textLength; // [xsp+2Ch] [xbp-B4h]
  System_String_o *v104; // [xsp+30h] [xbp-B0h]
  int v105; // [xsp+38h] [xbp-A8h]
  int32_t b; // [xsp+3Ch] [xbp-A4h]
  System_String_o *v107; // [xsp+40h] [xbp-A0h]
  System_String_o *v108; // [xsp+48h] [xbp-98h]
  int32_t index; // [xsp+54h] [xbp-8Ch] BYREF
  System_Text_StringBuilder_o *s; // [xsp+58h] [xbp-88h] BYREF

  v16 = text;
  if ( (byte_435016E & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NGUIText_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435016E = 1;
  }
  s = 0LL;
  index = 0;
  *widthOut = 0.0;
  *lineOut = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_43501AC )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_43501AC = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v108 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_43501AD )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_43501AD = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v107 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_43501AE )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_43501AE = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_260;
  mHeight = label->fields.mHeight;
  v104 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, maxHeight, 0LL);
    fsize = minSize;
  }
  UILabel__set_fontSize(label, fsize, 0LL);
  UILabel__UpdateNGUIText(label, 0LL);
  v20 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v20 = NGUIText_TypeInfo;
  }
  v20->static_fields->fontSize = fsize;
  v20->static_fields->fontScale = 1.0;
  v20->static_fields->pixelDensity = 1.0;
  v21 = UnityEngine_Mathf__RoundToInt((float)v20->static_fields->fontSize / v20->static_fields->pixelDensity, 0LL);
  v22 = NGUIText_TypeInfo;
  NGUIText_TypeInfo->static_fields->finalSize = v21;
  v22->static_fields->finalLineHeight = (float)(v22->static_fields->spacingY + (float)v22->static_fields->fontSize)
                                      * v22->static_fields->fontScale;
  static_fields = v22->static_fields;
  if ( static_fields->regionWidth < 1 )
    goto LABEL_73;
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->regionHeight < 1 )
    goto LABEL_73;
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->finalLineHeight < 1.0 )
    goto LABEL_73;
  v24 = WORD1(v22->vtable._0_Equals.methodPtr);
  if ( (v24 & 0x400) != 0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = NGUIText_TypeInfo;
      v24 = WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr);
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    v25 = v24 & 0x400;
  }
  else
  {
    v25 = 0;
  }
  maxLines = static_fields->maxLines;
  if ( maxLines <= 0 )
  {
    if ( v25 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = (float)static_fields->regionHeight;
  }
  else
  {
    if ( v25 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = NGUIText_TypeInfo->static_fields;
      maxLines = static_fields->maxLines;
    }
    v27 = UnityEngine_Mathf__Min(
            (float)static_fields->regionHeight,
            static_fields->finalLineHeight * (float)maxLines,
            0LL);
    v22 = NGUIText_TypeInfo;
    regionHeight = v27;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = NGUIText_TypeInfo;
  }
  regionWidth = 1000000;
  v30 = v22->static_fields->maxLines;
  if ( v30 < 1 )
  {
    v30 = 1000000;
  }
  else if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = NGUIText_TypeInfo;
    v30 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = NGUIText_TypeInfo;
  }
  v31 = UnityEngine_Mathf__Min((float)v30, regionHeight / v22->static_fields->finalLineHeight, 0LL);
  b = UnityEngine_Mathf__FloorToInt(v31 + 0.01, 0LL);
  if ( !b )
  {
LABEL_73:
    v43 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_74;
  }
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v16, 0LL);
  v32 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v32, 0LL);
  s = v32;
  if ( !v16 )
    goto LABEL_260;
  v100 = widthOut;
  v101 = minSize;
  m_stringLength = v16->fields.m_stringLength;
  if ( !fontSizeAdjust )
  {
    v34 = NGUIText_TypeInfo;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v34 = NGUIText_TypeInfo;
    }
    regionWidth = v34->static_fields->regionWidth;
  }
  v96 = mHeight;
  v102 = fontSizeAdjust;
  index = 0;
  if ( m_stringLength < 1 )
  {
    v45 = minSize;
    v46 = v100;
    v39 = 0.0;
    v41 = 1;
    v47 = 1;
    v40 = 0.0;
    goto LABEL_219;
  }
  v35 = (float)regionWidth;
  v99 = keepCharCount;
  v97 = lineOut;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  LODWORD(text) = 0;
  v39 = 0.0;
  v40 = 0.0;
  v41 = 1;
  v105 = 1;
  v42 = (float)regionWidth;
  v98 = 1;
  textLength = m_stringLength;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v16, (int32_t)text, 0LL);
    v49 = (unsigned __int16)Chars;
    v38 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars == 10 )
      break;
    v51 = NGUIText_TypeInfo;
    v52 = (unsigned __int16)Chars;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v51 = NGUIText_TypeInfo;
    }
    if ( !v51->static_fields->encoding )
      goto LABEL_98;
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v51);
    if ( !NGUIText__ParseSymbol(v16, &index, 0LL) )
    {
      v51 = NGUIText_TypeInfo;
LABEL_98:
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = NGUIText_TypeInfo;
      }
      if ( v51->static_fields->useSymbols )
      {
        v53 = index;
        if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v51);
        Symbol = NGUIText__GetSymbol(v16, v53, m_stringLength, 0LL);
        v51 = NGUIText_TypeInfo;
        if ( Symbol )
        {
          v55 = Symbol;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v51 = NGUIText_TypeInfo;
          }
          v56 = v51->static_fields->finalSpacingX + (float)(v51->static_fields->fontScale * (float)v55->fields.mAdvance);
          goto LABEL_120;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_113:
          if ( !v51->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v51);
        }
      }
      else if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_113;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v49, v37, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_212;
      v58 = NGUIText_TypeInfo;
      v59 = GlyphWidth;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v58 = NGUIText_TypeInfo;
      }
      v55 = 0LL;
      v56 = v59 + v58->static_fields->finalSpacingX;
LABEL_120:
      v60 = 1;
      if ( v52 != 32 && v52 != 8202 )
        v60 = (v49 | 2) == 8203;
      v42 = v42 - v56;
      if ( v60 && ((v38 ^ 1) & 1) != 0 )
      {
        v61 = index - v36;
        if ( index > v36 )
        {
          v62 = v61 + 1;
          if ( v41 == b && v42 <= 0.0 && index < textLength )
          {
            v63 = System_String__get_Chars(v16, index, 0LL);
            if ( v63 <= 0x20u || v63 == 8202 || (v63 | 2) == 8203 )
              v62 = v61;
          }
          v64 = s;
          Chars = System_String__Substring_44821904(v16, v36, v62, 0LL);
          if ( !v64 )
            goto LABEL_260;
          System_Text_StringBuilder__Append_42601980(v64, Chars, 0LL);
          v37 = v49;
          v105 = 0;
          v36 = index + 1;
        }
      }
      v65 = v39 + v56;
      if ( (UnityEngine_Mathf__RoundToInt(v42, 0LL) & 0x80000000) == 0 )
      {
        v39 = v39 + v56;
        if ( v55 )
          goto LABEL_137;
LABEL_210:
        v37 = v49;
        goto LABEL_211;
      }
      if ( v102 )
      {
        v68 = v105;
        goto LABEL_183;
      }
      v69 = index;
      v70 = v108;
      m_stringLength = textLength;
      if ( index )
      {
        while ( 1 )
        {
          Chars = (System_String_o *)System_String__get_Chars(v16, v69, 0LL);
          if ( !v70 )
            goto LABEL_260;
          v52 = (unsigned __int16)Chars;
          v71 = System_String__IndexOf(v70, (uint16_t)Chars, 0LL);
          v69 = index - 1;
          if ( (v71 & 0x80000000) != 0 )
          {
            v72 = System_String__get_Chars(v16, v69, 0LL);
            Chars = v107;
            if ( !v107 )
              goto LABEL_260;
            if ( (System_String__IndexOf(v107, v72, 0LL) & 0x80000000) != 0 )
            {
              if ( v52 != v72 )
                goto LABEL_157;
              Chars = v104;
              if ( !v104 )
                goto LABEL_260;
              if ( (System_String__IndexOf(v104, v52, 0LL) & 0x80000000) != 0 )
              {
LABEL_157:
                if ( ((unsigned __int16)(v52 - 48) > 9u || (unsigned __int16)(v72 - 48) > 9u)
                  && ((unsigned __int16)(v72 - 58) >= 0x21u && (unsigned __int16)(v72 - 97) > 0x19u
                   || (unsigned __int16)(v52 - 58) >= 0x21u && (unsigned __int16)(v52 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v70 = v108;
            v69 = index - 1;
            index = v69;
            if ( !v69 )
              break;
          }
          else
          {
            --index;
            if ( !v69 )
              break;
          }
        }
      }
      v73 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v73 = NGUIText_TypeInfo;
      }
      if ( v73->static_fields->useSymbols )
      {
        v74 = index;
        if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v73);
        v75 = NGUIText__GetSymbol(v16, v74, textLength, 0LL);
        v73 = NGUIText_TypeInfo;
        if ( v75 )
        {
          v55 = v75;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v68 = v105;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v73 = NGUIText_TypeInfo;
            }
          }
          else
          {
            v68 = v105;
          }
          v56 = v73->static_fields->finalSpacingX + (float)(v73->static_fields->fontScale * (float)v55->fields.mAdvance);
          goto LABEL_183;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_171:
          if ( !v73->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v73);
        }
      }
      else if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_171;
      }
      v76 = NGUIText__GetGlyphWidth(v52, v37, 0LL);
      if ( v76 == 0.0 )
      {
        v39 = v39 + v56;
        goto LABEL_212;
      }
      v77 = NGUIText_TypeInfo;
      v78 = v76;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v68 = v105;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v77 = NGUIText_TypeInfo;
        }
      }
      else
      {
        v68 = v105;
      }
      v55 = 0LL;
      v56 = v78 + v77->static_fields->finalSpacingX;
LABEL_183:
      if ( ((v41 != b) & (v68 ^ 1)) == 0 )
      {
        v79 = s;
        v80 = UnityEngine_Mathf__Max_41127884(0, index - v36, 0LL);
        Chars = System_String__Substring_44821904(v16, v36, v80, 0LL);
        if ( !v79 )
          goto LABEL_260;
        System_Text_StringBuilder__Append_42601980(v79, Chars, 0LL);
        if ( v52 == 32 || v52 == 8202 || (v52 | 2) == 8203 )
        {
          v48 = 1;
        }
        else
        {
          v48 = 0;
          v98 &= v38;
        }
        if ( v41++ == b )
        {
          v45 = v101;
          v46 = v100;
          lineOut = v97;
          m_stringLength = textLength;
          v39 = v65;
          goto LABEL_218;
        }
        if ( v99 )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        }
        else
        {
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v48 )
          v42 = v35;
        else
          v42 = v35 - v56;
        v36 = index + v48;
        v39 = 0.0;
        v49 = 0;
        if ( v40 < v65 )
          v40 = v65;
        v105 = 1;
        if ( !v55 )
          goto LABEL_210;
LABEL_137:
        v67 = index;
        v37 = 0;
        index = v67 + BMSymbol__get_length(v55, 0LL) - 1;
LABEL_211:
        m_stringLength = textLength;
        goto LABEL_212;
      }
      index = v36 - 1;
      if ( v40 < v65 )
        v40 = v65;
      ++v41;
      if ( v99 )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, v66);
        v37 = 0;
        v39 = 0.0;
        v105 = 1;
        v42 = v35;
        goto LABEL_211;
      }
      m_stringLength = textLength;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v37 = 0;
      v39 = 0.0;
LABEL_96:
      v105 = 1;
      v42 = v35;
      goto LABEL_212;
    }
    --index;
LABEL_212:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= m_stringLength )
      goto LABEL_215;
  }
  if ( v41 != b )
  {
    v50 = s;
    if ( v40 < v39 )
      v40 = v39;
    if ( index <= v36 )
    {
      if ( !s )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42605224(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_44821904(v16, v36, 1 - v36 + index, 0LL);
      if ( !v50 )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42601980(v50, Chars, 0LL);
    }
    v37 = 0;
    ++v41;
    v39 = 0.0;
    v36 = index + 1;
    goto LABEL_96;
  }
  text = (System_String_o *)(unsigned int)index;
  v41 = b;
LABEL_215:
  v45 = v101;
  v46 = v100;
  lineOut = v97;
  if ( (int)text > v36 )
  {
    v82 = s;
    Chars = System_String__Substring_44821904(v16, v36, (int)text - v36, 0LL);
    if ( v82 )
    {
      System_Text_StringBuilder__Append_42601980(v82, Chars, 0LL);
      goto LABEL_218;
    }
LABEL_260:
    sub_B7076C(Chars, text);
  }
LABEL_218:
  v47 = v98;
LABEL_219:
  if ( v40 >= v39 )
    v83 = v40;
  else
    v83 = v39;
  *v46 = v83;
  *lineOut = v41;
  if ( !v102 )
  {
    if ( (v47 & 1) != 0 )
    {
      if ( index == m_stringLength )
      {
        v88 = 0;
LABEL_240:
        Chars = (System_String_o *)s;
        if ( !s )
          goto LABEL_260;
        v89 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                                   s,
                                   s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        UILabel__set_text(label, v89, 0LL);
        if ( v45 >= 1 )
        {
          v90 = NGUIText_TypeInfo;
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v90 = NGUIText_TypeInfo;
          }
          v91 = v90->static_fields->finalLineHeight * (float)v41;
          if ( v91 == INFINITY )
            v92 = -v91;
          else
            v92 = v91;
          if ( v96 >= (int)v92 )
            v93 = v96;
          else
            v93 = (int)v92;
          UIWidget__set_height((UIWidget_o *)label, v93, 0LL);
        }
        return v88;
      }
      v94 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v94 = NGUIText_TypeInfo;
      }
      v95 = UnityEngine_Mathf__Min_41127788(v94->static_fields->maxLines, b, 0LL);
      v88 = v41 > v95;
      if ( v41 <= v95 || v45 > 0 )
        goto LABEL_240;
      return 1;
    }
    else
    {
      v88 = 1;
      if ( v45 >= 1 )
        goto LABEL_240;
    }
    return v88;
  }
  v84 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v84 = NGUIText_TypeInfo;
  }
  v85 = (float)v84->static_fields->regionWidth;
  if ( v83 > v85 )
  {
    if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v85 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    v86 = (float)(v85 / v83) * (float)label->fields.mFontSize;
    if ( v86 == INFINITY )
      v87 = -v86;
    else
      v87 = v86;
    UILabel__set_fontSize(label, (int)v87, 0LL);
    *v46 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
  }
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_260;
  v43 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                             s,
                             s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_74:
  UILabel__set_text(label, v43, 0LL);
  return 0;
}