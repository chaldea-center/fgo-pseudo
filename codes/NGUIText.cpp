void NGUIText___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct NGUIText_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  NGUIText_c *v9; // x8
  struct NGUIText_StaticFields *v15; // x10
  struct NGUIText_StaticFields *v17; // x9
  NGUIText_c *v18; // x9
  struct NGUIText_StaticFields *v19; // x8
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Char_array *v28; // x1
  struct NGUIText_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Char_array *v36; // x1
  struct NGUIText_StaticFields *v37; // x0
  struct NGUIText_StaticFields *v38; // x8
  BetterList_Color__o *v39; // x19
  struct NGUIText_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  BetterList_Color__o *v47; // x19
  GrandQuestFolderBoardItem_o *p_mGradientColors; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  BetterList_float__o *v55; // x19
  GrandQuestFolderBoardItem_o *p_mSizes; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Array_o *v63; // x19
  struct NGUIText_StaticFields *v64; // x8
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7

  if ( (byte_4D351E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_float___ctor__);
    sub_1C93AD4(&Method_BetterList_Color___ctor__);
    sub_1C93AD4(&BetterList_float__TypeInfo);
    sub_1C93AD4(&BetterList_Color__TypeInfo);
    sub_1C93AD4(&char___TypeInfo);
    sub_1C93AD4(&NGUIText_GlyphInfo_TypeInfo);
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0);
    byte_4D351E0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(NGUIText_GlyphInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  static_fields = NGUIText_TypeInfo->static_fields;
  static_fields->glyph = (struct NGUIText_GlyphInfo_o *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->glyph, (int32_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = NGUIText_TypeInfo;
  __asm { FMOV            V1.2S, #1.0 }
  v15 = NGUIText_TypeInfo->static_fields;
  *(_QWORD *)&v15->fontScale = _D1;
  __asm { FMOV            V1.4S, #1.0 }
  v15->fontSize = 16;
  *(_QWORD *)&v15->fontStyle = 0x100000000LL;
  v15->tint = _Q1;
  v17 = v9->static_fields;
  *(int32x4_t *)&v17->rectWidth = vdupq_n_s32(0xF4240u);
  v17->maxLines = 0;
  v17->gradient = 0;
  v17->gradientBottom = _Q1;
  v9->static_fields->gradientTop = _Q1;
  v9->static_fields->specificGradientBottom = _Q1;
  v9->static_fields->specificGradientTop = _Q1;
  if ( !byte_4D30C94 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D30C94 = 1;
  }
  v18 = NGUIText_TypeInfo;
  NGUIText_TypeInfo->static_fields->outlineDistance = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  v18->static_fields->outlineEffect = (struct UnityEngine_Color_o)xmmword_D01D10;
  v19 = v18->static_fields;
  v19->encoding = 0;
  *(_QWORD *)&v19->spacingX = 0;
  v19->premultiply = 0;
  *(_QWORD *)&v19->finalSize = 0;
  *(_QWORD *)&v19->finalLineHeight = 0;
  v19->useSymbols = 0;
  v20 = sub_1C93B7C(char___TypeInfo, 1);
  if ( !v20 )
    goto LABEL_10;
  v28 = (struct System_Char_array *)v20;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_11;
  *(_WORD *)(v20 + 32) = 58;
  v29 = NGUIText_TypeInfo->static_fields;
  v29->PARAM_SPLIT_CHAR = v28;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v29->PARAM_SPLIT_CHAR, (int32_t)v28, v22, v23, v24, v25, v26, v27);
  v20 = sub_1C93B7C(char___TypeInfo, 1);
  if ( !v20 )
LABEL_10:
    sub_1C93D2C(v20, v21);
  v36 = (struct System_Char_array *)v20;
  if ( !*(_DWORD *)(v20 + 24) )
LABEL_11:
    sub_1C93D34(v20);
  *(_WORD *)(v20 + 32) = 61;
  v37 = NGUIText_TypeInfo->static_fields;
  v37->KEY_VAL_SPLIT_CHAR = v36;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v37->KEY_VAL_SPLIT_CHAR, (int32_t)v36, v30, v31, v32, v33, v34, v35);
  v38 = NGUIText_TypeInfo->static_fields;
  *(_QWORD *)&v38->mInvisible.fields.r = 0;
  *(_QWORD *)&v38->mInvisible.fields.b = 0;
  v39 = (BetterList_Color__o *)sub_1C93D20(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v39, (const MethodInfo_33DA9DC *)Method_BetterList_Color___ctor__);
  v40 = NGUIText_TypeInfo->static_fields;
  v40->mColors = v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->mColors, (int32_t)v39, v41, v42, v43, v44, v45, v46);
  v47 = (BetterList_Color__o *)sub_1C93D20(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v47, (const MethodInfo_33DA9DC *)Method_BetterList_Color___ctor__);
  p_mGradientColors = (GrandQuestFolderBoardItem_o *)&NGUIText_TypeInfo->static_fields->mGradientColors;
  p_mGradientColors->klass = (GrandQuestFolderBoardItem_c *)v47;
  sub_1C93A78(p_mGradientColors, (int32_t)v47, v49, v50, v51, v52, v53, v54);
  NGUIText_TypeInfo->static_fields->mAlpha = 1.0;
  v55 = (BetterList_float__o *)sub_1C93D20(BetterList_float__TypeInfo);
  BetterList_float____ctor(v55, (const MethodInfo_33DCF20 *)Method_BetterList_float___ctor__);
  p_mSizes = (GrandQuestFolderBoardItem_o *)&NGUIText_TypeInfo->static_fields->mSizes;
  p_mSizes->klass = (GrandQuestFolderBoardItem_c *)v55;
  sub_1C93A78(p_mSizes, (int32_t)v55, v57, v58, v59, v60, v61, v62);
  v63 = (System_Array_o *)sub_1C93B7C(float___TypeInfo, 8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v63,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0,
    0);
  v64 = NGUIText_TypeInfo->static_fields;
  v64->s_c1 = (struct UnityEngine_Color32_o)v63;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->s_c1, (int32_t)v63, v65, v66, v67, v68, v69, v70);
}


// local variable allocation has failed, the output may be wrong!
void NGUIText__Align(BetterList_Vector3__o *verts, int32_t indexOffset, float printedWidth, const MethodInfo *method)
{
  int32_t v5; // w20
  NGUIText_c *v7; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t alignment; // w9
  float v10; // s0
  int32_t size; // w8
  struct UnityEngine_Vector3_array *buffer; // x9
  float *v13; // x11
  float v14; // s10
  float v15; // s9
  double v16; // d8
  double v17; // d0
  double v18; // d0
  double v19; // d1
  float rectWidth; // s0
  int32_t v21; // w8
  unsigned int v22; // w22
  struct UnityEngine_Vector3_array *v23; // x8
  float v24; // s8
  unsigned int v25; // w20
  int i; // w21
  unsigned int max_length; // w10
  signed int v28; // w9
  unsigned int v29; // w25
  __int64 v30; // x24
  float x; // s0
  float v32; // s2
  float v33; // s1
  float v34; // s3
  float v35; // s11
  float v36; // s12
  float v37; // s14
  float v38; // s0
  float v39; // s10
  float v40; // s13
  double v41; // d0
  __int64 v42; // x8
  float v43; // s0
  float v44; // s1
  float v45; // s13
  float v46; // s10
  double v47; // d0
  __int64 v48; // x8
  float v49; // s0
  float v50; // s1
  unsigned int v51; // w9
  double v52; // d1
  double v53; // d10
  int32_t v54; // w24
  double v55; // d8
  double v56; // d0
  double v57; // d0
  double v58; // d1
  double v59; // d1
  int v60; // w8
  int v61; // w9
  int32_t v62; // w8
  struct UnityEngine_Vector3_array *v63; // x9
  float *v64; // x11
  double iptr; // [xsp+8h] [xbp-88h] BYREF

  v5 = indexOffset;
  if ( (byte_4D351D1 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D1 = 1;
  }
  v7 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v7 = NGUIText_TypeInfo;
  }
  static_fields = v7->static_fields;
  alignment = static_fields->alignment;
  if ( alignment != 2 )
  {
    if ( alignment != 4 )
    {
      if ( alignment == 3 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          static_fields = NGUIText_TypeInfo->static_fields;
        }
        v10 = (float)static_fields->rectWidth - printedWidth;
        if ( v10 >= 0.0 )
        {
          if ( !verts )
            goto LABEL_115;
          size = verts->fields.size;
          if ( size > v5 )
          {
            buffer = verts->fields.buffer;
            while ( buffer )
            {
              if ( (unsigned int)v5 >= LODWORD(buffer->max_length) )
                goto LABEL_114;
              v13 = (float *)((char *)buffer + 12 * v5++);
              v13[8] = v10 + v13[8];
              if ( size == v5 )
                return;
            }
            goto LABEL_115;
          }
        }
      }
      return;
    }
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    rectWidth = (float)static_fields->rectWidth;
    if ( (float)(rectWidth * 0.65) > printedWidth )
      return;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = NGUIText_TypeInfo;
      rectWidth = (float)NGUIText_TypeInfo->static_fields->rectWidth;
    }
    if ( (float)((float)(rectWidth - printedWidth) * 0.5) < 1.0 )
      return;
    if ( !verts )
      goto LABEL_115;
    v21 = verts->fields.size;
    v22 = v21 - v5;
    if ( v21 - v5 < 4 )
      return;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v21 = verts->fields.size;
      rectWidth = (float)NGUIText_TypeInfo->static_fields->rectWidth;
    }
    if ( v5 + 4 >= v21 )
      return;
    v23 = verts->fields.buffer;
    v24 = rectWidth / printedWidth;
    v25 = v5 + 7;
    for ( i = 1; ; ++i )
    {
      if ( !v23 )
        goto LABEL_115;
      max_length = v23->max_length;
      v28 = v25 - 3;
      if ( v25 - 3 >= max_length )
        goto LABEL_114;
      v29 = v25 - 1;
      if ( v25 - 1 >= max_length )
        goto LABEL_114;
      v30 = v28;
      x = v23->m_Items[v28].fields.x;
      v32 = v23->m_Items[v25 - 1].fields.x;
      v33 = (float)(1.0 / (float)(int)((v22 >> 2) - 1)) * (float)i;
      v34 = fminf(v33, 1.0);
      v35 = v32 - x;
      v36 = v24 * v32;
      v37 = v24 * x;
      v38 = (float)(v24 * v32) - (float)(v32 - x);
      if ( v33 < 0.0 )
        v39 = 0.0;
      else
        v39 = v34;
      v40 = v37 + (float)(v39 * (float)(v38 - v37));
      v41 = modf(v40, &iptr);
      if ( v40 >= 0.0 )
      {
        if ( v41 != 0.5 )
        {
          v45 = floorf(v40 + 0.5);
          goto LABEL_58;
        }
        v42 = (__int64)iptr;
        v43 = iptr;
        v44 = v43 + 1.0;
      }
      else
      {
        if ( v41 != -0.5 )
        {
          v45 = ceilf(v40 + -0.5);
          goto LABEL_58;
        }
        v42 = (__int64)iptr;
        v43 = iptr;
        v44 = v43 + -1.0;
      }
      if ( (v42 & 1) != 0 )
        v45 = v44;
      else
        v45 = v43;
LABEL_58:
      v46 = (float)(v37 + v35) + (float)(v39 * (float)(v36 - (float)(v37 + v35)));
      v47 = modf(v46, &iptr);
      if ( v46 >= 0.0 )
      {
        if ( v47 != 0.5 )
        {
          v49 = floorf(v46 + 0.5);
          goto LABEL_68;
        }
        v48 = (__int64)iptr;
        v49 = iptr;
        v50 = v49 + 1.0;
      }
      else
      {
        if ( v47 != -0.5 )
        {
          v49 = ceilf(v46 + -0.5);
          goto LABEL_68;
        }
        v48 = (__int64)iptr;
        v49 = iptr;
        v50 = v49 + -1.0;
      }
      if ( (v48 & 1) != 0 )
        v49 = v50;
LABEL_68:
      v23 = verts->fields.buffer;
      if ( !v23 )
        goto LABEL_115;
      v51 = v23->max_length;
      if ( v25 - 3 >= v51 )
        goto LABEL_114;
      v23->m_Items[v30].fields.x = v45;
      if ( v25 - 2 >= v51 )
        goto LABEL_114;
      v23->m_Items[v25 - 2].fields.x = v45;
      if ( v29 >= v51 )
        goto LABEL_114;
      v23->m_Items[v25 - 1].fields.x = v49;
      if ( v25 >= v51 )
        goto LABEL_114;
      v23->m_Items[v25].fields.x = v49;
      v25 += 4;
      if ( (signed int)(v29 + 2) >= verts->fields.size )
        return;
    }
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  v14 = (float)static_fields->rectWidth - printedWidth;
  v15 = v14 * 0.5;
  if ( (float)(v14 * 0.5) < 0.0 )
    return;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v14 = (float)NGUIText_TypeInfo->static_fields->rectWidth - printedWidth;
  }
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = v14;
  v17 = modf(v14, &iptr);
  if ( v14 >= 0.0 )
  {
    if ( v17 != 0.5 )
    {
      v53 = floor(v16 + 0.5);
      goto LABEL_82;
    }
    v18 = iptr;
    v19 = 1.0;
  }
  else
  {
    if ( v17 != -0.5 )
    {
      v53 = ceil(v16 + -0.5);
      goto LABEL_82;
    }
    v18 = iptr;
    v19 = -1.0;
  }
  v52 = v18 + v19;
  if ( ((__int64)v18 & 1) != 0 )
    v53 = v52;
  else
    v53 = v18;
LABEL_82:
  v54 = NGUIText_TypeInfo->static_fields->rectWidth;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v55 = (float)v54;
  v56 = modf(v55, &iptr);
  if ( v54 < 0 )
  {
    if ( v56 != -0.5 )
    {
      v57 = ceil(v55 + -0.5);
      goto LABEL_96;
    }
    v57 = iptr;
    v58 = -1.0;
  }
  else
  {
    if ( v56 != 0.5 )
    {
      v57 = floor(v55 + 0.5);
      goto LABEL_96;
    }
    v57 = iptr;
    v58 = 1.0;
  }
  v59 = v57 + v58;
  if ( ((__int64)v57 & 1) != 0 )
    v57 = v59;
LABEL_96:
  v60 = (int)v57;
  if ( v57 == INFINITY )
    v60 = 0x80000000;
  if ( v53 == INFINITY )
    v61 = 0;
  else
    v61 = (int)v53 & 1;
  if ( v61 && (v60 & 1) == 0 || (v60 & (v61 ^ 1)) != 0 )
  {
    v7 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v7 = NGUIText_TypeInfo;
    }
    v15 = v15 + (float)(v7->static_fields->fontScale * 0.5);
  }
  if ( !verts )
    goto LABEL_115;
  v62 = verts->fields.size;
  if ( v62 > v5 )
  {
    v63 = verts->fields.buffer;
    while ( v63 )
    {
      if ( (unsigned int)v5 >= LODWORD(v63->max_length) )
LABEL_114:
        sub_1C93D34(v7);
      v64 = (float *)((char *)v63 + 12 * v5++);
      v64[8] = v15 + v64[8];
      if ( v62 == v5 )
        return;
    }
LABEL_115:
    sub_1C93D2C(v7, *(_QWORD *)&indexOffset);
  }
}


void NGUIText__ApplyEffect(
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        int32_t start,
        int32_t end,
        float x,
        float y,
        const MethodInfo *method)
{
  long double v8; // q8
  long double v9; // q9
  long double v10; // q10
  long double v11; // q11
  long double v12; // q12
  __int64 v14; // x19
  NGUIText_c *v18; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  float a; // s8
  float v21; // s9
  UnityEngine_Object_o *bitmapFont; // x23
  bool v23; // w0
  __int64 v24; // x1
  long double v25; // q2
  long double v26; // q1
  long double inited; // q0
  NGUIText_c *v28; // x0
  UIFont_o *v29; // x0
  bool premultipliedAlphaShader; // w0
  float v31; // s1
  __int64 v32; // x27
  __int64 v33; // x28
  __int64 v34; // x23
  __int64 v35; // x26
  struct UnityEngine_Vector3_array *buffer; // x8
  struct UnityEngine_Vector2_array *v37; // x8
  struct UnityEngine_Color32_array *v38; // x8
  UnityEngine_Color32_o v39; // x1
  struct UnityEngine_Vector3_array *v40; // x8
  struct UnityEngine_Color32_array *v41; // x25
  unsigned __int64 v42; // x29
  NGUIText_c *v43; // x0
  UnityEngine_Object_o *v44; // x24
  bool v45; // w0
  long double v46; // q2
  long double v47; // q1
  long double v48; // q0
  NGUIText_c *v49; // x0
  bool v50; // w0
  int v51; // [xsp+8h] [xbp-B8h]
  __int64 v53; // [xsp+10h] [xbp-B0h]
  float32x2_t v55; // [xsp+20h] [xbp-A0h]

  v14 = (unsigned int)start;
  if ( (byte_4D351DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_Color32__Add__);
    sub_1C93AD4(&Method_BetterList_Vector2__Add__);
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351DF = 1;
  }
  v18 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v18 = NGUIText_TypeInfo;
  }
  static_fields = v18->static_fields;
  *(float *)&v10 = static_fields->outlineEffect.fields.r;
  *(float *)&v11 = static_fields->outlineEffect.fields.g;
  *(float *)&v12 = static_fields->outlineEffect.fields.b;
  a = static_fields->outlineEffect.fields.a;
  v21 = static_fields->tint.fields.a;
  bitmapFont = (UnityEngine_Object_o *)static_fields->bitmapFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  *(float *)&v8 = a * v21;
  v23 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
  v25 = v12;
  v26 = v11;
  inited = v10;
  if ( v23 )
  {
    v28 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v28 = NGUIText_TypeInfo;
    }
    v29 = v28->static_fields->bitmapFont;
    if ( !v29 )
      goto LABEL_50;
    premultipliedAlphaShader = UIFont__get_premultipliedAlphaShader(v29, 0);
    v25 = v12;
    v26 = v11;
    inited = v10;
    if ( premultipliedAlphaShader )
    {
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      *(float *)&inited = *(float *)&v10 * *(float *)&v8;
      *(float *)&v26 = *(float *)&v11 * *(float *)&v8;
      *(float *)&v25 = *(float *)&v12 * *(float *)&v8;
      if ( *(float *)&v8 == 1.0 )
      {
        *(float *)&v25 = *(float *)&v12;
        *(float *)&v26 = *(float *)&v11;
        *(float *)&inited = *(float *)&v10;
      }
    }
  }
  v29 = (UIFont_o *)sub_25BA1B8(0, inited, v26, v25, v8);
  v51 = (int)v29;
  if ( (int)v14 < end )
  {
    if ( verts )
    {
      v31 = y;
      v53 = -(__int64)end;
      v32 = v14 << 32;
      v33 = (int)v14;
      v34 = (int)v14 + 8LL;
      v35 = 12LL * (int)v14 + 32;
      v55.n64_u64[0] = __PAIR64__(LODWORD(v31), LODWORD(x));
      while ( 1 )
      {
        buffer = verts->fields.buffer;
        if ( !buffer )
          break;
        if ( (unsigned int)v14 >= LODWORD(buffer->max_length) )
          goto LABEL_51;
        BetterList_Vector3___Add(
          verts,
          *(UnityEngine_Vector3_o *)((char *)&buffer->obj.klass + v35),
          (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v37 = uvs->fields.buffer;
        if ( !v37 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v37->max_length) )
          goto LABEL_51;
        BetterList_Vector2___Add(uvs, v37->m_Items[v33], (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v38 = cols->fields.buffer;
        if ( !v38 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v38->max_length) )
          goto LABEL_51;
        v39 = (UnityEngine_Color32_o)*((unsigned int *)&v38->obj.klass + v34);
        BetterList_Color32___Add(cols, v39, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
        v40 = verts->fields.buffer;
        if ( !v40 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v40->max_length) )
          goto LABEL_51;
        *(float32x2_t *)((char *)&v40->obj.klass + v35) = vadd_f32(*(float32x2_t *)((char *)&v40->obj.klass + v35), v55);
        v41 = cols->fields.buffer;
        if ( !v41 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v41->max_length) )
          goto LABEL_51;
        v42 = *((unsigned int *)&v41->obj.klass + v34);
        if ( (~(_DWORD)v42 & 0xFF000000) != 0 )
        {
          v43 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v43 = NGUIText_TypeInfo;
          }
          v44 = (UnityEngine_Object_o *)v43->static_fields->bitmapFont;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          *(float *)&v9 = *(float *)&v8 * (float)((float)(unsigned int)(v42 >> 24) / 255.0);
          v45 = UnityEngine_Object__op_Inequality(v44, 0, 0);
          v46 = v12;
          v47 = v11;
          v48 = v10;
          if ( v45 )
          {
            v49 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v49 = NGUIText_TypeInfo;
            }
            v29 = v49->static_fields->bitmapFont;
            if ( !v29 )
              break;
            v50 = UIFont__get_premultipliedAlphaShader(v29, 0);
            v46 = v12;
            v47 = v11;
            v48 = v10;
            if ( v50 )
            {
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                v48 = j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
              *(float *)&v48 = *(float *)&v10 * *(float *)&v9;
              *(float *)&v47 = *(float *)&v11 * *(float *)&v9;
              *(float *)&v46 = *(float *)&v12 * *(float *)&v9;
              if ( *(float *)&v9 == 1.0 )
              {
                *(float *)&v46 = *(float *)&v12;
                *(float *)&v47 = *(float *)&v11;
                *(float *)&v48 = *(float *)&v10;
              }
            }
          }
          v29 = (UIFont_o *)sub_25BA1B8(0, v48, v47, v46, v9);
          if ( (unsigned int)v14 >= LODWORD(v41->max_length) )
LABEL_51:
            sub_1C93D34(v29);
          *(int32_t *)((char *)&v41->m_Items[0].fields.rgba + (v32 >> 30)) = (int)v29;
        }
        else
        {
          *((_DWORD *)&v41->obj.klass + v34) = v51;
        }
        v32 += 0x100000000LL;
        ++v34;
        v35 += 12;
        ++v33;
        LODWORD(v14) = v14 + 1;
        if ( v53 + v34 == 8 )
          return;
      }
    }
LABEL_50:
    sub_1C93D2C(v29, v24);
  }
}


int32_t NGUIText__CalculateOffsetToFit(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  NGUIText_c *v4; // x0
  NGUIText_c *mSizes; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int32_t stringLength; // w20
  int32_t v9; // w21
  int32_t i; // w23
  struct NGUIText_StaticFields *static_fields; // x8
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v13; // x22
  NGUIText_c *v14; // x0
  struct NGUIText_StaticFields *v15; // x8
  struct System_String_o *sequence; // x8
  int v17; // w23
  NGUIText_c *v18; // x0
  int32_t v19; // w22
  const MethodInfo *v20; // x2
  float GlyphWidth; // s0
  NGUIText_c *v22; // x0
  float v23; // s8
  struct NGUIText_StaticFields *v24; // x8
  int32_t size; // w19
  struct BetterList_float__o *v27; // x9
  float j; // s8
  float Item; // s0

  if ( (byte_4D351D7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_float__Add__);
    sub_1C93AD4(&Method_BetterList_float__Clear__);
    sub_1C93AD4(&Method_BetterList_float__get_Item__);
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D7 = 1;
  }
  if ( System_String__IsNullOrEmpty(text, 0) )
    return 0;
  v4 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v4 = NGUIText_TypeInfo;
  }
  if ( v4->static_fields->regionWidth < 1 )
    return 0;
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  NGUIText__Prepare(text, v3);
  if ( !text )
    goto LABEL_49;
  stringLength = text->fields._stringLength;
  v9 = 0;
  for ( i = 0; ; i = v19 )
  {
    mSizes = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      mSizes = NGUIText_TypeInfo;
    }
    static_fields = mSizes->static_fields;
    if ( v9 >= stringLength )
      break;
    if ( !static_fields->useSymbols )
      goto LABEL_29;
    if ( !mSizes->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(mSizes);
    Symbol = NGUIText__GetSymbol(text, v9, stringLength, v7);
    if ( Symbol )
    {
      v13 = Symbol;
      v14 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v14 = NGUIText_TypeInfo;
      }
      v15 = v14->static_fields;
      mSizes = (NGUIText_c *)v15->mSizes;
      if ( !mSizes )
        goto LABEL_49;
      BetterList_float___Add(
        (BetterList_float__o *)mSizes,
        v15->finalSpacingX + (float)(v15->fontScale * (float)v13->fields.mAdvance),
        (const MethodInfo_33DC8B8 *)Method_BetterList_float__Add__);
      sequence = v13->fields.sequence;
      if ( !sequence )
        goto LABEL_49;
      v17 = sequence->fields._stringLength - 1;
      if ( v17 >= 1 )
      {
        do
        {
          v18 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v18 = NGUIText_TypeInfo;
          }
          mSizes = (NGUIText_c *)v18->static_fields->mSizes;
          if ( !mSizes )
            goto LABEL_49;
          BetterList_float___Add(
            (BetterList_float__o *)mSizes,
            0.0,
            (const MethodInfo_33DC8B8 *)Method_BetterList_float__Add__);
          --v17;
        }
        while ( v17 );
        sequence = v13->fields.sequence;
        if ( !sequence )
          goto LABEL_49;
      }
      v19 = 0;
      v9 = v9 + sequence->fields._stringLength - 1;
    }
    else
    {
LABEL_29:
      LOWORD(v19) = System_String__get_Chars(text, v9, 0);
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v19 = (unsigned __int16)v19;
      GlyphWidth = NGUIText__GetGlyphWidth((unsigned __int16)v19, i, v20);
      if ( GlyphWidth != 0.0 )
      {
        v22 = NGUIText_TypeInfo;
        v23 = GlyphWidth;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v22 = NGUIText_TypeInfo;
        }
        v24 = v22->static_fields;
        mSizes = (NGUIText_c *)v24->mSizes;
        if ( !mSizes )
          goto LABEL_49;
        BetterList_float___Add(
          (BetterList_float__o *)mSizes,
          v23 + v24->finalSpacingX,
          (const MethodInfo_33DC8B8 *)Method_BetterList_float__Add__);
      }
    }
    ++v9;
  }
  v27 = static_fields->mSizes;
  if ( !v27 )
    goto LABEL_49;
  size = v27->fields.size;
  for ( j = (float)static_fields->regionWidth; ; j = j - Item )
  {
    if ( !mSizes->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mSizes);
      mSizes = NGUIText_TypeInfo;
    }
    mSizes = (NGUIText_c *)mSizes->static_fields->mSizes;
    if ( size <= 0 || j <= 0.0 )
      break;
    if ( !mSizes )
      goto LABEL_49;
    Item = BetterList_float___get_Item(
             (BetterList_float__o *)mSizes,
             --size,
             (const MethodInfo_33DC6B8 *)Method_BetterList_float__get_Item__);
    mSizes = NGUIText_TypeInfo;
  }
  if ( !mSizes )
LABEL_49:
    sub_1C93D2C(mSizes, v6);
  BetterList_float___Clear((BetterList_float__o *)mSizes, (const MethodInfo_33DC8A0 *)Method_BetterList_float__Clear__);
  if ( j < 0.0 )
    ++size;
  return size;
}


