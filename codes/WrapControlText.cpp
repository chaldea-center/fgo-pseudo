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
    if ( !*s )
      goto LABEL_11;
    Chars = System_Text_StringBuilder__get_Chars(*s, v4, 0LL);
    if ( Chars == 32 || Chars == 8202 || (Chars | 2) == 8203 )
    {
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(*s, v4, 0xAu, 0LL);
        return;
      }
LABEL_11:
      sub_B170D4();
    }
  }
  if ( !*s )
    goto LABEL_11;
  System_Text_StringBuilder__Append_41917484(*s, 0xAu, 0LL);
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
    if ( !*s )
      goto LABEL_10;
    Chars = System_Text_StringBuilder__get_Chars(*s, v4, 0LL);
    if ( Chars == 32 || Chars == 8202 || (Chars | 2) == 8203 )
    {
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(*s, v4, 0xAu, 0LL);
        return;
      }
LABEL_10:
      sub_B170D4();
    }
  }
}


void __fastcall WrapControlText__fontSizeAdjust(
        UILabel_o *label,
        System_String_o *text,
        int32_t defaultSize,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F6794 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, text);
    byte_40F6794 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  if ( System_String__IsNullOrEmpty(text, 0LL) )
  {
    if ( !label )
      sub_B170D4();
    UILabel__set_text(label, (System_String_o *)StringLiteral_1, 0LL);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, 0, v7);
  }
}


