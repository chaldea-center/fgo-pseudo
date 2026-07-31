void WrapControlText___ctor(WrapControlText_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t WrapControlText__CalcApproximateLabelHeight(
        System_String_o *text,
        int32_t width,
        int32_t fontSize,
        int32_t lineHeight,
        int32_t marginLineCount,
        const MethodInfo *method)
{
  int32_t stringLength; // w9
  int v7; // w8
  int v8; // w9

  if ( !text )
    sub_21FFECC(0, *(_QWORD *)&width);
  stringLength = text->fields._stringLength;
  v7 = stringLength % (width / fontSize);
  v8 = stringLength / (width / fontSize) + marginLineCount;
  if ( v7 >= 1 )
    v7 = 1;
  return (v8 + v7) * lineHeight;
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
      sub_21FFECC(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_10;
  System_Text_StringBuilder__Append_75524092(v3, 0xAu, 0);
}


bool WrapControlText__IsSpace(int32_t ch, const MethodInfo *method)
{
  return (unsigned int)(ch - 8201) < 3 || ch == 32;
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
      sub_21FFECC(v3, method);
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
  __int64 v8; // x1
  const MethodInfo *v9; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5937C16 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937C16 = 1;
  }
  *(_QWORD *)lineOut = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_21FFECC(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  else
  {
    WrapControlText__wrapText(label, text, defaultSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v9);
  }
}


float WrapControlText__getFontWidth(UILabel_o *label, System_String_o *text, int32_t maxSize, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v10; // [xsp+0h] [xbp-40h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5937C17 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937C17 = 1;
  }
  *(_QWORD *)lineOut = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( IsNullOrEmpty )
  {
    if ( !label )
      sub_21FFECC(IsNullOrEmpty, v8);
    UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
    return 0.0;
  }
  else
  {
    WrapControlText__wrapText(label, text, maxSize, 1, 0, (float *)&lineOut[1], lineOut, 0, v10);
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
  __int64 v10; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x19
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]
  int32_t lineOut[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5937C15 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16260/*"WrapControlText textAdjust error: "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937C15 = 1;
  }
  *(_QWORD *)lineOut = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
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
    sub_21FFECC(IsNullOrEmpty, v10);
  }
  do
  {
    IsNullOrEmpty = WrapControlText__wrapText(label, text, maxSize, 0, 0, (float *)&lineOut[1], lineOut, 0, v14);
    if ( !IsNullOrEmpty )
      return lineOut[0];
    if ( minSize == maxSize )
    {
      WrapControlText__wrapText(label, text, minSize, 0, 0, (float *)&lineOut[1], lineOut, minSize, v14);
      return lineOut[0];
    }
    --maxSize;
  }
  while ( maxSize );
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, text, 0);
  v13 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_16260/*"WrapControlText textAdjust error: "*/, text, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v12);
  UnityEngine_Debug__Log(v13, 0);
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
  System_String_o *v14; // x24
  System_String_o *Chars; // x0
  System_String_o *v17; // x28
  int32_t mHeight; // w20
  __int64 v19; // x1
  NGUIText_c *v20; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int v27; // w9
  double v28; // d8
  __int64 v29; // x1
  double v30; // d0
  double v31; // d1
  double v32; // d0
  double v33; // d1
  NGUIText_c *v34; // x0
  int v35; // w10
  struct NGUIText_StaticFields *v36; // x8
  float v37; // s0
  unsigned int v38; // w9
  int regionWidth; // w10
  int maxLines; // w9
  int v41; // w10
  float finalLineHeight; // s1
  float regionHeight; // s8
  int32_t v44; // w21
  float v45; // s8
  float v46; // s8
  unsigned int v47; // w9
  unsigned int v48; // w8
  System_Text_StringBuilder_o *v49; // x21
  __int64 v50; // x2
  int32_t stringLength; // w29
  float v52; // s10
  System_String_o *v53; // x1
  NGUIText_c *v55; // x0
  struct NGUIText_StaticFields *v56; // x8
  float v57; // s12
  float v58; // s9
  int32_t v59; // w27
  float v60; // s15
  double v61; // d14
  int v62; // w20
  char v63; // w26
  int32_t v64; // w25
  System_String_o *v65; // x23
  __int64 v66; // x1
  int32_t v67; // w28
  System_Text_StringBuilder_o *v68; // x21
  uint16_t v69; // w29
  NGUIText_c *v70; // x0
  int32_t v71; // w21
  BMSymbol_o *Symbol; // x21
  float v73; // s11
  float GlyphWidth; // s0
  float v75; // s8
  NGUIText_c *v76; // x0
  int32_t v77; // w22
  int32_t v78; // w26
  uint16_t v79; // w0
  System_Text_StringBuilder_o *v80; // x27
  double v81; // d8
  double v82; // d0
  double v83; // d0
  double v84; // d1
  double v85; // d1
  float v86; // s14
  const MethodInfo *v87; // x1
  int32_t v88; // w0
  uint16_t v89; // w21
  NGUIText_c *v90; // x0
  int32_t v91; // w21
  __int64 v92; // x1
  float v93; // s0
  float v94; // s8
  NGUIText_c *v95; // x0
  System_Text_StringBuilder_o *v96; // x22
  int32_t *v97; // x26
  int v98; // w22
  float v99; // s0
  int32_t v100; // w22
  bool v101; // w23
  System_Text_StringBuilder_o *v102; // x21
  float v103; // s8
  _BOOL4 v104; // w21
  NGUIText_c *v105; // x0
  float v106; // s0
  float v107; // s0
  int32_t v108; // w1
  System_String_o *v109; // x0
  __int64 v110; // x1
  NGUIText_c *v111; // x0
  float v112; // s0
  int v113; // w8
  int32_t v114; // w1
  NGUIText_c *v115; // x0
  int32_t v116; // w8
  char v117; // [xsp+8h] [xbp-F8h]
  int32_t v118; // [xsp+Ch] [xbp-F4h]
  float *v119; // [xsp+10h] [xbp-F0h]
  int32_t *v120; // [xsp+18h] [xbp-E8h]
  bool v121; // [xsp+20h] [xbp-E0h]
  int v122; // [xsp+24h] [xbp-DCh]
  System_String_o *v123; // [xsp+28h] [xbp-D8h]
  signed int v125; // [xsp+34h] [xbp-CCh]
  System_String_o *v126; // [xsp+38h] [xbp-C8h]
  int startIndex; // [xsp+44h] [xbp-BCh]
  char v128; // [xsp+48h] [xbp-B8h]
  int32_t index; // [xsp+4Ch] [xbp-B4h] BYREF
  System_Text_StringBuilder_o *s; // [xsp+50h] [xbp-B0h] BYREF
  double iptr; // [xsp+58h] [xbp-A8h] BYREF

  v14 = text;
  if ( (byte_5937C18 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NGUIText_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937C18 = 1;
  }
  *widthOut = 0.0;
  *lineOut = 1;
  s = 0;
  index = 0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text);
  if ( !byte_5937C5D )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937C5D = 1;
  }
  Chars = (System_String_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v17 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 56LL);
  if ( !byte_5937C5E )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_5937C5E = 1;
  }
  if ( !HIDWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  v126 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 64LL);
  if ( !byte_5937C5F )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
    byte_5937C5F = 1;
  }
  if ( !HIDWORD(Chars[9].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Chars, text);
    Chars = (System_String_o *)LocalizationManager_TypeInfo;
  }
  if ( !label )
    goto LABEL_266;
  mHeight = label->fields.mHeight;
  v123 = *(System_String_o **)(*(_QWORD *)&Chars[7].fields + 72LL);
  if ( minSize >= 1 )
  {
    UIWidget__set_height((UIWidget_o *)label, 1000000, 0);
    fsize = minSize;
  }
  UILabel__set_fontSize(label, fsize, 0);
  UILabel__UpdateNGUIText(label, 0);
  v20 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v19);
    v20 = NGUIText_TypeInfo;
  }
  __asm { FMOV            V0.2S, #1.0 }
  static_fields = v20->static_fields;
  v27 = (unsigned __int8)byte_593220B;
  static_fields->fontSize = fsize;
  *(_QWORD *)&static_fields->fontScale = _D0;
  if ( !v27 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19);
  v28 = (float)fsize;
  v30 = modf(v28, &iptr);
  v122 = mHeight;
  if ( fsize < 0 )
  {
    if ( v30 != -0.5 )
    {
      v32 = ceil(v28 + -0.5);
      goto LABEL_36;
    }
    v32 = iptr;
    v31 = -1.0;
  }
  else
  {
    if ( v30 != 0.5 )
    {
      v32 = floor(v28 + 0.5);
      goto LABEL_36;
    }
    v31 = 1.0;
    v32 = iptr;
  }
  v33 = v32 + v31;
  if ( ((__int64)v32 & 1) != 0 )
    v32 = v33;
LABEL_36:
  v34 = NGUIText_TypeInfo;
  v35 = (int)v32;
  v36 = NGUIText_TypeInfo->static_fields;
  _ZF = v32 == INFINITY;
  v37 = (float)(v36->spacingY + (float)v36->fontSize) * v36->fontScale;
  if ( _ZF )
    v38 = 0x80000000;
  else
    v38 = v35;
  regionWidth = v36->regionWidth;
  v36->finalSize = v38;
  v36->finalLineHeight = v37;
  if ( regionWidth < 1 )
    goto LABEL_82;
  if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v29);
    v34 = NGUIText_TypeInfo;
    v36 = NGUIText_TypeInfo->static_fields;
  }
  if ( v36->regionHeight < 1 )
    goto LABEL_82;
  if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v29);
    v34 = NGUIText_TypeInfo;
    v36 = NGUIText_TypeInfo->static_fields;
  }
  if ( v36->finalLineHeight < 1.0 )
    goto LABEL_82;
  if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v29);
    v34 = NGUIText_TypeInfo;
    v36 = NGUIText_TypeInfo->static_fields;
  }
  maxLines = v36->maxLines;
  v41 = *(&v34->_2.cctor_finished + 1);
  if ( maxLines <= 0 )
  {
    if ( !v41 )
    {
      j_il2cpp_runtime_class_init_0(v34, v29);
      v34 = NGUIText_TypeInfo;
      v36 = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = (float)v36->regionHeight;
  }
  else
  {
    if ( !v41 )
    {
      j_il2cpp_runtime_class_init_0(v34, v29);
      v34 = NGUIText_TypeInfo;
      v36 = NGUIText_TypeInfo->static_fields;
      maxLines = v36->maxLines;
    }
    finalLineHeight = v36->finalLineHeight;
    regionHeight = (float)(finalLineHeight * (float)maxLines) <= (float)v36->regionHeight
                 ? finalLineHeight * (float)maxLines
                 : (float)v36->regionHeight;
  }
  if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v29);
    v34 = NGUIText_TypeInfo;
  }
  v44 = v34->static_fields->maxLines;
  if ( v44 < 1 )
  {
    v44 = 1000000;
  }
  else if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v29);
    v34 = NGUIText_TypeInfo;
    v44 = NGUIText_TypeInfo->static_fields->maxLines;
  }
  if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v29);
    v34 = NGUIText_TypeInfo;
  }
  if ( (float)(regionHeight / v34->static_fields->finalLineHeight) <= (float)v44 )
    v45 = regionHeight / v34->static_fields->finalLineHeight;
  else
    v45 = (float)v44;
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v46 = v45 + 0.01;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v29);
  v47 = vcvtms_s32_f32(v46);
  v48 = floorf(v46) == INFINITY ? 0x80000000 : v47;
  v125 = v48;
  if ( !v48 )
  {
LABEL_82:
    v53 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_83;
  }
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v29);
  NGUIText__Prepare(v14, 0);
  v49 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v49, 0);
  s = v49;
  if ( !v14 )
    goto LABEL_266;
  stringLength = v14->fields._stringLength;
  v121 = fontSizeAdjust;
  if ( !fontSizeAdjust )
  {
    v55 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
      v55 = NGUIText_TypeInfo;
    }
    v56 = v55->static_fields;
    index = 0;
    if ( stringLength > 0 )
    {
      v119 = widthOut;
      v120 = lineOut;
      v52 = (float)v56->regionWidth;
      goto LABEL_88;
    }
    v62 = 1;
    *widthOut = 0.0;
    *lineOut = 1;