UnityEngine_Vector2_o NGUIText__CalculatePrintedSize(System_String_o *text, const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  const MethodInfo *v6; // x1
  NGUIText_c *v7; // x8
  System_String_o *v8; // x0
  NGUIText_c *v9; // x0
  __int64 v10; // x1
  int stringLength; // w20
  int32_t v12; // w24
  int32_t v13; // w21
  float v14; // s15
  float v15; // s9
  float v16; // s14
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  unsigned int Chars; // w23
  NGUIText_c *v20; // x0
  NGUIText_c *v21; // x8
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v23; // x25
  int mAdvance; // s13
  struct NGUIText_StaticFields *v25; // x8
  float finalSpacingX; // s8
  float fontScale; // s11
  float v28; // s11
  double v29; // d8
  double v30; // d0
  double v31; // d0
  double v32; // d1
  float GlyphWidth; // s0
  NGUIText_c *v34; // x0
  float v35; // s8
  float v36; // s11
  double v37; // d8
  double v38; // d0
  double v39; // d0
  double v40; // d1
  double v41; // d1
  int v42; // w10
  struct NGUIText_StaticFields *v43; // x8
  struct System_String_o *sequence; // x8
  double v45; // d1
  NGUIText_c *v46; // x0
  int v47; // w10
  struct NGUIText_StaticFields *v48; // x8
  NGUIText_c *v49; // x0
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D351D6 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D6 = 1;
  }
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( System_String__IsNullOrEmpty(text, 0) )
    goto LABEL_101;
  v7 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v7 = NGUIText_TypeInfo;
  }
  if ( v7->static_fields->encoding )
  {
    if ( !v7->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = NGUIText__StripSymbols(text, v6);
    v7 = NGUIText_TypeInfo;
    text = v8;
  }
  if ( !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  NGUIText__Prepare(text, v6);
  if ( !text )
LABEL_102:
    sub_1C93D2C(v9, v10);
  stringLength = text->fields._stringLength;
  if ( stringLength < 1 )
  {
    v15 = 0.0;
    v16 = 0.0;
    goto LABEL_97;
  }
  v12 = 0;
  v13 = 0;
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  do
  {
    Chars = System_String__get_Chars(text, v13, 0);
    if ( Chars == 10 )
    {
      v20 = NGUIText_TypeInfo;
      if ( v14 > v16 )
        v16 = v14;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v20 = NGUIText_TypeInfo;
      }
      v14 = 0.0;
      v15 = v15 + v20->static_fields->finalLineHeight;
      goto LABEL_72;
    }
    if ( Chars < 0x20 )
      goto LABEL_72;
    v21 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v21 = NGUIText_TypeInfo;
    }
    if ( v21->static_fields->useSymbols )
    {
      if ( !v21->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v21);
      Symbol = NGUIText__GetSymbol(text, v13, stringLength, v18);
      v21 = NGUIText_TypeInfo;
      v23 = Symbol;
    }
    else
    {
      v23 = 0;
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      if ( !v23 )
        goto LABEL_41;
LABEL_33:
      mAdvance = v23->fields.mAdvance;
      v25 = NGUIText_TypeInfo->static_fields;
      finalSpacingX = v25->finalSpacingX;
      fontScale = v25->fontScale;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v28 = finalSpacingX + (float)(fontScale * (float)mAdvance);
      v29 = (float)(v14 + v28);
      v30 = modf(v29, &iptr);
      if ( (float)(v14 + v28) >= 0.0 )
      {
        if ( v30 == 0.5 )
        {
          v31 = iptr;
          v32 = 1.0;
LABEL_53:
          v41 = v31 + v32;
          if ( ((__int64)v31 & 1) != 0 )
            v31 = v41;
          goto LABEL_58;
        }
        v31 = floor(v29 + 0.5);
      }
      else
      {
        if ( v30 == -0.5 )
        {
          v31 = iptr;
          v32 = -1.0;
          goto LABEL_53;
        }
        v31 = ceil(v29 + -0.5);
      }
LABEL_58:
      v9 = NGUIText_TypeInfo;
      v42 = (int)v31;
      v43 = NGUIText_TypeInfo->static_fields;
      if ( v31 == INFINITY )
        v42 = 0x80000000;
      if ( v42 <= v43->regionWidth )
      {
        v28 = v14 + v28;
      }
      else
      {
        if ( v14 > v16 )
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v9 = NGUIText_TypeInfo;
            v43 = NGUIText_TypeInfo->static_fields;
          }
          v16 = v14 - v43->finalSpacingX;
        }
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = NGUIText_TypeInfo;
        }
        v15 = v15 + v9->static_fields->finalLineHeight;
      }
      sequence = v23->fields.sequence;
      if ( !sequence )
        goto LABEL_102;
      v12 = 0;
      v13 = v13 + sequence->fields._stringLength - 1;
      goto LABEL_71;
    }
    if ( v23 )
      goto LABEL_33;
LABEL_41:
    GlyphWidth = NGUIText__GetGlyphWidth(Chars, v12, v17);
    if ( GlyphWidth == 0.0 )
      goto LABEL_72;
    v34 = NGUIText_TypeInfo;
    v35 = GlyphWidth;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v34 = NGUIText_TypeInfo;
    }
    v36 = v34->static_fields->finalSpacingX;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = v35 + v36;
    v37 = (float)(v14 + v28);
    v38 = modf(v37, &iptr);
    if ( (float)(v14 + v28) >= 0.0 )
    {
      if ( v38 == 0.5 )
      {
        v39 = iptr;
        v40 = 1.0;
LABEL_76:
        v45 = v39 + v40;
        if ( ((__int64)v39 & 1) != 0 )
          v39 = v45;
        goto LABEL_81;
      }
      v39 = floor(v37 + 0.5);
    }
    else
    {
      if ( v38 == -0.5 )
      {
        v39 = iptr;
        v40 = -1.0;
        goto LABEL_76;
      }
      v39 = ceil(v37 + -0.5);
    }
LABEL_81:
    v46 = NGUIText_TypeInfo;
    v47 = (int)v39;
    v48 = NGUIText_TypeInfo->static_fields;
    if ( v39 == INFINITY )
      v47 = 0x80000000;
    if ( v47 > v48->regionWidth )
    {
      if ( v14 > v16 )
      {
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v46 = NGUIText_TypeInfo;
          v48 = NGUIText_TypeInfo->static_fields;
        }
        v16 = v14 - v48->finalSpacingX;
      }
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = NGUIText_TypeInfo;
      }
      v12 = Chars;
      v15 = v15 + v46->static_fields->finalLineHeight;
LABEL_71:
      v14 = v28;
      goto LABEL_72;
    }
    v12 = Chars;
    v14 = v14 + v28;
LABEL_72:
    ++v13;
  }
  while ( v13 < stringLength );
  if ( v14 <= v16 )
  {
LABEL_97:
    v49 = NGUIText_TypeInfo;
    goto LABEL_98;
  }
  v49 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v49 = NGUIText_TypeInfo;
  }
  v16 = v14 - v49->static_fields->finalSpacingX;
LABEL_98:
  if ( !v49->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v49);
    v49 = NGUIText_TypeInfo;
  }
  x = v16;
  y = v15 + v49->static_fields->finalLineHeight;
LABEL_101:
  result.fields.x = x;
  result.fields.y = y;
  return result;
}


System_String_o *NGUIText__EncodeAlpha(float a, const MethodInfo *method)
{
  float v3; // s9
  double v4; // d8
  double v5; // d0
  double v6; // d0
  double v7; // d1
  double v8; // d1
  int v9; // w8
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v3 = a * 255.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = v3;
  v5 = modf(v3, &iptr);
  if ( v3 >= 0.0 )
  {
    if ( v5 != 0.5 )
    {
      v6 = floor(v4 + 0.5);
      goto LABEL_15;
    }
    v6 = iptr;
    v7 = 1.0;
  }
  else
  {
    if ( v5 != -0.5 )
    {
      v6 = ceil(v4 + -0.5);
      goto LABEL_15;
    }
    v6 = iptr;
    v7 = -1.0;
  }
  v8 = v6 + v7;
  if ( ((__int64)v6 & 1) != 0 )
    v6 = v8;
LABEL_15:
  v9 = (int)v6;
  if ( v6 == INFINITY )
    v9 = 0x80000000;
  if ( v9 >= 255 )
    v9 = 255;
  return NGUIMath__DecimalToHex8(v9 & (unsigned int)~(v9 >> 31), 0);
}


System_String_o *NGUIText__EncodeColor(UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  unsigned int v6; // w0
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4D351CC & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351CC = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v8.fields.r = r;
  v8.fields.g = g;
  v8.fields.b = b;
  v8.fields.a = a;
  v6 = NGUIMath__ColorToInt(v8, 0);
  return NGUIMath__DecimalToHex24(v6 >> 8, 0);
}


System_String_o *NGUIText__EncodeColor24(UnityEngine_Color_o c, const MethodInfo *method)
{
  unsigned int v2; // w0

  v2 = NGUIMath__ColorToInt(c, 0);
  return NGUIMath__DecimalToHex24(v2 >> 8, 0);
}


System_String_o *NGUIText__EncodeColor32(UnityEngine_Color_o c, const MethodInfo *method)
{
  int32_t v2; // w0

  v2 = NGUIMath__ColorToInt(c, 0);
  return NGUIMath__DecimalToHex32(v2, 0);
}


