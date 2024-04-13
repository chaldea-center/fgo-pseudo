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
    sub_B5D69C(0LL, width);
  return (UnityEngine_Mathf__Min_41629336(text->fields.m_stringLength % (width / fontSize), 1, 0LL)
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
      sub_B5D69C(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_11;
  System_Text_StringBuilder__Append_42956988(v3, 0xAu, 0LL);
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
      sub_B5D69C(v3, method);
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

  if ( (byte_42E73BC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)text, defaultSize, method);
    byte_42E73BC = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B5D69C(IsNullOrEmpty, v8);
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

  if ( (byte_42E73BD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)text, maxSize, method);
    byte_42E73BD = 1;
  }
  *(_QWORD *)lineOut = 0LL;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_B5D69C(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, 0, v10);
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
  int32_t v8; // w23
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x1
  Il2CppObject *v23; // x19
  const MethodInfo *v24; // [xsp+8h] [xbp-48h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  v8 = maxSize;
  if ( (byte_42E73BB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)text, maxSize, *(_QWORD *)&minSize);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15694/*"WrapControlText textAdjust error: "*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42E73BB = 1;
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
    sub_B5D69C(IsNullOrEmpty, v21);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, v8, 0, 0, (float *)&lineOut[1], lineOut, 0, 0, v24);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == v8 )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, maxHeight, v24);
      return lineOut[0];
    }
    --v8;
  }
  while ( v8 );
  if ( !label )
    goto LABEL_22;
  UILabel__set_text(label, text, 0LL);
  v23 = (Il2CppObject *)System_String__Concat_44577788((System_String_o *)StringLiteral_15694/*"WrapControlText textAdjust error: "*/, text, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(v23, 0LL);
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
  int32_t v15; // w21
  System_String_o *v16; // x24
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_o *Chars; // x0
  int32_t mHeight; // w22
  NGUIText_c *v29; // x0
  int32_t v30; // w0
  NGUIText_c *v31; // x8
  struct NGUIText_StaticFields *static_fields; // x9
  __int16 v33; // w10
  int v34; // w11
  int maxLines; // w10
  float v36; // s0
  float regionHeight; // s8
  int regionWidth; // w21
  int v39; // w20
  float v40; // s0
  System_Text_StringBuilder_o *v41; // x20
  int32_t m_stringLength; // w25
  NGUIText_c *v43; // x0
  float v44; // s11
  int v45; // w23
  int32_t v46; // w27
  int v47; // w26
  float v48; // s12
  float v49; // s10
  int32_t v50; // w28
  float v51; // s8
  System_String_o *v52; // x1
  int32_t v54; // w21
  float *v55; // x22
  char v56; // w9
  int v57; // w20
  int32_t v58; // w22
  System_Text_StringBuilder_o *v59; // x21
  NGUIText_c *v60; // x8
  uint16_t v61; // w21
  int32_t v62; // w20
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v64; // x25
  float v65; // s9
  float GlyphWidth; // s0
  NGUIText_c *v67; // x0
  float v68; // s9
  _BOOL4 v69; // w8
  int32_t v70; // w20
  int32_t v71; // w27
  uint16_t v72; // w0
  System_Text_StringBuilder_o *v73; // x20
  float v74; // s13
  const MethodInfo *v75; // x1
  int32_t v76; // w20
  int v77; // w22
  int v78; // w1
  System_String_o *v79; // x22
  int32_t v80; // w0
  uint16_t v81; // w22
  NGUIText_c *v82; // x8
  int32_t v83; // w20
  BMSymbol_o *v84; // x0
  float v85; // s0
  NGUIText_c *v86; // x0
  float v87; // s9
  System_Text_StringBuilder_o *v88; // x22
  int32_t v89; // w0
  System_Text_StringBuilder_o *v91; // x20
  float v92; // s8
  NGUIText_c *v93; // x0
  float v94; // s0
  float v95; // s0
  double v96; // d0
  _BOOL4 v97; // w20
  System_String_o *v98; // x0
  NGUIText_c *v99; // x0
  float v100; // s0
  double v101; // d0
  int32_t v102; // w1
  NGUIText_c *v103; // x0
  int32_t v104; // w0
  int v105; // [xsp+4h] [xbp-DCh]
  int32_t *v106; // [xsp+8h] [xbp-D8h]
  char v107; // [xsp+10h] [xbp-D0h]
  bool v108; // [xsp+14h] [xbp-CCh]
  float *v109; // [xsp+18h] [xbp-C8h]
  int32_t v110; // [xsp+24h] [xbp-BCh]
  bool v111; // [xsp+28h] [xbp-B8h]
  int32_t textLength; // [xsp+2Ch] [xbp-B4h]
  System_String_o *v113; // [xsp+30h] [xbp-B0h]
  int v114; // [xsp+38h] [xbp-A8h]
  int32_t b; // [xsp+3Ch] [xbp-A4h]
  System_String_o *v116; // [xsp+40h] [xbp-A0h]
  System_String_o *v117; // [xsp+48h] [xbp-98h]
  int32_t index; // [xsp+54h] [xbp-8Ch] BYREF
  System_Text_StringBuilder_o *s; // [xsp+58h] [xbp-88h] BYREF

  v15 = fsize;
  v16 = text;
  if ( (byte_42E73BE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)text, fsize, fontSizeAdjust);
    sub_B5D5C4(&NGUIText_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42E73BE = 1;
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
  if ( !byte_42E73FB )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)text, fsize, fontSizeAdjust);
    byte_42E73FB = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v117 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_42E73FC )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)text, fsize, fontSizeAdjust);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_42E73FC = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v116 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_42E73FD )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)text, fsize, fontSizeAdjust);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_42E73FD = 1;
  }
  if ( (Chars[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_260;
  mHeight = label->fields.mHeight;
  v113 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, maxHeight, 0LL);
    v15 = minSize;
  }
  UILabel__set_fontSize(label, v15, 0LL);
  UILabel__UpdateNGUIText(label, 0LL);
  v29 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v29 = NGUIText_TypeInfo;
  }
  v29->static_fields->fontSize = v15;
  v29->static_fields->fontScale = 1.0;
  v29->static_fields->pixelDensity = 1.0;
  v30 = UnityEngine_Mathf__RoundToInt((float)v29->static_fields->fontSize / v29->static_fields->pixelDensity, 0LL);
  v31 = NGUIText_TypeInfo;
  NGUIText_TypeInfo->static_fields->finalSize = v30;
  v31->static_fields->finalLineHeight = (float)(v31->static_fields->spacingY + (float)v31->static_fields->fontSize)
                                      * v31->static_fields->fontScale;
  static_fields = v31->static_fields;
  if ( static_fields->regionWidth < 1 )
    goto LABEL_73;
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->regionHeight < 1 )
    goto LABEL_73;
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->finalLineHeight < 1.0 )
    goto LABEL_73;
  v33 = WORD1(v31->vtable._0_Equals.methodPtr);
  if ( (v33 & 0x400) != 0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = NGUIText_TypeInfo;
      v33 = WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr);
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    v34 = v33 & 0x400;
  }
  else
  {
    v34 = 0;
  }
  maxLines = static_fields->maxLines;
  if ( maxLines <= 0 )
  {
    if ( v34 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = (float)static_fields->regionHeight;
  }
  else
  {
    if ( v34 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = NGUIText_TypeInfo->static_fields;
      maxLines = static_fields->maxLines;
    }
    v36 = UnityEngine_Mathf__Min(
            (float)static_fields->regionHeight,
            static_fields->finalLineHeight * (float)maxLines,
            0LL);
    v31 = NGUIText_TypeInfo;
    regionHeight = v36;
  }
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
  }
  regionWidth = 1000000;
  v39 = v31->static_fields->maxLines;
  if ( v39 < 1 )
  {
    v39 = 1000000;
  }
  else if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    JUMPOUT(0x15B9A18LL);
  }
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = NGUIText_TypeInfo;
  }
  v40 = UnityEngine_Mathf__Min((float)v39, regionHeight / v31->static_fields->finalLineHeight, 0LL);
  b = UnityEngine_Mathf__FloorToInt(v40 + 0.01, 0LL);
  if ( !b )
  {
LABEL_73:
    v52 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_74;
  }
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v16, 0LL);
  v41 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v41, 0LL);
  s = v41;
  if ( !v16 )
    goto LABEL_260;
  v109 = widthOut;
  v110 = minSize;
  m_stringLength = v16->fields.m_stringLength;
  if ( !fontSizeAdjust )
  {
    v43 = NGUIText_TypeInfo;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v43 = NGUIText_TypeInfo;
    }
    regionWidth = v43->static_fields->regionWidth;
  }
  v105 = mHeight;
  v111 = fontSizeAdjust;
  index = 0;
  if ( m_stringLength < 1 )
  {
    v54 = minSize;
    v55 = v109;
    v48 = 0.0;
    v50 = 1;
    v56 = 1;
    v49 = 0.0;
    goto LABEL_219;
  }
  v44 = (float)regionWidth;
  v108 = keepCharCount;
  v106 = lineOut;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  LODWORD(text) = 0;
  v48 = 0.0;
  v49 = 0.0;
  v50 = 1;
  v114 = 1;
  v51 = (float)regionWidth;
  v107 = 1;
  textLength = m_stringLength;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v16, (int32_t)text, 0LL);
    v58 = (unsigned __int16)Chars;
    v47 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars == 10 )
      break;
    v60 = NGUIText_TypeInfo;
    v61 = (unsigned __int16)Chars;
    if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v60 = NGUIText_TypeInfo;
    }
    if ( !v60->static_fields->encoding )
      goto LABEL_98;
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v60);
    if ( !NGUIText__ParseSymbol(v16, &index, 0LL) )
    {
      v60 = NGUIText_TypeInfo;
LABEL_98:
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v60 = NGUIText_TypeInfo;
      }
      if ( v60->static_fields->useSymbols )
      {
        v62 = index;
        if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v60);
        Symbol = NGUIText__GetSymbol(v16, v62, m_stringLength, 0LL);
        v60 = NGUIText_TypeInfo;
        if ( Symbol )
        {
          v64 = Symbol;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v60 = NGUIText_TypeInfo;
          }
          v65 = v60->static_fields->finalSpacingX + (float)(v60->static_fields->fontScale * (float)v64->fields.mAdvance);
          goto LABEL_120;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_113:
          if ( !v60->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v60);
        }
      }
      else if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_113;
      }
      GlyphWidth = NGUIText__GetGlyphWidth(v58, v46, 0LL);
      if ( GlyphWidth == 0.0 )
        goto LABEL_212;
      v67 = NGUIText_TypeInfo;
      v68 = GlyphWidth;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v67 = NGUIText_TypeInfo;
      }
      v64 = 0LL;
      v65 = v68 + v67->static_fields->finalSpacingX;