LABEL_244:
    if ( index == stringLength )
    {
      v104 = 0;
    }
    else
    {
      v115 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
        v115 = NGUIText_TypeInfo;
      }
      v116 = v115->static_fields->maxLines;
      if ( v116 >= v125 )
        v116 = v125;
      v104 = v62 > v116;
      if ( minSize <= 0 && v62 > v116 )
        return 1;
    }
    goto LABEL_246;
  }
  index = 0;
  if ( stringLength <= 0 )
  {
    v103 = 0.0;
    v62 = 1;
    *widthOut = 0.0;
    *lineOut = 1;
    if ( fontSizeAdjust )
    {
LABEL_232:
      v105 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
        v105 = NGUIText_TypeInfo;
      }
      v106 = (float)v105->static_fields->regionWidth;
      if ( v103 > v106 )
      {
        if ( !*(&v105->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v105, text);
          v106 = (float)NGUIText_TypeInfo->static_fields->regionWidth;
        }
        v107 = (float)(v106 / v103) * (float)label->fields.mFontSize;
        if ( v107 == INFINITY )
          v108 = 0x80000000;
        else
          v108 = (int)v107;
        UILabel__set_fontSize(label, v108, 0);
        *widthOut = (float)NGUIText_TypeInfo->static_fields->regionWidth;
      }
      Chars = (System_String_o *)s;
      if ( !s )
        goto LABEL_266;
      v53 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))s->klass->vtable._3_ToString.methodPtr)(
                                 s,
                                 s->klass->vtable._3_ToString.method);