System_String_o *NGUIText__EncodeColor_50038020(System_String_o *text, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *v16; // x20
  int32_t v17; // w1
  unsigned int v18; // w0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w1
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4D351CD & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_16063/*"[c]["*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    sub_1C93AD4(&StringLiteral_15925/*"[-][/c]"*/);
    byte_4D351CD = 1;
  }
  v8 = (System_String_o *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !v8 )
    sub_1C93D2C(0, v9);
  v16 = v8;
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_12;
  v17 = StringLiteral_16063/*"[c]["*/;
  v8[1].monitor = (void *)StringLiteral_16063/*"[c]["*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8[1].monitor, v17, v10, v11, v12, v13, v14, v15);
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v46.fields.r = r;
  v46.fields.g = g;
  v46.fields.b = b;
  v46.fields.a = a;
  v18 = NGUIMath__ColorToInt(v46, 0);
  v8 = NGUIMath__DecimalToHex24(v18 >> 8, 0);
  if ( LODWORD(v16[1].klass) <= 1
    || (v16[1].fields = (System_String_Fields)v8,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16[1].fields, (int32_t)v8, v19, v20, v21, v22, v23, v24),
        LODWORD(v16[1].klass) <= 2)
    || (v31 = StringLiteral_16156/*"]"*/,
        v16[2].klass = (System_String_c *)StringLiteral_16156/*"]"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16[2], v31, v25, v26, v27, v28, v29, v30),
        LODWORD(v16[1].klass) <= 3)
    || (v16[2].monitor = text,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16[2].monitor, (int32_t)text, v32, v33, v34, v35, v36, v37),
        LODWORD(v16[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C93D34(v8);
  }
  v44 = StringLiteral_15925/*"[-][/c]"*/;
  v16[2].fields = (System_String_Fields)StringLiteral_15925/*"[-][/c]"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16[2].fields, v44, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_64466256((System_String_array *)v16, 0);
}


void NGUIText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_4D351D4 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D4 = 1;
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_14;
  v4 = System_Text_StringBuilder__get_Length(v3, 0) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_14;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0);
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0);
        return;
      }
LABEL_14:
      sub_1C93D2C(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_14;
  System_Text_StringBuilder__Append_64512012(v3, 0xAu, 0);
}


int32_t NGUIText__GetApproximateCharacterIndex(
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  __int128 v4; // q10
  float y; // s8
  float x; // s9
  BetterList_Vector3__o *v8; // x20
  int32_t v9; // w22
  int32_t v10; // w21
  __int128 v11; // q11
  float v12; // s12
  __int128 v13; // q0

  y = pos.fields.y;
  x = pos.fields.x;
  v8 = verts;
  if ( (byte_4D351D3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C93AD4(&Method_BetterList_Vector3__get_Item__);
    byte_4D351D3 = 1;
  }
  if ( !v8 )
    goto LABEL_16;
  if ( v8->fields.size < 1 )
  {
    v10 = 0;
    if ( indices )
      return BetterList_int___get_Item(indices, v10, (const MethodInfo_33DB400 *)Method_BetterList_int__get_Item__);
LABEL_16:
    sub_1C93D2C(verts, indices);
  }
  LODWORD(v4) = 2139095039;
  v9 = 0;
  v10 = 0;
  v11 = v4;
  do
  {
    v12 = vabds_f32(
            y,
            COERCE_FLOAT(LODWORD(BetterList_Vector3___get_Item(
                                   v8,
                                   v9,
                                   (const MethodInfo_33DDA0C *)Method_BetterList_Vector3__get_Item__).fields.y)));
    if ( v12 > *(float *)&v4 )
      goto LABEL_11;
    *(float *)&v13 = vabds_f32(
                       x,
                       COERCE_FLOAT(
                         BetterList_Vector3___get_Item(
                           v8,
                           v9,
                           (const MethodInfo_33DDA0C *)Method_BetterList_Vector3__get_Item__)));
    if ( v12 < *(float *)&v4 )
    {
      v10 = v9;
      *(float *)&v4 = v12;
      goto LABEL_12;
    }
    if ( *(float *)&v13 >= *(float *)&v11 )
LABEL_11:
      v13 = v11;
    else
      v10 = v9;
LABEL_12:
    ++v9;
    v11 = v13;
  }
  while ( v9 < v8->fields.size );
  if ( !indices )
    goto LABEL_16;
  return BetterList_int___get_Item(indices, v10, (const MethodInfo_33DB400 *)Method_BetterList_int__get_Item__);
}


System_String_o *NGUIText__GetEndOfLineThatFits(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t stringLength; // w20
  int32_t v4; // w1

  v2 = text;
  if ( (byte_4D351D8 & 1) == 0 )
  {
    text = (System_String_o *)sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D8 = 1;
  }
  if ( !v2 )
    sub_1C93D2C(text, method);
  stringLength = v2->fields._stringLength;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v4 = NGUIText__CalculateOffsetToFit(v2, method);
  return System_String__Substring_64471664(v2, v4, stringLength - v4, 0);
}


int32_t NGUIText__GetExactCharacterIndex(
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  BetterList_Vector3__o *v7; // x20
  int32_t v8; // w21
  int32_t i; // w22

  y = pos.fields.y;
  x = pos.fields.x;
  v7 = verts;
  if ( (byte_4D351D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C93AD4(&Method_BetterList_Vector3__get_Item__);
    byte_4D351D2 = 1;
  }
  if ( !indices )
LABEL_14:
    sub_1C93D2C(verts, indices);
  if ( indices->fields.size < 1 )
    return 0;
  v8 = 0;
  for ( i = 1; ; i += 2 )
  {
    if ( !v7 )
      goto LABEL_14;
    if ( x >= COERCE_FLOAT(
                BetterList_Vector3___get_Item(
                  v7,
                  i - 1,
                  (const MethodInfo_33DDA0C *)Method_BetterList_Vector3__get_Item__))
      && x <= COERCE_FLOAT(BetterList_Vector3___get_Item(v7, i, (const MethodInfo_33DDA0C *)Method_BetterList_Vector3__get_Item__))
      && y >= COERCE_FLOAT(LODWORD(BetterList_Vector3___get_Item(
                                     v7,
                                     i - 1,
                                     (const MethodInfo_33DDA0C *)Method_BetterList_Vector3__get_Item__).fields.y))
      && y <= COERCE_FLOAT(LODWORD(BetterList_Vector3___get_Item(
                                     v7,
                                     i,
                                     (const MethodInfo_33DDA0C *)Method_BetterList_Vector3__get_Item__).fields.y)) )
    {
      break;
    }
    if ( ++v8 >= indices->fields.size )
      return 0;
  }
  return BetterList_int___get_Item(indices, v8, (const MethodInfo_33DB400 *)Method_BetterList_int__get_Item__);
}


NGUIText_GlyphInfo_o *NGUIText__GetGlyph(int32_t ch, int32_t prev, const MethodInfo *method)
{
  NGUIText_c *v5; // x0
  UnityEngine_Object_o *bitmapFont; // x20
  __int64 v7; // x1
  NGUIText_c *v8; // x0
  int32_t v9; // w20
  void *bmFont; // x0
  NGUIText_GlyphInfo_o *result; // x0
  NGUIText_GlyphInfo_o *v12; // x20
  struct NGUIText_StaticFields *static_fields; // x8
  struct NGUIText_GlyphInfo_o *glyph; // x9
  float x; // s1
  float v16; // s0
  int y_low; // w10
  int x_low; // w11
  int v19; // w12
  int32x2_t v20; // d1
  __int128 v21; // q1
  float v22; // s2
  int v23; // w23
  char v24; // w19
  __int64 v25; // x9
  float32x2_t *v26; // x8
  __int64 v27; // x9
  __int64 v28; // x8
  float v29; // s0
  NGUIText_c *v30; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  bool v32; // w8
  NGUIText_c *v33; // x0
  struct NGUIText_StaticFields *v34; // x8
  bool CharacterInfo; // w8
  __int64 v36; // x8
  __int64 v37; // x19
  struct NGUIText_StaticFields *v38; // x8
  struct NGUIText_GlyphInfo_o *v39; // x19
  struct NGUIText_StaticFields *v40; // x8
  struct NGUIText_GlyphInfo_o *v41; // x19
  struct NGUIText_StaticFields *v42; // x8
  struct NGUIText_GlyphInfo_o *v43; // x19
  int32_t minY; // w0
  struct NGUIText_StaticFields *v45; // x8
  UnityEngine_Vector2_o *v46; // x19
  UnityEngine_Vector2_o uvTopLeft; // kr00_8
  struct NGUIText_StaticFields *v48; // x8
  UnityEngine_Vector2_o *v49; // x19
  UnityEngine_Vector2_o uvBottomLeft; // kr08_8
  struct NGUIText_StaticFields *v51; // x8
  UnityEngine_Vector2_o *v52; // x19
  UnityEngine_Vector2_o uvBottomRight; // kr10_8
  struct NGUIText_StaticFields *v54; // x8
  UnityEngine_Vector2_o *v55; // x19
  UnityEngine_Vector2_o uvTopRight; // kr18_8
  struct NGUIText_StaticFields *v57; // x8
  struct NGUIText_GlyphInfo_o *v58; // x19
  struct NGUIText_GlyphInfo_o *v59; // x19
  float v60; // s8
  double v61; // d0
  double v62; // d0
  float v63; // s1
  __int64 v64; // x8
  float v65; // s0
  float v66; // s1
  struct NGUIText_GlyphInfo_o *v67; // x19
  float y; // s8
  double v69; // d0
  double v70; // d0
  float v71; // s1
  __int64 v72; // x8
  float v73; // s0
  float v74; // s1
  struct NGUIText_GlyphInfo_o *v75; // x19
  float v76; // s8
  double v77; // d0
  double v78; // d0
  float v79; // s1
  __int64 v80; // x8
  float v81; // s0
  float v82; // s1
  struct NGUIText_GlyphInfo_o *v83; // x19
  float v84; // s8
  double v85; // d0
  int32x2_t v86; // d2
  double v87; // d0
  float v88; // s1
  __int64 v89; // x8
  float v90; // s0
  float v91; // s1
  struct NGUIText_StaticFields *v92; // x8
  float32x2_t *v93; // x8
  float32x2_t *v94; // x8
  unsigned __int64 v95; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D351CA & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351CA = 1;
  }
  v5 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v5 = NGUIText_TypeInfo;
  }
  bitmapFont = (UnityEngine_Object_o *)v5->static_fields->bitmapFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
  {
    v8 = NGUIText_TypeInfo;
    if ( ch == 8201 )
      v9 = 32;
    else
      v9 = ch;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v8 = NGUIText_TypeInfo;
    }
    bmFont = v8->static_fields->bitmapFont;
    if ( !bmFont )
      goto LABEL_107;
    bmFont = UIFont__get_bmFont((UIFont_o *)bmFont, 0);
    if ( !bmFont )
      goto LABEL_107;
    result = (NGUIText_GlyphInfo_o *)BMFont__GetGlyph_49990172((BMFont_o *)bmFont, v9, 0);
    if ( !result )
      return result;
    v12 = result;
    if ( prev )
      prev = BMGlyph__GetKerning((BMGlyph_o *)result, prev, 0);
    bmFont = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      bmFont = NGUIText_TypeInfo;
    }
    static_fields = (struct NGUIText_StaticFields *)*((_QWORD *)bmFont + 23);
    glyph = static_fields->glyph;
    if ( !glyph )
      goto LABEL_107;
    glyph->fields.v0.fields.x = (float)(LODWORD(v12->fields.u0.fields.y) + prev);
    if ( !*((_DWORD *)bmFont + 56) )
    {
      j_il2cpp_runtime_class_init_0(bmFont);
      bmFont = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
      glyph = static_fields->glyph;
      if ( !glyph )
        goto LABEL_107;
    }
    x = glyph->fields.v0.fields.x;
    v16 = (float)-LODWORD(v12->fields.u1.fields.x);
    glyph->fields.v1.fields.y = v16;
    y_low = LODWORD(v12->fields.v1.fields.y);
    glyph->fields.v1.fields.x = x + (float)y_low;
    x_low = LODWORD(v12->fields.u0.fields.x);
    glyph->fields.v0.fields.y = v16 - (float)x_low;
    v19 = LODWORD(v12->fields.v0.fields.y);
    glyph->fields.u0.fields.x = (float)v19;
    v20.n64_u32[0] = LODWORD(v12->fields.v1.fields.x);
    v20.n64_u32[1] = v19 + y_low;
    *(float32x2_t *)&v21 = vcvt_f32_s32(v20);
    v22 = (float)(LODWORD(v12->fields.v1.fields.x) + x_low);
    *((_QWORD *)&v21 + 1) = v21;
    glyph->fields.u0.fields.y = v22;
    glyph->fields.u1.fields.x = (float)v19;
    *(_OWORD *)&glyph->fields.u1.fields.y = v21;
    glyph->fields.u3.fields.y = v22;
    v23 = LODWORD(v12->fields.u1.fields.y);
    v24 = ch == 8201;
    if ( !*((_DWORD *)bmFont + 56) )
    {
      j_il2cpp_runtime_class_init_0(bmFont);
      bmFont = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
      glyph = static_fields->glyph;
      if ( !glyph )
        goto LABEL_107;
    }
    glyph->fields.advance = (float)((v23 >> v24) + prev);
    glyph->fields.channel = LODWORD(v12->fields.u2.fields.x);
    if ( static_fields->fontScale != 1.0 )
    {
      if ( *((_DWORD *)bmFont + 56)
        || (j_il2cpp_runtime_class_init_0(bmFont),
            bmFont = NGUIText_TypeInfo,
            static_fields = NGUIText_TypeInfo->static_fields,
            (glyph = static_fields->glyph) != 0) )
      {
        glyph->fields.v0 = (struct UnityEngine_Vector2_o)vmul_n_f32(
                                                           (float32x2_t)glyph->fields.v0,
                                                           static_fields->fontScale).n64_u64[0];
        v25 = *((_QWORD *)bmFont + 23);
        v26 = *(float32x2_t **)(v25 + 16);
        if ( v26 )
        {
          v26[3].n64_u64[0] = vmul_n_f32(v26[3], *(float *)(v25 + 28)).n64_u64[0];
          v27 = *((_QWORD *)bmFont + 23);
          v28 = *(_QWORD *)(v27 + 16);
          if ( v28 )
          {
            v29 = *(float *)(v28 + 64) * *(float *)(v27 + 28);
LABEL_102:
            *(float *)(v28 + 64) = v29;
            goto LABEL_103;
          }
        }
      }
      goto LABEL_107;
    }
    goto LABEL_103;
  }
  v30 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v30 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v30->static_fields->dynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v32 = UnityEngine_Object__op_Inequality(dynamicFont, 0, 0);
  result = 0;
  if ( v32 )
  {
    v33 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v33 = NGUIText_TypeInfo;
    }
    v34 = v33->static_fields;
    bmFont = v34->dynamicFont;
    if ( !bmFont )
      goto LABEL_107;
    CharacterInfo = UnityEngine_Font__GetCharacterInfo(
                      (UnityEngine_Font_o *)bmFont,
                      ch,
                      &v34->mTempChar,
                      v34->finalSize,
                      v34->fontStyle,
                      0);
    result = 0;
    if ( !CharacterInfo )
      return result;
    bmFont = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      bmFont = NGUIText_TypeInfo;
    }
    v36 = *((_QWORD *)bmFont + 23);
    v37 = *(_QWORD *)(v36 + 16);
    if ( !v37 )
      goto LABEL_107;
    bmFont = (void *)UnityEngine_CharacterInfo__get_minX((UnityEngine_CharacterInfo_o *)(v36 + 268), 0);
    *(float *)(v37 + 16) = (float)(int)bmFont;
    v38 = NGUIText_TypeInfo->static_fields;
    v39 = v38->glyph;
    if ( !v39 )
      goto LABEL_107;
    bmFont = (void *)UnityEngine_CharacterInfo__get_maxX(&v38->mTempChar, 0);
    v39->fields.v1.fields.x = (float)(int)bmFont;
    v40 = NGUIText_TypeInfo->static_fields;
    v41 = v40->glyph;
    if ( !v41 )
      goto LABEL_107;
    bmFont = (void *)UnityEngine_CharacterInfo__get_maxY(&v40->mTempChar, 0);
    v42 = NGUIText_TypeInfo->static_fields;
    v41->fields.v0.fields.y = (float)(int)bmFont - v42->baseline;
    v43 = v42->glyph;
    if ( !v43 )
      goto LABEL_107;
    minY = UnityEngine_CharacterInfo__get_minY(&v42->mTempChar, 0);
    v45 = NGUIText_TypeInfo->static_fields;
    v43->fields.v1.fields.y = (float)minY - v45->baseline;
    v46 = (UnityEngine_Vector2_o *)v45->glyph;
    uvTopLeft = UnityEngine_CharacterInfo__get_uvTopLeft(&v45->mTempChar, 0);
    if ( !v46 )
      goto LABEL_107;
    v46[4] = uvTopLeft;
    v48 = NGUIText_TypeInfo->static_fields;
    v49 = (UnityEngine_Vector2_o *)v48->glyph;
    uvBottomLeft = UnityEngine_CharacterInfo__get_uvBottomLeft(&v48->mTempChar, 0);
    if ( !v49 )
      goto LABEL_107;
    v49[5] = uvBottomLeft;
    v51 = NGUIText_TypeInfo->static_fields;
    v52 = (UnityEngine_Vector2_o *)v51->glyph;
    uvBottomRight = UnityEngine_CharacterInfo__get_uvBottomRight(&v51->mTempChar, 0);
    if ( !v52 )
      goto LABEL_107;
    v52[6] = uvBottomRight;
    v54 = NGUIText_TypeInfo->static_fields;
    v55 = (UnityEngine_Vector2_o *)v54->glyph;
    uvTopRight = UnityEngine_CharacterInfo__get_uvTopRight(&v54->mTempChar, 0);
    if ( !v55 )
      goto LABEL_107;
    v55[7] = uvTopRight;
    v57 = NGUIText_TypeInfo->static_fields;
    v58 = v57->glyph;
    bmFont = (void *)UnityEngine_CharacterInfo__get_advance(&v57->mTempChar, 0);
    if ( !v58 )
      goto LABEL_107;
    v58->fields.advance = (float)(int)bmFont;
    v59 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v59 )
      goto LABEL_107;
    v60 = v59->fields.v0.fields.x;
    v59->fields.channel = 0;
    v61 = modf(v60, &iptr);
    if ( v60 >= 0.0 )
    {
      if ( v61 != 0.5 )
      {
        v65 = floorf(v60 + 0.5);
        goto LABEL_62;
      }
      v62 = iptr;
      v63 = 1.0;
    }
    else
    {
      if ( v61 != -0.5 )
      {
        v65 = ceilf(v60 + -0.5);
        goto LABEL_62;
      }
      v62 = iptr;
      v63 = -1.0;
    }
    v64 = (__int64)v62;
    v65 = v62;
    v66 = v65 + v63;
    if ( (v64 & 1) != 0 )
      v65 = v66;
LABEL_62:
    v59->fields.v0.fields.x = v65;
    v67 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v67 )
      goto LABEL_107;
    y = v67->fields.v0.fields.y;
    v69 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v69 != 0.5 )
      {
        v73 = floorf(y + 0.5);
        goto LABEL_73;
      }
      v70 = iptr;
      v71 = 1.0;
    }
    else
    {
      if ( v69 != -0.5 )
      {
        v73 = ceilf(y + -0.5);
        goto LABEL_73;
      }
      v70 = iptr;
      v71 = -1.0;
    }
    v72 = (__int64)v70;
    v73 = v70;
    v74 = v73 + v71;
    if ( (v72 & 1) != 0 )
      v73 = v74;
LABEL_73:
    v67->fields.v0.fields.y = v73;
    v75 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v75 )
      goto LABEL_107;
    v76 = v75->fields.v1.fields.x;
    v77 = modf(v76, &iptr);
    if ( v76 >= 0.0 )
    {
      if ( v77 != 0.5 )
      {
        v81 = floorf(v76 + 0.5);
        goto LABEL_84;
      }
      v78 = iptr;
      v79 = 1.0;
    }
    else
    {
      if ( v77 != -0.5 )
      {
        v81 = ceilf(v76 + -0.5);
        goto LABEL_84;
      }
      v78 = iptr;
      v79 = -1.0;
    }
    v80 = (__int64)v78;
    v81 = v78;
    v82 = v81 + v79;
    if ( (v80 & 1) != 0 )
      v81 = v82;
LABEL_84:
    v75->fields.v1.fields.x = v81;
    v83 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v83 )
      goto LABEL_107;
    v84 = v83->fields.v1.fields.y;
    v85 = modf(v84, &iptr);
    if ( v84 >= 0.0 )
    {
      if ( v85 != 0.5 )
      {
        v90 = floorf(v84 + 0.5);
        goto LABEL_95;
      }
      v87 = iptr;
      v88 = 1.0;
    }
    else
    {
      if ( v85 != -0.5 )
      {
        v90 = ceilf(v84 + -0.5);
        goto LABEL_95;
      }
      v87 = iptr;
      v88 = -1.0;
    }
    v89 = (__int64)v87;
    v90 = v87;
    v91 = v90 + v88;
    if ( (v89 & 1) != 0 )
      v90 = v91;
LABEL_95:
    v83->fields.v1.fields.y = v90;
    bmFont = NGUIText_TypeInfo;
    v92 = NGUIText_TypeInfo->static_fields;
    v86.n64_f32[0] = v92->fontScale * v92->pixelDensity;
    if ( v86.n64_f32[0] != 1.0 )
    {
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        v95 = v86.n64_u64[0];
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        bmFont = NGUIText_TypeInfo;
        v86.n64_u64[0] = v95;
        v92 = NGUIText_TypeInfo->static_fields;
      }
      v93 = (float32x2_t *)v92->glyph;
      if ( v93 )
      {
        v93[2].n64_u64[0] = vmul_n_f32(v93[2], v86.n64_f32[0]).n64_u64[0];
        v94 = *(float32x2_t **)(*((_QWORD *)bmFont + 23) + 16LL);
        if ( v94 )
        {
          v94[3].n64_u64[0] = vmul_f32(vdup_lane_s32(v86, 0), v94[3]).n64_u64[0];
          v28 = *(_QWORD *)(*((_QWORD *)bmFont + 23) + 16LL);
          if ( v28 )
          {
            v29 = v86.n64_f32[0] * *(float *)(v28 + 64);
            goto LABEL_102;
          }
        }
      }
LABEL_107:
      sub_1C93D2C(bmFont, v7);
    }
LABEL_103:
    if ( !*((_DWORD *)bmFont + 56) )
    {
      j_il2cpp_runtime_class_init_0(bmFont);
      bmFont = NGUIText_TypeInfo;
    }
    return *(NGUIText_GlyphInfo_o **)(*((_QWORD *)bmFont + 23) + 16LL);
  }
  return result;
}


float NGUIText__GetGlyphWidth(int32_t ch, int32_t prev, const MethodInfo *method)
{
  NGUIText_c *v5; // x0
  UnityEngine_Object_o *bitmapFont; // x21
  __int64 v7; // x1
  NGUIText_c *v8; // x0
  int32_t v9; // w21
  BMFont_o *bmFont; // x0
  BMGlyph_o *Glyph_49990172; // x0
  BMGlyph_o *v12; // x21
  NGUIText_c *v13; // x0
  int advance; // w23
  char v15; // w19
  float fontScale; // s8
  int v17; // w8
  NGUIText_c *v18; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  float v20; // s8
  NGUIText_c *v21; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  NGUIText_c *v23; // x0

  if ( (byte_4D351C9 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351C9 = 1;
  }
  v5 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v5 = NGUIText_TypeInfo;
  }
  bitmapFont = (UnityEngine_Object_o *)v5->static_fields->bitmapFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
  {
    v8 = NGUIText_TypeInfo;
    if ( ch == 8201 )
      v9 = 32;
    else
      v9 = ch;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v8 = NGUIText_TypeInfo;
    }
    bmFont = (BMFont_o *)v8->static_fields->bitmapFont;
    if ( bmFont )
    {
      bmFont = UIFont__get_bmFont((UIFont_o *)bmFont, 0);
      if ( bmFont )
      {
        Glyph_49990172 = BMFont__GetGlyph_49990172(bmFont, v9, 0);
        if ( !Glyph_49990172 )
          return 0.0;
        v12 = Glyph_49990172;
        v13 = NGUIText_TypeInfo;
        advance = v12->fields.advance;
        v15 = ch == 8201;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v13 = NGUIText_TypeInfo;
        }
        fontScale = v13->static_fields->fontScale;
        if ( prev )
          v17 = BMGlyph__GetKerning(v12, prev, 0) + (advance >> v15);
        else
          v17 = v12->fields.advance;
        return fontScale * (float)v17;
      }
    }
LABEL_36:
    sub_1C93D2C(bmFont, v7);
  }
  v18 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v18 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v18->static_fields->dynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = 0.0;
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) )
  {
    v21 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v21 = NGUIText_TypeInfo;
    }
    static_fields = v21->static_fields;
    bmFont = (BMFont_o *)static_fields->dynamicFont;
    if ( !bmFont )
      goto LABEL_36;
    if ( UnityEngine_Font__GetCharacterInfo(
           (UnityEngine_Font_o *)bmFont,
           ch,
           &static_fields->mTempChar,
           static_fields->finalSize,
           static_fields->fontStyle,
           0) )
    {
      v23 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v23 = NGUIText_TypeInfo;
      }
      return (float)(NGUIText_TypeInfo->static_fields->fontScale
                   * (float)UnityEngine_CharacterInfo__get_advance(&v23->static_fields->mTempChar, 0))
           * NGUIText_TypeInfo->static_fields->pixelDensity;
    }
  }
  return v20;
}


UnityEngine_Vector2_o NGUIText__GetPosition(float angle, float radius, const MethodInfo *method)
{
  float cosx; // [xsp+8h] [xbp-18h] BYREF
  float sinx; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  sincosf(angle * 0.017453, &sinx, &cosx);
  result.fields.y = sinx * radius;
  result.fields.x = cosx * radius;
  return result;
}


BMSymbol_o *NGUIText__GetSymbol(System_String_o *text, int32_t index, int32_t textLength, const MethodInfo *method)
{
  NGUIText_c *v7; // x0
  UnityEngine_Object_o *bitmapFont; // x22
  __int64 v9; // x1
  NGUIText_c *v10; // x0
  UIFont_o *v11; // x0

  if ( (byte_4D351C8 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351C8 = 1;
  }
  v7 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v7 = NGUIText_TypeInfo;
  }
  bitmapFont = (UnityEngine_Object_o *)v7->static_fields->bitmapFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
    return 0;
  v10 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v10 = NGUIText_TypeInfo;
  }
  v11 = v10->static_fields->bitmapFont;
  if ( !v11 )
    sub_1C93D2C(0, v9);
  return UIFont__MatchSymbol(v11, text, index, textLength, 0);
}


bool NGUIText__IsHex(uint16_t ch, const MethodInfo *method)
{
  return (unsigned __int16)(ch - 48) < 0xAu || (unsigned __int16)(ch - 97) < 6u || (unsigned __int16)(ch - 65) < 6u;
}


bool NGUIText__IsSpace(int32_t ch, const MethodInfo *method)
{
  unsigned int v2; // w9
  bool result; // w0

  v2 = ch - 8201;
  result = 1;
  if ( v2 >= 3 && ch != 32 )
    return 0;
  return result;
}


float NGUIText__ParseAlpha(System_String_o *text, int32_t index, const MethodInfo *method)
{
  uint16_t Chars; // w0
  int32_t v6; // w21
  uint16_t v7; // w0
  float v8; // s1
  float result; // s0

  if ( !text )
    sub_1C93D2C(0, index);
  Chars = System_String__get_Chars(text, index + 1, 0);
  v6 = NGUIMath__HexToDecimal(Chars, 0);
  v7 = System_String__get_Chars(text, index + 2, 0);
  v8 = (float)(NGUIMath__HexToDecimal(v7, 0) | (16 * v6)) / 255.0;
  result = fminf(v8, 1.0);
  if ( v8 < 0.0 )
    return 0.0;
  return result;
}


UnityEngine_Color_o NGUIText__ParseColor(System_String_o *text, int32_t offset, const MethodInfo *method)
{
  if ( (byte_4D351CB & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351CB = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__ParseColor24(text, offset, method);
}


UnityEngine_Color_o NGUIText__ParseColor24(System_String_o *text, int32_t offset, const MethodInfo *method)
{
  uint16_t Chars; // w0
  int32_t v6; // w21
  uint16_t v7; // w0
  int v8; // w22
  uint16_t v9; // w0
  int32_t v10; // w21
  uint16_t v11; // w0
  int v12; // w23
  uint16_t v13; // w0
  int32_t v14; // w21
  uint16_t v15; // w0
  int v16; // w8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !text )
    sub_1C93D2C(0, offset);
  Chars = System_String__get_Chars(text, offset, 0);
  v6 = NGUIMath__HexToDecimal(Chars, 0);
  v7 = System_String__get_Chars(text, offset + 1, 0);
  v8 = NGUIMath__HexToDecimal(v7, 0) | (16 * v6);
  v9 = System_String__get_Chars(text, offset + 2, 0);
  v10 = NGUIMath__HexToDecimal(v9, 0);
  v11 = System_String__get_Chars(text, offset + 3, 0);
  v12 = NGUIMath__HexToDecimal(v11, 0) | (16 * v10);
  v13 = System_String__get_Chars(text, offset + 4, 0);
  v14 = NGUIMath__HexToDecimal(v13, 0);
  v15 = System_String__get_Chars(text, offset + 5, 0);
  v16 = NGUIMath__HexToDecimal(v15, 0) | (16 * v14);
  result.fields.r = (float)v8 * 0.0039216;
  result.fields.g = (float)v12 * 0.0039216;
  result.fields.b = (float)v16 * 0.0039216;
  result.fields.a = 1.0;
  return result;
}


UnityEngine_Color_o NGUIText__ParseColor32(System_String_o *text, int32_t offset, const MethodInfo *method)
{
  uint16_t Chars; // w0
  int32_t v6; // w21
  uint16_t v7; // w0
  int v8; // w22
  uint16_t v9; // w0
  int32_t v10; // w21
  uint16_t v11; // w0
  int v12; // w23
  uint16_t v13; // w0
  int32_t v14; // w21
  uint16_t v15; // w0
  int v16; // w24
  uint16_t v17; // w0
  int32_t v18; // w21
  uint16_t v19; // w0
  int v20; // w8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !text )
    sub_1C93D2C(0, offset);
  Chars = System_String__get_Chars(text, offset, 0);
  v6 = NGUIMath__HexToDecimal(Chars, 0);
  v7 = System_String__get_Chars(text, offset + 1, 0);
  v8 = NGUIMath__HexToDecimal(v7, 0) | (16 * v6);
  v9 = System_String__get_Chars(text, offset + 2, 0);
  v10 = NGUIMath__HexToDecimal(v9, 0);
  v11 = System_String__get_Chars(text, offset + 3, 0);
  v12 = NGUIMath__HexToDecimal(v11, 0) | (16 * v10);
  v13 = System_String__get_Chars(text, offset + 4, 0);
  v14 = NGUIMath__HexToDecimal(v13, 0);
  v15 = System_String__get_Chars(text, offset + 5, 0);
  v16 = NGUIMath__HexToDecimal(v15, 0) | (16 * v14);
  v17 = System_String__get_Chars(text, offset + 6, 0);
  v18 = NGUIMath__HexToDecimal(v17, 0);
  v19 = System_String__get_Chars(text, offset + 7, 0);
  v20 = NGUIMath__HexToDecimal(v19, 0) | (16 * v18);
  result.fields.r = (float)v8 * 0.0039216;
  result.fields.g = (float)v12 * 0.0039216;
  result.fields.b = (float)v16 * 0.0039216;
  result.fields.a = (float)v20 * 0.0039216;
  return result;
}


bool NGUIText__ParseSymbol(System_String_o *text, int32_t *index, const MethodInfo *method)
{
  const MethodInfo *v6; // [xsp+38h] [xbp-78h]
  NGUIText_DiagonalLineInfo_o v7; // [xsp+40h] [xbp-70h] BYREF
  bool isDiagonalLine; // [xsp+64h] [xbp-4Ch] BYREF
  bool v9; // [xsp+68h] [xbp-48h] BYREF
  bool spGradient; // [xsp+6Ch] [xbp-44h] BYREF
  bool v11; // [xsp+70h] [xbp-40h] BYREF
  bool strike; // [xsp+74h] [xbp-3Ch] BYREF
  bool underline; // [xsp+78h] [xbp-38h] BYREF
  bool italic; // [xsp+7Ch] [xbp-34h] BYREF
  bool bold; // [xsp+88h] [xbp-28h] BYREF
  int32_t sub; // [xsp+8Ch] [xbp-24h] BYREF

  if ( (byte_4D351CE & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351CE = 1;
  }
  bold = 0;
  italic = 0;
  underline = 0;
  strike = 0;
  v11 = 0;
  spGradient = 0;
  v9 = 0;
  isDiagonalLine = 0;
  sub = 1;
  *(_OWORD *)&v7.fields._Slope_k__BackingField = xmmword_D00FD0;
  *(_QWORD *)&v7.fields._LineEdge_k__BackingField = 0;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__ParseSymbol_50038964(
           text,
           index,
           0,
           0,
           &sub,
           &bold,
           &italic,
           &underline,
           &strike,
           &v11,
           &spGradient,
           &v9,
           0,
           &isDiagonalLine,
           &v7,
           v6);
}


bool NGUIText__ParseSymbol_50038964(
        System_String_o *text,
        int32_t *index,
        BetterList_Color__o *colors,
        bool premultiply,
        int32_t *sub,
        bool *bold,
        bool *italic,
        bool *underline,
        bool *strike,
        bool *ignoreColor,
        bool *spGradient,
        bool *isOutline,
        BetterList_Color__o *gradientColors,
        bool *isDiagonalLine,
        NGUIText_DiagonalLineInfo_o *diagonalLineInfo,
        const MethodInfo *method)
{
  System_String_o *v23; // x20
  int stringLength; // w29
  int32_t size; // w8
  int32_t v26; // w8
  System_String_o *v27; // x23
  uint32_t v28; // w0
  bool *v29; // x8
  bool v30; // w0
  int32_t v31; // w8
  int32_t v32; // w0
  int32_t v33; // w21
  int32_t v34; // w1
  float v35; // s8
  float v36; // s11
  float v37; // s10
  float v38; // s9
  System_String_o *v39; // x20
  int klass; // w8
  System_String_o *v41; // x20
  unsigned int v42; // w26
  char v43; // w27
  char v44; // w28
  int32_t v45; // w25
  float v46; // s12
  System_String_o *v47; // x22
  System_String_o *v48; // x23
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  System_IFormatProvider_o *InvariantCulture; // x0
  bool v52; // zf
  System_String_o *v53; // x23
  uint32_t v54; // w0
  bool *v55; // x8
  uint16_t Chars; // w25
  uint16_t v57; // w26
  int32_t v58; // w20
  int32_t v59; // w0
  NGUIText_c *v60; // x8
  int32_t v61; // w21
  System_String_o *v62; // x25
  System_String_o *v63; // x25
  int32_t v64; // w0
  uint16_t v65; // w0
  const MethodInfo *v66; // x2
  int32_t v67; // w23
  float r; // s10
  float g; // s9
  float b; // s8
  unsigned int v71; // w0
  System_String_o *v72; // x23
  System_String_o *v73; // x0
  float a; // s11
  NGUIText_c *v75; // x0
  float *static_fields; // x8
  float v77; // s0
  uint16_t v78; // w0
  const MethodInfo *v79; // x2
  int32_t v80; // w23
  int32_t v81; // w0
  System_String_o *v82; // x23
  UnityEngine_Color_o v83; // kr70_16
  System_String_o *v84; // x0
  NGUIText_c *v85; // x0
  float v86; // s0
  uint16_t v87; // w0
  const MethodInfo *v88; // x2
  int32_t v89; // w21
  unsigned int v90; // w0
  System_String_o *v91; // x21
  System_String_o *v92; // x0
  const MethodInfo *v93; // x2
  int32_t v94; // w21
  unsigned int v95; // w0
  System_String_o *v96; // x21
  System_String_o *v97; // x0
  const MethodInfo *v98; // x2
  int32_t v99; // w21
  int32_t v100; // w0
  System_String_o *v101; // x21
  System_String_o *v102; // x0
  const MethodInfo *v103; // x2
  int32_t v104; // w21
  int32_t v105; // w0
  System_String_o *v106; // x21
  System_String_o *v107; // x0
  char v108; // [xsp+10h] [xbp-100h]
  char v109; // [xsp+30h] [xbp-E0h]
  char v110; // [xsp+40h] [xbp-D0h]
  char item; // [xsp+50h] [xbp-C0h]
  float result; // [xsp+6Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v113; // 0:kr00_16.16
  UnityEngine_Color_o v114; // 0:kr20_16.16
  UnityEngine_Color_o v115; // 0:kr30_16.16
  UnityEngine_Color_o v116; // 0:kr40_16.16
  UnityEngine_Color_o v117; // 0:kr50_16.16
  UnityEngine_Color_o v118; // 0:kr60_16.16
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v23 = text;
  if ( (byte_4D351CF & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Color__Add__);
    sub_1C93AD4(&Method_BetterList_Color__RemoveAt__);
    sub_1C93AD4(&Method_BetterList_Color__get_Item__);
    sub_1C93AD4(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&StringLiteral_25188/*"x"*/);
    sub_1C93AD4(&StringLiteral_15935/*"[/sub]"*/);
    sub_1C93AD4(&StringLiteral_15938/*"[/url]"*/);
    sub_1C93AD4(&StringLiteral_20141/*"h"*/);
    sub_1C93AD4(&StringLiteral_15934/*"[/s]"*/);
    sub_1C93AD4(&StringLiteral_15928/*"[/b]"*/);
    sub_1C93AD4(&StringLiteral_16096/*"[o]"*/);
    sub_1C93AD4(&StringLiteral_15936/*"[/sup]"*/);
    sub_1C93AD4(&StringLiteral_19933/*"g"*/);
    sub_1C93AD4(&StringLiteral_16102/*"[sub]"*/);
    sub_1C93AD4(&StringLiteral_15929/*"[/c]"*/);
    sub_1C93AD4(&StringLiteral_18860/*"e"*/);
    sub_1C93AD4(&StringLiteral_15937/*"[/u]"*/);
    sub_1C93AD4(&StringLiteral_16103/*"[sup]"*/);
    sub_1C93AD4(&StringLiteral_15931/*"[/g]"*/);
    sub_1C93AD4(&StringLiteral_15922/*"[--]"*/);
    sub_1C93AD4(&StringLiteral_16084/*"[i]"*/);
    sub_1C93AD4(&StringLiteral_15930/*"[/dl]"*/);
    sub_1C93AD4(&StringLiteral_16083/*"[g]"*/);
    sub_1C93AD4(&StringLiteral_15933/*"[/o]"*/);
    sub_1C93AD4(&StringLiteral_16062/*"[c]"*/);
    sub_1C93AD4(&StringLiteral_25290/*"y"*/);
    sub_1C93AD4(&StringLiteral_16100/*"[s]"*/);
    sub_1C93AD4(&StringLiteral_16061/*"[b]"*/);
    sub_1C93AD4(&StringLiteral_15932/*"[/i]"*/);
    sub_1C93AD4(&StringLiteral_16104/*"[u]"*/);
    sub_1C93AD4(&StringLiteral_25039/*"w"*/);
    text = (System_String_o *)sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D351CF = 1;
  }
  result = 0.0;
  if ( !v23 )
    goto LABEL_222;
  stringLength = v23->fields._stringLength;
  if ( *index + 3 > stringLength || System_String__get_Chars(v23, *index, 0) != 91 )
    return 0;
  if ( System_String__get_Chars(v23, *index + 2, 0) == 93 )
  {
    if ( System_String__get_Chars(v23, *index + 1, 0) == 45 )
    {
      if ( colors )
      {
        size = colors->fields.size;
        if ( size >= 2 )
          BetterList_Color___RemoveAt(colors, size - 1, (const MethodInfo_33DA748 *)Method_BetterList_Color__RemoveAt__);
      }
      v26 = *index + 3;
      goto LABEL_139;
    }
    v27 = System_String__Substring_64471664(v23, *index, 3, 0);
    v28 = PrivateImplementationDetails___ComputeStringHash_50280804(v27, 0);
    if ( v28 > 0x7ACE3056 )
    {
      if ( v28 > 0xB6CA119C )
      {
        if ( v28 == -1162838014 )
        {
          if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16100/*"[s]"*/, 0) )
          {
            v30 = 1;
            *strike = 1;
            goto LABEL_37;
          }
        }
        else if ( v28 == -1159586610 && System_String__op_Equality(v27, (System_String_o *)StringLiteral_16083/*"[g]"*/, 0) )
        {
          v30 = 1;
          *ignoreColor = 1;
          v29 = spGradient;
          goto LABEL_28;
        }
      }
      else if ( v28 == -1228271204 )
      {
        if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16084/*"[i]"*/, 0) )
        {
          v30 = 1;
          *italic = 1;
          goto LABEL_37;
        }
      }
      else if ( v28 == 2061024690 && System_String__op_Equality(v27, (System_String_o *)StringLiteral_16062/*"[c]"*/, 0) )
      {
        v29 = ignoreColor;
        goto LABEL_23;
      }
    }
    else if ( v28 == 1992236928 )
    {
      if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16104/*"[u]"*/, 0) )
      {
        v30 = 1;
        *underline = 1;
        goto LABEL_37;
      }
    }
    else if ( v28 == 1993767119 )
    {
      if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16061/*"[b]"*/, 0) )
      {
        v30 = 1;
        *bold = 1;
        goto LABEL_37;
      }
    }
    else if ( v28 == 2060333142 && System_String__op_Equality(v27, (System_String_o *)StringLiteral_16096/*"[o]"*/, 0) )
    {
      v29 = isOutline;
LABEL_23:
      v30 = 1;
LABEL_28:
      *v29 = 1;
LABEL_37:
      v31 = *index + 3;
LABEL_38:
      *index = v31;
      return v30;
    }
  }
  if ( *index + 4 > stringLength )
    return 0;
  if ( System_String__get_Chars(v23, *index + 1, 0) != 100 || System_String__get_Chars(v23, *index + 2, 0) != 108 )
  {
    if ( System_String__get_Chars(v23, *index + 3, 0) != 93 )
      goto LABEL_141;
    v53 = System_String__Substring_64471664(v23, *index, 4, 0);
    v54 = PrivateImplementationDetails___ComputeStringHash_50280804(v53, 0);
    if ( v54 > 0x258A0629 )
    {
      if ( v54 > 0x615D44FF )
      {
        if ( v54 == -100292593 )
        {
          if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15922/*"[--]"*/, 0) )
          {
            *index += 4;
            if ( gradientColors )
            {
              BetterList_Color___RemoveAt(
                gradientColors,
                gradientColors->fields.size - 1,
                (const MethodInfo_33DA748 *)Method_BetterList_Color__RemoveAt__);
              BetterList_Color___RemoveAt(
                gradientColors,
                gradientColors->fields.size - 1,
                (const MethodInfo_33DA748 *)Method_BetterList_Color__RemoveAt__);
            }
            return 1;
          }
        }
        else if ( v54 == 1636753867 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15934/*"[/s]"*/, 0) )
        {
          *strike = 0;
          goto LABEL_138;
        }
      }
      else if ( v54 == 1632222535 )
      {
        if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15933/*"[/o]"*/, 0) )
        {
          v55 = isOutline;
          goto LABEL_119;
        }
      }
      else if ( v54 == 1633502463 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15931/*"[/g]"*/, 0) )
      {
        *ignoreColor = 0;
        v55 = spGradient;
LABEL_119:
        *v55 = 0;
        goto LABEL_138;
      }
    }
    else
    {
      if ( v54 > 0x2558695D )
      {
        if ( v54 == 627683966 )
        {
          if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15928/*"[/b]"*/, 0) )
          {
            *bold = 0;
            goto LABEL_138;
          }
        }
        else if ( v54 == 629802537 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15937/*"[/u]"*/, 0) )
        {
          *underline = 0;
          goto LABEL_138;
        }
        goto LABEL_125;
      }
      if ( v54 != 560426395 )
      {
        if ( v54 == 626551133 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15932/*"[/i]"*/, 0) )
        {
          *italic = 0;
LABEL_138:
          v26 = *index + 4;
          goto LABEL_139;
        }
        goto LABEL_125;
      }
      if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15929/*"[/c]"*/, 0) )
      {
        v55 = ignoreColor;
        goto LABEL_119;
      }
    }
LABEL_125:
    Chars = System_String__get_Chars(v23, *index + 1, 0);
    v57 = System_String__get_Chars(v23, *index + 2, 0);
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    if ( (unsigned __int16)(Chars - 48) < 0xAu
      || (unsigned int)Chars - 65 <= 0x25 && ((1LL << ((unsigned __int8)Chars - 65)) & 0x3F0000003FLL) != 0 )
    {
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      if ( (unsigned __int16)(v57 - 48) < 0xAu
        || (unsigned int)v57 - 65 <= 0x25 && ((1LL << ((unsigned __int8)v57 - 65)) & 0x3F0000003FLL) != 0 )
      {
        v58 = NGUIMath__HexToDecimal(Chars, 0);
        v59 = NGUIMath__HexToDecimal(v57, 0);
        v60 = NGUIText_TypeInfo;
        v61 = v59;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v60 = NGUIText_TypeInfo;
        }
        v60->static_fields->mAlpha = (float)(v61 | (16 * v58)) / 255.0;
        goto LABEL_138;
      }
    }