LABEL_120:
      v69 = 1;
      if ( v61 != 32 && v61 != 8202 )
        v69 = (v58 | 2) == 8203;
      v51 = v51 - v65;
      if ( v69 && ((v47 ^ 1) & 1) != 0 )
      {
        v70 = index - v45;
        if ( index > v45 )
        {
          v71 = v70 + 1;
          if ( v50 == b && v51 <= 0.0 && index < textLength )
          {
            v72 = System_String__get_Chars(v16, index, 0LL);
            if ( v72 <= 0x20u || v72 == 8202 || (v72 | 2) == 8203 )
              v71 = v70;
          }
          v73 = s;
          Chars = System_String__Substring_44641524(v16, v45, v71, 0LL);
          if ( !v73 )
            goto LABEL_260;
          System_Text_StringBuilder__Append_42953744(v73, Chars, 0LL);
          v46 = v58;
          v114 = 0;
          v45 = index + 1;
        }
      }
      v74 = v48 + v65;
      if ( (UnityEngine_Mathf__RoundToInt(v51, 0LL) & 0x80000000) == 0 )
      {
        v48 = v48 + v65;
        if ( v64 )
          goto LABEL_137;
LABEL_210:
        v46 = v58;
        goto LABEL_211;
      }
      if ( v111 )
      {
        v77 = v114;
        goto LABEL_183;
      }
      v78 = index;
      v79 = v117;
      m_stringLength = textLength;
      if ( index )
      {
        while ( 1 )
        {
          Chars = (System_String_o *)System_String__get_Chars(v16, v78, 0LL);
          if ( !v79 )
            goto LABEL_260;
          v61 = (unsigned __int16)Chars;
          v80 = System_String__IndexOf(v79, (uint16_t)Chars, 0LL);
          v78 = index - 1;
          if ( (v80 & 0x80000000) != 0 )
          {
            v81 = System_String__get_Chars(v16, v78, 0LL);
            Chars = v116;
            if ( !v116 )
              goto LABEL_260;
            if ( (System_String__IndexOf(v116, v81, 0LL) & 0x80000000) != 0 )
            {
              if ( v61 != v81 )
                goto LABEL_157;
              Chars = v113;
              if ( !v113 )
                goto LABEL_260;
              if ( (System_String__IndexOf(v113, v61, 0LL) & 0x80000000) != 0 )
              {
LABEL_157:
                if ( ((unsigned __int16)(v61 - 48) > 9u || (unsigned __int16)(v81 - 48) > 9u)
                  && ((unsigned __int16)(v81 - 58) >= 0x21u && (unsigned __int16)(v81 - 97) > 0x19u
                   || (unsigned __int16)(v61 - 58) >= 0x21u && (unsigned __int16)(v61 - 97) > 0x19u) )
                {
                  break;
                }
              }
            }
            v79 = v117;
            v78 = index - 1;
            index = v78;
            if ( !v78 )
              break;
          }
          else
          {
            --index;
            if ( !v78 )
              break;
          }
        }
      }
      v82 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v82 = NGUIText_TypeInfo;
      }
      if ( v82->static_fields->useSymbols )
      {
        v83 = index;
        if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v82);
        v84 = NGUIText__GetSymbol(v16, v83, textLength, 0LL);
        v82 = NGUIText_TypeInfo;
        if ( v84 )
        {
          v64 = v84;
          if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
            v77 = v114;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v82 = NGUIText_TypeInfo;
            }
          }
          else
          {
            v77 = v114;
          }
          v65 = v82->static_fields->finalSpacingX + (float)(v82->static_fields->fontScale * (float)v64->fields.mAdvance);
          goto LABEL_183;
        }
        m_stringLength = textLength;
        if ( (WORD1(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_171:
          if ( !v82->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v82);
        }
      }
      else if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        goto LABEL_171;
      }
      v85 = NGUIText__GetGlyphWidth(v61, v46, 0LL);
      if ( v85 == 0.0 )
      {
        v48 = v48 + v65;
        goto LABEL_212;
      }
      v86 = NGUIText_TypeInfo;
      v87 = v85;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v77 = v114;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v86 = NGUIText_TypeInfo;
        }
      }
      else
      {
        v77 = v114;
      }
      v64 = 0LL;
      v65 = v87 + v86->static_fields->finalSpacingX;