LABEL_83:
      UILabel__set_text(label, v53, 0);
      return 0;
    }
    goto LABEL_244;
  }
  v119 = widthOut;
  v120 = lineOut;
  v52 = 1000000.0;
LABEL_88:
  v118 = minSize;
  v57 = 0.0;
  v58 = 0.0;
  v59 = 0;
  v60 = v52;
  v61 = -0.5;
  LODWORD(text) = 0;
  v62 = 1;
  v63 = 1;
  startIndex = 0;
  v128 = 0;
  v117 = 1;
  while ( 1 )
  {
    v64 = stringLength;
    v65 = v17;
    Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0);
    v67 = (unsigned __int16)Chars;
    v128 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars != 10 )
      break;
    text = (System_String_o *)(unsigned int)index;
    if ( v62 == v125 )
    {
      v62 = v125;
LABEL_220:
      minSize = v118;
      v97 = v120;
      v101 = v121;
      v50 = (unsigned int)((_DWORD)text - startIndex);
      if ( (int)text <= startIndex )
        goto LABEL_223;
      v102 = s;
      Chars = System_String__Substring_75489544(v14, startIndex, v50, 0);
      if ( v102 )
      {
        System_Text_StringBuilder__Append_75521760(v102, Chars, 0);
LABEL_223:
        widthOut = v119;
        goto LABEL_224;
      }
LABEL_266:
      sub_21FFECC(Chars, text);
    }
    v68 = s;
    if ( v58 < v57 )
      v58 = v57;
    if ( index <= startIndex )
    {
      if ( !s )
        goto LABEL_266;
      v17 = v65;
      System_Text_StringBuilder__Append_75524092(s, 0xAu, 0);
    }
    else
    {
      Chars = System_String__Substring_75489544(v14, startIndex, index - startIndex + 1, 0);
      if ( !v68 )
        goto LABEL_266;
      v17 = v65;
      System_Text_StringBuilder__Append_75521760(v68, Chars, 0);
    }
    v57 = 0.0;
    v59 = 0;
    ++v62;
    startIndex = index + 1;