LABEL_141:
    if ( *index + 5 > stringLength )
      return 0;
    if ( System_String__get_Chars(v23, *index + 4, 0) == 93 )
    {
      v62 = System_String__Substring_64471664(v23, *index, 5, 0);
      if ( System_String__op_Equality(v62, (System_String_o *)StringLiteral_16102/*"[sub]"*/, 0) )
      {
        v30 = 1;
        *sub = 1;
        v31 = *index + 5;
        goto LABEL_38;
      }
      if ( System_String__op_Equality(v62, (System_String_o *)StringLiteral_16103/*"[sup]"*/, 0) )
      {
        *sub = 2;
LABEL_149:
        v26 = *index + 5;
        goto LABEL_139;
      }
      if ( System_String__op_Equality(v62, (System_String_o *)StringLiteral_15930/*"[/dl]"*/, 0) )
      {
        *isDiagonalLine = 0;
        *(_QWORD *)&diagonalLineInfo->fields._LineEdge_k__BackingField = 0;
        *(_OWORD *)&diagonalLineInfo->fields._Slope_k__BackingField = xmmword_D00FD0;
        goto LABEL_149;
      }
    }
    if ( *index + 6 > stringLength )
      return 0;
    if ( System_String__get_Chars(v23, *index + 5, 0) == 93 )
    {
      v63 = System_String__Substring_64471664(v23, *index, 6, 0);
      if ( System_String__op_Equality(v63, (System_String_o *)StringLiteral_15935/*"[/sub]"*/, 0)
        || System_String__op_Equality(v63, (System_String_o *)StringLiteral_15936/*"[/sup]"*/, 0) )
      {
        *sub = 0;
LABEL_155:
        v26 = *index + 6;
        goto LABEL_139;
      }
      if ( System_String__op_Equality(v63, (System_String_o *)StringLiteral_15938/*"[/url]"*/, 0) )
        goto LABEL_155;
    }
    if ( System_String__get_Chars(v23, *index + 1, 0) != 117
      || System_String__get_Chars(v23, *index + 2, 0) != 114
      || System_String__get_Chars(v23, *index + 3, 0) != 108
      || System_String__get_Chars(v23, *index + 4, 0) != 61 )
    {
      if ( *index + 8 > stringLength )
        return 0;
      v65 = System_String__get_Chars(v23, *index + 7, 0);
      v67 = *index;
      if ( v65 == 93 )
      {
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v113 = NGUIText__ParseColor24(v23, v67 + 1, v66);
        r = v113.fields.r;
        g = v113.fields.g;
        b = v113.fields.b;
        v71 = NGUIMath__ColorToInt(v113, 0);
        v72 = NGUIMath__DecimalToHex24(v71 >> 8, 0);
        text = System_String__Substring_64471664(v23, *index + 1, 6, 0);
        if ( text )
        {
          v73 = System_String__ToUpper(text, 0);
          if ( !System_String__op_Inequality(v72, v73, 0) )
          {
            if ( colors )
            {
              a = BetterList_Color___get_Item(
                    colors,
                    colors->fields.size - 1,
                    (const MethodInfo_33D9EF8 *)Method_BetterList_Color__get_Item__).fields.a;
              if ( a != 1.0 && premultiply )
              {
                v75 = NGUIText_TypeInfo;
                if ( !NGUIText_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                  v75 = NGUIText_TypeInfo;
                }
                static_fields = (float *)v75->static_fields;
                v77 = fminf(a, 1.0);
                if ( a < 0.0 )
                  v77 = 0.0;
                r = static_fields[58] + (float)(v77 * (float)(v113.fields.r - static_fields[58]));
                g = static_fields[59] + (float)(v77 * (float)(v113.fields.g - static_fields[59]));
                b = static_fields[60] + (float)(v77 * (float)(v113.fields.b - static_fields[60]));
                a = static_fields[61] + (float)(v77 * (float)(a - static_fields[61]));
              }
              v119.fields.r = r;
              v119.fields.g = g;
              v119.fields.b = b;
              v119.fields.a = a;
              BetterList_Color___Add(colors, v119, (const MethodInfo_33DA10C *)Method_BetterList_Color__Add__);
            }
            v26 = *index + 8;
            goto LABEL_139;
          }
          return 0;
        }
      }
      else
      {
        if ( v67 + 10 > stringLength )
          return 0;
        v78 = System_String__get_Chars(v23, v67 + 9, 0);
        v80 = *index;
        if ( v78 == 93 )
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v114 = NGUIText__ParseColor32(v23, v80 + 1, v79);
          v81 = NGUIMath__ColorToInt(v114, 0);
          v82 = NGUIMath__DecimalToHex32(v81, 0);
          text = System_String__Substring_64471664(v23, *index + 1, 8, 0);
          v83 = v114;
          if ( text )
          {
            v84 = System_String__ToUpper(text, 0);
            if ( !System_String__op_Inequality(v82, v84, 0) )
            {
              if ( colors )
              {
                if ( v114.fields.a != 1.0 && premultiply )
                {
                  v85 = NGUIText_TypeInfo;
                  if ( !NGUIText_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                    v85 = NGUIText_TypeInfo;
                  }
                  v86 = fminf(v114.fields.a, 1.0);
                  if ( v114.fields.a < 0.0 )
                    v86 = 0.0;
                  v83 = (UnityEngine_Color_o)vaddq_f32(
                                               (float32x4_t)v85->static_fields->mInvisible,
                                               vmulq_n_f32(
                                                 vsubq_f32(
                                                   (float32x4_t)v114,
                                                   (float32x4_t)v85->static_fields->mInvisible),
                                                 v86));
                }
                BetterList_Color___Add(colors, v83, (const MethodInfo_33DA10C *)Method_BetterList_Color__Add__);
              }
              v26 = *index + 10;
              goto LABEL_139;
            }
            return 0;
          }
        }
        else
        {
          if ( v80 + 15 > stringLength )
            return 0;
          v87 = System_String__get_Chars(v23, v80 + 14, 0);
          v89 = *index;
          if ( v87 == 93 )
          {
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v115 = NGUIText__ParseColor24(v23, v89 + 1, v88);
            v90 = NGUIMath__ColorToInt(v115, 0);
            v91 = NGUIMath__DecimalToHex24(v90 >> 8, 0);
            text = System_String__Substring_64471664(v23, *index + 1, 6, 0);
            if ( text )
            {
              v92 = System_String__ToUpper(text, 0);
              if ( System_String__op_Inequality(v91, v92, 0) )
                return 0;
              v94 = *index;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v116 = NGUIText__ParseColor24(v23, v94 + 8, v93);
              v95 = NGUIMath__ColorToInt(v116, 0);
              v96 = NGUIMath__DecimalToHex24(v95 >> 8, 0);
              text = System_String__Substring_64471664(v23, *index + 8, 6, 0);
              if ( text )
              {
                v97 = System_String__ToUpper(text, 0);
                if ( !System_String__op_Inequality(v96, v97, 0) )
                {
                  if ( gradientColors )
                  {
                    BetterList_Color___Add(
                      gradientColors,
                      v115,
                      (const MethodInfo_33DA10C *)Method_BetterList_Color__Add__);
                    BetterList_Color___Add(
                      gradientColors,
                      v116,
                      (const MethodInfo_33DA10C *)Method_BetterList_Color__Add__);
                  }
                  v26 = *index + 15;
                  goto LABEL_139;
                }
                return 0;
              }
            }
          }
          else
          {
            if ( v89 + 19 > stringLength || System_String__get_Chars(v23, v89 + 18, 0) != 93 )
              return 0;
            v99 = *index;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v117 = NGUIText__ParseColor32(v23, v99 + 1, v98);
            v100 = NGUIMath__ColorToInt(v117, 0);
            v101 = NGUIMath__DecimalToHex32(v100, 0);
            text = System_String__Substring_64471664(v23, *index + 1, 8, 0);
            if ( text )
            {
              v102 = System_String__ToUpper(text, 0);
              if ( System_String__op_Inequality(v101, v102, 0) )
                return 0;
              v104 = *index;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v118 = NGUIText__ParseColor32(v23, v104 + 10, v103);
              v105 = NGUIMath__ColorToInt(v118, 0);
              v106 = NGUIMath__DecimalToHex32(v105, 0);
              text = System_String__Substring_64471664(v23, *index + 10, 8, 0);
              if ( text )
              {
                v107 = System_String__ToUpper(text, 0);
                if ( !System_String__op_Inequality(v106, v107, 0) )
                {
                  if ( gradientColors )
                  {
                    BetterList_Color___Add(
                      gradientColors,
                      v117,
                      (const MethodInfo_33DA10C *)Method_BetterList_Color__Add__);
                    BetterList_Color___Add(
                      gradientColors,
                      v118,
                      (const MethodInfo_33DA10C *)Method_BetterList_Color__Add__);
                  }
                  v26 = *index + 19;
                  goto LABEL_139;
                }
                return 0;
              }
            }
          }
        }
      }
      goto LABEL_222;
    }
    v64 = System_String__IndexOf_64482764(v23, 0x5Du, *index + 4, 0);
    if ( v64 == -1 )
      v26 = v23->fields._stringLength;
    else
      v26 = v64 + 1;
LABEL_139:
    *index = v26;
    return 1;
  }
  v32 = System_String__IndexOf_64484132(v23, (System_String_o *)StringLiteral_16156/*"]"*/, *index + 3, 0);
  if ( v32 == -1 )
    return 0;
  v33 = v32;
  v34 = *index + 3;
  if ( v32 < v34 )
    return 0;
  v35 = -1.0;
  v36 = 1.0;
  v37 = 0.75;
  v38 = 0.0;
  if ( v32 <= v34 )
    goto LABEL_113;
  v39 = System_String__Substring_64471664(v23, v34, v32 - *index - 3, 0);
  if ( System_String__IsNullOrEmpty(v39, 0) )
    goto LABEL_113;
  text = (System_String_o *)NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  if ( !v39
    || (text = (System_String_o *)System_String__Split_64474932(
                                    v39,
                                    NGUIText_TypeInfo->static_fields->PARAM_SPLIT_CHAR,
                                    1,
                                    0)) == 0 )
  {
LABEL_222:
    sub_1C93D2C(text, index);
  }
  klass = (int)text[1].klass;
  v41 = text;
  if ( klass >= 1 )
  {
    v108 = 0;
    v109 = 0;
    v110 = 0;
    item = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v35 = -1.0;
    v37 = 0.75;
    v38 = 0.0;
    v46 = 0.0;
    v36 = 1.0;
    while ( 1 )
    {
      if ( v42 >= klass )
LABEL_223:
        sub_1C93D34(text);
      text = (System_String_o *)NGUIText_TypeInfo;
      v47 = (System_String_o *)*((_QWORD *)&v41[1].monitor + (int)v42);
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      if ( !v47 )
        goto LABEL_222;
      text = (System_String_o *)System_String__Split_64474816(
                                  v47,
                                  NGUIText_TypeInfo->static_fields->KEY_VAL_SPLIT_CHAR,
                                  0);
      if ( !text )
        goto LABEL_222;
      v48 = text;
      if ( LODWORD(text[1].klass) == 2 )
      {
        text = (System_String_o *)text[1].monitor;
        if ( !text )
          goto LABEL_222;
        text = System_String__Trim(text, 0);
        if ( LODWORD(v48[1].klass) <= 1 )
          goto LABEL_223;
        v49 = text;
        text = (System_String_o *)v48[1].fields;
        if ( !text )
          goto LABEL_222;
        v50 = System_String__Trim(text, 0);
        if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
        InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
        text = (System_String_o *)System_Single__TryParse_66021256(v50, 167, InvariantCulture, &result, 0);
        if ( ((unsigned __int8)text & 1) != 0 )
        {
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_25188/*"x"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            v52 = (v43 & 1) == 0;
            v43 = 1;
            if ( v52 )
              v36 = result;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_25290/*"y"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            v52 = (v44 & 1) == 0;
            v44 = 1;
            if ( v52 )
              v35 = result;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_25039/*"w"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            if ( (item & 1) == 0 )
              v37 = result;
            item = 1;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_20141/*"h"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            if ( (v110 & 1) == 0 )
              v46 = result;
            v110 = 1;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_18860/*"e"*/, 0);
          if ( ((unsigned __int8)text & 1) == 0 )
          {
            text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_19933/*"g"*/, 0);
            if ( ((unsigned __int8)text & 1) != 0 )
            {
              if ( (v108 & 1) == 0 )
                v38 = result;
              v108 = 1;
            }
            goto LABEL_91;
          }
          if ( (v109 & 1) != 0 )
            goto LABEL_90;
          if ( result != 1.0 )
          {
            v45 = 0;
LABEL_90:
            v109 = 1;
            goto LABEL_91;
          }
          v109 = 1;
          v45 = 1;
        }
      }
LABEL_91:
      klass = (int)v41[1].klass;
      if ( (int)++v42 >= klass )
        goto LABEL_114;
    }
  }
LABEL_113:
  v45 = 0;
  v46 = 0.0;
LABEL_114:
  *index = v33 + 1;
  *isDiagonalLine = 1;
  diagonalLineInfo->fields._Slope_k__BackingField = v35;
  diagonalLineInfo->fields._Length_k__BackingField = v36;
  diagonalLineInfo->fields._Width_k__BackingField = v37;
  diagonalLineInfo->fields._Offset_k__BackingField = v46;
  diagonalLineInfo->fields._LineEdge_k__BackingField = v45;
  diagonalLineInfo->fields._LineGradientAdjust_k__BackingField = v38;
  return 1;
}


void NGUIText__Prepare(System_String_o *text, const MethodInfo *method)
{
  NGUIText_c *v3; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  __int64 v5; // x1
  NGUIText_c *v6; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  UnityEngine_Font_o *v8; // x0

  if ( (byte_4D351C7 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351C7 = 1;
  }
  v3 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v3 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v3->static_fields->dynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) )
  {
    v6 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v6 = NGUIText_TypeInfo;
    }
    static_fields = v6->static_fields;
    v8 = static_fields->dynamicFont;
    if ( !v8 )
      sub_1C93D2C(0, v5);
    UnityEngine_Font__RequestCharactersInTexture(v8, text, static_fields->finalSize, static_fields->fontStyle, 0);
  }
}