float __fastcall WrapControlText__getFontWidth(
        UILabel_o *label,
        System_String_o *text,
        int32_t maxSize,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+8h] [xbp-38h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F6795 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, text);
    byte_40F6795 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  if ( System_String__IsNullOrEmpty(text, 0LL) )
  {
    if ( !label )
      sub_B170D4();
    UILabel__set_text(label, (System_String_o *)StringLiteral_1, 0LL);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, 0, v8);
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
  Il2CppObject *v15; // x19
  const MethodInfo *v16; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F6793 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, text);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15441, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40F6793 = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
    return 0;
  if ( System_String__IsNullOrEmpty(text, 0LL) )
  {
    if ( label )
    {
      UILabel__set_text(label, (System_String_o *)StringLiteral_1, 0LL);
      return 0;
    }
LABEL_22:
    sub_B170D4();
  }
  do
  {
    if ( !WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, 0, v16) )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, maxHeight, v16);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_22;
  UILabel__set_text(label, text, 0LL);
  v15 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)StringLiteral_15441, text, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
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
        int32_t maxHeight,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  LocalizationManager_c *v21; // x0
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
  __int64 v37; // x3
  __int64 v38; // x4
  System_Text_StringBuilder_o *v39; // x20
  int m_stringLength; // w25
  NGUIText_c *v41; // x0
  float v42; // s11
  int v43; // w23
  int32_t v44; // w27
  int v45; // w26
  int32_t v46; // w1
  float v47; // s12
  float v48; // s10
  int32_t v49; // w28
  float v50; // s8
  System_String_o *v51; // x1
  int32_t v53; // w21
  float *v54; // x22
  char v55; // w9
  int v56; // w20
  uint16_t Chars; // w0
  int32_t v58; // w22
  System_Text_StringBuilder_o *v59; // x21
  System_String_o *v60; // x0
  NGUIText_c *v61; // x8
  uint16_t v62; // w21
  int32_t v63; // w20
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v65; // x25
  float v66; // s9
  float GlyphWidth; // s0
  NGUIText_c *v68; // x0
  float v69; // s9
  _BOOL4 v70; // w8
  int32_t v71; // w20
  int32_t v72; // w27
  uint16_t v73; // w0
  System_Text_StringBuilder_o *v74; // x20
  System_String_o *v75; // x0
  float v76; // s13
  const MethodInfo *v77; // x1
  int32_t v78; // w20
  int v79; // w22
  int v80; // w1
  System_String_o *v81; // x22
  uint16_t v82; // w0
  int32_t v83; // w0
  uint16_t v84; // w22
  NGUIText_c *v85; // x8
  int32_t v86; // w20
  BMSymbol_o *v87; // x0
  float v88; // s0
  NGUIText_c *v89; // x0
  float v90; // s9
  System_Text_StringBuilder_o *v91; // x22
  int32_t v92; // w0
  System_String_o *v93; // x0
  const MethodInfo *v94; // x1
  System_Text_StringBuilder_o *v96; // x20
  System_String_o *v97; // x0
  float v98; // s8
  NGUIText_c *v99; // x0
  float v100; // s0
  float v101; // s0
  double v102; // d0
  _BOOL4 v103; // w20
  System_String_o *v104; // x0
  NGUIText_c *v105; // x0
  float v106; // s0
  double v107; // d0
  int32_t v108; // w1
  NGUIText_c *v109; // x0
  int32_t v110; // w0
  int v111; // [xsp+4h] [xbp-DCh]
  int32_t *v112; // [xsp+8h] [xbp-D8h]
  char v113; // [xsp+10h] [xbp-D0h]
  bool v114; // [xsp+14h] [xbp-CCh]
  float *v115; // [xsp+18h] [xbp-C8h]
  int32_t v116; // [xsp+24h] [xbp-BCh]
  bool v117; // [xsp+28h] [xbp-B8h]
  int32_t textLength; // [xsp+2Ch] [xbp-B4h]
  System_String_o *kinsokuSeparationString; // [xsp+30h] [xbp-B0h]
  int v120; // [xsp+38h] [xbp-A8h]
  int32_t b; // [xsp+3Ch] [xbp-A4h]
  System_String_o *kinsokuLastString; // [xsp+40h] [xbp-A0h]
  System_String_o *kinsokuTopString; // [xsp+48h] [xbp-98h]
  int32_t index; // [xsp+54h] [xbp-8Ch] BYREF
  System_Text_StringBuilder_o *s; // [xsp+58h] [xbp-88h] BYREF

  if ( (byte_40F6796 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, text);
    sub_B16FFC(&NGUIText_TypeInfo, v18);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    byte_40F6796 = 1;
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
  if ( !byte_40F689E )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, text);
    byte_40F689E = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  kinsokuTopString = v21->static_fields->kinsokuTopString;
  if ( !byte_40F689F )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, text);
    v21 = LocalizationManager_TypeInfo;
    byte_40F689F = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = LocalizationManager_TypeInfo;
  }
  kinsokuLastString = v21->static_fields->kinsokuLastString;
  if ( !byte_40F68A0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, text);
    v21 = LocalizationManager_TypeInfo;
    byte_40F68A0 = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_260;
  mHeight = label->fields.mHeight;
  kinsokuSeparationString = v21->static_fields->kinsokuSeparationString;
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
    v51 = (System_String_o *)StringLiteral_1;
    goto LABEL_74;
  }
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(text, 0LL);
  v39 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v35, v36, v37, v38);
  System_Text_StringBuilder___ctor(v39, 0LL);
  s = v39;
  if ( !text )
    goto LABEL_260;
  v115 = widthOut;
  v116 = minSize;
  m_stringLength = text->fields.m_stringLength;
  if ( !fontSizeAdjust )
  {
    v41 = NGUIText_TypeInfo;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v41 = NGUIText_TypeInfo;
    }
    regionWidth = v41->static_fields->regionWidth;
  }
  v111 = mHeight;
  v117 = fontSizeAdjust;
  index = 0;
  if ( m_stringLength < 1 )
  {
    v53 = minSize;
    v54 = v115;
    v47 = 0.0;
    v49 = 1;
    v55 = 1;
    v48 = 0.0;
    goto LABEL_219;
  }
  v42 = (float)regionWidth;
  v114 = keepCharCount;
  v112 = lineOut;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0.0;
  v48 = 0.0;
  v49 = 1;
  v120 = 1;
  v50 = (float)regionWidth;
  v113 = 1;
  textLength = m_stringLength;
  while ( 1 )
  {
    Chars = System_String__get_Chars(text, v46, 0LL);
    v58 = Chars;
    v45 |= (unsigned __int16)(Chars >> 12) > 2u;
    if ( Chars == 10 )
      break;
    v61 = NGUIText_TypeInfo;
    v62 = Chars;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v61 = NGUIText_TypeInfo;
    }
    if ( !v61->static_fields->encoding )
      goto LABEL_98;
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v61);
    if ( !NGUIText__ParseSymbol(text, &index, 0LL) )
    {
      v61 = NGUIText_TypeInfo;
LABEL_98:
      if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        v61 = NGUIText_TypeInfo;
      }
      if ( v61->static_fields->useSymbols )
      {
        v63 = index;
        if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v61);
        Symbol = NGUIText__GetSymbol(text, v63, m_stringLength, 0LL);
        v61 = NGUIText_TypeInfo;
        if ( Symbol )
        {
          v65 = Symbol;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v61 = NGUIText_TypeInfo;
          }
          v66 = v61->static_fields->finalSpacingX + (float)(v61->static_fields->fontScale * (float)v65->fields.mAdvance);
          goto LABEL_120;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_113:
          if ( !v61->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v61);
        }
      }
      else if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_113;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v58, v44, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_212;
      v68 = NGUIText_TypeInfo;
      v69 = GlyphWidth;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v68 = NGUIText_TypeInfo;
      }
      v65 = 0LL;
      v66 = v69 + v68->static_fields->finalSpacingX;