LABEL_183:
      if ( ((v50 != b) & (v77 ^ 1)) == 0 )
      {
        v88 = s;
        v89 = UnityEngine_Mathf__Max_41629432(0, index - v45, 0LL);
        Chars = System_String__Substring_44641524(v16, v45, v89, 0LL);
        if ( !v88 )
          goto LABEL_260;
        System_Text_StringBuilder__Append_42953744(v88, Chars, 0LL);
        if ( v61 == 32 || v61 == 8202 || (v61 | 2) == 8203 )
        {
          v57 = 1;
        }
        else
        {
          v57 = 0;
          v107 &= v47;
        }
        if ( v50++ == b )
        {
          v54 = v110;
          v55 = v109;
          lineOut = v106;
          m_stringLength = textLength;
          v48 = v74;
          goto LABEL_218;
        }
        if ( v108 )
        {
          WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
        }
        else
        {
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          NGUIText__EndLine(&s, 0LL);
        }
        if ( v57 )
          v51 = v44;
        else
          v51 = v44 - v65;
        v45 = index + v57;
        v48 = 0.0;
        v58 = 0;
        if ( v49 < v74 )
          v49 = v74;
        v114 = 1;
        if ( !v64 )
          goto LABEL_210;
LABEL_137:
        v76 = index;
        v46 = 0;
        index = v76 + BMSymbol__get_length(v64, 0LL) - 1;
LABEL_211:
        m_stringLength = textLength;
        goto LABEL_212;
      }
      index = v45 - 1;
      if ( v49 < v74 )
        v49 = v74;
      ++v50;
      if ( v108 )
      {
        WrapControlText__ReplaceSpaceWithNewline(&s, v75);
        v46 = 0;
        v48 = 0.0;
        v114 = 1;
        v51 = v44;
        goto LABEL_211;
      }
      m_stringLength = textLength;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      NGUIText__EndLine(&s, 0LL);
      v46 = 0;
      v48 = 0.0;