void NGUIText__Print(
        System_String_o *text,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  long double v5; // q8
  long double v6; // q9
  long double v7; // q10
  long double v8; // q11
  long double v9; // q14
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  int32_t size; // w28
  struct NGUIText_StaticFields *static_fields; // x8
  long double v18; // q0
  long double v19; // q2
  int finalSize; // w26
  float32x2_t v21; // d13
  float32x2_t v22; // d14
  float32x2_t v23; // d15
  float32x2_t v24; // d12
  long double v25; // q1
  long double v26; // q3
  unsigned __int64 v27; // x27
  struct NGUIText_StaticFields *v28; // x8
  float pixelDensity; // s11
  UnityEngine_Object_o *bitmapFont; // x25
  bool v31; // w0
  const MethodInfo *v32; // x2
  int32_t v33; // w25
  float v34; // s1
  NGUIText_c *v35; // x0
  int32_t v36; // w29
  float v37; // s15
  const MethodInfo *v38; // x3
  unsigned int Chars; // w24
  NGUIText_c *v40; // x0
  struct NGUIText_StaticFields *v41; // x8
  NGUIText_c *v42; // x0
  struct NGUIText_StaticFields *v43; // x8
  NGUIText_c *v44; // x0
  _BOOL4 v45; // w24
  struct NGUIText_StaticFields *v46; // x8
  float mAlpha; // s4
  int32_t v48; // w26
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v50; // x26
  NGUIText_c *v51; // x0
  int mOffsetX; // w24
  int mOffsetY; // s10
  int mWidth; // s12
  float fontScale; // s11
  int mAdvance; // s8
  int mHeight; // s14
  float v58; // s13
  double v59; // d8
  const MethodInfo *v60; // x2
  double v61; // d0
  double v62; // d0
  double v63; // d1
  NGUIText_GlyphInfo_o *Glyph; // x0
  int32_t v65; // w29
  NGUIText_GlyphInfo_o *v66; // x26
  float32x4_t v72; // q3
  NGUIText_c *v73; // x0
  struct NGUIText_StaticFields *v74; // x8
  float fontSize; // s0
  float v76; // s1
  float v77; // s0
  double v78; // d1
  long double v79; // q13
  long double v80; // q9
  float a; // s8
  float b; // s10
  float g; // s11
  float r; // s12
  NGUIText_c *v85; // x8
  long double v86; // q0
  struct BetterList_Color__o *mColors; // x9
  int32_t v88; // w26
  int v89; // w24
  struct NGUIText_StaticFields *v90; // x9
  float32x2_t v91; // d2
  NGUIText_c *v92; // x0
  struct NGUIText_StaticFields *v93; // x8
  NGUIText_c *v94; // x0
  float y; // s11
  float x; // s13
  float v97; // s10
  float v98; // s12
  float advance; // s8
  float v100; // s0
  float v101; // s14
  double v102; // d0
  long double v103; // q1
  long double v104; // q2
  long double v105; // q3
  int32_t v106; // w25
  double v107; // d0
  double v108; // d1
  double v109; // d1
  NGUIText_c *v110; // x0
  struct NGUIText_StaticFields *v111; // x8
  float v112; // s3
  float v113; // s13
  float v114; // s10
  float v115; // s12
  int v116; // w10
  float v117; // s11
  float finalLineHeight; // s0
  NGUIText_c *v119; // x0
  struct NGUIText_StaticFields *v120; // x8
  int v121; // s15
  int32_t v122; // w24
  float finalSpacingX; // s13
  float v124; // s14
  long double inited; // q0
  long double v126; // q1
  long double v127; // q2
  long double v128; // q3
  float v129; // s8
  float m_YMin; // s10
  float v131; // s11
  float v132; // s12
  NGUIText_c *v133; // x0
  int v134; // w24
  unsigned __int64 v135; // x26
  int v136; // w24
  NGUIText_c *v137; // x0
  int v138; // w28
  struct NGUIText_StaticFields *v139; // x8
  long double v140; // q0
  float v141; // s14
  int32_t v142; // w28
  float v143; // s0
  int v144; // w28
  NGUIText_c *v145; // x0
  uint32_t cctor_finished; // w8
  struct NGUIText_StaticFields *v147; // x9
  float v148; // s8
  NGUIText_c *v149; // x0
  UnityEngine_Object_o *v150; // x29
  float v151; // s0
  float v152; // s1
  float v153; // s2
  float v154; // s3
  unsigned int v155; // w28
  unsigned int v156; // w29
  int32_t channel; // w8
  struct NGUIText_StaticFields *v158; // x8
  struct BetterList_Color__o *mGradientColors; // x8
  _BOOL4 v160; // w29
  int v161; // w28
  float v162; // s8
  float v163; // s0
  float v164; // s1
  float v165; // s8
  int32_t v166; // w0
  long double v167; // q1
  long double v168; // q2
  long double v169; // q3
  long double v170; // q0
  int v171; // w0
  NGUIText_c *v172; // x8
  unsigned int v173; // w9
  unsigned int i; // w26
  UnityEngine_Color32_o rgba; // x1
  UnityEngine_Color32_o v176; // x1
  UnityEngine_Color32_o v177; // x1
  UnityEngine_Color32_o v178; // x1
  unsigned int v179; // w0
  UnityEngine_Color32_o v180; // x26
  int v181; // w28
  _BOOL4 v182; // w26
  unsigned __int64 v183; // x29
  float v184; // s10
  struct NGUIText_StaticFields *v185; // x8
  struct UnityEngine_Color32_o s_c1; // x9
  unsigned __int64 v187; // x10
  unsigned __int64 v188; // x9
  float v189; // s11
  float v190; // s15
  float v191; // s12
  float v192; // s8
  float v193; // s15
  float v194; // s11
  const MethodInfo *v195; // x5
  NGUIText_c *v196; // x0
  float v197; // s8
  NGUIText_c *v198; // x0
  int32_t v199; // w26
  struct NGUIText_StaticFields *v200; // x8
  float v201; // s12
  float v202; // s13
  int32_t v203; // w29
  const MethodInfo *v204; // x5
  int32_t v205; // w26
  const MethodInfo *v206; // x5
  int32_t v207; // w29
  const MethodInfo *v208; // x5
  int32_t v209; // w26
  const MethodInfo *v210; // x5
  int32_t v211; // w29
  const MethodInfo *v212; // x5
  int32_t v213; // w26
  const MethodInfo *v214; // x5
  const MethodInfo *v215; // x5
  float v216; // s10
  float v217; // s0
  float v218; // s2
  float v219; // s1
  int Slope_k__BackingField; // w8
  float v221; // s2
  float v222; // s8
  float v223; // s0
  float v224; // s6
  float v225; // s4
  float v226; // s2
  float v227; // s3
  float v228; // s11
  float v229; // s3
  float v230; // s2
  float Length_k__BackingField; // s10
  float v232; // s1
  float v233; // s13
  float v234; // s12
  float v235; // s0
  float v236; // s1
  float v237; // s0
  float v238; // s2
  float v239; // s0
  float v240; // s1
  struct UnityEngine_Vector2_StaticFields *v241; // x8
  float v242; // s1
  float v243; // s13
  float v244; // s0
  long double v245; // q0
  long double v246; // q1
  long double v247; // q2
  long double v248; // q3
  float Width_k__BackingField; // s15
  float v250; // s10
  float v251; // s14
  float *v252; // x26
  float v253; // s2
  float v254; // s8
  struct NGUIText_StaticFields *v255; // x8
  float v256; // s8
  float v257; // s1
  float v258; // s11
  float v259; // s13
  struct BetterList_Color__o *v260; // x8
  unsigned __int64 v261; // x26
  float32x2_t v262; // d12
  float v263; // s15
  float v264; // s0
  float v265; // s1
  float v266; // s2
  UnityEngine_Color32_o v267; // x1
  float v268; // s8
  float v269; // s10
  float v270; // s15
  long double v271; // q1
  long double v272; // q2
  long double v273; // q3
  long double v274; // q0
  UnityEngine_Color32_o v275; // x1
  long double v276; // q1
  long double v277; // q2
  long double v278; // q3
  long double v279; // q0
  UnityEngine_Color32_o v280; // x1
  long double v281; // q1
  long double v282; // q2
  long double v283; // q3
  long double v284; // q0
  UnityEngine_Color32_o v285; // x1
  float v286; // s14
  int32_t v287; // w26
  float v288; // s13
  NGUIText_GlyphInfo_o *v289; // x0
  float *v290; // x26
  NGUIText_c *v291; // x0
  UnityEngine_Object_o *v292; // x29
  bool v293; // w0
  float v294; // s0
  float v295; // s1
  float v296; // s2
  float v297; // s3
  unsigned int v298; // w28
  float v299; // s8
  unsigned int v300; // w29
  float v301; // s11
  float v302; // s12
  unsigned __int64 v303; // x29
  __int64 v304; // x8
  unsigned __int64 v305; // x9
  __int64 v306; // x8
  float v307; // s13
  float v308; // s14
  float v309; // s10
  float v310; // s13
  long double v311; // q0
  long double v312; // q1
  long double v313; // q2
  long double v314; // q3
  struct NGUIText_StaticFields *v315; // x8
  struct BetterList_Color__o *v316; // x8
  int v317; // w28
  float v318; // s8
  float v319; // s0
  float v320; // s1
  float v321; // s8
  float32x2_t v322; // d9
  int32_t v323; // w0
  long double v324; // q1
  long double v325; // q2
  long double v326; // q3
  long double v327; // q0
  int v328; // w8
  unsigned int v329; // w10
  unsigned int v330; // w26
  UnityEngine_Color32_o v331; // x1
  UnityEngine_Color32_o v332; // x1
  UnityEngine_Color32_o v333; // x1
  UnityEngine_Color32_o v334; // x1
  NGUIText_c *v335; // x0
  struct NGUIText_StaticFields *v336; // x8
  long double v337; // q1
  long double v338; // q3
  long double v339; // q0
  long double v340; // q1
  long double v341; // q2
  long double v342; // q3
  float v343; // s3
  float32x2_t v344; // d0
  float32x2_t v345; // d2
  float32x2_t v346; // d0
  float32x2_t v347; // d2
  const MethodInfo *v348; // [xsp+38h] [xbp-1C8h]
  int v349; // [xsp+48h] [xbp-1B8h]
  float v350; // [xsp+50h] [xbp-1B0h]
  float v351; // [xsp+54h] [xbp-1ACh]
  float v352; // [xsp+58h] [xbp-1A8h]
  int v353; // [xsp+5Ch] [xbp-1A4h]
  float v354; // [xsp+5Ch] [xbp-1A4h]
  _BOOL4 v355; // [xsp+60h] [xbp-1A0h]
  float v356; // [xsp+64h] [xbp-19Ch]
  float v357; // [xsp+68h] [xbp-198h]
  float v358; // [xsp+6Ch] [xbp-194h]
  float m_XMin; // [xsp+70h] [xbp-190h]
  int32_t v360; // [xsp+74h] [xbp-18Ch]
  float v361; // [xsp+78h] [xbp-188h]
  float v362; // [xsp+7Ch] [xbp-184h]
  unsigned __int64 v363; // [xsp+80h] [xbp-180h]
  int32_t stringLength; // [xsp+8Ch] [xbp-174h]
  float32x2_t v365; // [xsp+90h] [xbp-170h]
  unsigned __int64 v366; // [xsp+98h] [xbp-168h]
  unsigned __int32 v367; // [xsp+A0h] [xbp-160h]
  float v368; // [xsp+A0h] [xbp-160h]
  float32x2_t v369; // [xsp+B8h] [xbp-148h]
  float32x2_t v370; // [xsp+C0h] [xbp-140h]
  float32x2_t v371; // [xsp+C8h] [xbp-138h]
  unsigned int v372; // [xsp+D0h] [xbp-130h]
  float v373; // [xsp+D0h] [xbp-130h]
  float v374; // [xsp+D0h] [xbp-130h]
  float32x2_t item; // [xsp+E0h] [xbp-120h]
  unsigned __int32 itema; // [xsp+E0h] [xbp-120h]
  float itemb; // [xsp+E0h] [xbp-120h]
  float itemc; // [xsp+E0h] [xbp-120h]
  float32x2_t v379; // [xsp+F0h] [xbp-110h]
  long double v380; // [xsp+F0h] [xbp-110h]
  long double v381; // [xsp+F0h] [xbp-110h]
  float v382; // [xsp+F0h] [xbp-110h]
  float v383; // [xsp+F0h] [xbp-110h]
  unsigned __int32 v384; // [xsp+F4h] [xbp-10Ch]
  int32_t index; // [xsp+10Ch] [xbp-F4h] BYREF
  NGUIText_DiagonalLineInfo_o diagonalLineInfo; // [xsp+110h] [xbp-F0h] BYREF
  bool v387; // [xsp+134h] [xbp-CCh] BYREF
  bool spGradient; // [xsp+138h] [xbp-C8h] BYREF
  bool isOutline; // [xsp+13Ch] [xbp-C4h] BYREF
  bool ignoreColor; // [xsp+140h] [xbp-C0h] BYREF
  bool strike; // [xsp+144h] [xbp-BCh] BYREF
  bool underline; // [xsp+148h] [xbp-B8h] BYREF
  bool italic; // [xsp+14Ch] [xbp-B4h] BYREF
  bool bold; // [xsp+150h] [xbp-B0h] BYREF
  int32_t sub; // [xsp+154h] [xbp-ACh] BYREF
  double iptr; // [xsp+158h] [xbp-A8h] BYREF
  UnityEngine_Rect_o uvRect; // 0:kr00_16.16
  UnityEngine_Color_o v398; // 0:kr10_16.16
  UnityEngine_Color_o v399; // 0:kr20_16.16
  UnityEngine_Color_o v400; // 0:kr40_16.16
  UnityEngine_Color_o v401; // 0:kr50_16.16
  UnityEngine_Vector2_o v402; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v403; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v404; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v405; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v406; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v407; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v408; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v409; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v410; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v411; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v412; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v413; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v414; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v415; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v416; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v417; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v418; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v420; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v421; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v422; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v423; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v424; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v425; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v426; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v427; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v428; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v429; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v430; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v431; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v432; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v433; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v434; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v435; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v436; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v437; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v438; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v439; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v440; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v441; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D351DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_Color32__Add__);
    sub_1C93AD4(&Method_BetterList_Color__Add__);
    sub_1C93AD4(&Method_BetterList_Vector2__Add__);
    sub_1C93AD4(&Method_BetterList_Color__Clear__);
    sub_1C93AD4(&Method_BetterList_Color__get_Item__);
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D351DB = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !verts )
      goto LABEL_416;
    size = verts->fields.size;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    NGUIText__Prepare(text, v15);
    IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mColors;
    if ( !IsNullOrEmpty )
      goto LABEL_416;
    v441.fields.r = 1.0;
    v441.fields.g = 1.0;
    v441.fields.b = 1.0;
    v441.fields.a = 1.0;
    BetterList_Color___Add(
      (BetterList_Color__o *)IsNullOrEmpty,
      v441,
      (const MethodInfo_33DA10C *)Method_BetterList_Color__Add__);
    static_fields = NGUIText_TypeInfo->static_fields;
    *(_QWORD *)&v18 = *(_QWORD *)&static_fields->tint.fields.r;
    *(_QWORD *)&v19 = *(_QWORD *)&static_fields->tint.fields.b;
    finalSize = static_fields->finalSize;
    v21.n64_u64[0] = *(unsigned __int64 *)&static_fields->gradientBottom.fields.r;
    v22.n64_u64[0] = *(unsigned __int64 *)&static_fields->gradientBottom.fields.b;
    v23.n64_u64[0] = *(unsigned __int64 *)&static_fields->gradientTop.fields.r;
    v24.n64_u64[0] = *(unsigned __int64 *)&static_fields->gradientTop.fields.b;
    LODWORD(v25) = DWORD1(v18);
    LODWORD(v26) = DWORD1(v19);
    static_fields->mAlpha = 1.0;
    item.n64_u64[0] = *(unsigned __int64 *)&v19;
    v379.n64_u64[0] = *(unsigned __int64 *)&v18;
    IsNullOrEmpty = sub_25BA1B8(0, v18, v25, v19, v26);
    if ( !text )
      goto LABEL_416;
    v27 = IsNullOrEmpty;
    stringLength = text->fields._stringLength;
    v28 = NGUIText_TypeInfo->static_fields;
    pixelDensity = v28->pixelDensity;
    sub = 0;
    bold = 0;
    italic = 0;
    underline = 0;
    strike = 0;
    ignoreColor = 0;
    isOutline = 0;
    spGradient = 0;
    v387 = 0;
    *(_OWORD *)&diagonalLineInfo.fields._Slope_k__BackingField = xmmword_D00FD0;
    *(_QWORD *)&diagonalLineInfo.fields._LineEdge_k__BackingField = 0;
    bitmapFont = (UnityEngine_Object_o *)v28->bitmapFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
    v33 = stringLength;
    LODWORD(v5) = 0;
    LODWORD(v7) = 0;
    m_XMin = 0.0;
    v34 = 0.0;
    v358 = 0.0;
    if ( v31 )
    {
      v35 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v35 = NGUIText_TypeInfo;
      }
      IsNullOrEmpty = (__int64)v35->static_fields->bitmapFont;
      if ( !IsNullOrEmpty )
        goto LABEL_416;
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&v8 + 1);
      uvRect = UIFont__get_uvRect((UIFont_o *)IsNullOrEmpty, 0);
      *(float *)&v337 = uvRect.fields.m_YMin;
      *(float *)&v338 = uvRect.fields.m_Height;
      m_XMin = uvRect.fields.m_XMin;
      IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->bitmapFont;
      if ( !IsNullOrEmpty )
        goto LABEL_416;
      v7 = v337;
      v5 = v338;
      IsNullOrEmpty = UIFont__get_texWidth((UIFont_o *)IsNullOrEmpty, 0);
      if ( !NGUIText_TypeInfo->static_fields->bitmapFont )
        goto LABEL_416;
      v358 = uvRect.fields.m_Width / (float)(int)IsNullOrEmpty;
      v34 = *(float *)&v5 / (float)UIFont__get_texHeight(NGUIText_TypeInfo->static_fields->bitmapFont, 0);
    }
    index = 0;
    if ( stringLength >= 1 )
    {
      v357 = v34;
      v371.n64_u64[0] = vmul_f32(v379, v21).n64_u64[0];
      *(float32x2_t *)&v9 = vmul_f32(item, v22);
      v365.n64_u64[0] = vmul_f32(item, v24).n64_u64[0];
      v356 = *(float *)&v5 + *(float *)&v7;
      v362 = pixelDensity * (float)finalSize;
      LODWORD(v366) = v27;
      v363 = v27 >> 24;
      v36 = 0;
      LODWORD(v15) = 0;
      *(float32x2_t *)&v6 = vmul_f32(v379, v23);
      LODWORD(v5) = 0;
      v37 = 0.0;
      while ( 1 )
      {
        Chars = System_String__get_Chars(text, (int32_t)v15, 0);
        if ( Chars == 10 )
        {
          v40 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v40 = NGUIText_TypeInfo;
          }
          v41 = v40->static_fields;
          if ( v41->alignment != 1 )
          {
            if ( !v40->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v40);
              v41 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, size, *(float *)&v5 - v41->finalSpacingX, v32);
            size = verts->fields.size;
            v40 = NGUIText_TypeInfo;
          }
          if ( !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v40 = NGUIText_TypeInfo;
          }
          v36 = 0;
          LODWORD(v5) = 0;
          v37 = v37 + v40->static_fields->finalLineHeight;
          goto LABEL_194;
        }
        if ( Chars < 0x20 )
        {
          v36 = Chars;
          goto LABEL_194;
        }
        v42 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v42 = NGUIText_TypeInfo;
        }
        v43 = v42->static_fields;
        if ( v43->encoding )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v43 = NGUIText_TypeInfo->static_fields;
          }
          if ( NGUIText__ParseSymbol_50038964(
                 text,
                 &index,
                 v43->mColors,
                 v43->premultiply,
                 &sub,
                 &bold,
                 &italic,
                 &underline,
                 &strike,
                 &ignoreColor,
                 &spGradient,
                 &isOutline,
                 v43->mGradientColors,
                 &v387,
                 &diagonalLineInfo,
                 v348) )
          {
            v44 = NGUIText_TypeInfo;
            v45 = ignoreColor;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v44 = NGUIText_TypeInfo;
            }
            v46 = v44->static_fields;
            IsNullOrEmpty = (__int64)v46->mColors;
            if ( v45 )
            {
              if ( !IsNullOrEmpty )
                goto LABEL_416;
              v398 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                       (const MethodInfo_33D9EF8 *)Method_BetterList_Color__get_Item__);
              *(float *)&v339 = v398.fields.r;
              *(float *)&v340 = v398.fields.g;
              *(float *)&v341 = v398.fields.b;
              *(float *)&v342 = v398.fields.a;
              mAlpha = NGUIText_TypeInfo->static_fields->mAlpha * NGUIText_TypeInfo->static_fields->tint.fields.a;
            }
            else
            {
              if ( !IsNullOrEmpty )
                goto LABEL_416;
              v79 = v6;
              v80 = v5;
              b = v46->tint.fields.b;
              a = v46->tint.fields.a;
              r = v46->tint.fields.r;
              g = v46->tint.fields.g;
              v399 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                       (const MethodInfo_33D9EF8 *)Method_BetterList_Color__get_Item__);
              *(float *)&v342 = a * v399.fields.a;
              *(float *)&v339 = r * v399.fields.r;
              *(float *)&v340 = g * v399.fields.g;
              *(float *)&v341 = b * v399.fields.b;
              v5 = v80;
              v6 = v79;
              mAlpha = NGUIText_TypeInfo->static_fields->mAlpha;
            }
            *(float *)&v342 = *(float *)&v342 * mAlpha;
            v372 = LODWORD(v341);
            itema = LODWORD(v339);
            v367 = LODWORD(v340);
            v380 = v342;
            IsNullOrEmpty = sub_25BA1B8(0, v339, v340, v341, v342);
            v85 = NGUIText_TypeInfo;
            v366 = IsNullOrEmpty;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v85 = NGUIText_TypeInfo;
            }
            v86 = v380;
            mColors = v85->static_fields->mColors;
            if ( !mColors )
              goto LABEL_416;
            v88 = 0;
            v363 = v366 >> 24;
            v89 = (mColors->fields.size - 2) & ~((mColors->fields.size - 2) >> 31);
            while ( 1 )
            {
              v381 = v86;
              if ( !v85->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v85);
                v85 = NGUIText_TypeInfo;
              }
              v90 = v85->static_fields;
              v91.n64_u32[0] = itema;
              if ( v89 == v88 )
                break;
              IsNullOrEmpty = (__int64)v90->mColors;
              if ( !IsNullOrEmpty )
                goto LABEL_416;
              v343 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       v88,
                       (const MethodInfo_33D9EF8 *)Method_BetterList_Color__get_Item__).fields.a;
              v86 = v381;
              v85 = NGUIText_TypeInfo;
              ++v88;
              *(float *)&v86 = *(float *)&v381 * v343;
            }
            if ( v90->gradient )
            {
              if ( !v85->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v85);
                v85 = NGUIText_TypeInfo;
                v91.n64_u32[0] = itema;
                v90 = NGUIText_TypeInfo->static_fields;
              }
              v91.n64_u32[1] = v367;
              v371.n64_u64[0] = vmul_f32(v91, *(float32x2_t *)&v90->gradientBottom.fields.r).n64_u64[0];
              *(float32x2_t *)&v9 = vmul_f32(
                                      (float32x2_t)__PAIR64__(LODWORD(v381), v372),
                                      *(float32x2_t *)&v90->gradientBottom.fields.b);
              *(float32x2_t *)&v6 = vmul_f32(v91, *(float32x2_t *)&v90->gradientTop.fields.r);
              v365.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v381), v372),
                                  *(float32x2_t *)&v90->gradientTop.fields.b).n64_u64[0];
            }
            if ( !v85->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v85);
              v85 = NGUIText_TypeInfo;
            }
            IsNullOrEmpty = (__int64)v85->static_fields->mGradientColors;
            if ( !IsNullOrEmpty )
              goto LABEL_416;
            if ( *(int *)(IsNullOrEmpty + 24) >= 2 )
            {
              if ( !v85->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v85);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
                if ( !IsNullOrEmpty )
                  goto LABEL_416;
              }
              v400 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 2,
                       (const MethodInfo_33D9EF8 *)Method_BetterList_Color__get_Item__);
              v344.n64_u32[0] = LODWORD(v400.fields.r);
              v345.n64_u32[0] = LODWORD(v400.fields.b);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
              if ( !IsNullOrEmpty )
                goto LABEL_416;
              v345.n64_u32[1] = LODWORD(v400.fields.a);
              v344.n64_u32[1] = LODWORD(v400.fields.g);
              *(float32x2_t *)&v9 = vmul_f32((float32x2_t)__PAIR64__(LODWORD(v381), v372), v345);
              v371.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(v367, itema), v344).n64_u64[0];
              v401 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                       (const MethodInfo_33D9EF8 *)Method_BetterList_Color__get_Item__);
              v346.n64_u32[0] = LODWORD(v401.fields.r);
              v347.n64_u32[0] = LODWORD(v401.fields.b);
              v346.n64_u32[1] = v367;
              *(float32x2_t *)&v6 = vmul_f32((float32x2_t)__PAIR64__(LODWORD(v401.fields.g), itema), v346);
              v347.n64_u32[1] = LODWORD(v381);
              v365.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(LODWORD(v401.fields.a), v372), v347).n64_u64[0];
            }
            if ( spGradient )
            {
              v92 = NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v92 = NGUIText_TypeInfo;
              }
              v93 = v92->static_fields;
              *(float32x2_t *)&v9 = vmul_f32(
                                      (float32x2_t)__PAIR64__(LODWORD(v381), v372),
                                      *(float32x2_t *)&v93->specificGradientBottom.fields.b);
              *(float32x2_t *)&v6 = vmul_f32(
                                      (float32x2_t)__PAIR64__(v367, itema),
                                      *(float32x2_t *)&v93->specificGradientTop.fields.r);
              v371.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v367, itema),
                                  *(float32x2_t *)&v93->specificGradientBottom.fields.r).n64_u64[0];
              v365.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v381), v372),
                                  *(float32x2_t *)&v93->specificGradientTop.fields.b).n64_u64[0];
            }
            --index;
            goto LABEL_194;
          }
          v42 = NGUIText_TypeInfo;
        }
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = NGUIText_TypeInfo;
        }
        if ( v42->static_fields->useSymbols )
        {
          v48 = index;
          if ( !v42->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v42);
          Symbol = NGUIText__GetSymbol(text, v48, v33, v38);
          if ( Symbol )
          {
            v50 = Symbol;
            v51 = NGUIText_TypeInfo;
            mOffsetX = v50->fields.mOffsetX;
            v369.n64_u64[0] = *(unsigned __int64 *)&v9;
            v370.n64_u64[0] = *(unsigned __int64 *)&v6;
            v6 = v5;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v51 = NGUIText_TypeInfo;
            }
            mOffsetY = v50->fields.mOffsetY;
            mWidth = v50->fields.mWidth;
            fontScale = v51->static_fields->fontScale;
            mHeight = v50->fields.mHeight;
            mAdvance = v50->fields.mAdvance;
            if ( !byte_4D2A83C )
            {
              sub_1C93AD4(&System_Math_TypeInfo);
              byte_4D2A83C = 1;
            }
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v58 = *(float *)&v6 + (float)(fontScale * (float)mAdvance);
            v59 = v58;
            v61 = modf(v58, &iptr);
            if ( v58 >= 0.0 )
            {
              if ( v61 == 0.5 )
              {
                v62 = iptr;
                v63 = 1.0;
                goto LABEL_70;
              }
              v62 = floor(v59 + 0.5);
            }
            else if ( v61 == -0.5 )
            {
              v62 = iptr;
              v63 = -1.0;
LABEL_70:
              v78 = v62 + v63;
              if ( ((__int64)v62 & 1) != 0 )
                v62 = v78;
            }
            else
            {
              v62 = ceil(v59 + -0.5);
            }
            v110 = NGUIText_TypeInfo;
            v111 = NGUIText_TypeInfo->static_fields;
            v112 = fontScale * (float)mOffsetY;
            v113 = *(float *)&v6 + (float)(fontScale * (float)mOffsetX);
            v114 = v113 + (float)(fontScale * (float)mWidth);
            v115 = -(float)(v37 + v112);
            v116 = (int)v62;
            if ( v62 == INFINITY )
              v116 = 0x80000000;
            v117 = v115 - (float)(fontScale * (float)mHeight);
            if ( v116 > v111->regionWidth )
            {
              if ( *(float *)&v6 == 0.0 )
                return;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v110 = NGUIText_TypeInfo;
                v111 = NGUIText_TypeInfo->static_fields;
              }
              if ( v111->alignment != 1 && size < verts->fields.size )
              {
                if ( !v110->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v110);
                  v111 = NGUIText_TypeInfo->static_fields;
                }
                NGUIText__Align(verts, size, *(float *)&v6 - v111->finalSpacingX, v60);
                size = verts->fields.size;
                v110 = NGUIText_TypeInfo;
              }
              if ( !v110->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v110);
                v110 = NGUIText_TypeInfo;
              }
              v113 = v113 - *(float *)&v6;
              v114 = v114 - *(float *)&v6;
              LODWORD(v6) = 0;
              finalLineHeight = v110->static_fields->finalLineHeight;
              v117 = v117 - finalLineHeight;
              v115 = v115 - finalLineHeight;
              v37 = v37 + finalLineHeight;
            }
            v414.fields.z = 0.0;
            v414.fields.x = v113;
            v414.fields.y = v117;
            BetterList_Vector3___Add(verts, v414, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v415.fields.z = 0.0;
            v415.fields.x = v113;
            v415.fields.y = v115;
            BetterList_Vector3___Add(verts, v415, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v416.fields.z = 0.0;
            v416.fields.x = v114;
            v416.fields.y = v115;
            BetterList_Vector3___Add(verts, v416, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v417.fields.z = 0.0;
            v417.fields.x = v114;
            v417.fields.y = v117;
            BetterList_Vector3___Add(verts, v417, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v119 = NGUIText_TypeInfo;
            v382 = v37;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v119 = NGUIText_TypeInfo;
            }
            v120 = v119->static_fields;
            v121 = v50->fields.mAdvance;
            v122 = index;
            finalSpacingX = v120->finalSpacingX;
            v124 = v120->fontScale;
            v5 = v6;
            index = v122 + BMSymbol__get_length(v50, 0) - 1;
            if ( uvs )
            {
              v129 = v50->fields.mUV.fields.m_XMin;
              m_YMin = v50->fields.mUV.fields.m_YMin;
              v131 = m_YMin + v50->fields.mUV.fields.m_Height;
              v132 = v129 + v50->fields.mUV.fields.m_Width;
              v402.fields.x = v129;
              v402.fields.y = m_YMin;
              BetterList_Vector2___Add(uvs, v402, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
              v403.fields.x = v129;
              v403.fields.y = v131;
              BetterList_Vector2___Add(uvs, v403, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
              v404.fields.x = v132;
              v404.fields.y = v131;
              BetterList_Vector2___Add(uvs, v404, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
              v405.fields.x = v132;
              v405.fields.y = m_YMin;
              v5 = v6;
              BetterList_Vector2___Add(uvs, v405, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            }
            *(float *)&v5 = *(float *)&v5 + (float)(finalSpacingX + (float)(v124 * (float)v121));
            if ( cols )
            {
              v133 = NGUIText_TypeInfo;
              v37 = v382;
              *(float32x2_t *)&v9 = v369;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v133 = NGUIText_TypeInfo;
              }
              *(float32x2_t *)&v6 = v370;
              if ( v133->static_fields->symbolStyle == 2 )
              {
                v134 = 4;
                do
                {
                  BetterList_Color32___Add(
                    cols,
                    (UnityEngine_Color32_o)(v366 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v363 << 24)),
                    (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
                  --v134;
                }
                while ( v134 );
              }
              else
              {
                LODWORD(inited) = 1.0;
                LODWORD(v126) = 1.0;
                LODWORD(v127) = 1.0;
                LODWORD(v128) = 1.0;
                v135 = sub_25BA1B8(0, inited, v126, v127, v128) & 0xFFFFFF
                     | ((unsigned __int64)(unsigned __int8)v363 << 24);
                v136 = 4;
                do
                {
                  BetterList_Color32___Add(
                    cols,
                    (UnityEngine_Color32_o)v135,
                    (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
                  --v136;
                }
                while ( v136 );
              }
              v36 = 0;
              goto LABEL_194;
            }
            v37 = v382;
            v36 = 0;
LABEL_149:
            *(float32x2_t *)&v9 = v369;
            *(float32x2_t *)&v6 = v370;
            goto LABEL_194;
          }
          v42 = NGUIText_TypeInfo;
        }
        if ( !v42->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v42);
        Glyph = NGUIText__GetGlyph(Chars, v36, v32);
        if ( !Glyph )
          goto LABEL_194;
        v65 = sub;
        v66 = Glyph;
        if ( sub )
        {
          __asm { FMOV            V1.4S, #0.75 }
          v72 = vmulq_f32(*(float32x4_t *)&Glyph->fields.v0.fields.x, _Q1);
          *(float32x4_t *)&Glyph->fields.v0.fields.x = v72;
          v73 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            v384 = v72.n128_u32[1];
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v72.n128_u32[1] = v384;
            v73 = NGUIText_TypeInfo;
          }
          v74 = v73->static_fields;
          fontSize = (float)v74->fontSize;
          v76 = v74->fontScale * fontSize;
          if ( v65 == 1 )
          {
            v66->fields.v0.fields.y = v72.n128_f32[1] - (float)(v76 * 0.4);
            v77 = v66->fields.v1.fields.y - (float)((float)(v74->fontScale * fontSize) * 0.4);
          }
          else
          {
            v66->fields.v0.fields.y = v72.n128_f32[1] + (float)(v76 * 0.05);
            v77 = v66->fields.v1.fields.y + (float)((float)(v74->fontScale * fontSize) * 0.05);
          }
          v66->fields.v1.fields.y = v77;
        }
        v94 = NGUIText_TypeInfo;
        v370.n64_u64[0] = *(unsigned __int64 *)&v6;
        v6 = v5;
        x = v66->fields.v0.fields.x;
        y = v66->fields.v0.fields.y;
        v98 = v66->fields.v1.fields.x;
        v97 = v66->fields.v1.fields.y;
        advance = v66->fields.advance;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v94 = NGUIText_TypeInfo;
        }
        v100 = v94->static_fields->finalSpacingX;
        if ( v100 < 0.0 )
        {
          if ( !v94->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v94);
            v100 = NGUIText_TypeInfo->static_fields->finalSpacingX;
          }
          advance = advance + v100;
        }
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v369.n64_u64[0] = *(unsigned __int64 *)&v9;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v101 = *(float *)&v6 + advance;
        *(double *)&v5 = (float)(*(float *)&v6 + advance);
        v102 = modf(*(double *)&v5, &iptr);
        if ( v101 >= 0.0 )
        {
          v106 = size;
          if ( v102 != 0.5 )
          {
            v107 = floor(*(double *)&v5 + 0.5);
            goto LABEL_156;
          }
          v107 = iptr;
          v108 = 1.0;
        }
        else
        {
          v106 = size;
          if ( v102 != -0.5 )
          {
            v107 = ceil(*(double *)&v5 + -0.5);
            goto LABEL_156;
          }
          v107 = iptr;
          v108 = -1.0;
        }
        v109 = v107 + v108;
        if ( ((__int64)v107 & 1) != 0 )
          v107 = v109;
LABEL_156:
        v137 = NGUIText_TypeInfo;
        DWORD1(v103) = 2146435072;
        if ( v107 == INFINITY )
          v138 = 0x80000000;
        else
          v138 = (int)v107;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v137 = NGUIText_TypeInfo;
        }
        v139 = v137->static_fields;
        v140 = v6;
        itemb = *(float *)&v6 + x;
        *(float *)&v8 = y - v37;
        v141 = v97 - v37;
        v373 = *(float *)&v6 + v98;
        if ( v138 <= v139->regionWidth )
        {
          v142 = v106;
          v33 = stringLength;
          v7 = v6;
        }
        else
        {
          v142 = v106;
          v33 = stringLength;
          if ( *(float *)&v6 == 0.0 )
            return;
          if ( !v137->_2.cctor_finished )
          {
            v140 = j_il2cpp_runtime_class_init_0(v137);
            v137 = NGUIText_TypeInfo;
            v139 = NGUIText_TypeInfo->static_fields;
          }
          if ( v139->alignment != 1 && v142 < verts->fields.size )
          {
            if ( !v137->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v137);
              v139 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, v142, *(float *)&v6 - v139->finalSpacingX, v32);
            v142 = verts->fields.size;
            v137 = NGUIText_TypeInfo;
          }
          if ( !v137->_2.cctor_finished )
          {
            v140 = j_il2cpp_runtime_class_init_0(v137);
            v137 = NGUIText_TypeInfo;
          }
          LODWORD(v7) = 0;
          v143 = v137->static_fields->finalLineHeight;
          itemb = itemb - *(float *)&v6;
          *(float *)&v8 = *(float *)&v8 - v143;
          v141 = v141 - v143;
          v37 = v37 + v143;
          v373 = v373 - *(float *)&v6;
        }
        *(float32x2_t *)&v6 = v370;
        v360 = v142;
        if ( !v137->_2.cctor_finished )
          v140 = j_il2cpp_runtime_class_init_0(v137);
        if ( Chars - 8201 < 3 || (v144 = Chars, Chars == 32) )
        {
          if ( underline )
          {
            v144 = 95;
          }
          else if ( strike )
          {
            v144 = 45;
          }
          else
          {
            v144 = Chars;
          }
        }
        v145 = NGUIText_TypeInfo;
        cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
        if ( !cctor_finished )
        {
          v140 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v145 = NGUIText_TypeInfo;
          cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
        }
        v147 = v145->static_fields;
        if ( v65 )
          v148 = (float)(v147->finalSpacingX + v66->fields.advance) * 0.75;
        else
          v148 = v147->finalSpacingX + v66->fields.advance;
        if ( !cctor_finished )
          v140 = j_il2cpp_runtime_class_init_0(v145);
        *(float *)&v5 = *(float *)&v7 + v148;
        if ( (unsigned int)(v144 - 8201) < 3 || (v368 = *(float *)&v5, v144 == 32) )
        {
          size = v360;
LABEL_193:
          v36 = Chars;
          *(float32x2_t *)&v9 = v369;
          goto LABEL_194;
        }
        if ( uvs )
        {
          v149 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v149 = NGUIText_TypeInfo;
          }
          v150 = (UnityEngine_Object_o *)v149->static_fields->bitmapFont;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v150, 0, 0) )
          {
            v151 = m_XMin + (float)(v358 * v66->fields.u0.fields.x);
            v152 = m_XMin + (float)(v358 * v66->fields.u2.fields.x);
            v153 = v356 - (float)(v357 * v66->fields.u0.fields.y);
            v154 = v356 - (float)(v357 * v66->fields.u2.fields.y);
            v66->fields.u0.fields.x = v151;
            v66->fields.u0.fields.y = v153;
            v66->fields.u2.fields.x = v152;
            v66->fields.u2.fields.y = v154;
            v66->fields.u1.fields.x = v151;
            v66->fields.u1.fields.y = v154;
            v66->fields.u3.fields.x = v152;
            v66->fields.u3.fields.y = v153;
          }
          v155 = 0;
          if ( bold )
            v156 = 4;
          else
            v156 = 1;
          do
          {
            BetterList_Vector2___Add(uvs, v66->fields.u0, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            BetterList_Vector2___Add(uvs, v66->fields.u1, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            BetterList_Vector2___Add(uvs, v66->fields.u2, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            BetterList_Vector2___Add(uvs, v66->fields.u3, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            ++v155;
          }
          while ( v155 < v156 );
        }
        v361 = *(float *)&v7;
        if ( !cols )
        {
          v160 = bold;
LABEL_250:
          size = v360;
          goto LABEL_251;
        }
        channel = v66->fields.channel;
        if ( channel != 15 && channel )
        {
          *(float *)&v140 = (float)((float)(unsigned __int8)v366 / 255.0) * 0.49;
          *(float *)&v103 = (float)((float)BYTE1(v366) / 255.0) * 0.49;
          *(float *)&v104 = (float)((float)BYTE2(v366) / 255.0) * 0.49;
          *(float *)&v105 = (float)((float)(unsigned __int8)v363 / 255.0) * 0.49;
          switch ( channel )
          {
            case 1:
              *(float *)&v104 = *(float *)&v104 + 0.51;
              break;
            case 2:
              *(float *)&v103 = *(float *)&v103 + 0.51;
              break;
            case 3:
              break;
            case 4:
              *(float *)&v140 = *(float *)&v140 + 0.51;
              break;
            default:
              if ( channel == 8 )
                *(float *)&v105 = *(float *)&v105 + 0.51;
              break;
          }
          v179 = sub_25BA1B8(0, v140, v103, v104, v105);
          v160 = bold;
          v180 = (UnityEngine_Color32_o)v179;
          if ( bold )
            v181 = 16;
          else
            v181 = 4;
          do
          {
            BetterList_Color32___Add(cols, v180, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
            --v181;
          }
          while ( v181 );
          goto LABEL_250;
        }
        IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          v140 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        v158 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
        if ( !spGradient && !v158->gradient )
        {
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v140 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            v158 = NGUIText_TypeInfo->static_fields;
          }
          mGradientColors = v158->mGradientColors;
          if ( !mGradientColors )
            goto LABEL_416;
          if ( mGradientColors->fields.size < 2 )
          {
            v160 = bold;
            if ( bold )
              v161 = 16;
            else
              v161 = 4;
            do
            {
              BetterList_Color32___Add(
                cols,
                (UnityEngine_Color32_o)(v366 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v363 << 24)),
                (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
              --v161;
            }
            while ( v161 );
            goto LABEL_250;
          }
        }
        v162 = v66->fields.v0.fields.y;
        v353 = LODWORD(v8);
        if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
        {
          v140 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        v163 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
        *(float32x2_t *)&v7 = vsub_f32(v370, v371);
        size = v360;
        *(float32x2_t *)&v8 = vsub_f32(v365, v369);
        v164 = (float)(v362 + (float)(v162 / v163)) / v362;
        v165 = (float)(v362 + (float)(v66->fields.v1.fields.y / v163)) / v362;
        *(float *)&v140 = fminf(v164, 1.0);
        if ( v164 < 0.0 )
          *(float *)&v140 = 0.0;
        *(float32x2_t *)&v103 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v140);
        *(float32x2_t *)&v104 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v140);
        *(float32x2_t *)&v140 = vadd_f32(v371, *(float32x2_t *)&v103);
        *(float32x2_t *)&v104 = vadd_f32(v369, *(float32x2_t *)&v104);
        LODWORD(v103) = DWORD1(v140);
        LODWORD(v105) = DWORD1(v104);
        v166 = sub_25BA1B8(0, v140, v103, v104, v105);
        *(float *)&v170 = fminf(v165, 1.0);
        if ( v165 < 0.0 )
          *(float *)&v170 = 0.0;
        *(float32x2_t *)&v167 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v170);
        *(float32x2_t *)&v168 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v170);
        *(float32x2_t *)&v170 = vadd_f32(v371, *(float32x2_t *)&v167);
        *(float32x2_t *)&v168 = vadd_f32(v369, *(float32x2_t *)&v168);
        LODWORD(v167) = DWORD1(v170);
        NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v166;
        LODWORD(v169) = DWORD1(v168);
        v171 = sub_25BA1B8(0, v170, v167, v168, v169);
        v172 = NGUIText_TypeInfo;
        LODWORD(v8) = v353;
        *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v171;
        v160 = bold;
        if ( bold )
          v173 = 4;
        else
          v173 = 1;
        if ( v173 <= 1 )
          v173 = 1;
        for ( i = v173 - 1; ; --i )
        {
          if ( !v172->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v172);
          rgba = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
          BetterList_Color32___Add(cols, rgba, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          v176 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
          BetterList_Color32___Add(cols, v176, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          v177 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
          BetterList_Color32___Add(cols, v177, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          v178 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
          BetterList_Color32___Add(cols, v178, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          if ( !i )
            break;
          v172 = NGUIText_TypeInfo;
        }
LABEL_251:
        v182 = italic;
        v383 = v37;
        v355 = v160;
        if ( v160 )
        {
          v183 = 0;
          v6 = v8;
          v184 = v141 - *(float *)&v8;
          while ( 1 )
          {
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            }
            v185 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
            s_c1 = v185->s_c1;
            if ( !*(_QWORD *)&s_c1 )
              goto LABEL_416;
            v187 = *(unsigned int *)(*(_QWORD *)&s_c1 + 24LL);
            if ( v183 >= v187 || v183 + 1 >= v187 )
LABEL_417:
              sub_1C93D34(IsNullOrEmpty);
            v188 = *(_QWORD *)&s_c1 + 4 * v183;
            v189 = *(float *)(v188 + 32);
            v190 = *(float *)(v188 + 36);
            if ( v182 )
            {
              if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
              {
                j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                v185 = NGUIText_TypeInfo->static_fields;
              }
              v191 = (float)((float)v185->fontSize * 0.1) * (float)(v184 / (float)v185->fontSize);
            }
            else
            {
              v191 = 0.0;
            }
            v192 = *(float *)&v6 + v190;
            v418.fields.z = 0.0;
            v418.fields.x = (float)(itemb + v189) - v191;
            v418.fields.y = *(float *)&v6 + v190;
            BetterList_Vector3___Add(verts, v418, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v193 = v141 + v190;
            v419.fields.x = (float)(itemb + v189) + v191;
            v419.fields.z = 0.0;
            v419.fields.y = v193;
            BetterList_Vector3___Add(verts, v419, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v420.fields.z = 0.0;
            v194 = v373 + v189;
            v420.fields.x = v194 + v191;
            v420.fields.y = v193;
            BetterList_Vector3___Add(verts, v420, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v421.fields.x = v194 - v191;
            v421.fields.z = 0.0;
            v421.fields.y = v192;
            BetterList_Vector3___Add(verts, v421, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v37 = v383;
            v183 += 2LL;
            if ( v183 == 8 )
              goto LABEL_271;
          }
        }
        if ( italic )
        {
          v196 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v196 = NGUIText_TypeInfo;
          }
          v197 = (float)((float)v196->static_fields->fontSize * 0.1)
               * (float)((float)(v141 - *(float *)&v8) / (float)v196->static_fields->fontSize);
          v422.fields.x = itemb - v197;
          v422.fields.z = 0.0;
          v422.fields.y = *(float *)&v8;
          BetterList_Vector3___Add(verts, v422, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v423.fields.x = itemb + v197;
          v423.fields.z = 0.0;
          v423.fields.y = v141;
          BetterList_Vector3___Add(verts, v423, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v424.fields.z = 0.0;
          v424.fields.x = v373 + v197;
          v424.fields.y = v141;
          BetterList_Vector3___Add(verts, v424, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v425.fields.x = v373 - v197;
        }
        else
        {
          v426.fields.z = 0.0;
          v426.fields.x = itemb;
          v426.fields.y = *(float *)&v8;
          BetterList_Vector3___Add(verts, v426, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v427.fields.z = 0.0;
          v427.fields.x = itemb;
          v427.fields.y = v141;
          BetterList_Vector3___Add(verts, v427, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v428.fields.z = 0.0;
          v428.fields.x = v373;
          v428.fields.y = v141;
          BetterList_Vector3___Add(verts, v428, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v425.fields.x = v373;
        }
        v425.fields.z = 0.0;
        v425.fields.y = *(float *)&v8;
        v6 = v8;
        BetterList_Vector3___Add(verts, v425, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
LABEL_271:
        if ( isOutline )
        {
          v198 = NGUIText_TypeInfo;
          v199 = verts->fields.size;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v198 = NGUIText_TypeInfo;
          }
          v200 = v198->static_fields;
          v202 = v200->outlineDistance.fields.x;
          v201 = v200->outlineDistance.fields.y;
          NGUIText__ApplyEffect(verts, uvs, cols, v199 - 4, v199, v202 / 1.4142, -(float)(v201 / 1.4142), v195);
          v203 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v199, v203, -(float)(v202 / 1.4142), v201 / 1.4142, v204);
          v205 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v203, v205, v202 / 1.4142, v201 / 1.4142, v206);
          v207 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v205, v207, -(float)(v202 / 1.4142), -(float)(v201 / 1.4142), v208);
          v209 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v207, v209, -v202, 0.0, v210);
          v211 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v209, v211, v202, 0.0, v212);
          v213 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v211, v213, 0.0, v201, v214);
          NGUIText__ApplyEffect(verts, uvs, cols, v213, verts->fields.size, 0.0, -v201, v215);
          v37 = v383;
        }
        v216 = v361;
        if ( !v387 )
          goto LABEL_339;
        if ( diagonalLineInfo.fields._Offset_k__BackingField <= 0.0 )
        {
          v217 = fminf(-diagonalLineInfo.fields._Offset_k__BackingField, 1.0);
          v218 = v141;
        }
        else
        {
          v217 = fminf(diagonalLineInfo.fields._Offset_k__BackingField, 1.0);
          if ( diagonalLineInfo.fields._Offset_k__BackingField < 0.0 )
            v217 = 0.0;
          v218 = *(float *)&v6;
        }
        v219 = (float)(*(float *)&v6 + v141) * 0.5;
        Slope_k__BackingField = (int)diagonalLineInfo.fields._Slope_k__BackingField;
        v221 = (float)(v219 + (float)((float)(v218 - v219) * v217)) - v219;
        if ( diagonalLineInfo.fields._Slope_k__BackingField == INFINITY )
          Slope_k__BackingField = 0x80000000;
        v222 = v219 + v221;
        v223 = (float)Slope_k__BackingField;
        if ( diagonalLineInfo.fields._Slope_k__BackingField <= 0.0 )
        {
          v224 = 1.0;
          v229 = fminf(-(float)(diagonalLineInfo.fields._Slope_k__BackingField - v223), 1.0);
          v230 = (float)(v141 + v221) - v222;
          if ( (float)(diagonalLineInfo.fields._Slope_k__BackingField - v223) > 0.0 )
            v229 = 0.0;
          v228 = (float)(v222 + (float)(v230 * v229)) - (float)((float)(v141 - v219) * v223);
        }
        else
        {
          v224 = 1.0;
          v225 = fminf(diagonalLineInfo.fields._Slope_k__BackingField - v223, 1.0);
          v226 = (float)(*(float *)&v6 + v221) - v222;
          if ( (float)(diagonalLineInfo.fields._Slope_k__BackingField - v223) < 0.0 )
            v227 = 0.0;
          else
            v227 = v225;
          v228 = (float)((float)(*(float *)&v6 - v219) * v223) + (float)(v222 + (float)(v226 * v227));
        }
        if ( diagonalLineInfo.fields._Length_k__BackingField == INFINITY )
          Length_k__BackingField = -2147500000.0;
        else
          Length_k__BackingField = (float)(int)diagonalLineInfo.fields._Length_k__BackingField;
        v232 = fminf(diagonalLineInfo.fields._Length_k__BackingField - Length_k__BackingField, v224);
        if ( (float)(diagonalLineInfo.fields._Length_k__BackingField - Length_k__BackingField) < 0.0 )
          v233 = 0.0;
        else
          v233 = v232;
        if ( !byte_4D2A13A )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A13A = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v234 = (float)(v222 + v222) - v228;
        v235 = (float)(v373 + itemb) * 0.5;
        v236 = v234 - v228;
        v352 = fmaxf(
                 (float)((float)(v361 - v235) * Length_k__BackingField)
               + (float)(v235 + (float)((float)(v361 - v235) * v233)),
                 0.0);
        v354 = (float)(v235 + v235) - v352;
        v237 = v354 - v352;
        v238 = sqrtf((float)(v236 * v236) + (float)(v237 * v237));
        if ( v238 <= 0.00001 )
        {
          if ( !byte_4D2A019 )
          {
            sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
            byte_4D2A019 = 1;
          }
          v241 = UnityEngine_Vector2_TypeInfo->static_fields;
          v239 = v241->zeroVector.fields.x;
          v240 = v241->zeroVector.fields.y;
        }
        else
        {
          v239 = v237 / v238;
          v240 = v236 / v238;
        }
        v242 = -v240;
        if ( diagonalLineInfo.fields._LineEdge_k__BackingField )
          v243 = 0.0;
        else
          v243 = v239;
        v244 = -1.0;
        if ( !diagonalLineInfo.fields._LineEdge_k__BackingField )
          v244 = v242;
        v351 = v244;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        IsNullOrEmpty = (__int64)NGUIText__GetGlyph(45, Chars, v32);
        if ( !IsNullOrEmpty )
          goto LABEL_416;
        Width_k__BackingField = diagonalLineInfo.fields._Width_k__BackingField;
        v250 = *(float *)(IsNullOrEmpty + 28);
        v251 = *(float *)(IsNullOrEmpty + 20);
        v252 = (float *)IsNullOrEmpty;
        if ( uvs )
        {
          v406.fields.x = *(float *)(IsNullOrEmpty + 32);
          v253 = *(float *)(IsNullOrEmpty + 36);
          v254 = diagonalLineInfo.fields._LineGradientAdjust_k__BackingField
               * (float)(vabds_f32(v253, *(float *)(IsNullOrEmpty + 52)) * 0.01);
          v406.fields.y = v253 - v254;
          BetterList_Vector2___Add(uvs, v406, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
          v407.fields.x = v252[10];
          v407.fields.y = v252[11] - v254;
          BetterList_Vector2___Add(uvs, v407, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
          v408.fields.x = v252[12];
          v408.fields.y = v254 + v252[13];
          BetterList_Vector2___Add(uvs, v408, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
          v409.fields.x = v252[14];
          v409.fields.y = v254 + v252[15];
          BetterList_Vector2___Add(uvs, v409, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
        }
        IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          v245 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        v255 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
        v256 = fmaxf(Width_k__BackingField, 0.0) * vabds_f32(v250, v251);
        v257 = v228 + (float)(v243 * v256);
        *(float *)&v9 = v228 - (float)(v243 * v256);
        v258 = v234 - (float)(v243 * v256);
        *(float *)&v7 = v234 + (float)(v243 * v256);
        itemc = v257;
        if ( spGradient || v255->gradient )
        {
          v259 = v362;
          *(float32x2_t *)&v6 = v369;
          LODWORD(v246) = 1.0;
LABEL_326:
          v350 = v256;
          v5 = v9;
          v374 = v258;
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v245 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            LODWORD(v246) = 1.0;
          }
          v262.n64_u64[0] = vsub_f32(v370, v371).n64_u64[0];
          v263 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
          *(float32x2_t *)&v8 = vsub_f32(v365, *(float32x2_t *)&v6);
          v264 = (float)(v259 + (float)(itemc / v263)) / v259;
          v265 = fminf(v264, *(float *)&v246);
          _NF = v264 < 0.0;
          LODWORD(v245) = 0;
          if ( !_NF )
            *(float *)&v245 = v265;
          *(float32x2_t *)&v246 = vmul_n_f32(v262, *(float *)&v245);
          *(float32x2_t *)&v247 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v245);
          *(float32x2_t *)&v245 = vadd_f32(v371, *(float32x2_t *)&v246);
          *(float32x2_t *)&v247 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v247);
          LODWORD(v246) = DWORD1(v245);
          LODWORD(v248) = DWORD1(v247);
          IsNullOrEmpty = sub_25BA1B8(0, v245, v246, v247, v248);
          if ( !cols )
            goto LABEL_416;
          v266 = v259 + (float)(*(float *)&v7 / v263);
          v267 = (UnityEngine_Color32_o)(unsigned int)IsNullOrEmpty;
          v349 = LODWORD(v7);
          v268 = (float)(v259 + (float)(*(float *)&v9 / v263)) / v259;
          v269 = (float)(v259 + (float)(v374 / v263)) / v259;
          v270 = v266 / v259;
          BetterList_Color32___Add(cols, v267, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          *(float *)&v274 = fminf(v268, 1.0);
          if ( v268 < 0.0 )
            *(float *)&v274 = 0.0;
          *(float32x2_t *)&v271 = vmul_n_f32(v262, *(float *)&v274);
          *(float32x2_t *)&v272 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v274);
          *(float32x2_t *)&v274 = vadd_f32(v371, *(float32x2_t *)&v271);
          *(float32x2_t *)&v272 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v272);
          LODWORD(v271) = DWORD1(v274);
          LODWORD(v273) = DWORD1(v272);
          v275 = (UnityEngine_Color32_o)(unsigned int)sub_25BA1B8(0, v274, v271, v272, v273);
          BetterList_Color32___Add(cols, v275, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          *(float *)&v279 = fminf(v269, 1.0);
          if ( v269 < 0.0 )
            *(float *)&v279 = 0.0;
          *(float32x2_t *)&v276 = vmul_n_f32(v262, *(float *)&v279);
          *(float32x2_t *)&v277 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v279);
          *(float32x2_t *)&v279 = vadd_f32(v371, *(float32x2_t *)&v276);
          *(float32x2_t *)&v277 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v277);
          LODWORD(v276) = DWORD1(v279);
          LODWORD(v278) = DWORD1(v277);
          v280 = (UnityEngine_Color32_o)(unsigned int)sub_25BA1B8(0, v279, v276, v277, v278);
          BetterList_Color32___Add(cols, v280, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          *(float *)&v284 = fminf(v270, 1.0);
          if ( v270 < 0.0 )
            *(float *)&v284 = 0.0;
          *(float32x2_t *)&v281 = vmul_n_f32(v262, *(float *)&v284);
          *(float32x2_t *)&v282 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v284);
          v258 = v374;
          *(float32x2_t *)&v284 = vadd_f32(v371, *(float32x2_t *)&v281);
          *(float32x2_t *)&v282 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v282);
          LODWORD(v6) = v349;
          LODWORD(v281) = DWORD1(v284);
          LODWORD(v283) = DWORD1(v282);
          v285 = (UnityEngine_Color32_o)(unsigned int)sub_25BA1B8(0, v284, v281, v282, v283);
          BetterList_Color32___Add(cols, v285, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          v256 = v350;
          goto LABEL_338;
        }
        v259 = v362;
        *(float32x2_t *)&v6 = v369;
        LODWORD(v246) = 1.0;
        if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
        {
          v245 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          LODWORD(v246) = 1.0;
          v255 = NGUIText_TypeInfo->static_fields;
        }
        v260 = v255->mGradientColors;
        if ( !v260 )
          goto LABEL_416;
        if ( v260->fields.size >= 2 )
          goto LABEL_326;
        if ( !cols )
          goto LABEL_416;
        v261 = v366 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v363 << 24);
        BetterList_Color32___Add(
          cols,
          (UnityEngine_Color32_o)v261,
          (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
        BetterList_Color32___Add(
          cols,
          (UnityEngine_Color32_o)v261,
          (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
        BetterList_Color32___Add(
          cols,
          (UnityEngine_Color32_o)v261,
          (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
        BetterList_Color32___Add(
          cols,
          (UnityEngine_Color32_o)v261,
          (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
        v6 = v7;
LABEL_338:
        v429.fields.x = v352 + (float)(v351 * v256);
        v429.fields.y = itemc;
        v429.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v429, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v430.fields.z = 0.0;
        v430.fields.x = v352 - (float)(v351 * v256);
        v430.fields.y = *(float *)&v9;
        BetterList_Vector3___Add(verts, v430, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v431.fields.z = 0.0;
        v431.fields.x = v354 - (float)(v351 * v256);
        v431.fields.y = v258;
        BetterList_Vector3___Add(verts, v431, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v432.fields.z = 0.0;
        v432.fields.x = v354 + (float)(v351 * v256);
        v432.fields.y = *(float *)&v6;
        BetterList_Vector3___Add(verts, v432, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v37 = v383;
        v216 = v361;
LABEL_339:
        if ( !strike && !underline )
        {
          *(float *)&v5 = v368;
          v36 = Chars;
          goto LABEL_149;
        }
        v286 = v362;
        *(float32x2_t *)&v6 = v370;
        if ( strike )
          v287 = 45;
        else
          v287 = 95;
        v288 = 1.0;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v289 = NGUIText__GetGlyph(v287, Chars, v32);
        if ( !v289 )
        {
          *(float *)&v5 = v368;
          goto LABEL_193;
        }
        v290 = (float *)v289;
        if ( uvs )
        {
          v291 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v291 = NGUIText_TypeInfo;
          }
          v292 = (UnityEngine_Object_o *)v291->static_fields->bitmapFont;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v293 = UnityEngine_Object__op_Inequality(v292, 0, 0);
          v294 = v290[8];
          if ( v293 )
          {
            v294 = m_XMin + (float)(v358 * v294);
            v295 = m_XMin + (float)(v358 * v290[12]);
            v296 = v356 - (float)(v357 * v290[9]);
            v297 = v356 - (float)(v357 * v290[13]);
            v290[8] = v294;
            v290[9] = v296;
            v290[12] = v295;
            v290[13] = v297;
          }
          else
          {
            v295 = v290[12];
          }
          v298 = 0;
          v299 = (float)(v294 + v295) * 0.5;
          if ( v355 )
            v300 = 4;
          else
            v300 = 1;
          do
          {
            v410.fields.y = v290[9];
            v410.fields.x = v299;
            BetterList_Vector2___Add(uvs, v410, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            v411.fields.y = v290[13];
            v411.fields.x = v299;
            BetterList_Vector2___Add(uvs, v411, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            v412.fields.y = v290[13];
            v412.fields.x = v299;
            BetterList_Vector2___Add(uvs, v412, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            v413.fields.y = v290[9];
            v413.fields.x = v299;
            BetterList_Vector2___Add(uvs, v413, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
            ++v298;
          }
          while ( v298 < v300 );
        }
        v301 = v290[5] - v37;
        v302 = v290[7] - v37;
        if ( v355 )
        {
          v303 = 0;
          while ( 1 )
          {
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            }
            v304 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 336LL);
            if ( !v304 )
              goto LABEL_416;
            v305 = *(unsigned int *)(v304 + 24);
            if ( v303 >= v305 || v303 + 1 >= v305 )
              goto LABEL_417;
            v306 = v304 + 4 * v303;
            v308 = *(float *)(v306 + 32);
            v307 = *(float *)(v306 + 36);
            v433.fields.z = 0.0;
            v309 = v301 + v307;
            v433.fields.x = v361 + v308;
            v433.fields.y = v301 + v307;
            BetterList_Vector3___Add(verts, v433, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v310 = v302 + v307;
            v434.fields.z = 0.0;
            v434.fields.x = v361 + v308;
            v434.fields.y = v310;
            BetterList_Vector3___Add(verts, v434, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v435.fields.z = 0.0;
            v435.fields.x = v368 + v308;
            v435.fields.y = v310;
            BetterList_Vector3___Add(verts, v435, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v436.fields.z = 0.0;
            v436.fields.x = v368 + v308;
            v436.fields.y = v309;
            BetterList_Vector3___Add(verts, v436, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
            v286 = v362;
            v303 += 2LL;
            v288 = 1.0;
            if ( v303 == 8 )
              goto LABEL_370;
          }
        }
        v437.fields.z = 0.0;
        v437.fields.x = v216;
        v437.fields.y = v290[5] - v37;
        BetterList_Vector3___Add(verts, v437, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v438.fields.z = 0.0;
        v438.fields.x = v216;
        v438.fields.y = v302;
        BetterList_Vector3___Add(verts, v438, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v439.fields.z = 0.0;
        v439.fields.x = v368;
        v439.fields.y = v302;
        BetterList_Vector3___Add(verts, v439, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v440.fields.z = 0.0;
        v440.fields.x = v368;
        v440.fields.y = v301;
        BetterList_Vector3___Add(verts, v440, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
LABEL_370:
        IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          v311 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        size = v360;
        v315 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
        *(float *)&v5 = v368;
        if ( spGradient || v315->gradient )
        {
LABEL_385:
          v318 = v290[5];
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v311 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          }
          *(float32x2_t *)&v314 = v369;
          v319 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
          *(float32x2_t *)&v7 = vsub_f32(v365, v369);
          v8 = v6;
          v320 = (float)(v286 + (float)(v318 / v319)) / v286;
          v321 = (float)(v286 + (float)(v290[7] / v319)) / v286;
          *(float *)&v311 = fminf(v320, v288);
          v322.n64_u64[0] = vsub_f32(v370, v371).n64_u64[0];
          if ( v320 < 0.0 )
            *(float *)&v311 = 0.0;
          *(float32x2_t *)&v312 = vmul_n_f32(v322, *(float *)&v311);
          *(float32x2_t *)&v313 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v311);
          *(float32x2_t *)&v311 = vadd_f32(v371, *(float32x2_t *)&v312);
          *(float32x2_t *)&v313 = vadd_f32(v369, *(float32x2_t *)&v313);
          v9 = v314;
          LODWORD(v312) = DWORD1(v311);
          LODWORD(v314) = DWORD1(v313);
          v323 = sub_25BA1B8(0, v311, v312, v313, v314);
          *(float *)&v327 = fminf(v321, v288);
          if ( v321 < 0.0 )
            *(float *)&v327 = 0.0;
          *(float32x2_t *)&v324 = vmul_n_f32(v322, *(float *)&v327);
          *(float32x2_t *)&v325 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v327);
          *(float32x2_t *)&v327 = vadd_f32(v371, *(float32x2_t *)&v324);
          *(float32x2_t *)&v325 = vadd_f32(*(float32x2_t *)&v9, *(float32x2_t *)&v325);
          LODWORD(v324) = DWORD1(v327);
          NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v323;
          LODWORD(v326) = DWORD1(v325);
          v6 = v8;
          v328 = sub_25BA1B8(0, v327, v324, v325, v326);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          if ( v355 )
            v329 = 4;
          else
            v329 = 1;
          *(float *)&v5 = v368;
          if ( v329 <= 1 )
            v329 = 1;
          v330 = v329 - 1;
          *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v328;
          while ( 1 )
          {
            if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
              j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            if ( !cols )
              goto LABEL_416;
            v331 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
            BetterList_Color32___Add(cols, v331, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
            v332 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
            BetterList_Color32___Add(cols, v332, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
            v333 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
            BetterList_Color32___Add(cols, v333, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
            v334 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
            BetterList_Color32___Add(cols, v334, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
            if ( !v330 )
              goto LABEL_384;
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            --v330;
          }
        }
        if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
        {
          v311 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          v315 = NGUIText_TypeInfo->static_fields;
        }
        v316 = v315->mGradientColors;
        if ( !v316 )
          goto LABEL_416;
        if ( v316->fields.size >= 2 )
          goto LABEL_385;
        v317 = v355 ? 16 : 4;
        if ( !cols )
          goto LABEL_416;
        *(float32x2_t *)&v9 = v369;
        do
        {
          BetterList_Color32___Add(
            cols,
            (UnityEngine_Color32_o)(v366 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v363 << 24)),
            (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
          --v317;
        }
        while ( v317 );
        size = v360;
LABEL_384:
        v36 = Chars;
LABEL_194:
        v15 = (const MethodInfo *)(unsigned int)++index;
        if ( index >= v33 )
          goto LABEL_403;
      }
    }
    LODWORD(v5) = 0;
LABEL_403:
    v335 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v335 = NGUIText_TypeInfo;
    }
    v336 = v335->static_fields;
    if ( v336->alignment != 1 && size < verts->fields.size )
    {
      if ( !v335->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v335);
        v336 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(verts, size, *(float *)&v5 - v336->finalSpacingX, v32);
      v335 = NGUIText_TypeInfo;
    }
    if ( !v335->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v335);
      v335 = NGUIText_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v335->static_fields->mColors;
    if ( !IsNullOrEmpty
      || (BetterList_Color___Clear(
            (BetterList_Color__o *)IsNullOrEmpty,
            (const MethodInfo_33DA0F4 *)Method_BetterList_Color__Clear__),
          (IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors) == 0) )
    {
LABEL_416:
      sub_1C93D2C(IsNullOrEmpty, v15);
    }
    BetterList_Color___Clear(
      (BetterList_Color__o *)IsNullOrEmpty,
      (const MethodInfo_33DA0F4 *)Method_BetterList_Color__Clear__);
  }
}


void NGUIText__PrintApproximateCharacterPositions(
        System_String_o *text,
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_String_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  NGUIText_c *v12; // x0
  int32_t stringLength; // w23
  int32_t size; // w21
  struct NGUIText_StaticFields *static_fields; // x8
  float fontScale; // s0
  int fontSize; // s1
  int32_t v18; // w27
  int32_t v19; // w1
  float v20; // s8
  float v21; // s13
  float v22; // s15
  float v23; // s9
  int32_t v24; // w25
  const MethodInfo *v25; // x3
  NGUIText_c *v26; // x0
  struct NGUIText_StaticFields *v27; // x8
  NGUIText_c *v28; // x0
  int32_t v29; // w26
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v31; // x26
  NGUIText_c *v32; // x0
  int mAdvance; // w25
  struct NGUIText_StaticFields *v34; // x8
  float v35; // s11
  float v36; // s10
  float v37; // s10
  double v38; // d11
  const MethodInfo *v39; // x2
  double v40; // d0
  double v41; // d0
  double v42; // d1
  float GlyphWidth; // s0
  NGUIText_c *v44; // x0
  float v45; // s10
  float finalSpacingX; // s11
  float v47; // s12
  float v48; // s10
  double v49; // d11
  const MethodInfo *v50; // x2
  double v51; // d0
  double v52; // d0
  double v53; // d1
  double v54; // d1
  double v55; // d1
  NGUIText_c *v56; // x0
  int v57; // w10
  struct NGUIText_StaticFields *v58; // x8
  struct System_String_o *sequence; // x8
  NGUIText_c *v60; // x0
  int v61; // w10
  struct NGUIText_StaticFields *v62; // x8
  struct NGUIText_StaticFields *v63; // x8
  int32_t item; // [xsp+4h] [xbp-ACh] BYREF
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D351DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_int__Add__);
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D351DC = 1;
  }
  if ( System_String__IsNullOrEmpty(text, 0) )
    v8 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v8 = text;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v8, v7);
  if ( !v8 || !verts )
LABEL_120:
    sub_1C93D2C(v9, v10);
  v12 = NGUIText_TypeInfo;
  stringLength = v8->fields._stringLength;
  size = verts->fields.size;
  static_fields = NGUIText_TypeInfo->static_fields;
  fontSize = static_fields->fontSize;
  fontScale = static_fields->fontScale;
  item = 0;
  if ( stringLength < 1 )
  {
    v20 = 0.0;
    goto LABEL_112;
  }
  v18 = 0;
  v19 = 0;
  v20 = 0.0;
  v21 = (float)(fontScale * (float)fontSize) * 0.5;
  v22 = 0.0;
  do
  {
    v23 = (float)-v22 - v21;
    LOWORD(v24) = System_String__get_Chars(v8, v19, 0);
    v66.fields.z = 0.0;
    v66.fields.x = v20;
    v66.fields.y = v23;
    BetterList_Vector3___Add(verts, v66, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
    if ( !indices )
      goto LABEL_120;
    v24 = (unsigned __int16)v24;
    BetterList_int___Add(indices, item, (const MethodInfo_33DB604 *)Method_BetterList_int__Add__);
    if ( (unsigned __int16)v24 == 10 )
    {
      v26 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v26 = NGUIText_TypeInfo;
      }
      v27 = v26->static_fields;
      if ( v27->alignment != 1 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v27 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v20 - v27->finalSpacingX, v11);
        size = verts->fields.size;
        v26 = NGUIText_TypeInfo;
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = NGUIText_TypeInfo;
      }
      v24 = 0;
      v20 = 0.0;
      v22 = v22 + v26->static_fields->finalLineHeight;
      goto LABEL_109;
    }
    if ( (unsigned __int16)v24 < 0x20u )
    {
      v24 = 0;
      goto LABEL_109;
    }
    v28 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v28 = NGUIText_TypeInfo;
    }
    if ( v28->static_fields->encoding )
    {
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
      if ( NGUIText__ParseSymbol(v8, &item, v11) )
      {
        --item;
LABEL_52:
        v24 = v18;
        goto LABEL_109;
      }
      v28 = NGUIText_TypeInfo;
    }
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = NGUIText_TypeInfo;
    }
    if ( !v28->static_fields->useSymbols )
      goto LABEL_49;
    v29 = item;
    if ( !v28->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v28);
    Symbol = NGUIText__GetSymbol(v8, v29, stringLength, v25);
    if ( !Symbol )
    {
      v28 = NGUIText_TypeInfo;
LABEL_49:
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
      GlyphWidth = NGUIText__GetGlyphWidth((unsigned __int16)v24, v18, v11);
      if ( GlyphWidth == 0.0 )
        goto LABEL_52;
      v44 = NGUIText_TypeInfo;
      v45 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v44 = NGUIText_TypeInfo;
      }
      finalSpacingX = v44->static_fields->finalSpacingX;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v47 = v45 + finalSpacingX;
      v48 = v20 + (float)(v45 + finalSpacingX);
      v49 = v48;
      v51 = modf(v48, &iptr);
      if ( v48 >= 0.0 )
      {
        if ( v51 == 0.5 )
        {
          v52 = iptr;
          v53 = 1.0;
LABEL_69:
          v55 = v52 + v53;
          if ( ((__int64)v52 & 1) != 0 )
            v52 = v55;
          goto LABEL_93;
        }
        v52 = floor(v49 + 0.5);
      }
      else
      {
        if ( v51 == -0.5 )
        {
          v52 = iptr;
          v53 = -1.0;
          goto LABEL_69;
        }
        v52 = ceil(v49 + -0.5);
      }
LABEL_93:
      v60 = NGUIText_TypeInfo;
      v61 = (int)v52;
      v62 = NGUIText_TypeInfo->static_fields;
      if ( v52 == INFINITY )
        v61 = 0x80000000;
      if ( v61 <= v62->regionWidth )
      {
        v47 = v48;
      }
      else
      {
        if ( v20 == 0.0 )
          return;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v60 = NGUIText_TypeInfo;
          v62 = NGUIText_TypeInfo->static_fields;
        }
        if ( v62->alignment != 1 && size < verts->fields.size )
        {
          if ( !v60->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v60);
            v62 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(verts, size, v20 - v62->finalSpacingX, v50);
          size = verts->fields.size;
          v60 = NGUIText_TypeInfo;
        }
        if ( !v60->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v60);
          v60 = NGUIText_TypeInfo;
        }
        v22 = v22 + v60->static_fields->finalLineHeight;
        v23 = (float)-v22 - v21;
      }
      v68.fields.z = 0.0;
      v68.fields.x = v47;
      v68.fields.y = v23;
      BetterList_Vector3___Add(verts, v68, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      BetterList_int___Add(indices, item + 1, (const MethodInfo_33DB604 *)Method_BetterList_int__Add__);
      v20 = v47;
      goto LABEL_109;
    }
    v31 = Symbol;
    v32 = NGUIText_TypeInfo;
    mAdvance = v31->fields.mAdvance;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v32 = NGUIText_TypeInfo;
    }
    v34 = v32->static_fields;
    v35 = v34->fontScale;
    v36 = v34->finalSpacingX;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v37 = (float)(v35 * (float)mAdvance) + v36;
    v38 = (float)(v20 + v37);
    v40 = modf(v38, &iptr);
    if ( (float)(v20 + v37) >= 0.0 )
    {
      if ( v40 == 0.5 )
      {
        v41 = iptr;
        v42 = 1.0;
LABEL_64:
        v54 = v41 + v42;
        if ( ((__int64)v41 & 1) != 0 )
          v41 = v54;
        goto LABEL_74;
      }
      v41 = floor(v38 + 0.5);
    }
    else
    {
      if ( v40 == -0.5 )
      {
        v41 = iptr;
        v42 = -1.0;
        goto LABEL_64;
      }
      v41 = ceil(v38 + -0.5);
    }
LABEL_74:
    v56 = NGUIText_TypeInfo;
    v57 = (int)v41;
    v58 = NGUIText_TypeInfo->static_fields;
    if ( v41 == INFINITY )
      v57 = 0x80000000;
    if ( v57 <= v58->regionWidth )
    {
      v37 = v20 + v37;
    }
    else
    {
      if ( v20 == 0.0 )
        return;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v56 = NGUIText_TypeInfo;
        v58 = NGUIText_TypeInfo->static_fields;
      }
      if ( v58->alignment != 1 && size < verts->fields.size )
      {
        if ( !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          v58 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v20 - v58->finalSpacingX, v39);
        size = verts->fields.size;
        v56 = NGUIText_TypeInfo;
      }
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = NGUIText_TypeInfo;
      }
      v22 = v22 + v56->static_fields->finalLineHeight;
      v23 = (float)-v22 - v21;
    }
    v67.fields.z = 0.0;
    v67.fields.x = v37;
    v67.fields.y = v23;
    BetterList_Vector3___Add(verts, v67, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
    BetterList_int___Add(indices, item + 1, (const MethodInfo_33DB604 *)Method_BetterList_int__Add__);
    sequence = v31->fields.sequence;
    if ( !sequence )
      goto LABEL_120;
    v24 = 0;
    v20 = v37;
    item = item + sequence->fields._stringLength - 1;
LABEL_109:
    v18 = v24;
    v19 = ++item;
  }
  while ( item < stringLength );
  v12 = NGUIText_TypeInfo;
LABEL_112:
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = NGUIText_TypeInfo;
  }
  v63 = v12->static_fields;
  if ( v63->alignment != 1 && size < verts->fields.size )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v63 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(verts, size, v20 - v63->finalSpacingX, v11);
  }
}


void NGUIText__PrintCaretAndSelection(
        System_String_o *text,
        int32_t start,
        int32_t end,
        BetterList_Vector3__o *caret,
        BetterList_Vector3__o *highlight,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x1
  System_String_o *v12; // x28
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  NGUIText_c *v15; // x0
  int32_t v16; // w23
  int32_t v17; // w22
  bool v18; // w27
  int32_t v19; // w29
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t stringLength; // w20
  int fontSize; // s0
  float fontScale; // s8
  float v24; // s9
  float v25; // s10
  struct UnityEngine_Vector2_StaticFields *v26; // x8
  float x; // s15
  int v28; // w1
  float v29; // s8
  float y; // s9
  float v31; // s11
  const MethodInfo *v32; // x3
  unsigned int Chars; // w27
  NGUIText_c *v34; // x0
  struct NGUIText_StaticFields *v35; // x8
  float v36; // s13
  float v37; // s12
  NGUIText_c *v38; // x0
  NGUIText_c *v39; // x0
  struct NGUIText_StaticFields *v40; // x8
  NGUIText_c *v41; // x0
  BetterList_Vector3__o *v42; // x24
  int32_t v43; // w19
  int32_t v44; // w22
  int32_t v45; // w23
  int32_t v46; // w29
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v48; // x8
  NGUIText_c *v49; // x0
  int mAdvance; // w29
  float v51; // s1
  float GlyphWidth; // s12
  NGUIText_c *v53; // x0
  float finalSpacingX; // s13
  float v55; // s9
  float v56; // s14
  double v57; // d13
  double v58; // d0
  double v59; // d0
  double v60; // d1
  double v61; // d1
  NGUIText_c *v62; // x0
  int v63; // w10
  struct NGUIText_StaticFields *v64; // x8
  float v65; // s13
  float v66; // s14
  float v67; // s15
  NGUIText_c *v68; // x0
  struct NGUIText_StaticFields *v69; // x8
  float finalLineHeight; // s0
  NGUIText_c *v71; // x0
  struct NGUIText_StaticFields *v72; // x8
  const MethodInfo_33DDC38 *v73; // x1
  BetterList_Vector3__o *v76; // x0
  float v77; // s11
  NGUIText_c *v78; // x0
  struct NGUIText_StaticFields *v79; // x8
  float v80; // [xsp+8h] [xbp-C8h]
  int32_t v81; // [xsp+Ch] [xbp-C4h]
  int32_t size; // [xsp+10h] [xbp-C0h]
  __int64 item; // [xsp+14h] [xbp-BCh]
  int32_t prev_4; // [xsp+1Ch] [xbp-B4h]
  float prev_4a; // [xsp+1Ch] [xbp-B4h]
  char v86; // [xsp+20h] [xbp-B0h]
  int32_t index; // [xsp+24h] [xbp-ACh] BYREF
  double iptr; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D351DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D351DE = 1;
  }
  if ( System_String__IsNullOrEmpty(text, 0) )
    v12 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v12 = text;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v12, v11);
  v15 = NGUIText_TypeInfo;
  if ( start <= end )
    v16 = end;
  else
    v16 = start;
  if ( start <= end )
    v17 = start;
  else
    v17 = end;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v15 = NGUIText_TypeInfo;
  }
  v18 = caret == 0;
  if ( caret )
  {
    size = caret->fields.size;
    if ( highlight )
      goto LABEL_18;
LABEL_143:
    v19 = 0;
    if ( v12 )
      goto LABEL_19;
LABEL_144:
    sub_1C93D2C(v15, v13);
  }
  size = 0;
  if ( !highlight )
    goto LABEL_143;
LABEL_18:
  v19 = highlight->fields.size;
  if ( !v12 )
    goto LABEL_144;
LABEL_19:
  static_fields = v15->static_fields;
  stringLength = v12->fields._stringLength;
  fontSize = static_fields->fontSize;
  fontScale = static_fields->fontScale;
  index = 0;
  v24 = (float)fontSize;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  v25 = fontScale * v24;
  v26 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v26->zeroVector.fields.x;
  if ( stringLength < 1 )
  {
    if ( !caret )
    {
      v29 = 0.0;
      v31 = 0.0;
      if ( highlight )
        goto LABEL_158;
      return;
    }
    y = v26->zeroVector.fields.y;
    v31 = 0.0;
    v29 = 0.0;
    BYTE4(item) = 0;
    *(float *)&item = y;
LABEL_147:
    v107.fields.z = 0.0;
    v107.fields.x = v29 + -1.0;
    v107.fields.y = (float)-v31 - v25;
    BetterList_Vector3___Add(caret, v107, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
    v108.fields.z = 0.0;
    v108.fields.x = v29 + -1.0;
    v108.fields.y = -v31;
    BetterList_Vector3___Add(caret, v108, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
    v109.fields.z = 0.0;
    v109.fields.x = v29 + 1.0;
    v109.fields.y = -v31;
    BetterList_Vector3___Add(caret, v109, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
    v110.fields.z = 0.0;
    v110.fields.x = v29 + 1.0;
    v110.fields.y = (float)-v31 - v25;
    BetterList_Vector3___Add(caret, v110, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
    goto LABEL_148;
  }
  v28 = 0;
  v29 = 0.0;
  y = v26->zeroVector.fields.y;
  v31 = 0.0;
  prev_4 = 0;
  v86 = 0;
  item = LODWORD(y);
  v81 = end;
  do
  {
    if ( (v86 & 1) == 0 && !v18 && v28 >= end )
    {
      v89.fields.z = 0.0;
      v89.fields.x = v29 + -1.0;
      v89.fields.y = (float)-v31 - v25;
      BetterList_Vector3___Add(caret, v89, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v90.fields.z = 0.0;
      v90.fields.x = v29 + -1.0;
      v90.fields.y = -v31;
      BetterList_Vector3___Add(caret, v90, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v91.fields.z = 0.0;
      v91.fields.x = v29 + 1.0;
      v91.fields.y = -v31;
      BetterList_Vector3___Add(caret, v91, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v92.fields.z = 0.0;
      v92.fields.x = v29 + 1.0;
      v92.fields.y = (float)-v31 - v25;
      BetterList_Vector3___Add(caret, v92, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v28 = index;
      v86 = 1;
    }
    Chars = System_String__get_Chars(v12, v28, 0);
    if ( Chars == 10 )
    {
      if ( caret != 0 && (v86 & 1) != 0 )
      {
        v34 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v34 = NGUIText_TypeInfo;
        }
        v35 = v34->static_fields;
        if ( v35->alignment != 1 )
        {
          if ( !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            v35 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(caret, size, v29 - v35->finalSpacingX, v14);
        }
        caret = 0;
      }
      if ( !highlight )
        goto LABEL_60;
      if ( (item & 0x100000000LL) != 0 )
      {
        LODWORD(v93.fields.y) = item;
        v93.fields.z = 0.0;
        v93.fields.x = x;
        BetterList_Vector3___Add(highlight, v93, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v36 = x;
        v37 = y;
      }
      else
      {
        if ( v17 > index || v16 <= index )
          goto LABEL_52;
        v37 = (float)-v31 - v25;
        v94.fields.z = 0.0;
        v94.fields.x = v29;
        v94.fields.y = v37;
        BetterList_Vector3___Add(highlight, v94, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v95.fields.z = 0.0;
        v95.fields.x = v29;
        v95.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v95, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v36 = v29 + 2.0;
        v96.fields.z = 0.0;
        v96.fields.x = v29 + 2.0;
        v96.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v96, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      }
      v97.fields.z = 0.0;
      v97.fields.x = v36;
      v97.fields.y = v37;
      BetterList_Vector3___Add(highlight, v97, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
LABEL_52:
      v39 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v39 = NGUIText_TypeInfo;
      }
      v40 = v39->static_fields;
      if ( v40->alignment != 1 && v19 < highlight->fields.size )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v40 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(highlight, v19, v29 - v40->finalSpacingX, v14);
        v19 = highlight->fields.size;
      }
      BYTE4(item) = 0;
LABEL_60:
      v41 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v41 = NGUIText_TypeInfo;
      }
      prev_4 = 0;
      v29 = 0.0;
      v31 = v31 + v41->static_fields->finalLineHeight;
      goto LABEL_63;
    }
    if ( Chars < 0x20 )
    {
      prev_4 = 0;
      goto LABEL_63;
    }
    v38 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v38 = NGUIText_TypeInfo;
    }
    if ( v38->static_fields->encoding )
    {
      if ( !v38->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v38);
      if ( NGUIText__ParseSymbol(v12, &index, v14) )
      {
        --index;
        goto LABEL_63;
      }
      v38 = NGUIText_TypeInfo;
    }
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = NGUIText_TypeInfo;
    }
    if ( v38->static_fields->useSymbols )
    {
      v42 = highlight;
      v43 = v17;
      v44 = v16;
      v45 = v19;
      v46 = index;
      if ( !v38->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v38);
      Symbol = NGUIText__GetSymbol(v12, v46, stringLength, v32);
      if ( Symbol )
      {
        v48 = Symbol;
        v49 = NGUIText_TypeInfo;
        mAdvance = v48->fields.mAdvance;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v49 = NGUIText_TypeInfo;
        }
        v51 = (float)mAdvance;
        v19 = v45;
        v16 = v44;
        v17 = v43;
        highlight = v42;
        end = v81;
        GlyphWidth = v49->static_fields->fontScale * v51;
        goto LABEL_79;
      }
      v19 = v45;
      v16 = v44;
      v17 = v43;
      highlight = v42;
      v38 = NGUIText_TypeInfo;
      end = v81;
    }
    if ( !v38->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v38);
    GlyphWidth = NGUIText__GetGlyphWidth(Chars, prev_4, v14);
LABEL_79:
    if ( GlyphWidth == 0.0 )
      goto LABEL_63;
    v53 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v53 = NGUIText_TypeInfo;
    }
    finalSpacingX = v53->static_fields->finalSpacingX;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    prev_4a = y;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v55 = v29 + GlyphWidth;
    v56 = (float)(v29 + GlyphWidth) + finalSpacingX;
    v57 = v56;
    v58 = modf(v56, &iptr);
    if ( v56 >= 0.0 )
    {
      if ( v58 != 0.5 )
      {
        v59 = floor(v57 + 0.5);
        goto LABEL_96;
      }
      v59 = iptr;
      v60 = 1.0;
    }
    else
    {
      if ( v58 != -0.5 )
      {
        v59 = ceil(v57 + -0.5);
        goto LABEL_96;
      }
      v59 = iptr;
      v60 = -1.0;
    }
    v61 = v59 + v60;
    if ( ((__int64)v59 & 1) != 0 )
      v59 = v61;
LABEL_96:
    v62 = NGUIText_TypeInfo;
    v63 = (int)v59;
    v64 = NGUIText_TypeInfo->static_fields;
    v65 = -v31;
    if ( v59 == INFINITY )
      v63 = 0x80000000;
    v66 = v65 - v25;
    v80 = x;
    if ( v63 > v64->regionWidth )
    {
      if ( v29 == 0.0 )
        return;
      if ( caret != 0 && (v86 & 1) != 0 )
      {
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v62 = NGUIText_TypeInfo;
          v64 = NGUIText_TypeInfo->static_fields;
        }
        if ( v64->alignment != 1 )
        {
          if ( !v62->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v62);
            v64 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(caret, size, v29 - v64->finalSpacingX, v14);
        }
        caret = 0;
      }
      if ( !highlight )
        goto LABEL_124;
      if ( (item & 0x100000000LL) != 0 )
      {
        LODWORD(v98.fields.y) = item;
        v98.fields.z = 0.0;
        v98.fields.x = x;
        BetterList_Vector3___Add(highlight, v98, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v99.fields.y = prev_4a;
      }
      else
      {
        if ( v17 > index || v16 <= index )
          goto LABEL_116;
        v100.fields.z = 0.0;
        v100.fields.x = v29;
        v100.fields.y = v65 - v25;
        BetterList_Vector3___Add(highlight, v100, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v101.fields.z = 0.0;
        v101.fields.x = v29;
        v101.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v101, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        x = v29 + 2.0;
        v102.fields.z = 0.0;
        v102.fields.x = v29 + 2.0;
        v102.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v102, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v99.fields.y = v65 - v25;
      }
      v99.fields.z = 0.0;
      v99.fields.x = x;
      BetterList_Vector3___Add(highlight, v99, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
LABEL_116:
      v68 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v68 = NGUIText_TypeInfo;
      }
      v69 = v68->static_fields;
      if ( v69->alignment != 1 && v19 < highlight->fields.size )
      {
        if ( !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v69 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(highlight, v19, v29 - v69->finalSpacingX, v14);
        v19 = highlight->fields.size;
      }
      BYTE4(item) = 0;
LABEL_124:
      v62 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v62 = NGUIText_TypeInfo;
      }
      v67 = v29 - v29;
      v55 = v55 - v29;
      v29 = 0.0;
      finalLineHeight = v62->static_fields->finalLineHeight;
      v66 = v66 - finalLineHeight;
      v65 = v65 - finalLineHeight;
      v31 = v31 + finalLineHeight;
      goto LABEL_127;
    }
    v67 = v29;
LABEL_127:
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = NGUIText_TypeInfo;
    }
    v29 = v29 + (float)(GlyphWidth + v62->static_fields->finalSpacingX);
    if ( highlight )
    {
      if ( v17 > index || v16 <= index )
      {
        if ( (item & 0x100000000LL) != 0 )
        {
          LODWORD(v105.fields.y) = item;
          v105.fields.z = 0.0;
          v105.fields.x = v80;
          BetterList_Vector3___Add(highlight, v105, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v106.fields.y = prev_4a;
          v106.fields.z = 0.0;
          v106.fields.x = v80;
          BetterList_Vector3___Add(highlight, v106, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        }
        BYTE4(item) = 0;
      }
      else
      {
        if ( (item & 0x100000000LL) == 0 )
        {
          v103.fields.z = 0.0;
          v103.fields.x = v67;
          v103.fields.y = v66;
          BetterList_Vector3___Add(highlight, v103, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
          v104.fields.z = 0.0;
          v104.fields.x = v67;
          v104.fields.y = v65;
          BetterList_Vector3___Add(highlight, v104, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        }
        BYTE4(item) = 1;
      }
    }
    x = v55;
    y = v66;
    *(float *)&item = v65;
    prev_4 = Chars;
LABEL_63:
    v18 = caret == 0;
    v28 = index + 1;
    index = v28;
  }
  while ( v28 < stringLength );
  if ( !caret )
    goto LABEL_154;
  if ( (v86 & 1) == 0 )
    goto LABEL_147;
LABEL_148:
  v71 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v71 = NGUIText_TypeInfo;
  }
  v72 = v71->static_fields;
  if ( v72->alignment != 1 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v72 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(caret, size, v29 - v72->finalSpacingX, v14);
  }
LABEL_154:
  if ( highlight )
  {
    if ( (item & 0x100000000LL) != 0 )
    {
      v73 = (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__;
      LODWORD(v111.fields.y) = item;
      v111.fields.z = 0.0;
      v76 = highlight;
      v111.fields.x = x;
      goto LABEL_161;
    }
LABEL_158:
    if ( v17 < index && v16 == index )
    {
      v77 = -v31;
      y = v77 - v25;
      v112.fields.z = 0.0;
      v112.fields.x = v29;
      v112.fields.y = v77 - v25;
      BetterList_Vector3___Add(highlight, v112, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v113.fields.z = 0.0;
      v113.fields.x = v29;
      v113.fields.y = v77;
      BetterList_Vector3___Add(highlight, v113, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v73 = (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__;
      x = v29 + 2.0;
      v111.fields.z = 0.0;
      v76 = highlight;
      v111.fields.x = v29 + 2.0;
      v111.fields.y = v77;
LABEL_161:
      BetterList_Vector3___Add(v76, v111, v73);
      v114.fields.z = 0.0;
      v114.fields.x = x;
      v114.fields.y = y;
      BetterList_Vector3___Add(highlight, v114, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
    }
    v78 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v78 = NGUIText_TypeInfo;
    }
    v79 = v78->static_fields;
    if ( v79->alignment != 1 && v19 < highlight->fields.size )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78);
        v79 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(highlight, v19, v29 - v79->finalSpacingX, v14);
    }
  }
}


void NGUIText__PrintExactCharacterPositions(
        System_String_o *text,
        BetterList_Vector3__o *verts,
        BetterList_int__o *indices,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_String_o *v8; // x22
  NGUIText_c *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  NGUIText_c *v12; // x0
  int32_t stringLength; // w23
  int32_t size; // w21
  struct NGUIText_StaticFields *static_fields; // x8
  float fontScale; // s0
  int fontSize; // s1
  int32_t v18; // w25
  int32_t v19; // w1
  float v20; // s8
  float v21; // s15
  float v22; // s12
  const MethodInfo *v23; // x3
  unsigned int Chars; // w26
  NGUIText_c *v25; // x0
  struct NGUIText_StaticFields *v26; // x8
  float finalLineHeight; // s0
  NGUIText_c *v28; // x0
  int32_t v29; // w27
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v31; // x27
  NGUIText_c *v32; // x0
  int mAdvance; // w25
  struct NGUIText_StaticFields *v34; // x8
  float v35; // s10
  float finalSpacingX; // s9
  float v37; // s9
  double v38; // d10
  double v39; // d0
  double v40; // d0
  __int64 v41; // x8
  double v42; // d1
  float GlyphWidth; // s0
  NGUIText_c *v44; // x0
  float v45; // s9
  float v46; // s10
  double v47; // d10
  double v48; // d0
  double v49; // d0
  __int64 v50; // x8
  double v51; // d1
  int v52; // w10
  struct NGUIText_StaticFields *v53; // x8
  struct System_String_o *sequence; // x8
  int v55; // w10
  struct NGUIText_StaticFields *v56; // x8
  int32_t index; // [xsp+4h] [xbp-ACh] BYREF
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D351DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_int__Add__);
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D351DD = 1;
  }
  if ( System_String__IsNullOrEmpty(text, 0) )
    v8 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v8 = text;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v8, v7);
  if ( !v8 || !verts )
LABEL_109:
    sub_1C93D2C(v9, v10);
  v12 = NGUIText_TypeInfo;
  stringLength = v8->fields._stringLength;
  size = verts->fields.size;
  static_fields = NGUIText_TypeInfo->static_fields;
  fontSize = static_fields->fontSize;
  fontScale = static_fields->fontScale;
  index = 0;
  if ( stringLength < 1 )
  {
    v20 = 0.0;
    goto LABEL_101;
  }
  v18 = 0;
  v19 = 0;
  v20 = 0.0;
  v21 = fontScale * (float)fontSize;
  v22 = 0.0;
  do
  {
    Chars = System_String__get_Chars(v8, v19, 0);
    if ( Chars == 10 )
    {
      v25 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v25 = NGUIText_TypeInfo;
      }
      v26 = v25->static_fields;
      if ( v26->alignment != 1 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v26 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v20 - v26->finalSpacingX, v11);
        size = verts->fields.size;
        v25 = NGUIText_TypeInfo;
      }
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = NGUIText_TypeInfo;
      }
      v18 = 0;
      finalLineHeight = v25->static_fields->finalLineHeight;
LABEL_22:
      v22 = v22 + finalLineHeight;
      v20 = 0.0;
      goto LABEL_98;
    }
    if ( Chars < 0x20 )
    {
      v18 = 0;
      goto LABEL_98;
    }
    v28 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v28 = NGUIText_TypeInfo;
    }
    if ( v28->static_fields->encoding )
    {
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
      if ( NGUIText__ParseSymbol(v8, &index, v11) )
      {
        --index;
        goto LABEL_98;
      }
      v28 = NGUIText_TypeInfo;
    }
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = NGUIText_TypeInfo;
    }
    if ( v28->static_fields->useSymbols )
    {
      v29 = index;
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
      Symbol = NGUIText__GetSymbol(v8, v29, stringLength, v23);
      if ( Symbol )
      {
        v31 = Symbol;
        v32 = NGUIText_TypeInfo;
        mAdvance = v31->fields.mAdvance;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v32 = NGUIText_TypeInfo;
        }
        v34 = v32->static_fields;
        v35 = v34->fontScale;
        finalSpacingX = v34->finalSpacingX;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v37 = v20 + (float)((float)(v35 * (float)mAdvance) + finalSpacingX);
        v38 = v37;
        v39 = modf(v37, &iptr);
        if ( v37 >= 0.0 )
        {
          if ( v39 == 0.5 )
          {
            v40 = iptr;
            v41 = (__int64)iptr;
            v42 = iptr + 1.0;
            goto LABEL_63;
          }
          v40 = floor(v38 + 0.5);
        }
        else if ( v39 == -0.5 )
        {
          v40 = iptr;
          v41 = (__int64)iptr;
          v42 = iptr + -1.0;
LABEL_63:
          if ( (v41 & 1) != 0 )
            v40 = v42;
        }
        else
        {
          v40 = ceil(v38 + -0.5);
        }
        v9 = NGUIText_TypeInfo;
        v52 = (int)v40;
        v53 = NGUIText_TypeInfo->static_fields;
        if ( v40 == INFINITY )
          v52 = 0x80000000;
        if ( v52 > v53->regionWidth )
          goto LABEL_84;
        if ( !indices )
          goto LABEL_109;
        BetterList_int___Add(indices, index, (const MethodInfo_33DB604 *)Method_BetterList_int__Add__);
        v59.fields.y = (float)-v22 - v21;
        v59.fields.z = 0.0;
        v59.fields.x = v20;
        BetterList_Vector3___Add(verts, v59, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v60.fields.z = 0.0;
        v60.fields.x = v37;
        v60.fields.y = -v22;
        BetterList_Vector3___Add(verts, v60, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        sequence = v31->fields.sequence;
        if ( !sequence )
          goto LABEL_109;
        v18 = 0;
        index = index + sequence->fields._stringLength - 1;
LABEL_97:
        v20 = v37;
        goto LABEL_98;
      }
      v28 = NGUIText_TypeInfo;
    }
    if ( !v28->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v28);
    GlyphWidth = NGUIText__GetGlyphWidth(Chars, v18, v11);
    if ( GlyphWidth != 0.0 )
    {
      v44 = NGUIText_TypeInfo;
      v45 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v44 = NGUIText_TypeInfo;
      }
      v46 = v44->static_fields->finalSpacingX;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v37 = v20 + (float)(v45 + v46);
      v47 = v37;
      v48 = modf(v37, &iptr);
      if ( v37 >= 0.0 )
      {
        if ( v48 == 0.5 )
        {
          v49 = iptr;
          v50 = (__int64)iptr;
          v51 = iptr + 1.0;
LABEL_68:
          if ( (v50 & 1) != 0 )
            v49 = v51;
          goto LABEL_81;
        }
        v49 = floor(v47 + 0.5);
      }
      else
      {
        if ( v48 == -0.5 )
        {
          v49 = iptr;
          v50 = (__int64)iptr;
          v51 = iptr + -1.0;
          goto LABEL_68;
        }
        v49 = ceil(v47 + -0.5);
      }
LABEL_81:
      v9 = NGUIText_TypeInfo;
      v55 = (int)v49;
      v53 = NGUIText_TypeInfo->static_fields;
      if ( v49 == INFINITY )
        v55 = 0x80000000;
      if ( v55 > v53->regionWidth )
      {
LABEL_84:
        if ( v20 == 0.0 )
          return;
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = NGUIText_TypeInfo;
          v53 = NGUIText_TypeInfo->static_fields;
        }
        if ( v53->alignment != 1 && size < verts->fields.size )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v53 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(verts, size, v20 - v53->finalSpacingX, v11);
          size = verts->fields.size;
          v9 = NGUIText_TypeInfo;
        }
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = NGUIText_TypeInfo;
        }
        v18 = 0;
        finalLineHeight = v9->static_fields->finalLineHeight;
        --index;
        goto LABEL_22;
      }
      if ( !indices )
        goto LABEL_109;
      BetterList_int___Add(indices, index, (const MethodInfo_33DB604 *)Method_BetterList_int__Add__);
      v61.fields.y = (float)-v22 - v21;
      v61.fields.z = 0.0;
      v61.fields.x = v20;
      BetterList_Vector3___Add(verts, v61, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v62.fields.z = 0.0;
      v62.fields.x = v37;
      v62.fields.y = -v22;
      BetterList_Vector3___Add(verts, v62, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      v18 = Chars;
      goto LABEL_97;
    }
LABEL_98:
    v19 = ++index;
  }
  while ( index < stringLength );
  v12 = NGUIText_TypeInfo;
LABEL_101:
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = NGUIText_TypeInfo;
  }
  v56 = v12->static_fields;
  if ( v56->alignment != 1 && size < verts->fields.size )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v56 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(verts, size, v20 - v56->finalSpacingX, v11);
  }
}


void NGUIText__ReplaceSpaceWithNewline(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_4D351D5 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D5 = 1;
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_13;
  v4 = System_Text_StringBuilder__get_Length(v3, 0) - 1;
  if ( v4 >= 1 )
  {
    v3 = *s;
    if ( !*s )
      goto LABEL_13;
    Chars = System_Text_StringBuilder__get_Chars(v3, v4, 0);
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    if ( (unsigned int)Chars - 8201 < 3 || Chars == 32 )
    {
      v3 = *s;
      if ( *s )
      {
        System_Text_StringBuilder__set_Chars(v3, v4, 0xAu, 0);
        return;
      }
LABEL_13:
      sub_1C93D2C(v3, method);
    }
  }
}


System_String_o *NGUIText__StripSymbols(System_String_o *text, const MethodInfo *method)
{
  int32_t stringLength; // w28
  int32_t v4; // w20
  System_String_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v8; // [xsp+38h] [xbp-C8h]
  int32_t index; // [xsp+5Ch] [xbp-A4h] BYREF
  NGUIText_DiagonalLineInfo_o v10; // [xsp+60h] [xbp-A0h] BYREF
  bool isDiagonalLine; // [xsp+84h] [xbp-7Ch] BYREF
  bool isOutline; // [xsp+88h] [xbp-78h] BYREF
  bool v13; // [xsp+8Ch] [xbp-74h] BYREF
  bool ignoreColor; // [xsp+90h] [xbp-70h] BYREF
  bool strike; // [xsp+94h] [xbp-6Ch] BYREF
  bool underline; // [xsp+98h] [xbp-68h] BYREF
  bool italic; // [xsp+9Ch] [xbp-64h] BYREF
  bool bold; // [xsp+A8h] [xbp-58h] BYREF
  int32_t sub; // [xsp+ACh] [xbp-54h] BYREF

  if ( (byte_4D351D0 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D0 = 1;
  }
  index = 0;
  if ( text )
  {
    stringLength = text->fields._stringLength;
    if ( stringLength >= 1 )
    {
      v4 = 0;
      do
      {
        if ( System_String__get_Chars(text, v4, 0) != 91 )
          goto LABEL_10;
        sub = 0;
        bold = 0;
        italic = 0;
        underline = 0;
        strike = 0;
        ignoreColor = 0;
        v13 = 0;
        isOutline = 0;
        isDiagonalLine = 0;
        *(_OWORD *)&v10.fields._Slope_k__BackingField = xmmword_D00FD0;
        *(_QWORD *)&v10.fields._LineEdge_k__BackingField = 0;
        index = v4;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        if ( NGUIText__ParseSymbol_50038964(
               text,
               &index,
               0,
               0,
               &sub,
               &bold,
               &italic,
               &underline,
               &strike,
               &ignoreColor,
               &v13,
               &isOutline,
               0,
               &isDiagonalLine,
               &v10,
               v8) )
        {
          v5 = System_String__Remove(text, v4, index - v4, 0);
          if ( !v5 )
            sub_1C93D2C(0, v6);
          stringLength = v5->fields._stringLength;
          text = v5;
        }
        else
        {
LABEL_10:
          ++v4;
        }
      }
      while ( v4 < stringLength );
    }
  }
  return text;
}


void NGUIText__Update(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4D351C5 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351C5 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Update_50033092(1, v1);
}


void NGUIText__Update_50033092(bool request, const MethodInfo *method)
{
  NGUIText_c *v3; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  float pixelDensity; // s8
  float fontSize; // s9
  float v7; // s9
  double v8; // d8
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  struct NGUIText_StaticFields *v13; // x8
  int v14; // w9
  float fontScale; // s2
  int v16; // s3
  float spacingX; // s4
  float spacingY; // s5
  UnityEngine_Object_o *bitmapFont; // x20
  __int64 v20; // x1
  NGUIText_c *v21; // x0
  UIFont_o *v22; // x0
  NGUIText_c *v23; // x0
  struct NGUIText_StaticFields *v24; // x8
  bool v25; // w20
  NGUIText_c *v26; // x0
  struct NGUIText_StaticFields *v27; // x8
  UnityEngine_Object_o *dynamicFont; // x20
  NGUIText_c *v29; // x0
  struct NGUIText_StaticFields *v30; // x8
  struct NGUIText_StaticFields *v31; // x8
  NGUIText_c *v32; // x0
  NGUIText_c *v33; // x0
  struct NGUIText_StaticFields *v34; // x8
  struct NGUIText_StaticFields *v35; // x8
  NGUIText_c *v36; // x0
  float maxY; // s8
  float v38; // s8
  double v39; // d0
  double v40; // d0
  float v41; // s1
  NGUIText_c *v42; // x0
  float v43; // s8
  __int64 v44; // x8
  float v45; // s0
  float v46; // s1
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D351C6 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_784/*")_-"*/);
    sub_1C93AD4(&StringLiteral_1778/*"A"*/);
    byte_4D351C6 = 1;
  }
  v3 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v3 = NGUIText_TypeInfo;
  }
  static_fields = v3->static_fields;
  pixelDensity = static_fields->pixelDensity;
  fontSize = (float)static_fields->fontSize;
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v7 = fontSize / pixelDensity;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v7;
  v9 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v9 == 0.5 )
    {
      v10 = iptr;
      v11 = 1.0;
LABEL_14:
      v12 = v10 + v11;
      if ( ((__int64)v10 & 1) != 0 )
        v10 = v12;
      goto LABEL_19;
    }
    v10 = floor(v8 + 0.5);
  }
  else
  {
    if ( v9 == -0.5 )
    {
      v10 = iptr;
      v11 = -1.0;
      goto LABEL_14;
    }
    v10 = ceil(v8 + -0.5);
  }
LABEL_19:
  v13 = NGUIText_TypeInfo->static_fields;
  v14 = (int)v10;
  if ( v10 == INFINITY )
    v14 = 0x80000000;
  v16 = v13->fontSize;
  fontScale = v13->fontScale;
  spacingX = v13->spacingX;
  spacingY = v13->spacingY;
  v13->finalSize = v14;
  bitmapFont = (UnityEngine_Object_o *)v13->bitmapFont;
  v13->finalSpacingX = spacingX * fontScale;
  v13->finalLineHeight = fontScale * (float)(spacingY + (float)v16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(bitmapFont, 0, 0) )
    goto LABEL_34;
  v21 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v21 = NGUIText_TypeInfo;
  }
  v22 = v21->static_fields->bitmapFont;
  if ( !v22 )
    goto LABEL_71;
  if ( !UIFont__get_hasSymbols(v22, 0) )
    goto LABEL_34;
  v23 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v23 = NGUIText_TypeInfo;
  }
  v24 = v23->static_fields;
  if ( v24->encoding )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v24 = NGUIText_TypeInfo->static_fields;
    }
    v25 = v24->symbolStyle != 0;
  }
  else
  {
LABEL_34:
    v25 = 0;
  }
  v26 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v26 = NGUIText_TypeInfo;
  }
  v27 = v26->static_fields;
  v27->useSymbols = v25;
  dynamicFont = (UnityEngine_Object_o *)v27->dynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) && request )
  {
    v29 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v29 = NGUIText_TypeInfo;
    }
    v30 = v29->static_fields;
    v22 = (UIFont_o *)v30->dynamicFont;
    if ( v22 )
    {
      UnityEngine_Font__RequestCharactersInTexture(
        (UnityEngine_Font_o *)v22,
        (System_String_o *)StringLiteral_784/*")_-"*/,
        v30->finalSize,
        v30->fontStyle,
        0);
      v31 = NGUIText_TypeInfo->static_fields;
      v22 = (UIFont_o *)v31->dynamicFont;
      if ( v22 )
      {
        if ( UnityEngine_Font__GetCharacterInfo(
               (UnityEngine_Font_o *)v22,
               0x29u,
               &v31->mTempChar,
               v31->finalSize,
               v31->fontStyle,
               0) )
        {
          v32 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v32 = NGUIText_TypeInfo;
          }
          if ( UnityEngine_CharacterInfo__get_maxY(&v32->static_fields->mTempChar, 0) )
            goto LABEL_54;
        }
        v33 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v33 = NGUIText_TypeInfo;
        }
        v34 = v33->static_fields;
        v22 = (UIFont_o *)v34->dynamicFont;
        if ( v22 )
        {
          UnityEngine_Font__RequestCharactersInTexture(
            (UnityEngine_Font_o *)v22,
            (System_String_o *)StringLiteral_1778/*"A"*/,
            v34->finalSize,
            v34->fontStyle,
            0);
          v35 = NGUIText_TypeInfo->static_fields;
          v22 = (UIFont_o *)v35->dynamicFont;
          if ( v22 )
          {
            if ( !UnityEngine_Font__GetCharacterInfo(
                    (UnityEngine_Font_o *)v22,
                    0x41u,
                    &v35->mTempChar,
                    v35->finalSize,
                    v35->fontStyle,
                    0) )
            {
              v42 = NGUIText_TypeInfo;
              v43 = 0.0;
              if ( NGUIText_TypeInfo->_2.cctor_finished )
              {
LABEL_69:
                v42->static_fields->baseline = v43;
                return;
              }
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              goto LABEL_68;
            }
LABEL_54:
            v36 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v36 = NGUIText_TypeInfo;
            }
            maxY = (float)UnityEngine_CharacterInfo__get_maxY(&v36->static_fields->mTempChar, 0);
            v38 = (float)((float)((float)((float)NGUIText_TypeInfo->static_fields->finalSize - maxY)
                                + (float)UnityEngine_CharacterInfo__get_minY(
                                           &NGUIText_TypeInfo->static_fields->mTempChar,
                                           0))
                        * 0.5)
                + maxY;
            v39 = modf(v38, &iptr);
            if ( v38 >= 0.0 )
            {
              if ( v39 == 0.5 )
              {
                v40 = iptr;
                v41 = 1.0;
LABEL_63:
                v44 = (__int64)v40;
                v45 = v40;
                v46 = v45 + v41;
                if ( (v44 & 1) != 0 )
                  v43 = v46;
                else
                  v43 = v45;
                goto LABEL_68;
              }
              v43 = floorf(v38 + 0.5);
            }
            else
            {
              if ( v39 == -0.5 )
              {
                v40 = iptr;
                v41 = -1.0;
                goto LABEL_63;
              }
              v43 = ceilf(v38 + -0.5);
            }
LABEL_68:
            v42 = NGUIText_TypeInfo;
            goto LABEL_69;
          }
        }
      }
    }