LABEL_120:
      v70 = 1;
      if ( v62 != 32 && v62 != 8202 )
        v70 = (v58 | 2) == 8203;
      v50 = v50 - v66;
      if ( v70 && ((v45 ^ 1) & 1) != 0 )
      {
        v71 = index - v43;
        if ( index > v43 )
        {
          v72 = v71 + 1;
          if ( v49 == b && v50 <= 0.0 && index < textLength )
          {
            v73 = System_String__get_Chars(text, index, 0LL);
            if ( v73 <= 0x20u || v73 == 8202 || (v73 | 2) == 8203 )
              v72 = v71;
          }
          v74 = s;
          v75 = System_String__Substring_43807468(text, v43, v72, 0LL);
          if ( !v74 )
            goto LABEL_260;
          System_Text_StringBuilder__Append_41914240(v74, v75, 0LL);
          v44 = v58;
          v120 = 0;
          v43 = index + 1;
        }
      }
      v76 = v47 + v66;
      if ( (UnityEngine_Mathf__RoundToInt(v50, 0LL) & 0x80000000) == 0 )
      {
        v47 = v47 + v66;
        if ( v65 )
          goto LABEL_137;
LABEL_210:
        v44 = v58;
        goto LABEL_211;
      }
      if ( v117 )
      {
        v79 = v120;
        goto LABEL_183;
      }
      v80 = index;
      v81 = kinsokuTopString;
      m_stringLength = textLength;
      if ( index )
      {
        while ( 1 )
        {
          v82 = System_String__get_Chars(text, v80, 0LL);
          if ( !v81 )
            goto LABEL_260;
          v62 = v82;
          v83 = System_String__IndexOf(v81, v82, 0LL);
          v80 = index - 1;
          if ( (v83 & 0x80000000) != 0 )
          {
            v84 = System_String__get_Chars(text, v80, 0LL);
            if ( !kinsokuLastString )
              goto LABEL_260;
            if ( (System_String__IndexOf(kinsokuLastString, v84, 0LL) & 0x80000000) != 0 )
            {
              if ( v62 != v84 )
                goto LABEL_157;
              if ( !kinsokuSeparationString )
                goto LABEL_260;
              if ( (System_String__IndexOf(kinsokuSeparationString, v62, 0LL) & 0x80000000) != 0 )
              {
LABEL_157:
                if ( ((unsigned __int16)(v62 - 48) > 9u || (unsigned __int16)(v84 - 48) > 9u)
                  && ((unsigned __int16)(v84 - 58) >= 0x21u && (unsigned __int16)(v84 - 97) > 0x19u
                   || (unsigned __int16)(v62 - 58) >= 0x21u && (unsigned __int16)(v62 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v81 = kinsokuTopString;
            v80 = index - 1;
            index = v80;
            if ( !v80 )
              break;
          }
          else
          {
            --index;
            if ( !v80 )
              break;
          }
        }
      }
      v85 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v85 = NGUIText_TypeInfo;
      }
      if ( v85->static_fields->useSymbols )
      {
        v86 = index;
        if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v85);
        v87 = NGUIText__GetSymbol(text, v86, textLength, 0LL);
        v85 = NGUIText_TypeInfo;
        if ( v87 )
        {
          v65 = v87;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v79 = v120;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v85 = NGUIText_TypeInfo;
            }
          }
          else
          {
            v79 = v120;
          }
          v66 = v85->static_fields->finalSpacingX + (float)(v85->static_fields->fontScale * (float)v65->fields.mAdvance);
          goto LABEL_183;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_171:
          if ( !v85->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v85);
        }
      }
      else if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_171;
      }
      v88 = NGUIText__GetGlyphWidth(v62, v44, 0LL);
      if ( v88 == 0.0 )
      {
        v47 = v47 + v66;
        goto LABEL_212;
      }
      v89 = NGUIText_TypeInfo;
      v90 = v88;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v79 = v120;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v89 = NGUIText_TypeInfo;
        }
      }
      else
      {
        v79 = v120;
      }
      v65 = 0LL;
      v66 = v90 + v89->static_fields->finalSpacingX;
