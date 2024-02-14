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
    sub_B0D97C(0LL);
  return (UnityEngine_Mathf__Min_40819044(text->fields.m_stringLength % (width / fontSize), 1, 0LL)
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
      sub_B0D97C(v3);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_11;
  System_Text_StringBuilder__Append_42158644(v3, 0xAu, 0LL);
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
      sub_B0D97C(v3);
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

  if ( (byte_4213FBA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, text);
    byte_4213FBA = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B0D97C(IsNullOrEmpty);
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

  if ( (byte_4213FBB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, text);
    byte_4213FBB = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B0D97C(IsNullOrEmpty);
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
  const MethodInfo *v17; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4213FB9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, text);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_15551/*"WrapControlText textAdjust error: "*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4213FB9 = 1;
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
    sub_B0D97C(IsNullOrEmpty);
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
    goto LABEL_22;
  UILabel__set_text(label, text, 0LL);
  v16 = (Il2CppObject *)System_String__Concat_43849904((System_String_o *)StringLiteral_15551/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o *Chars; // x0
  int32_t mHeight; // w22
  NGUIText_c *v23; // x0
  int32_t v24; // w0
  NGUIText_c *v25; // x8
  struct NGUIText_StaticFields *static_fields; // x9
  __int16 v27; // w10
  int v28; // w11
  int maxLines; // w10
  float v30; // s0
  float regionHeight; // s8
  int regionWidth; // w21
  int32_t v33; // w20
  float v34; // s0
  __int64 v35; // x1
  __int64 v36; // x2
  System_Text_StringBuilder_o *v37; // x20
  int m_stringLength; // w25
  NGUIText_c *v39; // x0
  float v40; // s11
  int v41; // w23
  int32_t v42; // w27
  int v43; // w26
  int32_t v44; // w1
  float v45; // s12
  float v46; // s10
  int32_t v47; // w28
  float v48; // s8
  System_String_o *v49; // x1
  int32_t v51; // w21
  float *v52; // x22
  char v53; // w9
  int v54; // w20
  int32_t v55; // w22
  System_Text_StringBuilder_o *v56; // x21
  NGUIText_c *v57; // x8
  uint16_t v58; // w21
  int32_t v59; // w20
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v61; // x25
  float v62; // s9
  float GlyphWidth; // s0
  NGUIText_c *v64; // x0
  float v65; // s9
  _BOOL4 v66; // w8
  int32_t v67; // w20
  int32_t v68; // w27
  uint16_t v69; // w0
  System_Text_StringBuilder_o *v70; // x20
  float v71; // s13
  const MethodInfo *v72; // x1
  int32_t v73; // w20
  int v74; // w22
  int v75; // w1
  System_String_o *v76; // x22
  int32_t v77; // w0
  uint16_t v78; // w22
  NGUIText_c *v79; // x8
  int32_t v80; // w20
  BMSymbol_o *v81; // x0
  float v82; // s0
  NGUIText_c *v83; // x0
  float v84; // s9
  System_Text_StringBuilder_o *v85; // x22
  int32_t v86; // w0
  const MethodInfo *v87; // x1
  System_Text_StringBuilder_o *v89; // x20
  float v90; // s8
  NGUIText_c *v91; // x0
  float v92; // s0
  float v93; // s0
  double v94; // d0
  _BOOL4 v95; // w20
  System_String_o *v96; // x0
  NGUIText_c *v97; // x0
  float v98; // s0
  double v99; // d0
  int32_t v100; // w1
  NGUIText_c *v101; // x0
  int32_t v102; // w0
  int v103; // [xsp+4h] [xbp-DCh]
  int32_t *v104; // [xsp+8h] [xbp-D8h]
  char v105; // [xsp+10h] [xbp-D0h]
  bool v106; // [xsp+14h] [xbp-CCh]
  float *v107; // [xsp+18h] [xbp-C8h]
  int32_t v108; // [xsp+24h] [xbp-BCh]
  bool v109; // [xsp+28h] [xbp-B8h]
  int32_t textLength; // [xsp+2Ch] [xbp-B4h]
  System_String_o *v111; // [xsp+30h] [xbp-B0h]
  int v112; // [xsp+38h] [xbp-A8h]
  int32_t b; // [xsp+3Ch] [xbp-A4h]
  System_String_o *v114; // [xsp+40h] [xbp-A0h]
  System_String_o *v115; // [xsp+48h] [xbp-98h]
  int32_t index; // [xsp+54h] [xbp-8Ch] BYREF
  System_Text_StringBuilder_o *s; // [xsp+58h] [xbp-88h] BYREF

  if ( (byte_4213FBC & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, text);
    sub_B0D8A4(&NGUIText_TypeInfo, v18);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_4213FBC = 1;
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
  if ( !byte_4213FF7 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, text);
    byte_4213FF7 = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v115 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4213FF8 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4213FF8 = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v114 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4213FF9 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4213FF9 = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_260;
  mHeight = label->fields.mHeight;
  v111 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, maxHeight, 0LL);
    fsize = minSize;
  }
  UILabel__set_fontSize(label, fsize, 0LL);
  UILabel__UpdateNGUIText(label, 0LL);
  v23 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v23 = NGUIText_TypeInfo;
  }
  v23->static_fields->fontSize = fsize;
  v23->static_fields->fontScale = 1.0;
  v23->static_fields->pixelDensity = 1.0;
  v24 = UnityEngine_Mathf__RoundToInt((float)v23->static_fields->fontSize / v23->static_fields->pixelDensity, 0LL);
  v25 = NGUIText_TypeInfo;
  NGUIText_TypeInfo->static_fields->finalSize = v24;
  v25->static_fields->finalLineHeight = (float)(v25->static_fields->spacingY + (float)v25->static_fields->fontSize)
                                      * v25->static_fields->fontScale;
  static_fields = v25->static_fields;
  if ( static_fields->regionWidth < 1 )
    goto LABEL_73;
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->regionHeight < 1 )
    goto LABEL_73;
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->finalLineHeight < 1.0 )
    goto LABEL_73;
  v27 = WORD1(v25->vtable._0_Equals.methodPtr);
  if ( (v27 & 0x400) != 0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = NGUIText_TypeInfo;
      v27 = WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr);
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    v28 = v27 & 0x400;
  }
  else
  {
    v28 = 0;
  }
  maxLines = static_fields->maxLines;
  if ( maxLines <= 0 )
  {
    if ( v28 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = (float)static_fields->regionHeight;
  }
  else
  {
    if ( v28 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = NGUIText_TypeInfo->static_fields;
      maxLines = static_fields->maxLines;
    }
    v30 = UnityEngine_Mathf__Min(
            (float)static_fields->regionHeight,
            static_fields->finalLineHeight * (float)maxLines,
            0LL);
    v25 = NGUIText_TypeInfo;
    regionHeight = v30;
  }
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = NGUIText_TypeInfo;
  }
  regionWidth = 1000000;
  v33 = v25->static_fields->maxLines;
  if ( v33 < 1 )
  {
    v33 = 1000000;
  }
  else if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = NGUIText_TypeInfo;
    v33 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = NGUIText_TypeInfo;
  }
  v34 = UnityEngine_Mathf__Min((float)v33, regionHeight / v25->static_fields->finalLineHeight, 0LL);
  b = UnityEngine_Mathf__FloorToInt(v34 + 0.01, 0LL);
  if ( !b )
  {
LABEL_73:
    v49 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_74;
  }
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(text, 0LL);
  v37 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v35, v36);
  System_Text_StringBuilder___ctor(v37, 0LL);
  s = v37;
  if ( !text )
    goto LABEL_260;
  v107 = widthOut;
  v108 = minSize;
  m_stringLength = text->fields.m_stringLength;
  if ( !fontSizeAdjust )
  {
    v39 = NGUIText_TypeInfo;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v39 = NGUIText_TypeInfo;
    }
    regionWidth = v39->static_fields->regionWidth;
  }
  v103 = mHeight;
  v109 = fontSizeAdjust;
  index = 0;
  if ( m_stringLength < 1 )
  {
    v51 = minSize;
    v52 = v107;
    v45 = 0.0;
    v47 = 1;
    v53 = 1;
    v46 = 0.0;
    goto LABEL_219;
  }
  v40 = (float)regionWidth;
  v106 = keepCharCount;
  v104 = lineOut;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0.0;
  v46 = 0.0;
  v47 = 1;
  v112 = 1;
  v48 = (float)regionWidth;
  v105 = 1;
  textLength = m_stringLength;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(text, v44, 0LL);
    v55 = (unsigned __int16)Chars;
    v43 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars == 10 )
      break;
    v57 = NGUIText_TypeInfo;
    v58 = (unsigned __int16)Chars;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v57 = NGUIText_TypeInfo;
    }
    if ( !v57->static_fields->encoding )
      goto LABEL_98;
    if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v57);
    if ( !NGUIText__ParseSymbol(text, &index, 0LL) )
    {
      v57 = NGUIText_TypeInfo;
LABEL_98:
      if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        v57 = NGUIText_TypeInfo;
      }
      if ( v57->static_fields->useSymbols )
      {
        v59 = index;
        if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v57);
        Symbol = NGUIText__GetSymbol(text, v59, m_stringLength, 0LL);
        v57 = NGUIText_TypeInfo;
        if ( Symbol )
        {
          v61 = Symbol;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v57 = NGUIText_TypeInfo;
          }
          v62 = v57->static_fields->finalSpacingX + (float)(v57->static_fields->fontScale * (float)v61->fields.mAdvance);
          goto LABEL_120;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_113:
          if ( !v57->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v57);
        }
      }
      else if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_113;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v55, v42, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_212;
      v64 = NGUIText_TypeInfo;
      v65 = GlyphWidth;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v64 = NGUIText_TypeInfo;
      }
      v61 = 0LL;
      v62 = v65 + v64->static_fields->finalSpacingX;
LABEL_120:
      v66 = 1;
      if ( v58 != 32 && v58 != 8202 )
        v66 = (v55 | 2) == 8203;
      v48 = v48 - v62;
      if ( v66 && ((v43 ^ 1) & 1) != 0 )
      {
        v67 = index - v41;
        if ( index > v41 )
        {
          v68 = v67 + 1;
          if ( v47 == b && v48 <= 0.0 && index < textLength )
          {
            v69 = System_String__get_Chars(text, index, 0LL);
            if ( v69 <= 0x20u || v69 == 8202 || (v69 | 2) == 8203 )
              v68 = v67;
          }
          v70 = s;
          Chars = System_String__Substring_43913640(text, v41, v68, 0LL);
          if ( !v70 )
            goto LABEL_260;
          System_Text_StringBuilder__Append_42155400(v70, Chars, 0LL);
          v42 = v55;
          v112 = 0;
          v41 = index + 1;
        }
      }
      v71 = v45 + v62;
      if ( (UnityEngine_Mathf__RoundToInt(v48, 0LL) & 0x80000000) == 0 )
      {
        v45 = v45 + v62;
        if ( v61 )
          goto LABEL_137;
LABEL_210:
        v42 = v55;
        goto LABEL_211;
      }
      if ( v109 )
      {
        v74 = v112;
        goto LABEL_183;
      }
      v75 = index;
      v76 = v115;
      m_stringLength = textLength;
      if ( index )
      {
        while ( 1 )
        {
          Chars = (System_String_o *)System_String__get_Chars(text, v75, 0LL);
          if ( !v76 )
            goto LABEL_260;
          v58 = (unsigned __int16)Chars;
          v77 = System_String__IndexOf(v76, (uint16_t)Chars, 0LL);
          v75 = index - 1;
          if ( (v77 & 0x80000000) != 0 )
          {
            v78 = System_String__get_Chars(text, v75, 0LL);
            Chars = v114;
            if ( !v114 )
              goto LABEL_260;
            if ( (System_String__IndexOf(v114, v78, 0LL) & 0x80000000) != 0 )
            {
              if ( v58 != v78 )
                goto LABEL_157;
              Chars = v111;
              if ( !v111 )
                goto LABEL_260;
              if ( (System_String__IndexOf(v111, v58, 0LL) & 0x80000000) != 0 )
              {
LABEL_157:
                if ( ((unsigned __int16)(v58 - 48) > 9u || (unsigned __int16)(v78 - 48) > 9u)
                  && ((unsigned __int16)(v78 - 58) >= 0x21u && (unsigned __int16)(v78 - 97) > 0x19u
                   || (unsigned __int16)(v58 - 58) >= 0x21u && (unsigned __int16)(v58 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v76 = v115;
            v75 = index - 1;
            index = v75;
            if ( !v75 )
              break;
          }
          else
          {
            --index;
            if ( !v75 )
              break;
          }
        }
      }
      v79 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v79 = NGUIText_TypeInfo;
      }
      if ( v79->static_fields->useSymbols )
      {
        v80 = index;
        if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v79);
        v81 = NGUIText__GetSymbol(text, v80, textLength, 0LL);
        v79 = NGUIText_TypeInfo;
        if ( v81 )
        {
          v61 = v81;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v74 = v112;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v79 = NGUIText_TypeInfo;
            }
          }
          else
          {
            v74 = v112;
          }
          v62 = v79->static_fields->finalSpacingX + (float)(v79->static_fields->fontScale * (float)v61->fields.mAdvance);
          goto LABEL_183;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_171:
          if ( !v79->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v79);
        }
      }
      else if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_171;
      }
      v82 = NGUIText__GetGlyphWidth(v58, v42, 0LL);
      if ( v82 == 0.0 )
      {
        v45 = v45 + v62;
        goto LABEL_212;
      }
      v83 = NGUIText_TypeInfo;
      v84 = v82;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v74 = v112;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v83 = NGUIText_TypeInfo;
        }
      }
      else
      {
        v74 = v112;
      }
      v61 = 0LL;
      v62 = v84 + v83->static_fields->finalSpacingX;
LABEL_183:
      if ( ((v47 != b) & (v74 ^ 1)) == 0 )
      {
        v85 = s;
        v86 = UnityEngine_Mathf__Max_40819140(0, index - v41, 0LL);
        Chars = System_String__Substring_43913640(text, v41, v86, 0LL);
        if ( !v85 )
          goto LABEL_260;
        System_Text_StringBuilder__Append_42155400(v85, Chars, 0LL);
        if ( v58 == 32 || v58 == 8202 || (v58 | 2) == 8203 )
        {
          v54 = 1;
        }
        else
        {
          v54 = 0;
          v105 &= v43;
        }
        if ( v47++ == b )
        {
          v51 = v108;
          v52 = v107;
          lineOut = v104;
          m_stringLength = textLength;
          v45 = v71;
          goto LABEL_218;
        }
        if ( v106 )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, v87);
        }
        else
        {
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v54 )
          v48 = v40;
        else
          v48 = v40 - v62;
        v41 = index + v54;
        v45 = 0.0;
        v55 = 0;
        if ( v46 < v71 )
          v46 = v71;
        v112 = 1;
        if ( !v61 )
          goto LABEL_210;
LABEL_137:
        v73 = index;
        v42 = 0;
        index = v73 + BMSymbol__get_length(v61, 0LL) - 1;
LABEL_211:
        m_stringLength = textLength;
        goto LABEL_212;
      }
      index = v41 - 1;
      if ( v46 < v71 )
        v46 = v71;
      ++v47;
      if ( v106 )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, v72);
        v42 = 0;
        v45 = 0.0;
        v112 = 1;
        v48 = v40;
        goto LABEL_211;
      }
      m_stringLength = textLength;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v42 = 0;
      v45 = 0.0;
LABEL_96:
      v112 = 1;
      v48 = v40;
      goto LABEL_212;
    }
    --index;
LABEL_212:
    v44 = ++index;
    if ( index >= m_stringLength )
      goto LABEL_215;
  }
  if ( v47 != b )
  {
    v56 = s;
    if ( v46 < v45 )
      v46 = v45;
    if ( index <= v41 )
    {
      if ( !s )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42158644(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_43913640(text, v41, 1 - v41 + index, 0LL);
      if ( !v56 )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42155400(v56, Chars, 0LL);
    }
    v42 = 0;
    ++v47;
    v45 = 0.0;
    v41 = index + 1;
    goto LABEL_96;
  }
  v44 = index;
  v47 = b;
LABEL_215:
  v51 = v108;
  v52 = v107;
  lineOut = v104;
  if ( v44 > v41 )
  {
    v89 = s;
    Chars = System_String__Substring_43913640(text, v41, v44 - v41, 0LL);
    if ( v89 )
    {
      System_Text_StringBuilder__Append_42155400(v89, Chars, 0LL);
      goto LABEL_218;
    }
LABEL_260:
    sub_B0D97C(Chars);
  }
LABEL_218:
  v53 = v105;
LABEL_219:
  if ( v46 >= v45 )
    v90 = v46;
  else
    v90 = v45;
  *v52 = v90;
  *lineOut = v47;
  if ( !v109 )
  {
    if ( (v53 & 1) != 0 )
    {
      if ( index == m_stringLength )
      {
        v95 = 0;
LABEL_240:
        Chars = (System_String_o *)s;
        if ( !s )
          goto LABEL_260;
        v96 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                                   s,
                                   s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        UILabel__set_text(label, v96, 0LL);
        if ( v51 >= 1 )
        {
          v97 = NGUIText_TypeInfo;
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v97 = NGUIText_TypeInfo;
          }
          v98 = v97->static_fields->finalLineHeight * (float)v47;
          if ( v98 == INFINITY )
            v99 = -v98;
          else
            v99 = v98;
          if ( v103 >= (int)v99 )
            v100 = v103;
          else
            v100 = (int)v99;
          UIWidget__set_height((UIWidget_o *)label, v100, 0LL);
        }
        return v95;
      }
      v101 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v101 = NGUIText_TypeInfo;
      }
      v102 = UnityEngine_Mathf__Min_40819044(v101->static_fields->maxLines, b, 0LL);
      v95 = v47 > v102;
      if ( v47 <= v102 || v51 > 0 )
        goto LABEL_240;
      return 1;
    }
    else
    {
      v95 = 1;
      if ( v51 >= 1 )
        goto LABEL_240;
    }
    return v95;
  }
  v91 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v91 = NGUIText_TypeInfo;
  }
  v92 = (float)v91->static_fields->regionWidth;
  if ( v90 > v92 )
  {
    if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 && !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      v92 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    v93 = (float)(v92 / v90) * (float)label->fields.mFontSize;
    if ( v93 == INFINITY )
      v94 = -v93;
    else
      v94 = v93;
    UILabel__set_fontSize(label, (int)v94, 0LL);
    *v52 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
  }
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_260;
  v49 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                             s,
                             s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_74:
  UILabel__set_text(label, v49, 0LL);
  return 0;
}