LABEL_71:
    sub_1C93D2C(v22, v20);
  }
}


bool NGUIText__WrapText(System_String_o *text, System_String_o **finalText, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D351D9 & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    byte_4D351D9 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__WrapText_50049456(text, finalText, 0, v3);
}


bool NGUIText__WrapText_50049456(
        System_String_o *text,
        System_String_o **finalText,
        bool keepCharCount,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  NGUIText_c *v11; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int regionHeight; // w9
  float finalLineHeight; // s1
  float v15; // s8
  int maxLines; // w20
  int32_t v17; // w8
  float v18; // s9
  float v19; // s8
  float v20; // s8
  unsigned int v21; // w9
  unsigned int v22; // w8
  const MethodInfo *v23; // x1
  System_String_o *v24; // x24
  System_Text_StringBuilder_o *v25; // x21
  System_String_o *Chars; // x0
  __int64 v27; // x1
  int32_t stringLength; // w22
  int32_t regionWidth; // w8
  int v30; // w25
  int32_t v31; // w28
  int v32; // w20
  float v33; // s13
  int v34; // w19
  int v35; // w29
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  int32_t v38; // w26
  int v39; // s8
  NGUIText_c *v40; // x8
  int32_t v41; // w8
  int32_t v42; // w27
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v44; // x27
  NGUIText_c *v45; // x0
  float v46; // s14
  int32_t v47; // w28
  int32_t v48; // w22
  uint16_t v49; // w0
  uint16_t v50; // w29
  double v51; // d8
  const MethodInfo *v52; // x1
  double v53; // d0
  double v54; // d0
  __int64 v55; // x8
  double v56; // d1
  float GlyphWidth; // s0
  float v58; // s8
  int32_t v59; // w22
  const MethodInfo *v60; // x1
  int v61; // w22
  NGUIText_c *v63; // x0
  uint32_t cctor_finished; // w8
  int v65; // s8
  char v67; // w24
  GrandQuestFolderBoardItem_o *v68; // x20
  __int64 v69; // x0
  char v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  NGUIText_c *v76; // x0
  int32_t v77; // w8
  char v78; // [xsp+Ch] [xbp-C4h]
  System_String_o **v79; // [xsp+10h] [xbp-C0h]
  bool v80; // [xsp+18h] [xbp-B8h]
  int32_t v81; // [xsp+1Ch] [xbp-B4h]
  signed int v82; // [xsp+20h] [xbp-B0h]
  int32_t index; // [xsp+24h] [xbp-ACh] BYREF
  System_Text_StringBuilder_o *s; // [xsp+28h] [xbp-A8h] BYREF
  double iptr; // [xsp+38h] [xbp-98h] BYREF

  if ( (byte_4D351DA & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D351DA = 1;
  }
  v11 = NGUIText_TypeInfo;
  s = 0;
  index = 0;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v11 = NGUIText_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( static_fields->regionWidth < 1 )
    goto LABEL_151;
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->regionHeight < 1 )
    goto LABEL_151;
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->finalLineHeight < 1.0 )
    goto LABEL_151;
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
    maxLines = static_fields->maxLines;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v11 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = static_fields->regionHeight;
    if ( maxLines > 0 )
      goto LABEL_14;