LABEL_183:
      if ( ((v49 != b) & (v79 ^ 1)) == 0 )
      {
        v91 = s;
        v92 = UnityEngine_Mathf__Max_40727628(0, index - v43, 0LL);
        v93 = System_String__Substring_43807468(text, v43, v92, 0LL);
        if ( !v91 )
          goto LABEL_260;
        System_Text_StringBuilder__Append_41914240(v91, v93, 0LL);
        if ( v62 == 32 || v62 == 8202 || (v62 | 2) == 8203 )
        {
          v56 = 1;
        }
        else
        {
          v56 = 0;
          v113 &= v45;
        }
        if ( v49++ == b )
        {
          v53 = v116;
          v54 = v115;
          lineOut = v112;
          m_stringLength = textLength;
          v47 = v76;
          goto LABEL_218;
        }
        if ( v114 )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, v94);
        }
        else
        {
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v56 )
          v50 = v42;
        else
          v50 = v42 - v66;
        v43 = index + v56;
        v47 = 0.0;
        v58 = 0;
        if ( v48 < v76 )
          v48 = v76;
        v120 = 1;
        if ( !v65 )
          goto LABEL_210;
LABEL_137:
        v78 = index;
        v44 = 0;
        index = v78 + BMSymbol__get_length(v65, 0LL) - 1;
LABEL_211:
        m_stringLength = textLength;
        goto LABEL_212;
      }
      index = v43 - 1;
      if ( v48 < v76 )
        v48 = v76;
      ++v49;
      if ( v114 )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, v77);
        v44 = 0;
        v47 = 0.0;
        v120 = 1;
        v50 = v42;
        goto LABEL_211;
      }
      m_stringLength = textLength;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v44 = 0;
      v47 = 0.0;
LABEL_96:
      v120 = 1;
      v50 = v42;
      goto LABEL_212;
    }
    --index;
LABEL_212:
    v46 = ++index;
    if ( index >= m_stringLength )
      goto LABEL_215;
  }
  if ( v49 != b )
  {
    v59 = s;
    if ( v48 < v47 )
      v48 = v47;
    if ( index <= v43 )
    {
      if ( !s )
        goto LABEL_260;
      System_Text_StringBuilder__Append_41917484(s, 0xAu, 0LL);
    }
    else
    {
      v60 = System_String__Substring_43807468(text, v43, 1 - v43 + index, 0LL);
      if ( !v59 )
        goto LABEL_260;
      System_Text_StringBuilder__Append_41914240(v59, v60, 0LL);
    }
    v44 = 0;
    ++v49;
    v47 = 0.0;
    v43 = index + 1;
    goto LABEL_96;
  }
  v46 = index;
  v49 = b;
LABEL_215:
  v53 = v116;
  v54 = v115;
  lineOut = v112;
  if ( v46 > v43 )
  {
    v96 = s;
    v97 = System_String__Substring_43807468(text, v43, v46 - v43, 0LL);
    if ( v96 )
    {
      System_Text_StringBuilder__Append_41914240(v96, v97, 0LL);
      goto LABEL_218;
    }
LABEL_260:
    sub_B170D4();
  }
LABEL_218:
  v55 = v113;
LABEL_219:
  if ( v48 >= v47 )
    v98 = v48;
  else
    v98 = v47;
  *v54 = v98;
  *lineOut = v49;
  if ( !v117 )
  {
    if ( (v55 & 1) != 0 )
    {
      if ( index == m_stringLength )
      {
        v103 = 0;
LABEL_240:
        if ( !s )
          goto LABEL_260;
        v104 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                                    s,
                                    s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        UILabel__set_text(label, v104, 0LL);
        if ( v53 >= 1 )
        {
          v105 = NGUIText_TypeInfo;
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v105 = NGUIText_TypeInfo;
          }
          v106 = v105->static_fields->finalLineHeight * (float)v49;
          if ( v106 == INFINITY )
            v107 = -v106;
          else
            v107 = v106;
          if ( v111 >= (int)v107 )
            v108 = v111;
          else
            v108 = (int)v107;
          UIWidget__set_height((UIWidget_o *)label, v108, 0LL);
        }
        return v103;
      }
      v109 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v109 = NGUIText_TypeInfo;
      }
      v110 = UnityEngine_Mathf__Min_40727532(v109->static_fields->maxLines, b, 0LL);
      v103 = v49 > v110;
      if ( v49 <= v110 || v53 > 0 )
        goto LABEL_240;
      return 1;
    }
    else
    {
      v103 = 1;
      if ( v53 >= 1 )
        goto LABEL_240;
    }
    return v103;
  }
  v99 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v99 = NGUIText_TypeInfo;
  }
  v100 = (float)v99->static_fields->regionWidth;
  if ( v98 > v100 )
  {
    if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v99);
      v100 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    v101 = (float)(v100 / v98) * (float)label->fields.mFontSize;
    if ( v101 == INFINITY )
      v102 = -v101;
    else
      v102 = v101;
    UILabel__set_fontSize(label, (int)v102, 0LL);
    *v54 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
  }
  if ( !s )
    goto LABEL_260;
  v51 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                             s,
                             s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_74:
  UILabel__set_text(label, v51, 0LL);
  return 0;
}