LABEL_96:
      v114 = 1;
      v51 = v44;
      goto LABEL_212;
    }
    --index;
LABEL_212:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= m_stringLength )
      goto LABEL_215;
  }
  if ( v50 != b )
  {
    v59 = s;
    if ( v49 < v48 )
      v49 = v48;
    if ( index <= v45 )
    {
      if ( !s )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42956988(s, 0xAu, 0LL);
    }
    else
    {
      Chars = System_String__Substring_44641524(v16, v45, 1 - v45 + index, 0LL);
      if ( !v59 )
        goto LABEL_260;
      System_Text_StringBuilder__Append_42953744(v59, Chars, 0LL);
    }
    v46 = 0;
    ++v50;
    v48 = 0.0;
    v45 = index + 1;
    goto LABEL_96;
  }
  text = (System_String_o *)(unsigned int)index;
  v50 = b;
LABEL_215:
  v54 = v110;
  v55 = v109;
  lineOut = v106;
  if ( (int)text > v45 )
  {
    v91 = s;
    Chars = System_String__Substring_44641524(v16, v45, (int)text - v45, 0LL);
    if ( v91 )
    {
      System_Text_StringBuilder__Append_42953744(v91, Chars, 0LL);
      goto LABEL_218;
    }
LABEL_260:
    sub_B5D69C(Chars, text);
  }