LABEL_106:
    v63 = 1;
    v60 = v52;
LABEL_217:
    text = (System_String_o *)(unsigned int)++index;
    if ( index >= stringLength )
      goto LABEL_220;
  }
  v69 = (unsigned __int16)Chars;
  v70 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v66);
    v70 = NGUIText_TypeInfo;
  }
  if ( v70->static_fields->encoding )
  {
    if ( !*(&v70->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v70, v66);
    if ( NGUIText__ParseSymbol(v14, &index, 0) )
    {
      --index;
LABEL_120:
      v17 = v65;
      stringLength = v64;
      goto LABEL_217;
    }
    v70 = NGUIText_TypeInfo;
  }
  if ( !*(&v70->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v70, v66);
    v70 = NGUIText_TypeInfo;
  }
  if ( !v70->static_fields->useSymbols )
    goto LABEL_269;
  v71 = index;
  if ( !*(&v70->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v70, v66);
  Symbol = NGUIText__GetSymbol(v14, v71, v64, 0);
  v70 = NGUIText_TypeInfo;
  if ( Symbol )
  {
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v66);
      v70 = NGUIText_TypeInfo;
    }
    v73 = v70->static_fields->finalSpacingX + (float)(v70->static_fields->fontScale * (float)Symbol->fields.mAdvance);
  }
  else
  {
LABEL_269:
    if ( !*(&v70->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v70, v66);
    GlyphWidth = NGUIText__GetGlyphWidth(v67, v59, 0);
    if ( GlyphWidth == 0.0 )
      goto LABEL_120;
    v75 = GlyphWidth;
    v76 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v66);
      v76 = NGUIText_TypeInfo;
    }
    Symbol = 0;
    v73 = v75 + v76->static_fields->finalSpacingX;
  }
  v60 = v60 - v73;
  if ( (unsigned int)v69 - 8201 < 3 || v69 == 32 )
  {
    v66 = (unsigned int)index;
    v77 = index - startIndex;
    if ( !(v128 & 1 | (index <= startIndex)) )
    {
      v78 = v77 + 1;
      if ( v62 == v125 && v60 <= 0.0 && index < v64 )
      {
        v79 = System_String__get_Chars(v14, index, 0);
        if ( v79 < 0x20u || (unsigned int)v79 - 8201 < 3 || v79 == 32 )
          v78 = v77;
      }
      v80 = s;
      Chars = System_String__Substring_75489544(v14, startIndex, v78, 0);
      if ( !v80 )
        goto LABEL_266;
      System_Text_StringBuilder__Append_75521760(v80, Chars, 0);
      v63 = 0;
      v59 = v67;
      startIndex = index + 1;
    }
  }
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v66);
  v81 = v60;
  v82 = modf(v60, &iptr);
  if ( v60 >= 0.0 )
  {
    if ( v82 != 0.5 )
    {
      v83 = floor(v81 + 0.5);
      goto LABEL_150;
    }
    v83 = iptr;
    v84 = 1.0;
  }
  else
  {
    if ( v82 != v61 )
    {
      v83 = ceil(v81 + v61);
      goto LABEL_150;
    }
    v83 = iptr;
    v84 = -1.0;
  }
  v85 = v83 + v84;
  if ( ((__int64)v83 & 1) != 0 )
    v83 = v85;
