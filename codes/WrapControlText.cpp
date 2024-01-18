void __fastcall WrapControlText___ctor(WrapControlText_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
      sub_B2C434(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_11;
  System_Text_StringBuilder__Append_42411944(v3, 0xAu, 0LL);
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
      sub_B2C434(v3, method);
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

  if ( (byte_4187436 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, text);
    byte_4187436 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B2C434(IsNullOrEmpty, v8);
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

  if ( (byte_4187437 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, text);
    byte_4187437 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B2C434(IsNullOrEmpty, v8);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  Il2CppObject *v17; // x19
  const MethodInfo *v18; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4187435 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, text);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15504/*"WrapControlText textAdjust error: "*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4187435 = 1;
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
    sub_B2C434(IsNullOrEmpty, v15);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, 0, v18);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, maxHeight, v18);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_22;
  UILabel__set_text(label, text, 0LL);
  v17 = (Il2CppObject *)System_String__Concat_44305532((System_String_o *)StringLiteral_15504/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(v17, 0LL);
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
  System_Text_StringBuilder_o *v35; // x20
  int32_t m_stringLength; // w25
  NGUIText_c *v37; // x0
  float v38; // s11
  int v39; // w23
  int32_t v40; // w27
  int v41; // w26
  float v42; // s12
  float v43; // s10
  int32_t v44; // w28
  float v45; // s8
  System_String_o *v46; // x1
  int32_t v48; // w21
  float *v49; // x22
  char v50; // w9
  int v51; // w20
  int32_t v52; // w22
  System_Text_StringBuilder_o *v53; // x21
  NGUIText_c *v54; // x8
  uint16_t v55; // w21
  int32_t v56; // w20
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v58; // x25
  float v59; // s9
  float GlyphWidth; // s0
  NGUIText_c *v61; // x0
  float v62; // s9
  _BOOL4 v63; // w8
  int32_t v64; // w20
  int32_t v65; // w27
  uint16_t v66; // w0
  System_Text_StringBuilder_o *v67; // x20
  float v68; // s13
  const MethodInfo *v69; // x1
  int32_t v70; // w20
  int v71; // w22
  int v72; // w1
  System_String_o *v73; // x22
  int32_t v74; // w0
  uint16_t v75; // w22
  NGUIText_c *v76; // x8
  int32_t v77; // w20
  BMSymbol_o *v78; // x0
  float v79; // s0
  NGUIText_c *v80; // x0
  float v81; // s9
  System_Text_StringBuilder_o *v82; // x22
  int32_t v83; // w0
  System_Text_StringBuilder_o *v85; // x20
  float v86; // s8
  NGUIText_c *v87; // x0
  float v88; // s0
  float v89; // s0
  double v90; // d0
  _BOOL4 v91; // w20
  System_String_o *v92; // x0
  NGUIText_c *v93; // x0
  float v94; // s0
  double v95; // d0
  int32_t v96; // w1
  NGUIText_c *v97; // x0
  int32_t v98; // w0
  int v99; // [xsp+4h] [xbp-DCh]
  int32_t *v100; // [xsp+8h] [xbp-D8h]
  char v101; // [xsp+10h] [xbp-D0h]
  bool v102; // [xsp+14h] [xbp-CCh]
  float *v103; // [xsp+18h] [xbp-C8h]
  int32_t v104; // [xsp+24h] [xbp-BCh]
  bool v105; // [xsp+28h] [xbp-B8h]
  int32_t textLength; // [xsp+2Ch] [xbp-B4h]
  System_String_o *v107; // [xsp+30h] [xbp-B0h]
  int v108; // [xsp+38h] [xbp-A8h]
  int32_t b; // [xsp+3Ch] [xbp-A4h]
  System_String_o *v110; // [xsp+40h] [xbp-A0h]
  System_String_o *v111; // [xsp+48h] [xbp-98h]
  int32_t index; // [xsp+54h] [xbp-8Ch] BYREF
  System_Text_StringBuilder_o *s; // [xsp+58h] [xbp-88h] BYREF

  v16 = text;
  if ( (byte_4187438 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, text);
    sub_B2C35C(&NGUIText_TypeInfo, v18);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    byte_4187438 = 1;
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
  if ( !byte_4187473 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, text);
    byte_4187473 = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v111 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_4187474 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4187474 = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v110 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_4187475 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_4187475 = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_260;
  mHeight = label->fields.mHeight;
  v107 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
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
    v46 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_74;
  }
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v16, 0LL);
  v35 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v35, 0LL);
  s = v35;
  if ( !v16 )
    goto LABEL_260;
  v103 = widthOut;
  v104 = minSize;
  m_stringLength = v16->fields.m_stringLength;
  if ( !fontSizeAdjust )
  {
    v37 = NGUIText_TypeInfo;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v37 = NGUIText_TypeInfo;
    }
    regionWidth = v37->static_fields->regionWidth;
  }
  v99 = mHeight;
  v105 = fontSizeAdjust;
  index = 0;
  if ( m_stringLength < 1 )
  {
    v48 = minSize;
    v49 = v103;
    v42 = 0.0;
    v44 = 1;
    v50 = 1;
    v43 = 0.0;
    goto LABEL_219;
  }
  v38 = (float)regionWidth;
  v102 = keepCharCount;
  v100 = lineOut;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  LODWORD(text) = 0;
  v42 = 0.0;
  v43 = 0.0;
  v44 = 1;
  v108 = 1;
  v45 = (float)regionWidth;
  v101 = 1;
  textLength = m_stringLength;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v16, (int32_t)text, 0LL);
    v52 = (unsigned __int16)Chars;
    v41 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars == 10 )
      break;
    v54 = NGUIText_TypeInfo;
    v55 = (unsigned __int16)Chars;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v54 = NGUIText_TypeInfo;
    }
    if ( !v54->static_fields->encoding )
      goto LABEL_98;
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v54);
    if ( !NGUIText__ParseSymbol(v16, &index, 0LL) )
    {
      v54 = NGUIText_TypeInfo;
LABEL_98:
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v54 = NGUIText_TypeInfo;
      }
      if ( v54->static_fields->useSymbols )
      {
        v56 = index;
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v54);
        Symbol = NGUIText__GetSymbol(v16, v56, m_stringLength, 0LL);
        v54 = NGUIText_TypeInfo;
        if ( Symbol )
        {
          v58 = Symbol;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v54 = NGUIText_TypeInfo;
          }
          v59 = v54->static_fields->finalSpacingX + (float)(v54->static_fields->fontScale * (float)v58->fields.mAdvance);
          goto LABEL_120;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_113:
          if ( !v54->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v54);
        }
      }
      else if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_113;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v52, v40, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_212;
      v61 = NGUIText_TypeInfo;
      v62 = GlyphWidth;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v61 = NGUIText_TypeInfo;
      }
      v58 = 0LL;
      v59 = v62 + v61->static_fields->finalSpacingX;
LABEL_120:
      v63 = 1;
      if ( v55 != 32 && v55 != 8202 )
        v63 = (v52 | 2) == 8203;
      v45 = v45 - v59;
      if ( v63 && ((v41 ^ 1) & 1) != 0 )
      {
        v64 = index - v39;
        if ( index > v39 )
        {
          v65 = v64 + 1;
          if ( v44 == b && v45 <= 0.0 && index < textLength )
          {
            v66 = System_String__get_Chars(v16, index, 0LL);
            if ( v66 <= 0x20u || v66 == 8202 || (v66 | 2) == 8203 )
              v65 = v64;
          }
          v67 = s;
          Chars = System_String__Substring_44369268(v16, v39, v65, 0LL);
          if ( !v67 )
            goto LABEL_260;
          System_Text_StringBuilder__Append_42408700(v67, Chars, 0LL);
          v40 = v52;
          v108 = 0;
          v39 = index + 1;
        }
      }
      v68 = v42 + v59;
      if ( (UnityEngine_Mathf__RoundToInt(v45, 0LL) & 0x80000000) == 0 )
      {
        v42 = v42 + v59;
        if ( v58 )
          goto LABEL_137;
LABEL_210:
        v40 = v52;
        goto LABEL_211;
      }
      if ( v105 )
      {
        v71 = v108;
        goto LABEL_183;
      }
      v72 = index;
      v73 = v111;
      m_stringLength = textLength;
      if ( index )
      {
        while ( 1 )
        {
          Chars = (System_String_o *)System_String__get_Chars(v16, v72, 0LL);
          if ( !v73 )
            goto LABEL_260;
          v55 = (unsigned __int16)Chars;
          v74 = System_String__IndexOf(v73, (uint16_t)Chars, 0LL);
          v72 = index - 1;
          if ( (v74 & 0x80000000) != 0 )
          {
            v75 = System_String__get_Chars(v16, v72, 0LL);
            Chars = v110;
            if ( !v110 )
              goto LABEL_260;
            if ( (System_String__IndexOf(v110, v75, 0LL) & 0x80000000) != 0 )
            {
              if ( v55 != v75 )
                goto LABEL_157;
              Chars = v107;
              if ( !v107 )
                goto LABEL_260;
              if ( (System_String__IndexOf(v107, v55, 0LL) & 0x80000000) != 0 )
              {
LABEL_157:
                if ( ((unsigned __int16)(v55 - 48) > 9u || (unsigned __int16)(v75 - 48) > 9u)
                  && ((unsigned __int16)(v75 - 58) >= 0x21u && (unsigned __int16)(v75 - 97) > 0x19u
                   || (unsigned __int16)(v55 - 58) >= 0x21u && (unsigned __int16)(v55 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v73 = v111;
            v72 = index - 1;
            index = v72;
            if ( !v72 )
              break;
          }
          else
          {
            --index;
            if ( !v72 )
              break;
          }
        }
      }
      v76 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v76 = NGUIText_TypeInfo;
      }
      if ( v76->static_fields->useSymbols )
      {
        v77 = index;
        if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v76);
        v78 = NGUIText__GetSymbol(v16, v77, textLength, 0LL);
        v76 = NGUIText_TypeInfo;
        if ( v78 )
        {
          v58 = v78;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v71 = v108;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v76 = NGUIText_TypeInfo;
            }
          }
          else
          {
            v71 = v108;
          }
          v59 = v76->static_fields->finalSpacingX + (float)(v76->static_fields->fontScale * (float)v58->fields.mAdvance);
          goto LABEL_183;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_171:
          if ( !v76->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v76);
        }
      }
      else if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_171;
      }
      v79 = NGUIText__GetGlyphWidth(v55, v40, 0LL);
      if ( v79 == 0.0 )
      {
        v42 = v42 + v59;
        goto LABEL_212;
      }
      v80 = NGUIText_TypeInfo;
      v81 = v79;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v71 = v108;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v80 = NGUIText_TypeInfo;
        }
      }
      else
      {
        v71 = v108;
      }
      v58 = 0LL;
      v59 = v81 + v80->static_fields->finalSpacingX;
LABEL_183:
      if ( ((v44 != b) & (v71 ^ 1)) == 0 )
      {
        v82 = s;
        v83 = UnityEngine_Mathf__Max_40694800(0, index - v39, 0LL);
        Chars = System_String__Substring_44369268(v16, v39, v83, 0LL);
        if ( !v82 )
          goto LABEL_260;
        System_Text_StringBuilder__Append_42408700(v82, Chars, 0LL);
        if ( v55 == 32 || v55 == 8202 || (v55 | 2) == 8203 )
        {
          v51 = 1;
        }
        else
        {
          v51 = 0;
          v101 &= v41;
        }
        if ( v44++ == b )
        {
          v48 = v104;
          v49 = v103;
          lineOut = v100;
          m_stringLength = textLength;
          v42 = v68;
          goto LABEL_218;
        }
        if ( v102 )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        }
        else
        {
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v51 )
          v45 = v38;
        else
          v45 = v38 - v59;
        v39 = index + v51;
        v42 = 0.0;
        v52 = 0;
        if ( v43 < v68 )
          v43 = v68;
        v108 = 1;
        if ( !v58 )
          goto LABEL_210;
LABEL_137:
        v70 = index;
        v40 = 0;
        index = v70 + BMSymbol__get_length(v58, 0LL) - 1;
LABEL_211:
        m_stringLength = textLength;
        goto LABEL_212;
      }
      index = v39 - 1;
      if ( v43 < v68 )
        v43 = v68;
      ++v44;
      if ( v102 )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, v69);
        v40 = 0;
        v42 = 0.0;
        v108 = 1;
        v45 = v38;
        goto LABEL_211;
      }
      m_stringLength = textLength;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v40 = 0;
      v42 = 0.0;
LABEL_96:
      v108 = 1;
      v45 = v38;
      goto LABEL_212;
    }
    --index;
LABEL_212:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= m_stringLength )
      goto LABEL_215;
  }
  if ( v44 != b )
  {
    v53 = s;
    if ( v43 < v42 )
      v43 = v42;
    if ( index <= v39 )
    {
      if ( !s )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42411944(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_44369268(v16, v39, 1 - v39 + index, 0LL);
      if ( !v53 )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42408700(v53, Chars, 0LL);
    }
    v40 = 0;
    ++v44;
    v42 = 0.0;
    v39 = index + 1;
    goto LABEL_96;
  }
  text = (System_String_o *)(unsigned int)index;
  v44 = b;
LABEL_215:
  v48 = v104;
  v49 = v103;
  lineOut = v100;
  if ( (int)text > v39 )
  {
    v85 = s;
    Chars = System_String__Substring_44369268(v16, v39, (int)text - v39, 0LL);
    if ( v85 )
    {
      System_Text_StringBuilder__Append_42408700(v85, Chars, 0LL);
      goto LABEL_218;
    }
LABEL_260:
    sub_B2C434(Chars, text);
  }
LABEL_218:
  v50 = v101;
LABEL_219:
  if ( v43 >= v42 )
    v86 = v43;
  else
    v86 = v42;
  *v49 = v86;
  *lineOut = v44;
  if ( !v105 )
  {
    if ( (v50 & 1) != 0 )
    {
      if ( index == m_stringLength )
      {
        v91 = 0;
LABEL_240:
        Chars = (System_String_o *)s;
        if ( !s )
          goto LABEL_260;
        v92 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                                   s,
                                   s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        UILabel__set_text(label, v92, 0LL);
        if ( v48 >= 1 )
        {
          v93 = NGUIText_TypeInfo;
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v93 = NGUIText_TypeInfo;
          }
          v94 = v93->static_fields->finalLineHeight * (float)v44;
          if ( v94 == INFINITY )
            v95 = -v94;
          else
            v95 = v94;
          if ( v99 >= (int)v95 )
            v96 = v99;
          else
            v96 = (int)v95;
          UIWidget__set_height((UIWidget_o *)label, v96, 0LL);
        }
        return v91;
      }
      v97 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v97 = NGUIText_TypeInfo;
      }
      v98 = UnityEngine_Mathf__Min_40694704(v97->static_fields->maxLines, b, 0LL);
      v91 = v44 > v98;
      if ( v44 <= v98 || v48 > 0 )
        goto LABEL_240;
      return 1;
    }
    else
    {
      v91 = 1;
      if ( v48 >= 1 )
        goto LABEL_240;
    }
    return v91;
  }
  v87 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v87 = NGUIText_TypeInfo;
  }
  v88 = (float)v87->static_fields->regionWidth;
  if ( v86 > v88 )
  {
    if ( (BYTE3(v87->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v87);
      v88 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    v89 = (float)(v88 / v86) * (float)label->fields.mFontSize;
    if ( v89 == INFINITY )
      v90 = -v89;
    else
      v90 = v89;
    UILabel__set_fontSize(label, (int)v90, 0LL);
    *v49 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
  }
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_260;
  v46 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                             s,
                             s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_74:
  UILabel__set_text(label, v46, 0LL);
  return 0;
}