LABEL_20:
    v15 = (float)regionHeight;
    goto LABEL_21;
  }
  regionHeight = static_fields->regionHeight;
  if ( static_fields->maxLines <= 0 )
    goto LABEL_20;
LABEL_14:
  finalLineHeight = static_fields->finalLineHeight;
  if ( (float)(finalLineHeight * (float)static_fields->maxLines) <= (float)regionHeight )
    v15 = finalLineHeight * (float)static_fields->maxLines;
  else
    v15 = (float)regionHeight;
LABEL_21:
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  v17 = static_fields->maxLines;
  if ( v17 < 1 )
  {
    v18 = 1000000.0;
  }
  else
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = NGUIText_TypeInfo;
      v17 = NGUIText_TypeInfo->static_fields->maxLines;
    }
    v18 = (float)v17;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = NGUIText_TypeInfo;
  }
  if ( v18 >= (float)(v15 / v11->static_fields->finalLineHeight) )
    v19 = v15 / v11->static_fields->finalLineHeight;
  else
    v19 = v18;
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v20 = v19 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = vcvtms_s32_f32(v20);
  if ( floorf(v20) == INFINITY )
    v22 = 0x80000000;
  else
    v22 = v21;
  v82 = v22;
  if ( !v22 )
  {
LABEL_151:
    *finalText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)finalText,
      StringLiteral_1/*""*/,
      keepCharCount,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    return 0;
  }
  v79 = finalText;
  if ( System_String__IsNullOrEmpty(text, 0) )
    v24 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v24 = text;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v24, v23);
  v25 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v25, 0);
  s = v25;
  if ( !v24 )
    goto LABEL_170;
  stringLength = v24->fields._stringLength;
  regionWidth = NGUIText_TypeInfo->static_fields->regionWidth;
  index = 0;
  if ( stringLength < 1 )
  {
    v34 = 1;
    v67 = 1;
    goto LABEL_160;
  }
  v80 = keepCharCount;
  v81 = stringLength;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  LODWORD(v27) = 0;
  v33 = (float)regionWidth;
  v34 = 1;
  v35 = 1;
  v78 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v24, v27, 0);
    v38 = (unsigned __int16)Chars;
    v32 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars == 10 )
    {
      if ( v34 != v82 )
      {
        Chars = (System_String_o *)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          Chars = (System_String_o *)NGUIText_TypeInfo;
        }
        v39 = *(_DWORD *)(*(_QWORD *)&Chars[7].fields + 68LL);
        if ( index <= v30 )
        {
          if ( !v25 )
            goto LABEL_170;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_64512012(v25, 0xAu, 0);
        }
        else
        {
          Chars = System_String__Substring_64471664(v24, v30, index - v30 + 1, 0);
          if ( !v25 )
            goto LABEL_170;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_64509684(v25, Chars, 0);
        }
        v31 = 0;
        v33 = (float)v39;
        ++v34;
        v30 = index + 1;
        goto LABEL_66;
      }
      v34 = v82;
      v27 = (unsigned int)index;