LABEL_218:
  v56 = v107;
LABEL_219:
  if ( v49 >= v48 )
    v92 = v49;
  else
    v92 = v48;
  *v55 = v92;
  *lineOut = v50;
  if ( !v111 )
  {
    if ( (v56 & 1) != 0 )
    {
      if ( index == m_stringLength )
      {
        v97 = 0;
LABEL_240:
        Chars = (System_String_o *)s;
        if ( !s )
          goto LABEL_260;
        v98 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                                   s,
                                   s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        UILabel__set_text(label, v98, 0LL);
        if ( v54 >= 1 )
        {
          v99 = NGUIText_TypeInfo;
          if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v99 = NGUIText_TypeInfo;
          }
          v100 = v99->static_fields->finalLineHeight * (float)v50;
          if ( v100 == INFINITY )
            v101 = -v100;
          else
            v101 = v100;
          if ( v105 >= (int)v101 )
            v102 = v105;
          else
            v102 = (int)v101;
          UIWidget__set_height((UIWidget_o *)label, v102, 0LL);
        }
        return v97;
      }
      v103 = NGUIText_TypeInfo;
      if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v103 = NGUIText_TypeInfo;
      }
      v104 = UnityEngine_Mathf__Min_41629336(v103->static_fields->maxLines, b, 0LL);
      v97 = v50 > v104;
      if ( v50 <= v104 || v54 > 0 )
        goto LABEL_240;
      return 1;
    }
    else
    {
      v97 = 1;
      if ( v54 >= 1 )
        goto LABEL_240;
    }
    return v97;
  }
  v93 = NGUIText_TypeInfo;
  if ( (BYTE3(NGUIText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v93 = NGUIText_TypeInfo;
  }
  v94 = (float)v93->static_fields->regionWidth;
  if ( v92 > v94 )
  {
    if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v93);
      v94 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
    }
    v95 = (float)(v94 / v92) * (float)label->fields.mFontSize;
    if ( v95 == INFINITY )
      v96 = -v95;
    else
      v96 = v95;
    UILabel__set_fontSize(label, (int)v96, 0LL);
    *v55 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
  }
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_260;
  v52 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))s->klass->vtable._3_ToString.method)(
                             s,
                             s->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
LABEL_74:
  UILabel__set_text(label, v52, 0LL);
  return 0;
}