LABEL_150:
  v86 = v57 + v73;
  if ( v83 != INFINITY && ((int)v83 & 0x80000000) == 0 )
  {
    v57 = v57 + v73;
    stringLength = v64;
LABEL_213:
    v61 = -0.5;
    if ( Symbol )
    {
      v100 = index;
      v59 = 0;
      index = v100 + BMSymbol__get_length(Symbol, 0) - 1;
    }
    else
    {
      v59 = v67;
    }
    v17 = v65;
    goto LABEL_217;
  }
  if ( v121 )
  {
    v87 = (const MethodInfo *)(unsigned int)startIndex;
    v17 = v65;
  }
  else
  {
    text = (System_String_o *)(unsigned int)index;
    v17 = v65;
    if ( index )
    {
      do
      {
        Chars = (System_String_o *)System_String__get_Chars(v14, (int32_t)text, 0);
        if ( !v65 )
          goto LABEL_266;
        v69 = (unsigned __int16)Chars;
        v88 = System_String__IndexOf(v65, (uint16_t)Chars, 0);
        text = (System_String_o *)(unsigned int)(index - 1);
        if ( v88 < 0 )
        {
          v89 = System_String__get_Chars(v14, (int32_t)text, 0);
          Chars = v126;
          if ( !v126 )
            goto LABEL_266;
          if ( System_String__IndexOf(v126, v89, 0) < 0 )
          {
            if ( v69 != v89 )
              goto LABEL_172;
            Chars = v123;
            if ( !v123 )
              goto LABEL_266;
            if ( System_String__IndexOf(v123, v69, 0) < 0 )
            {
LABEL_172:
              if ( ((unsigned __int16)(v89 - 58) < 0xFFF6u || v69 < 0x30u || v69 > 0x39u)
                && ((unsigned __int16)(v89 - 91) <= 0xFFDEu && (unsigned __int16)(v89 - 123) < 0xFFE6u
                 || (unsigned __int16)(v69 - 91) <= 0xFFDEu && (unsigned __int16)(v69 - 123) < 0xFFE6u) )
              {
                break;
              }
            }
          }
          text = (System_String_o *)(unsigned int)(index - 1);
        }
        index = (int)text;
      }
      while ( (_DWORD)text );
    }
    v90 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
      v90 = NGUIText_TypeInfo;
    }
    if ( !v90->static_fields->useSymbols )
      goto LABEL_270;
    v91 = index;
    if ( !*(&v90->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v90, text);
    Symbol = NGUIText__GetSymbol(v14, v91, v64, 0);
    v90 = NGUIText_TypeInfo;
    if ( Symbol )
    {
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
        v90 = NGUIText_TypeInfo;
      }
      v87 = (const MethodInfo *)(unsigned int)startIndex;
      v73 = v90->static_fields->finalSpacingX + (float)(v90->static_fields->fontScale * (float)Symbol->fields.mAdvance);
    }
    else
    {
LABEL_270:
      if ( !*(&v90->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v90, text);
      v93 = NGUIText__GetGlyphWidth(v69, v59, 0);
      if ( v93 == 0.0 )
      {
        v57 = v57 + v73;
LABEL_201:
        stringLength = v64;
        v61 = -0.5;
        goto LABEL_217;
      }
      v94 = v93;
      v95 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v92);
        v95 = NGUIText_TypeInfo;
      }
      v87 = (const MethodInfo *)(unsigned int)startIndex;
      Symbol = 0;
      v73 = v94 + v95->static_fields->finalSpacingX;
    }
  }
  if ( !(v63 & 1 | (v62 == v125)) )
  {
    ++v62;
    index = (_DWORD)v87 - 1;
    if ( v58 < v86 )
      v58 = v86;
    if ( keepCharCount )
    {
      WrapControlText__ReplaceSpaceWithNewline(&s, v87);
      v59 = 0;
      v57 = 0.0;
      v63 = 1;
      v60 = v52;
      goto LABEL_201;
    }
    v61 = -0.5;
    stringLength = v64;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v87);
    NGUIText__EndLine(&s, 0);
    v59 = 0;
    v57 = 0.0;
    goto LABEL_106;
  }
  v96 = s;
  Chars = System_String__Substring_75489544(
            v14,
            (int32_t)v87,
            (index - (_DWORD)v87) & (unsigned int)~((index - (int)v87) >> 31),
            0);
  v97 = v120;
  if ( !v96 )
    goto LABEL_266;
  System_Text_StringBuilder__Append_75521760(v96, Chars, 0);
  widthOut = v119;
  v98 = 1;
  if ( (unsigned int)v69 - 8201 >= 3 && v69 != 32 )
  {
    v98 = 0;
    v117 &= v128;
  }
  stringLength = v64;
  _ZF = v62++ == v125;
  if ( !_ZF )
  {
    if ( keepCharCount )
    {
      WrapControlText__ReplaceSpaceWithNewline(&s, (const MethodInfo *)text);
    }
    else
    {
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, text);
      NGUIText__EndLine(&s, 0);
    }
    v57 = 0.0;
    v67 = 0;
    v63 = 1;
    startIndex = index + v98;
    if ( v98 )
      v99 = 0.0;
    else
      v99 = v73;
    v60 = v52 - v99;
    if ( v58 < v86 )
      v58 = v86;
    goto LABEL_213;
  }
  minSize = v118;
  v57 = v86;
  v101 = v121;
LABEL_224:
  if ( v58 >= v57 )
    v103 = v58;
  else
    v103 = v57;
  *widthOut = v103;
  *v97 = v62;
  if ( v101 )
    goto LABEL_232;
  if ( (v117 & 1) != 0 )
    goto LABEL_244;
  v104 = 1;
  if ( minSize < 1 )
    return v104;
LABEL_246:
  Chars = (System_String_o *)s;
  if ( !s )
    goto LABEL_266;
  v109 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *, __int64))s->klass->vtable._3_ToString.methodPtr)(
                              s,
                              s->klass->vtable._3_ToString.method,
                              v50);
  UILabel__set_text(label, v109, 0);
  if ( minSize >= 1 )
  {
    v111 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v110);
      v111 = NGUIText_TypeInfo;
    }
    v112 = v111->static_fields->finalLineHeight * (float)v62;
    if ( v112 == INFINITY )
      v113 = 0x80000000;
    else
      v113 = (int)v112;
    if ( v122 <= v113 )
      v114 = v113;
    else
      v114 = v122;
    UIWidget__set_height((UIWidget_o *)label, v114, 0);
  }
  return v104;
}