LABEL_155:
      if ( (int)v27 > v30 )
      {
        Chars = System_String__Substring_64471664(v24, v30, (int)v27 - v30, 0);
        if ( v25 )
        {
          System_Text_StringBuilder__Append_64509684(v25, Chars, 0);
          v68 = (GrandQuestFolderBoardItem_o *)v79;
          goto LABEL_158;
        }
        goto LABEL_170;
      }
      v67 = v78;
LABEL_160:
      v68 = (GrandQuestFolderBoardItem_o *)v79;
      if ( v25 )
        goto LABEL_161;
LABEL_170:
      sub_1C93D2C(Chars, v27);
    }
    v40 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v40 = NGUIText_TypeInfo;
    }
    if ( v40->static_fields->encoding )
    {
      if ( !v40->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v40);
      Chars = (System_String_o *)NGUIText__ParseSymbol(v24, &index, v36);
      if ( ((unsigned __int8)Chars & 1) != 0 )
      {
        v41 = index;
LABEL_118:
        index = v41 - 1;
        goto LABEL_149;
      }
      v40 = NGUIText_TypeInfo;
    }
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = NGUIText_TypeInfo;
    }
    if ( v40->static_fields->useSymbols )
    {
      v42 = index;
      if ( !v40->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v40);
      Symbol = NGUIText__GetSymbol(v24, v42, stringLength, v37);
      v40 = NGUIText_TypeInfo;
      v44 = Symbol;
    }
    else
    {
      v44 = 0;
    }
    if ( v40->_2.cctor_finished )
    {
      if ( v44 )
        goto LABEL_77;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v40);
      if ( v44 )
      {
LABEL_77:
        v45 = NGUIText_TypeInfo;
        v46 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)v44->fields.mAdvance);
        goto LABEL_78;
      }
    }
    GlyphWidth = NGUIText__GetGlyphWidth(v38, v31, v36);
    if ( GlyphWidth == 0.0 )
      goto LABEL_149;
    v45 = NGUIText_TypeInfo;
    v58 = GlyphWidth;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v45 = NGUIText_TypeInfo;
    }
    v46 = v58 + v45->static_fields->finalSpacingX;
LABEL_78:
    if ( !v45->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v45);
    v33 = v33 - v46;
    if ( (unsigned int)(v38 - 8201) < 3 || v38 == 32 )
    {
      v47 = index - v30;
      if ( index > v30 && ((v32 ^ 1) & 1) != 0 )
      {
        v48 = v47 + 1;
        if ( v34 == v82 && v33 <= 0.0 && index < v81 )
        {
          v49 = System_String__get_Chars(v24, index, 0);
          if ( v49 < 0x20u )
            goto LABEL_92;
          v50 = v49;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          if ( (unsigned int)v50 - 8201 < 3 || v50 == 32 )
LABEL_92:
            v48 = v47;
        }
        Chars = System_String__Substring_64471664(v24, v30, v48, 0);
        if ( !v25 )
          goto LABEL_170;
        System_Text_StringBuilder__Append_64509684(v25, Chars, 0);
        stringLength = v81;
        v35 = 0;
        v30 = index + 1;
      }
    }
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v51 = v33;
    v53 = modf(v33, &iptr);
    if ( v33 >= 0.0 )
    {
      if ( v53 != 0.5 )
      {
        v54 = floor(v51 + 0.5);
        goto LABEL_114;
      }
      v54 = iptr;
      v55 = (__int64)iptr;
      v56 = iptr + 1.0;
    }
    else
    {
      if ( v53 != -0.5 )
      {
        v54 = ceil(v51 + -0.5);
        goto LABEL_114;
      }
      v54 = iptr;
      v55 = (__int64)iptr;
      v56 = iptr + -1.0;
    }
    if ( (v55 & 1) != 0 )
      v54 = v56;
LABEL_114:
    if ( v54 != INFINITY && ((int)v54 & 0x80000000) == 0 )
    {
      if ( !v44 )
        goto LABEL_148;
LABEL_117:
      v59 = index;
      Chars = (System_String_o *)BMSymbol__get_length(v44, 0);
      v41 = v59 + (_DWORD)Chars;
      stringLength = v81;
      v31 = 0;
      goto LABEL_118;
    }
    if ( ((v34 != v82) & (v35 ^ 1)) == 0 )
      break;
    v63 = NGUIText_TypeInfo;
    cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v63 = NGUIText_TypeInfo;
      cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
    }
    v65 = v63->static_fields->regionWidth;
    index = v30 - 1;
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(v63);
    v33 = (float)v65;
    ++v34;
    if ( v80 )
      NGUIText__ReplaceSpaceWithNewline(&s, v52);
    else
      NGUIText__EndLine(&s, v52);
    stringLength = v81;
    v31 = 0;
LABEL_66:
    v35 = 1;
LABEL_149:
    v27 = (unsigned int)++index;
    if ( index >= stringLength )
      goto LABEL_155;
  }
  Chars = System_String__Substring_64471664(v24, v30, (index - v30) & (unsigned int)~((index - v30) >> 31), 0);
  if ( !v25 )
    goto LABEL_170;
  System_Text_StringBuilder__Append_64509684(v25, Chars, 0);
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v61 = 1;
  if ( (unsigned int)(v38 - 8201) >= 3 && v38 != 32 )
  {
    v61 = 0;
    v78 &= v32;
  }
  if ( v34++ != v82 )
  {
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    if ( v80 )
      NGUIText__ReplaceSpaceWithNewline(&s, v60);
    else
      NGUIText__EndLine(&s, v60);
    v30 = index;
    if ( v61 )
    {
      Chars = (System_String_o *)NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        Chars = (System_String_o *)NGUIText_TypeInfo;
      }
      stringLength = v81;
      v38 = 0;
      ++v30;
      v33 = (float)*(int *)(*(_QWORD *)&Chars[7].fields + 68LL);
    }
    else
    {
      Chars = (System_String_o *)NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        Chars = (System_String_o *)NGUIText_TypeInfo;
      }
      stringLength = v81;
      v38 = 0;
      v33 = (float)*(int *)(*(_QWORD *)&Chars[7].fields + 68LL) - v46;
    }
    v35 = 1;
    if ( !v44 )
    {
LABEL_148:
      v31 = v38;
      goto LABEL_149;
    }
    goto LABEL_117;
  }
  v68 = (GrandQuestFolderBoardItem_o *)v79;
  stringLength = v81;
LABEL_158:
  v67 = v78;
LABEL_161:
  v69 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v25->klass->vtable._3_ToString.methodPtr)(
          v25,
          v25->klass->vtable._3_ToString.method);
  v68->klass = (GrandQuestFolderBoardItem_c *)v69;
  sub_1C93A78(v68, v69, v70, v71, v72, v73, v74, v75);
  if ( (v67 & 1) == 0 )
    return 0;
  if ( index == stringLength )
    return 1;
  v76 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v76 = NGUIText_TypeInfo;
  }
  v77 = v76->static_fields->maxLines;
  if ( v77 >= v82 )
    v77 = v82;
  return v34 <= v77;
}


void NGUIText_DiagonalLineInfo___ctor(
        NGUIText_DiagonalLineInfo_o *this,
        float slope,
        float length,
        float width,
        float offset,
        int32_t edge,
        float gradientAdjust,
        const MethodInfo *method)
{
  this->fields._Slope_k__BackingField = slope;
  this->fields._Length_k__BackingField = length;
  this->fields._Width_k__BackingField = width;
  this->fields._Offset_k__BackingField = offset;
  this->fields._LineEdge_k__BackingField = edge;
  this->fields._LineGradientAdjust_k__BackingField = gradientAdjust;
}


float NGUIText_DiagonalLineInfo__get_Length(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Length_k__BackingField;
}


int32_t NGUIText_DiagonalLineInfo__get_LineEdge(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._LineEdge_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_LineGradientAdjust(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._LineGradientAdjust_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_Offset(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Offset_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_Slope(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Slope_k__BackingField;
}


float NGUIText_DiagonalLineInfo__get_Width(NGUIText_DiagonalLineInfo_o *this, const MethodInfo *method)
{
  return this->fields._Width_k__BackingField;
}


void NGUIText_DiagonalLineInfo__set_Length(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Length_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_LineEdge(
        NGUIText_DiagonalLineInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LineEdge_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_LineGradientAdjust(
        NGUIText_DiagonalLineInfo_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._LineGradientAdjust_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_Offset(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Offset_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_Slope(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Slope_k__BackingField = value;
}


void NGUIText_DiagonalLineInfo__set_Width(NGUIText_DiagonalLineInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Width_k__BackingField = value;
}


void NGUIText_GlyphInfo___ctor(NGUIText_GlyphInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}