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
  System_Array_o *v63; // x0
  System_RuntimeFieldHandle_o v64; // x1
  System_Array_o *v65; // x19
  struct NGUIText_StaticFields *v66; // x8
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7

  if ( (byte_4CF2DF0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_float___ctor__);
    sub_1C7BAE8(&Method_BetterList_Color___ctor__);
    sub_1C7BAE8(&BetterList_float__TypeInfo);
    sub_1C7BAE8(&BetterList_Color__TypeInfo);
    sub_1C7BAE8(&char___TypeInfo);
    sub_1C7BAE8(&NGUIText_GlyphInfo_TypeInfo);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&float___TypeInfo);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0);
    byte_4CF2DF0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(NGUIText_GlyphInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  static_fields = NGUIText_TypeInfo->static_fields;
  static_fields->glyph = (struct NGUIText_GlyphInfo_o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->glyph, (int32_t)v1, v3, v4, v5, v6, v7, v8);
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
  if ( !byte_4CEE931 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CEE931 = 1;
  }
  v18 = NGUIText_TypeInfo;
  NGUIText_TypeInfo->static_fields->outlineDistance = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  v18->static_fields->outlineEffect = (struct UnityEngine_Color_o)xmmword_CF6BA0;
  v19 = v18->static_fields;
  v19->encoding = 0;
  *(_QWORD *)&v19->spacingX = 0;
  v19->premultiply = 0;
  *(_QWORD *)&v19->finalSize = 0;
  *(_QWORD *)&v19->finalLineHeight = 0;
  v19->useSymbols = 0;
  v20 = sub_1C7BB90(char___TypeInfo, 1);
  if ( !v20 )
    goto LABEL_10;
  v28 = (struct System_Char_array *)v20;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_11;
  *(_WORD *)(v20 + 32) = 58;
  v29 = NGUIText_TypeInfo->static_fields;
  v29->PARAM_SPLIT_CHAR = v28;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v29->PARAM_SPLIT_CHAR, (int32_t)v28, v22, v23, v24, v25, v26, v27);
  v20 = sub_1C7BB90(char___TypeInfo, 1);
  if ( !v20 )
LABEL_10:
    sub_1C7BD40(v20, v21);
  v36 = (struct System_Char_array *)v20;
  if ( !*(_DWORD *)(v20 + 24) )
LABEL_11:
    sub_1C7BD48(v20);
  *(_WORD *)(v20 + 32) = 61;
  v37 = NGUIText_TypeInfo->static_fields;
  v37->KEY_VAL_SPLIT_CHAR = v36;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v37->KEY_VAL_SPLIT_CHAR, (int32_t)v36, v30, v31, v32, v33, v34, v35);
  v38 = NGUIText_TypeInfo->static_fields;
  *(_QWORD *)&v38->mInvisible.fields.r = 0;
  *(_QWORD *)&v38->mInvisible.fields.b = 0;
  v39 = (BetterList_Color__o *)sub_1C7BD34(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v39, (const MethodInfo_33A4F20 *)Method_BetterList_Color___ctor__);
  v40 = NGUIText_TypeInfo->static_fields;
  v40->mColors = v39;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v40->mColors, (int32_t)v39, v41, v42, v43, v44, v45, v46);
  v47 = (BetterList_Color__o *)sub_1C7BD34(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v47, (const MethodInfo_33A4F20 *)Method_BetterList_Color___ctor__);
  p_mGradientColors = (GrandQuestFolderBoardItem_o *)&NGUIText_TypeInfo->static_fields->mGradientColors;
  p_mGradientColors->klass = (GrandQuestFolderBoardItem_c *)v47;
  sub_1C7BA8C(p_mGradientColors, (int32_t)v47, v49, v50, v51, v52, v53, v54);
  NGUIText_TypeInfo->static_fields->mAlpha = 1.0;
  v55 = (BetterList_float__o *)sub_1C7BD34(BetterList_float__TypeInfo);
  BetterList_float____ctor(v55, (const MethodInfo_33A7464 *)Method_BetterList_float___ctor__);
  p_mSizes = (GrandQuestFolderBoardItem_o *)&NGUIText_TypeInfo->static_fields->mSizes;
  p_mSizes->klass = (GrandQuestFolderBoardItem_c *)v55;
  sub_1C7BA8C(p_mSizes, (int32_t)v55, v57, v58, v59, v60, v61, v62);
  v63 = (System_Array_o *)sub_1C7BB90(float___TypeInfo, 8);
  v64.fields.value = Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0;
  v65 = v63;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v63, v64, 0);
  v66 = NGUIText_TypeInfo->static_fields;
  v66->s_c1 = (struct UnityEngine_Color32_o)v65;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v66->s_c1, (int32_t)v65, v67, v68, v69, v70, v71, v72);
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
  if ( (byte_4CF2DE1 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE1 = 1;
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
  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
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
  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
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
        sub_1C7BD48(v7);
      v64 = (float *)((char *)v63 + 12 * v5++);
      v64[8] = v15 + v64[8];
      if ( v62 == v5 )
        return;
    }
LABEL_115:
    sub_1C7BD40(v7, *(_QWORD *)&indexOffset);
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
  if ( (byte_4CF2DEF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector3__Add__);
    sub_1C7BAE8(&Method_BetterList_Color32__Add__);
    sub_1C7BAE8(&Method_BetterList_Vector2__Add__);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2DEF = 1;
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
  v29 = (UIFont_o *)sub_2597300(0, inited, v26, v25, v8);
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
          (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v37 = uvs->fields.buffer;
        if ( !v37 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v37->max_length) )
          goto LABEL_51;
        BetterList_Vector2___Add(uvs, v37->m_Items[v33], (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v38 = cols->fields.buffer;
        if ( !v38 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v38->max_length) )
          goto LABEL_51;
        v39 = (UnityEngine_Color32_o)*((unsigned int *)&v38->obj.klass + v34);
        BetterList_Color32___Add(cols, v39, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
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
          v29 = (UIFont_o *)sub_2597300(0, v48, v47, v46, v9);
          if ( (unsigned int)v14 >= LODWORD(v41->max_length) )
LABEL_51:
            sub_1C7BD48(v29);
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
    sub_1C7BD40(v29, v24);
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

  if ( (byte_4CF2DE7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_float__Add__);
    sub_1C7BAE8(&Method_BetterList_float__Clear__);
    sub_1C7BAE8(&Method_BetterList_float__get_Item__);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE7 = 1;
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
        (const MethodInfo_33A6DFC *)Method_BetterList_float__Add__);
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
            (const MethodInfo_33A6DFC *)Method_BetterList_float__Add__);
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
          (const MethodInfo_33A6DFC *)Method_BetterList_float__Add__);
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
             (const MethodInfo_33A6BFC *)Method_BetterList_float__get_Item__);
    mSizes = NGUIText_TypeInfo;
  }
  if ( !mSizes )
LABEL_49:
    sub_1C7BD40(mSizes, v6);
  BetterList_float___Clear((BetterList_float__o *)mSizes, (const MethodInfo_33A6DE4 *)Method_BetterList_float__Clear__);
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
  float v50; // s0
  float v51; // s1
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CF2DE6 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE6 = 1;
  }
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
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
    sub_1C7BD40(v9, v10);
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
      if ( !byte_4CE8569 )
      {
        sub_1C7BAE8(&System_Math_TypeInfo);
        byte_4CE8569 = 1;
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
    if ( !byte_4CE8569 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE8569 = 1;
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
  v50 = x;
  v51 = y;
  result.fields.y = v51;
  result.fields.x = v50;
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

  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
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
  if ( (byte_4CF2DDC & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DDC = 1;
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


System_String_o *NGUIText__EncodeColor_49833668(System_String_o *text, UnityEngine_Color_o c, const MethodInfo *method)
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
  if ( (byte_4CF2DDD & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_16021/*"[c]["*/);
    sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    sub_1C7BAE8(&StringLiteral_15883/*"[-][/c]"*/);
    byte_4CF2DDD = 1;
  }
  v8 = (System_String_o *)sub_1C7BB90(string___TypeInfo, 5);
  if ( !v8 )
    sub_1C7BD40(0, v9);
  v16 = v8;
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_12;
  v17 = StringLiteral_16021/*"[c]["*/;
  v8[1].monitor = (void *)StringLiteral_16021/*"[c]["*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8[1].monitor, v17, v10, v11, v12, v13, v14, v15);
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
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16[1].fields, (int32_t)v8, v19, v20, v21, v22, v23, v24),
        LODWORD(v16[1].klass) <= 2)
    || (v31 = StringLiteral_16114/*"]"*/,
        v16[2].klass = (System_String_c *)StringLiteral_16114/*"]"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16[2], v31, v25, v26, v27, v28, v29, v30),
        LODWORD(v16[1].klass) <= 3)
    || (v16[2].monitor = text,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16[2].monitor, (int32_t)text, v32, v33, v34, v35, v36, v37),
        LODWORD(v16[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C7BD48(v8);
  }
  v44 = StringLiteral_15883/*"[-][/c]"*/;
  v16[2].fields = (System_String_Fields)StringLiteral_15883/*"[-][/c]"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16[2].fields, v44, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_64217444((System_String_array *)v16, 0);
}


void NGUIText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_4CF2DE4 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE4 = 1;
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
      sub_1C7BD40(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_14;
  System_Text_StringBuilder__Append_64263200(v3, 0xAu, 0);
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
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v8 = verts;
  if ( (byte_4CF2DE3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C7BAE8(&Method_BetterList_Vector3__get_Item__);
    byte_4CF2DE3 = 1;
  }
  if ( !v8 )
    goto LABEL_16;
  if ( v8->fields.size < 1 )
  {
    v10 = 0;
    if ( indices )
      return BetterList_int___get_Item(indices, v10, (const MethodInfo_33A5944 *)Method_BetterList_int__get_Item__);
LABEL_16:
    sub_1C7BD40(verts, indices);
  }
  LODWORD(v4) = 2139095039;
  v9 = 0;
  v10 = 0;
  v11 = v4;
  do
  {
    Item = BetterList_Vector3___get_Item(v8, v9, (const MethodInfo_33A7F50 *)Method_BetterList_Vector3__get_Item__);
    v12 = vabds_f32(y, Item.fields.y);
    if ( v12 > *(float *)&v4 )
      goto LABEL_11;
    *(float *)&v13 = vabds_f32(
                       x,
                       COERCE_FLOAT(
                         BetterList_Vector3___get_Item(
                           v8,
                           v9,
                           (const MethodInfo_33A7F50 *)Method_BetterList_Vector3__get_Item__)));
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
  return BetterList_int___get_Item(indices, v10, (const MethodInfo_33A5944 *)Method_BetterList_int__get_Item__);
}


System_String_o *NGUIText__GetEndOfLineThatFits(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t stringLength; // w20
  int32_t v4; // w1

  v2 = text;
  if ( (byte_4CF2DE8 & 1) == 0 )
  {
    text = (System_String_o *)sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE8 = 1;
  }
  if ( !v2 )
    sub_1C7BD40(text, method);
  stringLength = v2->fields._stringLength;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v4 = NGUIText__CalculateOffsetToFit(v2, method);
  return System_String__Substring_64222852(v2, v4, stringLength - v4, 0);
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
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v7 = verts;
  if ( (byte_4CF2DE2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C7BAE8(&Method_BetterList_Vector3__get_Item__);
    byte_4CF2DE2 = 1;
  }
  if ( !indices )
LABEL_14:
    sub_1C7BD40(verts, indices);
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
                  (const MethodInfo_33A7F50 *)Method_BetterList_Vector3__get_Item__))
      && x <= COERCE_FLOAT(BetterList_Vector3___get_Item(v7, i, (const MethodInfo_33A7F50 *)Method_BetterList_Vector3__get_Item__)) )
    {
      Item = BetterList_Vector3___get_Item(v7, i - 1, (const MethodInfo_33A7F50 *)Method_BetterList_Vector3__get_Item__);
      if ( y >= Item.fields.y )
      {
        v12 = BetterList_Vector3___get_Item(v7, i, (const MethodInfo_33A7F50 *)Method_BetterList_Vector3__get_Item__);
        if ( y <= v12.fields.y )
          break;
      }
    }
    if ( ++v8 >= indices->fields.size )
      return 0;
  }
  return BetterList_int___get_Item(indices, v8, (const MethodInfo_33A5944 *)Method_BetterList_int__get_Item__);
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

  if ( (byte_4CF2DDA & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2DDA = 1;
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
    result = (NGUIText_GlyphInfo_o *)BMFont__GetGlyph_49785820((BMFont_o *)bmFont, v9, 0);
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
      sub_1C7BD40(bmFont, v7);
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
  BMGlyph_o *Glyph_49785820; // x0
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

  if ( (byte_4CF2DD9 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2DD9 = 1;
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
        Glyph_49785820 = BMFont__GetGlyph_49785820(bmFont, v9, 0);
        if ( !Glyph_49785820 )
          return 0.0;
        v12 = Glyph_49785820;
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
    sub_1C7BD40(bmFont, v7);
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
  float v4; // s1
  float v5; // s0
  float cosx; // [xsp+8h] [xbp-18h] BYREF
  float sinx; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  sincosf(angle * 0.017453, &sinx, &cosx);
  v4 = sinx * radius;
  v5 = cosx * radius;
  result.fields.y = v4;
  result.fields.x = v5;
  return result;
}


BMSymbol_o *NGUIText__GetSymbol(System_String_o *text, int32_t index, int32_t textLength, const MethodInfo *method)
{
  NGUIText_c *v7; // x0
  UnityEngine_Object_o *bitmapFont; // x22
  __int64 v9; // x1
  NGUIText_c *v10; // x0
  UIFont_o *v11; // x0

  if ( (byte_4CF2DD8 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2DD8 = 1;
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
    sub_1C7BD40(0, v9);
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
    sub_1C7BD40(0, index);
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
  if ( (byte_4CF2DDB & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DDB = 1;
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
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !text )
    sub_1C7BD40(0, offset);
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
  v17 = (float)v8 * 0.0039216;
  v18 = (float)v12 * 0.0039216;
  v19 = (float)v16 * 0.0039216;
  v20 = 1.0;
  result.fields.a = v20;
  result.fields.b = v19;
  result.fields.g = v18;
  result.fields.r = v17;
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
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !text )
    sub_1C7BD40(0, offset);
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
  v21 = (float)v8 * 0.0039216;
  v22 = (float)v12 * 0.0039216;
  v23 = (float)v16 * 0.0039216;
  v24 = (float)v20 * 0.0039216;
  result.fields.a = v24;
  result.fields.b = v23;
  result.fields.g = v22;
  result.fields.r = v21;
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

  if ( (byte_4CF2DDE & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DDE = 1;
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
  *(_OWORD *)&v7.fields._Slope_k__BackingField = xmmword_CF5E70;
  *(_QWORD *)&v7.fields._LineEdge_k__BackingField = 0;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__ParseSymbol_49834612(
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


bool NGUIText__ParseSymbol_49834612(
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
  System_String_o *v83; // x0
  NGUIText_c *v84; // x0
  float32x4_t v85; // q3
  float v86; // s0
  float32x4_t v87; // q0
  uint16_t v88; // w0
  const MethodInfo *v89; // x2
  int32_t v90; // w21
  float v91; // s8
  float v92; // s9
  float v93; // s10
  float v94; // s11
  unsigned int v95; // w0
  System_String_o *v96; // x21
  System_String_o *v97; // x0
  const MethodInfo *v98; // x2
  int32_t v99; // w21
  float v100; // s12
  float v101; // s13
  float v102; // s14
  float v103; // s15
  unsigned int v104; // w0
  System_String_o *v105; // x21
  System_String_o *v106; // x0
  const MethodInfo *v107; // x2
  int32_t v108; // w21
  float v109; // s8
  float v110; // s9
  float v111; // s10
  float v112; // s11
  int32_t v113; // w0
  System_String_o *v114; // x21
  System_String_o *v115; // x0
  const MethodInfo *v116; // x2
  int32_t v117; // w21
  float v118; // s12
  float v119; // s13
  float v120; // s14
  float v121; // s15
  int32_t v122; // w0
  System_String_o *v123; // x21
  System_String_o *v124; // x0
  char v125; // [xsp+10h] [xbp-100h]
  float v126; // [xsp+20h] [xbp-F0h]
  char v127; // [xsp+30h] [xbp-E0h]
  float v128; // [xsp+30h] [xbp-E0h]
  char v129; // [xsp+40h] [xbp-D0h]
  float v130; // [xsp+40h] [xbp-D0h]
  char item; // [xsp+50h] [xbp-C0h]
  float itema; // [xsp+50h] [xbp-C0h]
  float result; // [xsp+6Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v145; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v23 = text;
  if ( (byte_4CF2DDF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Color__Add__);
    sub_1C7BAE8(&Method_BetterList_Color__RemoveAt__);
    sub_1C7BAE8(&Method_BetterList_Color__get_Item__);
    sub_1C7BAE8(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25119/*"x"*/);
    sub_1C7BAE8(&StringLiteral_15893/*"[/sub]"*/);
    sub_1C7BAE8(&StringLiteral_15896/*"[/url]"*/);
    sub_1C7BAE8(&StringLiteral_20087/*"h"*/);
    sub_1C7BAE8(&StringLiteral_15892/*"[/s]"*/);
    sub_1C7BAE8(&StringLiteral_15886/*"[/b]"*/);
    sub_1C7BAE8(&StringLiteral_16054/*"[o]"*/);
    sub_1C7BAE8(&StringLiteral_15894/*"[/sup]"*/);
    sub_1C7BAE8(&StringLiteral_19879/*"g"*/);
    sub_1C7BAE8(&StringLiteral_16060/*"[sub]"*/);
    sub_1C7BAE8(&StringLiteral_15887/*"[/c]"*/);
    sub_1C7BAE8(&StringLiteral_18810/*"e"*/);
    sub_1C7BAE8(&StringLiteral_15895/*"[/u]"*/);
    sub_1C7BAE8(&StringLiteral_16061/*"[sup]"*/);
    sub_1C7BAE8(&StringLiteral_15889/*"[/g]"*/);
    sub_1C7BAE8(&StringLiteral_15880/*"[--]"*/);
    sub_1C7BAE8(&StringLiteral_16042/*"[i]"*/);
    sub_1C7BAE8(&StringLiteral_15888/*"[/dl]"*/);
    sub_1C7BAE8(&StringLiteral_16041/*"[g]"*/);
    sub_1C7BAE8(&StringLiteral_15891/*"[/o]"*/);
    sub_1C7BAE8(&StringLiteral_16020/*"[c]"*/);
    sub_1C7BAE8(&StringLiteral_25221/*"y"*/);
    sub_1C7BAE8(&StringLiteral_16058/*"[s]"*/);
    sub_1C7BAE8(&StringLiteral_16019/*"[b]"*/);
    sub_1C7BAE8(&StringLiteral_15890/*"[/i]"*/);
    sub_1C7BAE8(&StringLiteral_16062/*"[u]"*/);
    sub_1C7BAE8(&StringLiteral_24970/*"w"*/);
    text = (System_String_o *)sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CF2DDF = 1;
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
          BetterList_Color___RemoveAt(colors, size - 1, (const MethodInfo_33A4C8C *)Method_BetterList_Color__RemoveAt__);
      }
      v26 = *index + 3;
      goto LABEL_139;
    }
    v27 = System_String__Substring_64222852(v23, *index, 3, 0);
    v28 = PrivateImplementationDetails___ComputeStringHash_50076452(v27, 0);
    if ( v28 > 0x7ACE3056 )
    {
      if ( v28 > 0xB6CA119C )
      {
        if ( v28 == -1162838014 )
        {
          if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16058/*"[s]"*/, 0) )
          {
            v30 = 1;
            *strike = 1;
            goto LABEL_37;
          }
        }
        else if ( v28 == -1159586610 && System_String__op_Equality(v27, (System_String_o *)StringLiteral_16041/*"[g]"*/, 0) )
        {
          v30 = 1;
          *ignoreColor = 1;
          v29 = spGradient;
          goto LABEL_28;
        }
      }
      else if ( v28 == -1228271204 )
      {
        if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16042/*"[i]"*/, 0) )
        {
          v30 = 1;
          *italic = 1;
          goto LABEL_37;
        }
      }
      else if ( v28 == 2061024690 && System_String__op_Equality(v27, (System_String_o *)StringLiteral_16020/*"[c]"*/, 0) )
      {
        v29 = ignoreColor;
        goto LABEL_23;
      }
    }
    else if ( v28 == 1992236928 )
    {
      if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16062/*"[u]"*/, 0) )
      {
        v30 = 1;
        *underline = 1;
        goto LABEL_37;
      }
    }
    else if ( v28 == 1993767119 )
    {
      if ( System_String__op_Equality(v27, (System_String_o *)StringLiteral_16019/*"[b]"*/, 0) )
      {
        v30 = 1;
        *bold = 1;
        goto LABEL_37;
      }
    }
    else if ( v28 == 2060333142 && System_String__op_Equality(v27, (System_String_o *)StringLiteral_16054/*"[o]"*/, 0) )
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
    v53 = System_String__Substring_64222852(v23, *index, 4, 0);
    v54 = PrivateImplementationDetails___ComputeStringHash_50076452(v53, 0);
    if ( v54 > 0x258A0629 )
    {
      if ( v54 > 0x615D44FF )
      {
        if ( v54 == -100292593 )
        {
          if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15880/*"[--]"*/, 0) )
          {
            *index += 4;
            if ( gradientColors )
            {
              BetterList_Color___RemoveAt(
                gradientColors,
                gradientColors->fields.size - 1,
                (const MethodInfo_33A4C8C *)Method_BetterList_Color__RemoveAt__);
              BetterList_Color___RemoveAt(
                gradientColors,
                gradientColors->fields.size - 1,
                (const MethodInfo_33A4C8C *)Method_BetterList_Color__RemoveAt__);
            }
            return 1;
          }
        }
        else if ( v54 == 1636753867 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15892/*"[/s]"*/, 0) )
        {
          *strike = 0;
          goto LABEL_138;
        }
      }
      else if ( v54 == 1632222535 )
      {
        if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15891/*"[/o]"*/, 0) )
        {
          v55 = isOutline;
          goto LABEL_119;
        }
      }
      else if ( v54 == 1633502463 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15889/*"[/g]"*/, 0) )
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
          if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15886/*"[/b]"*/, 0) )
          {
            *bold = 0;
            goto LABEL_138;
          }
        }
        else if ( v54 == 629802537 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15895/*"[/u]"*/, 0) )
        {
          *underline = 0;
          goto LABEL_138;
        }
        goto LABEL_125;
      }
      if ( v54 != 560426395 )
      {
        if ( v54 == 626551133 && System_String__op_Equality(v53, (System_String_o *)StringLiteral_15890/*"[/i]"*/, 0) )
        {
          *italic = 0;
LABEL_138:
          v26 = *index + 4;
          goto LABEL_139;
        }
        goto LABEL_125;
      }
      if ( System_String__op_Equality(v53, (System_String_o *)StringLiteral_15887/*"[/c]"*/, 0) )
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
      v62 = System_String__Substring_64222852(v23, *index, 5, 0);
      if ( System_String__op_Equality(v62, (System_String_o *)StringLiteral_16060/*"[sub]"*/, 0) )
      {
        v30 = 1;
        *sub = 1;
        v31 = *index + 5;
        goto LABEL_38;
      }
      if ( System_String__op_Equality(v62, (System_String_o *)StringLiteral_16061/*"[sup]"*/, 0) )
      {
        *sub = 2;
LABEL_149:
        v26 = *index + 5;
        goto LABEL_139;
      }
      if ( System_String__op_Equality(v62, (System_String_o *)StringLiteral_15888/*"[/dl]"*/, 0) )
      {
        *isDiagonalLine = 0;
        *(_QWORD *)&diagonalLineInfo->fields._LineEdge_k__BackingField = 0;
        *(_OWORD *)&diagonalLineInfo->fields._Slope_k__BackingField = xmmword_CF5E70;
        goto LABEL_149;
      }
    }
    if ( *index + 6 > stringLength )
      return 0;
    if ( System_String__get_Chars(v23, *index + 5, 0) == 93 )
    {
      v63 = System_String__Substring_64222852(v23, *index, 6, 0);
      if ( System_String__op_Equality(v63, (System_String_o *)StringLiteral_15893/*"[/sub]"*/, 0)
        || System_String__op_Equality(v63, (System_String_o *)StringLiteral_15894/*"[/sup]"*/, 0) )
      {
        *sub = 0;
LABEL_155:
        v26 = *index + 6;
        goto LABEL_139;
      }
      if ( System_String__op_Equality(v63, (System_String_o *)StringLiteral_15896/*"[/url]"*/, 0) )
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
        v134 = NGUIText__ParseColor24(v23, v67 + 1, v66);
        r = v134.fields.r;
        g = v134.fields.g;
        b = v134.fields.b;
        v71 = NGUIMath__ColorToInt(v134, 0);
        v72 = NGUIMath__DecimalToHex24(v71 >> 8, 0);
        text = System_String__Substring_64222852(v23, *index + 1, 6, 0);
        if ( text )
        {
          v73 = System_String__ToUpper(text, 0);
          if ( !System_String__op_Inequality(v72, v73, 0) )
          {
            if ( colors )
            {
              v135 = BetterList_Color___get_Item(
                       colors,
                       colors->fields.size - 1,
                       (const MethodInfo_33A443C *)Method_BetterList_Color__get_Item__);
              a = v135.fields.a;
              if ( v135.fields.a != 1.0 && premultiply )
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
                r = static_fields[58] + (float)(v77 * (float)(r - static_fields[58]));
                g = static_fields[59] + (float)(v77 * (float)(g - static_fields[59]));
                b = static_fields[60] + (float)(v77 * (float)(b - static_fields[60]));
                a = static_fields[61] + (float)(v77 * (float)(a - static_fields[61]));
              }
              v136.fields.r = r;
              v136.fields.g = g;
              v136.fields.b = b;
              v136.fields.a = a;
              BetterList_Color___Add(colors, v136, (const MethodInfo_33A4650 *)Method_BetterList_Color__Add__);
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
          v137 = NGUIText__ParseColor32(v23, v80 + 1, v79);
          v128 = v137.fields.b;
          v130 = v137.fields.r;
          v126 = v137.fields.g;
          itema = v137.fields.a;
          v81 = NGUIMath__ColorToInt(v137, 0);
          v82 = NGUIMath__DecimalToHex32(v81, 0);
          text = System_String__Substring_64222852(v23, *index + 1, 8, 0);
          if ( text )
          {
            v83 = System_String__ToUpper(text, 0);
            if ( !System_String__op_Inequality(v82, v83, 0) )
            {
              if ( colors )
              {
                if ( itema != 1.0 && premultiply )
                {
                  v84 = NGUIText_TypeInfo;
                  if ( !NGUIText_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                    v84 = NGUIText_TypeInfo;
                  }
                  v85.n128_u64[0] = __PAIR64__(LODWORD(v126), LODWORD(v130));
                  v85.n128_u64[1] = __PAIR64__(LODWORD(itema), LODWORD(v128));
                  v86 = fminf(itema, 1.0);
                  if ( itema < 0.0 )
                    v86 = 0.0;
                  v87 = vaddq_f32(
                          (float32x4_t)v84->static_fields->mInvisible,
                          vmulq_n_f32(vsubq_f32(v85, (float32x4_t)v84->static_fields->mInvisible), v86));
                  v126 = v87.n128_f32[1];
                  v130 = v87.n128_f32[0];
                  itema = v87.n128_f32[3];
                  v128 = v87.n128_f32[2];
                }
                v138.fields.b = v128;
                v138.fields.r = v130;
                v138.fields.g = v126;
                v138.fields.a = itema;
                BetterList_Color___Add(colors, v138, (const MethodInfo_33A4650 *)Method_BetterList_Color__Add__);
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
          v88 = System_String__get_Chars(v23, v80 + 14, 0);
          v90 = *index;
          if ( v88 == 93 )
          {
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v139 = NGUIText__ParseColor24(v23, v90 + 1, v89);
            v91 = v139.fields.r;
            v92 = v139.fields.g;
            v93 = v139.fields.b;
            v94 = v139.fields.a;
            v95 = NGUIMath__ColorToInt(v139, 0);
            v96 = NGUIMath__DecimalToHex24(v95 >> 8, 0);
            text = System_String__Substring_64222852(v23, *index + 1, 6, 0);
            if ( text )
            {
              v97 = System_String__ToUpper(text, 0);
              if ( System_String__op_Inequality(v96, v97, 0) )
                return 0;
              v99 = *index;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v140 = NGUIText__ParseColor24(v23, v99 + 8, v98);
              v100 = v140.fields.r;
              v101 = v140.fields.g;
              v102 = v140.fields.b;
              v103 = v140.fields.a;
              v104 = NGUIMath__ColorToInt(v140, 0);
              v105 = NGUIMath__DecimalToHex24(v104 >> 8, 0);
              text = System_String__Substring_64222852(v23, *index + 8, 6, 0);
              if ( text )
              {
                v106 = System_String__ToUpper(text, 0);
                if ( !System_String__op_Inequality(v105, v106, 0) )
                {
                  if ( gradientColors )
                  {
                    v141.fields.r = v91;
                    v141.fields.g = v92;
                    v141.fields.b = v93;
                    v141.fields.a = v94;
                    BetterList_Color___Add(
                      gradientColors,
                      v141,
                      (const MethodInfo_33A4650 *)Method_BetterList_Color__Add__);
                    v142.fields.r = v100;
                    v142.fields.g = v101;
                    v142.fields.b = v102;
                    v142.fields.a = v103;
                    BetterList_Color___Add(
                      gradientColors,
                      v142,
                      (const MethodInfo_33A4650 *)Method_BetterList_Color__Add__);
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
            if ( v90 + 19 > stringLength || System_String__get_Chars(v23, v90 + 18, 0) != 93 )
              return 0;
            v108 = *index;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v143 = NGUIText__ParseColor32(v23, v108 + 1, v107);
            v109 = v143.fields.r;
            v110 = v143.fields.g;
            v111 = v143.fields.b;
            v112 = v143.fields.a;
            v113 = NGUIMath__ColorToInt(v143, 0);
            v114 = NGUIMath__DecimalToHex32(v113, 0);
            text = System_String__Substring_64222852(v23, *index + 1, 8, 0);
            if ( text )
            {
              v115 = System_String__ToUpper(text, 0);
              if ( System_String__op_Inequality(v114, v115, 0) )
                return 0;
              v117 = *index;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v144 = NGUIText__ParseColor32(v23, v117 + 10, v116);
              v118 = v144.fields.r;
              v119 = v144.fields.g;
              v120 = v144.fields.b;
              v121 = v144.fields.a;
              v122 = NGUIMath__ColorToInt(v144, 0);
              v123 = NGUIMath__DecimalToHex32(v122, 0);
              text = System_String__Substring_64222852(v23, *index + 10, 8, 0);
              if ( text )
              {
                v124 = System_String__ToUpper(text, 0);
                if ( !System_String__op_Inequality(v123, v124, 0) )
                {
                  if ( gradientColors )
                  {
                    v145.fields.r = v109;
                    v145.fields.g = v110;
                    v145.fields.b = v111;
                    v145.fields.a = v112;
                    BetterList_Color___Add(
                      gradientColors,
                      v145,
                      (const MethodInfo_33A4650 *)Method_BetterList_Color__Add__);
                    v146.fields.r = v118;
                    v146.fields.g = v119;
                    v146.fields.b = v120;
                    v146.fields.a = v121;
                    BetterList_Color___Add(
                      gradientColors,
                      v146,
                      (const MethodInfo_33A4650 *)Method_BetterList_Color__Add__);
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
    v64 = System_String__IndexOf_64233952(v23, 0x5Du, *index + 4, 0);
    if ( v64 == -1 )
      v26 = v23->fields._stringLength;
    else
      v26 = v64 + 1;
LABEL_139:
    *index = v26;
    return 1;
  }
  v32 = System_String__IndexOf_64235320(v23, (System_String_o *)StringLiteral_16114/*"]"*/, *index + 3, 0);
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
  v39 = System_String__Substring_64222852(v23, v34, v32 - *index - 3, 0);
  if ( System_String__IsNullOrEmpty(v39, 0) )
    goto LABEL_113;
  text = (System_String_o *)NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  if ( !v39
    || (text = (System_String_o *)System_String__Split_64226120(
                                    v39,
                                    NGUIText_TypeInfo->static_fields->PARAM_SPLIT_CHAR,
                                    1,
                                    0)) == 0 )
  {
LABEL_222:
    sub_1C7BD40(text, index);
  }
  klass = (int)text[1].klass;
  v41 = text;
  if ( klass >= 1 )
  {
    v125 = 0;
    v127 = 0;
    v129 = 0;
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
        sub_1C7BD48(text);
      text = (System_String_o *)NGUIText_TypeInfo;
      v47 = (System_String_o *)*((_QWORD *)&v41[1].monitor + (int)v42);
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      if ( !v47 )
        goto LABEL_222;
      text = (System_String_o *)System_String__Split_64226004(
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
        text = (System_String_o *)System_Single__TryParse_65772452(v50, 167, InvariantCulture, &result, 0);
        if ( ((unsigned __int8)text & 1) != 0 )
        {
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_25119/*"x"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            v52 = (v43 & 1) == 0;
            v43 = 1;
            if ( v52 )
              v36 = result;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_25221/*"y"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            v52 = (v44 & 1) == 0;
            v44 = 1;
            if ( v52 )
              v35 = result;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_24970/*"w"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            if ( (item & 1) == 0 )
              v37 = result;
            item = 1;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_20087/*"h"*/, 0);
          if ( ((unsigned __int8)text & 1) != 0 )
          {
            if ( (v129 & 1) == 0 )
              v46 = result;
            v129 = 1;
            goto LABEL_91;
          }
          text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_18810/*"e"*/, 0);
          if ( ((unsigned __int8)text & 1) == 0 )
          {
            text = (System_String_o *)System_String__op_Equality(v49, (System_String_o *)StringLiteral_19879/*"g"*/, 0);
            if ( ((unsigned __int8)text & 1) != 0 )
            {
              if ( (v125 & 1) == 0 )
                v38 = result;
              v125 = 1;
            }
            goto LABEL_91;
          }
          if ( (v127 & 1) != 0 )
            goto LABEL_90;
          if ( result != 1.0 )
          {
            v45 = 0;
LABEL_90:
            v127 = 1;
            goto LABEL_91;
          }
          v127 = 1;
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
  v30 = 1;
  *isDiagonalLine = 1;
  diagonalLineInfo->fields._Slope_k__BackingField = v35;
  diagonalLineInfo->fields._Length_k__BackingField = v36;
  diagonalLineInfo->fields._Width_k__BackingField = v37;
  diagonalLineInfo->fields._Offset_k__BackingField = v46;
  diagonalLineInfo->fields._LineEdge_k__BackingField = v45;
  diagonalLineInfo->fields._LineGradientAdjust_k__BackingField = v38;
  return v30;
}


void NGUIText__Prepare(System_String_o *text, const MethodInfo *method)
{
  NGUIText_c *v3; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  __int64 v5; // x1
  NGUIText_c *v6; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  UnityEngine_Font_o *v8; // x0

  if ( (byte_4CF2DD7 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2DD7 = 1;
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
      sub_1C7BD40(0, v5);
    UnityEngine_Font__RequestCharactersInTexture(v8, text, static_fields->finalSize, static_fields->fontStyle, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Object_o *bitmapFont; // x25
  bool v30; // w0
  const MethodInfo *v31; // x2
  int32_t v32; // w25
  float v33; // s1
  NGUIText_c *v34; // x0
  float m_Width; // s11
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
  __int128 v86; // q0
  struct BetterList_Color__o *mColors; // x9
  int32_t v88; // w26
  int v89; // w24
  struct NGUIText_StaticFields *v90; // x9
  float32x2_t v91; // d2
  float v92; // v2.s[1]
  float v93; // v0.s[1]
  float v94; // v0.s[1]
  int v95; // v2.s[1]
  NGUIText_c *v96; // x0
  struct NGUIText_StaticFields *v97; // x8
  NGUIText_c *v98; // x0
  float y; // s11
  float x; // s13
  float v101; // s10
  float v102; // s12
  float advance; // s8
  float v104; // s0
  float v105; // s14
  double v106; // d0
  long double v107; // q1
  long double v108; // q2
  long double v109; // q3
  int32_t v110; // w25
  double v111; // d0
  double v112; // d1
  double v113; // d1
  NGUIText_c *v114; // x0
  struct NGUIText_StaticFields *v115; // x8
  float v116; // s3
  float v117; // s13
  float v118; // s10
  float v119; // s12
  int v120; // w10
  float v121; // s11
  float finalLineHeight; // s0
  NGUIText_c *v123; // x0
  struct NGUIText_StaticFields *v124; // x8
  int v125; // s15
  int32_t v126; // w24
  float finalSpacingX; // s13
  float v128; // s14
  long double inited; // q0
  long double v130; // q1
  long double v131; // q2
  long double v132; // q3
  float v133; // s8
  float m_YMin; // s10
  float v135; // s11
  float v136; // s12
  NGUIText_c *v137; // x0
  int v138; // w24
  UnityEngine_Color32_o v139; // x1
  unsigned __int64 v140; // x26
  int v141; // w24
  UnityEngine_Color32_o v142; // x1
  NGUIText_c *v143; // x0
  int v144; // w28
  struct NGUIText_StaticFields *v145; // x8
  long double v146; // q0
  float v147; // s14
  int32_t v148; // w28
  float v149; // s0
  int v150; // w28
  NGUIText_c *v151; // x0
  uint32_t cctor_finished; // w8
  struct NGUIText_StaticFields *v153; // x9
  float v154; // s8
  NGUIText_c *v155; // x0
  UnityEngine_Object_o *v156; // x29
  float v157; // s0
  float v158; // s1
  float v159; // s2
  float v160; // s3
  unsigned int v161; // w28
  unsigned int v162; // w29
  int32_t channel; // w8
  struct NGUIText_StaticFields *v164; // x8
  struct BetterList_Color__o *mGradientColors; // x8
  _BOOL4 v166; // w29
  int v167; // w28
  UnityEngine_Color32_o v168; // x1
  float v169; // s8
  float v170; // s0
  float v171; // s1
  float v172; // s8
  int32_t v173; // w0
  long double v174; // q1
  long double v175; // q2
  long double v176; // q3
  long double v177; // q0
  int v178; // w0
  NGUIText_c *v179; // x8
  unsigned int v180; // w9
  unsigned int i; // w26
  UnityEngine_Color32_o rgba; // x1
  UnityEngine_Color32_o v183; // x1
  UnityEngine_Color32_o v184; // x1
  UnityEngine_Color32_o v185; // x1
  unsigned int v186; // w0
  UnityEngine_Color32_o v187; // x26
  int v188; // w28
  UnityEngine_Color32_o v189; // x1
  _BOOL4 v190; // w26
  unsigned __int64 v191; // x29
  float v192; // s10
  struct NGUIText_StaticFields *v193; // x8
  struct UnityEngine_Color32_o s_c1; // x9
  unsigned __int64 v195; // x10
  unsigned __int64 v196; // x9
  float v197; // s11
  float v198; // s15
  float v199; // s12
  float v200; // s8
  float v201; // s15
  float v202; // s11
  const MethodInfo *v203; // x5
  NGUIText_c *v204; // x0
  float v205; // s8
  float v206; // s0 OVERLAPPED
  int v207; // s2
  int v208; // s1
  NGUIText_c *v209; // x0
  int32_t v210; // w26
  struct NGUIText_StaticFields *v211; // x8
  float v212; // s12
  float v213; // s13
  int32_t v214; // w29
  const MethodInfo *v215; // x5
  int32_t v216; // w26
  const MethodInfo *v217; // x5
  int32_t v218; // w29
  const MethodInfo *v219; // x5
  int32_t v220; // w26
  const MethodInfo *v221; // x5
  int32_t v222; // w29
  const MethodInfo *v223; // x5
  int32_t v224; // w26
  const MethodInfo *v225; // x5
  const MethodInfo *v226; // x5
  float v227; // s10
  float v228; // s0
  float v229; // s2
  float v230; // s1
  int Slope_k__BackingField; // w8
  float v232; // s2
  float v233; // s8
  float v234; // s0
  float v235; // s6
  float v236; // s4
  float v237; // s2
  float v238; // s3
  float v239; // s11
  float v240; // s3
  float v241; // s2
  float Length_k__BackingField; // s10
  float v243; // s1
  float v244; // s13
  float v245; // s12
  float v246; // s0
  float v247; // s1
  float v248; // s0
  float v249; // s2
  float v250; // s0
  float v251; // s1
  struct UnityEngine_Vector2_StaticFields *v252; // x8
  float v253; // s1
  float v254; // s13
  float v255; // s0
  long double v256; // q0
  long double v257; // q1
  long double v258; // q2
  long double v259; // q3
  float Width_k__BackingField; // s15
  float v261; // s10
  float v262; // s14
  float *v263; // x26
  float v264; // s2
  float v265; // s8
  struct NGUIText_StaticFields *v266; // x8
  float v267; // s8
  float v268; // s1
  float v269; // s11
  float v270; // s13
  struct BetterList_Color__o *v271; // x8
  UnityEngine_Color32_o v272; // x1
  UnityEngine_Color32_o v273; // x1
  UnityEngine_Color32_o v274; // x1
  UnityEngine_Color32_o v275; // x1
  float32x2_t v276; // d12
  float v277; // s15
  float v278; // s0
  float v279; // s1
  float v280; // s2
  UnityEngine_Color32_o v281; // x1
  float v282; // s8
  float v283; // s10
  float v284; // s15
  long double v285; // q1
  long double v286; // q2
  long double v287; // q3
  long double v288; // q0
  UnityEngine_Color32_o v289; // x1
  long double v290; // q1
  long double v291; // q2
  long double v292; // q3
  long double v293; // q0
  UnityEngine_Color32_o v294; // x1
  long double v295; // q1
  long double v296; // q2
  long double v297; // q3
  long double v298; // q0
  UnityEngine_Color32_o v299; // x1
  float v300; // s14
  int32_t v301; // w26
  float v302; // s13
  NGUIText_GlyphInfo_o *v303; // x0
  float *v304; // x26
  NGUIText_c *v305; // x0
  UnityEngine_Object_o *v306; // x29
  bool v307; // w0
  float v308; // s0
  float v309; // s1
  float v310; // s2
  float v311; // s3
  unsigned int v312; // w28
  float v313; // s8
  unsigned int v314; // w29
  float v315; // s11
  float v316; // s12
  unsigned __int64 v317; // x29
  __int64 v318; // x8
  unsigned __int64 v319; // x9
  __int64 v320; // x8
  float v321; // s13
  float v322; // s14
  float v323; // s10
  float v324; // s13
  long double v325; // q0
  long double v326; // q1
  long double v327; // q2
  long double v328; // q3
  struct NGUIText_StaticFields *v329; // x8
  struct BetterList_Color__o *v330; // x8
  int v331; // w28
  UnityEngine_Color32_o v332; // x1
  float v333; // s8
  float v334; // s0
  float v335; // s1
  float v336; // s8
  float32x2_t v337; // d9
  int32_t v338; // w0
  long double v339; // q1
  long double v340; // q2
  long double v341; // q3
  long double v342; // q0
  int v343; // w8
  unsigned int v344; // w10
  unsigned int v345; // w26
  UnityEngine_Color32_o v346; // x1
  UnityEngine_Color32_o v347; // x1
  UnityEngine_Color32_o v348; // x1
  UnityEngine_Color32_o v349; // x1
  NGUIText_c *v350; // x0
  struct NGUIText_StaticFields *v351; // x8
  const MethodInfo *v352; // [xsp+38h] [xbp-1C8h]
  int v353; // [xsp+48h] [xbp-1B8h]
  float v354; // [xsp+50h] [xbp-1B0h]
  float v355; // [xsp+54h] [xbp-1ACh]
  float v356; // [xsp+58h] [xbp-1A8h]
  int v357; // [xsp+5Ch] [xbp-1A4h]
  float v358; // [xsp+5Ch] [xbp-1A4h]
  _BOOL4 v359; // [xsp+60h] [xbp-1A0h]
  float v360; // [xsp+64h] [xbp-19Ch]
  float v361; // [xsp+68h] [xbp-198h]
  float v362; // [xsp+6Ch] [xbp-194h]
  float m_XMin; // [xsp+70h] [xbp-190h]
  int32_t v364; // [xsp+74h] [xbp-18Ch]
  float v365; // [xsp+78h] [xbp-188h]
  float v366; // [xsp+7Ch] [xbp-184h]
  unsigned __int64 v367; // [xsp+80h] [xbp-180h]
  int32_t stringLength; // [xsp+8Ch] [xbp-174h]
  float32x2_t v369; // [xsp+90h] [xbp-170h]
  unsigned __int64 v370; // [xsp+98h] [xbp-168h]
  float v371; // [xsp+A0h] [xbp-160h]
  float v372; // [xsp+A0h] [xbp-160h]
  float32x2_t v373; // [xsp+B8h] [xbp-148h]
  float32x2_t v374; // [xsp+C0h] [xbp-140h]
  float32x2_t v375; // [xsp+C8h] [xbp-138h]
  float v376; // [xsp+D0h] [xbp-130h]
  float v377; // [xsp+D0h] [xbp-130h]
  float v378; // [xsp+D0h] [xbp-130h]
  float32x2_t item; // [xsp+E0h] [xbp-120h]
  float itema; // [xsp+E0h] [xbp-120h]
  float itemb; // [xsp+E0h] [xbp-120h]
  float itemc; // [xsp+E0h] [xbp-120h]
  float32x2_t v383; // [xsp+F0h] [xbp-110h]
  __int128 v384; // [xsp+F0h] [xbp-110h]
  __int128 v385; // [xsp+F0h] [xbp-110h]
  float v386; // [xsp+F0h] [xbp-110h]
  float v387; // [xsp+F0h] [xbp-110h]
  unsigned __int32 v388; // [xsp+F4h] [xbp-10Ch]
  int32_t index; // [xsp+10Ch] [xbp-F4h] BYREF
  NGUIText_DiagonalLineInfo_o diagonalLineInfo; // [xsp+110h] [xbp-F0h] BYREF
  bool v391; // [xsp+134h] [xbp-CCh] BYREF
  bool spGradient; // [xsp+138h] [xbp-C8h] BYREF
  bool isOutline; // [xsp+13Ch] [xbp-C4h] BYREF
  bool ignoreColor; // [xsp+140h] [xbp-C0h] BYREF
  bool strike; // [xsp+144h] [xbp-BCh] BYREF
  bool underline; // [xsp+148h] [xbp-B8h] BYREF
  bool italic; // [xsp+14Ch] [xbp-B4h] BYREF
  bool bold; // [xsp+150h] [xbp-B0h] BYREF
  int32_t sub; // [xsp+154h] [xbp-ACh] BYREF
  double iptr; // [xsp+158h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o v401; // 0:s0.4,4:s1.4
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
  UnityEngine_Vector3_o v413; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Color_o v439; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o uvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  long double v441; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Color_o v442; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v443; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Color_o v444; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4CF2DEB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector3__Add__);
    sub_1C7BAE8(&Method_BetterList_Color32__Add__);
    sub_1C7BAE8(&Method_BetterList_Color__Add__);
    sub_1C7BAE8(&Method_BetterList_Vector2__Add__);
    sub_1C7BAE8(&Method_BetterList_Color__Clear__);
    sub_1C7BAE8(&Method_BetterList_Color__get_Item__);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2DEB = 1;
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
    v439.fields.r = 1.0;
    v439.fields.g = 1.0;
    v439.fields.b = 1.0;
    v439.fields.a = 1.0;
    BetterList_Color___Add(
      (BetterList_Color__o *)IsNullOrEmpty,
      v439,
      (const MethodInfo_33A4650 *)Method_BetterList_Color__Add__);
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
    v383.n64_u64[0] = *(unsigned __int64 *)&v18;
    IsNullOrEmpty = sub_2597300(0, v18, v25, v19, v26);
    if ( !text )
      goto LABEL_416;
    v27 = IsNullOrEmpty;
    stringLength = text->fields._stringLength;
    v28 = NGUIText_TypeInfo->static_fields;
    *(float *)&v8 = v28->pixelDensity;
    sub = 0;
    bold = 0;
    italic = 0;
    underline = 0;
    strike = 0;
    ignoreColor = 0;
    isOutline = 0;
    spGradient = 0;
    v391 = 0;
    *(_OWORD *)&diagonalLineInfo.fields._Slope_k__BackingField = xmmword_CF5E70;
    *(_QWORD *)&diagonalLineInfo.fields._LineEdge_k__BackingField = 0;
    bitmapFont = (UnityEngine_Object_o *)v28->bitmapFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v30 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
    v32 = stringLength;
    LODWORD(v5) = 0;
    LODWORD(v7) = 0;
    m_XMin = 0.0;
    v33 = 0.0;
    v362 = 0.0;
    if ( v30 )
    {
      v34 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v34 = NGUIText_TypeInfo;
      }
      IsNullOrEmpty = (__int64)v34->static_fields->bitmapFont;
      if ( !IsNullOrEmpty )
        goto LABEL_416;
      v6 = v8;
      uvRect = UIFont__get_uvRect((UIFont_o *)IsNullOrEmpty, 0);
      m_XMin = uvRect.fields.m_XMin;
      IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->bitmapFont;
      if ( !IsNullOrEmpty )
        goto LABEL_416;
      v7 = *(long double *)&uvRect.fields.m_YMin;
      m_Width = uvRect.fields.m_Width;
      v5 = *(long double *)&uvRect.fields.m_Height;
      IsNullOrEmpty = UIFont__get_texWidth((UIFont_o *)IsNullOrEmpty, 0);
      if ( !NGUIText_TypeInfo->static_fields->bitmapFont )
        goto LABEL_416;
      v362 = m_Width / (float)(int)IsNullOrEmpty;
      v33 = *(float *)&v5 / (float)UIFont__get_texHeight(NGUIText_TypeInfo->static_fields->bitmapFont, 0);
      v8 = v6;
    }
    index = 0;
    if ( stringLength >= 1 )
    {
      v361 = v33;
      v375.n64_u64[0] = vmul_f32(v383, v21).n64_u64[0];
      *(float32x2_t *)&v9 = vmul_f32(item, v22);
      v369.n64_u64[0] = vmul_f32(item, v24).n64_u64[0];
      v360 = *(float *)&v5 + *(float *)&v7;
      v366 = *(float *)&v8 * (float)finalSize;
      LODWORD(v370) = v27;
      v367 = v27 >> 24;
      v36 = 0;
      LODWORD(v15) = 0;
      *(float32x2_t *)&v6 = vmul_f32(v383, v23);
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
            NGUIText__Align(verts, size, *(float *)&v5 - v41->finalSpacingX, v31);
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
          if ( NGUIText__ParseSymbol_49834612(
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
                 &v391,
                 &diagonalLineInfo,
                 v352) )
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
              *(UnityEngine_Color_o *)&v441 = BetterList_Color___get_Item(
                                                (BetterList_Color__o *)IsNullOrEmpty,
                                                *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                                                (const MethodInfo_33A443C *)Method_BetterList_Color__get_Item__);
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
              *(UnityEngine_Color_o *)&v441 = BetterList_Color___get_Item(
                                                (BetterList_Color__o *)IsNullOrEmpty,
                                                *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                                                (const MethodInfo_33A443C *)Method_BetterList_Color__get_Item__);
              *((float *)&v441 + 3) = a * *((float *)&v441 + 3);
              *(float *)&v441 = r * *(float *)&v441;
              *((float *)&v441 + 1) = g * *((float *)&v441 + 1);
              *((float *)&v441 + 2) = b * *((float *)&v441 + 2);
              v5 = v80;
              v6 = v79;
              mAlpha = NGUIText_TypeInfo->static_fields->mAlpha;
            }
            *((float *)&v441 + 3) = *((float *)&v441 + 3) * mAlpha;
            v376 = *((float *)&v441 + 2);
            itema = *(float *)&v441;
            v371 = *((float *)&v441 + 1);
            v384 = *(_OWORD *)((char *)&v441 + 12);
            IsNullOrEmpty = sub_2597300(
                              0,
                              v441,
                              *(long double *)((char *)&v441 + 4),
                              *(long double *)((char *)&v441 + 8),
                              *(long double *)((char *)&v441 + 12));
            v85 = NGUIText_TypeInfo;
            v370 = IsNullOrEmpty;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v85 = NGUIText_TypeInfo;
            }
            v86 = v384;
            mColors = v85->static_fields->mColors;
            if ( !mColors )
              goto LABEL_416;
            v88 = 0;
            v367 = v370 >> 24;
            v89 = (mColors->fields.size - 2) & ~((mColors->fields.size - 2) >> 31);
            while ( 1 )
            {
              v385 = v86;
              if ( !v85->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v85);
                v85 = NGUIText_TypeInfo;
              }
              v90 = v85->static_fields;
              v91.n64_f32[0] = itema;
              if ( v89 == v88 )
                break;
              IsNullOrEmpty = (__int64)v90->mColors;
              if ( !IsNullOrEmpty )
                goto LABEL_416;
              v442 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       v88,
                       (const MethodInfo_33A443C *)Method_BetterList_Color__get_Item__);
              v86 = v385;
              v85 = NGUIText_TypeInfo;
              ++v88;
              *(float *)&v86 = *(float *)&v385 * v442.fields.a;
            }
            if ( v90->gradient )
            {
              if ( !v85->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v85);
                v85 = NGUIText_TypeInfo;
                v91.n64_f32[0] = itema;
                v90 = NGUIText_TypeInfo->static_fields;
              }
              v91.n64_f32[1] = v371;
              v375.n64_u64[0] = vmul_f32(v91, *(float32x2_t *)&v90->gradientBottom.fields.r).n64_u64[0];
              *(float32x2_t *)&v9 = vmul_f32(
                                      (float32x2_t)__PAIR64__(v385, LODWORD(v376)),
                                      *(float32x2_t *)&v90->gradientBottom.fields.b);
              *(float32x2_t *)&v6 = vmul_f32(v91, *(float32x2_t *)&v90->gradientTop.fields.r);
              v369.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v385, LODWORD(v376)),
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
              v443 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 2,
                       (const MethodInfo_33A443C *)Method_BetterList_Color__get_Item__);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
              if ( !IsNullOrEmpty )
                goto LABEL_416;
              v92 = v443.fields.a;
              v93 = v443.fields.g;
              *(float32x2_t *)&v9 = vmul_f32(
                                      (float32x2_t)__PAIR64__(v385, LODWORD(v376)),
                                      *(float32x2_t *)&v443.fields.b);
              v375.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v371), LODWORD(itema)),
                                  *(float32x2_t *)&v443.fields.r).n64_u64[0];
              v444 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                       (const MethodInfo_33A443C *)Method_BetterList_Color__get_Item__);
              v94 = v371;
              *(float32x2_t *)&v6 = vmul_f32(
                                      (float32x2_t)__PAIR64__(LODWORD(v444.fields.g), LODWORD(itema)),
                                      *(float32x2_t *)&v444.fields.r);
              v95 = v385;
              v369.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v444.fields.a), LODWORD(v376)),
                                  *(float32x2_t *)&v444.fields.b).n64_u64[0];
            }
            if ( spGradient )
            {
              v96 = NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v96 = NGUIText_TypeInfo;
              }
              v97 = v96->static_fields;
              *(float32x2_t *)&v9 = vmul_f32(
                                      (float32x2_t)__PAIR64__(v385, LODWORD(v376)),
                                      *(float32x2_t *)&v97->specificGradientBottom.fields.b);
              *(float32x2_t *)&v6 = vmul_f32(
                                      (float32x2_t)__PAIR64__(LODWORD(v371), LODWORD(itema)),
                                      *(float32x2_t *)&v97->specificGradientTop.fields.r);
              v375.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v371), LODWORD(itema)),
                                  *(float32x2_t *)&v97->specificGradientBottom.fields.r).n64_u64[0];
              v369.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v385, LODWORD(v376)),
                                  *(float32x2_t *)&v97->specificGradientTop.fields.b).n64_u64[0];
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
          Symbol = NGUIText__GetSymbol(text, v48, v32, v38);
          if ( Symbol )
          {
            v50 = Symbol;
            v51 = NGUIText_TypeInfo;
            mOffsetX = v50->fields.mOffsetX;
            v373.n64_u64[0] = *(unsigned __int64 *)&v9;
            v374.n64_u64[0] = *(unsigned __int64 *)&v6;
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
            if ( !byte_4CE8569 )
            {
              sub_1C7BAE8(&System_Math_TypeInfo);
              byte_4CE8569 = 1;
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
            v114 = NGUIText_TypeInfo;
            v115 = NGUIText_TypeInfo->static_fields;
            v116 = fontScale * (float)mOffsetY;
            v117 = *(float *)&v6 + (float)(fontScale * (float)mOffsetX);
            v118 = v117 + (float)(fontScale * (float)mWidth);
            v119 = -(float)(v37 + v116);
            v120 = (int)v62;
            if ( v62 == INFINITY )
              v120 = 0x80000000;
            v121 = v119 - (float)(fontScale * (float)mHeight);
            if ( v120 > v115->regionWidth )
            {
              if ( *(float *)&v6 == 0.0 )
                return;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v114 = NGUIText_TypeInfo;
                v115 = NGUIText_TypeInfo->static_fields;
              }
              if ( v115->alignment != 1 && size < verts->fields.size )
              {
                if ( !v114->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v114);
                  v115 = NGUIText_TypeInfo->static_fields;
                }
                NGUIText__Align(verts, size, *(float *)&v6 - v115->finalSpacingX, v60);
                size = verts->fields.size;
                v114 = NGUIText_TypeInfo;
              }
              if ( !v114->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v114);
                v114 = NGUIText_TypeInfo;
              }
              v117 = v117 - *(float *)&v6;
              v118 = v118 - *(float *)&v6;
              LODWORD(v6) = 0;
              finalLineHeight = v114->static_fields->finalLineHeight;
              v121 = v121 - finalLineHeight;
              v119 = v119 - finalLineHeight;
              v37 = v37 + finalLineHeight;
            }
            v413.fields.z = 0.0;
            v413.fields.x = v117;
            v413.fields.y = v121;
            BetterList_Vector3___Add(verts, v413, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v414.fields.z = 0.0;
            v414.fields.x = v117;
            v414.fields.y = v119;
            BetterList_Vector3___Add(verts, v414, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v415.fields.z = 0.0;
            v415.fields.x = v118;
            v415.fields.y = v119;
            BetterList_Vector3___Add(verts, v415, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v416.fields.z = 0.0;
            v416.fields.x = v118;
            v416.fields.y = v121;
            BetterList_Vector3___Add(verts, v416, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v123 = NGUIText_TypeInfo;
            v386 = v37;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v123 = NGUIText_TypeInfo;
            }
            v124 = v123->static_fields;
            v125 = v50->fields.mAdvance;
            v126 = index;
            finalSpacingX = v124->finalSpacingX;
            v128 = v124->fontScale;
            v5 = v6;
            index = v126 + BMSymbol__get_length(v50, 0) - 1;
            if ( uvs )
            {
              v133 = v50->fields.mUV.fields.m_XMin;
              m_YMin = v50->fields.mUV.fields.m_YMin;
              v135 = m_YMin + v50->fields.mUV.fields.m_Height;
              v136 = v133 + v50->fields.mUV.fields.m_Width;
              v401.fields.x = v133;
              v401.fields.y = m_YMin;
              BetterList_Vector2___Add(uvs, v401, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
              v402.fields.x = v133;
              v402.fields.y = v135;
              BetterList_Vector2___Add(uvs, v402, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
              v403.fields.x = v136;
              v403.fields.y = v135;
              BetterList_Vector2___Add(uvs, v403, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
              v404.fields.x = v136;
              v404.fields.y = m_YMin;
              v5 = v6;
              BetterList_Vector2___Add(uvs, v404, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            }
            *(float *)&v5 = *(float *)&v5 + (float)(finalSpacingX + (float)(v128 * (float)v125));
            if ( cols )
            {
              v137 = NGUIText_TypeInfo;
              v37 = v386;
              *(float32x2_t *)&v9 = v373;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v137 = NGUIText_TypeInfo;
              }
              *(float32x2_t *)&v6 = v374;
              if ( v137->static_fields->symbolStyle == 2 )
              {
                v138 = 4;
                do
                {
                  v139 = (UnityEngine_Color32_o)(v370 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v367 << 24));
                  BetterList_Color32___Add(cols, v139, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
                  --v138;
                }
                while ( v138 );
              }
              else
              {
                LODWORD(inited) = 1.0;
                LODWORD(v130) = 1.0;
                LODWORD(v131) = 1.0;
                LODWORD(v132) = 1.0;
                v140 = sub_2597300(0, inited, v130, v131, v132) & 0xFFFFFF
                     | ((unsigned __int64)(unsigned __int8)v367 << 24);
                v141 = 4;
                do
                {
                  v142 = (UnityEngine_Color32_o)v140;
                  BetterList_Color32___Add(cols, v142, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
                  --v141;
                }
                while ( v141 );
              }
              v36 = 0;
              goto LABEL_194;
            }
            v37 = v386;
            v36 = 0;
LABEL_149:
            *(float32x2_t *)&v9 = v373;
            *(float32x2_t *)&v6 = v374;
            goto LABEL_194;
          }
          v42 = NGUIText_TypeInfo;
        }
        if ( !v42->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v42);
        Glyph = NGUIText__GetGlyph(Chars, v36, v31);
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
            v388 = v72.n128_u32[1];
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v72.n128_u32[1] = v388;
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
        v98 = NGUIText_TypeInfo;
        v374.n64_u64[0] = *(unsigned __int64 *)&v6;
        v6 = v5;
        x = v66->fields.v0.fields.x;
        y = v66->fields.v0.fields.y;
        v102 = v66->fields.v1.fields.x;
        v101 = v66->fields.v1.fields.y;
        advance = v66->fields.advance;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v98 = NGUIText_TypeInfo;
        }
        v104 = v98->static_fields->finalSpacingX;
        if ( v104 < 0.0 )
        {
          if ( !v98->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v98);
            v104 = NGUIText_TypeInfo->static_fields->finalSpacingX;
          }
          advance = advance + v104;
        }
        if ( !byte_4CE8569 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE8569 = 1;
        }
        v373.n64_u64[0] = *(unsigned __int64 *)&v9;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v105 = *(float *)&v6 + advance;
        *(double *)&v5 = (float)(*(float *)&v6 + advance);
        v106 = modf(*(double *)&v5, &iptr);
        if ( v105 >= 0.0 )
        {
          v110 = size;
          if ( v106 != 0.5 )
          {
            v111 = floor(*(double *)&v5 + 0.5);
            goto LABEL_156;
          }
          v111 = iptr;
          v112 = 1.0;
        }
        else
        {
          v110 = size;
          if ( v106 != -0.5 )
          {
            v111 = ceil(*(double *)&v5 + -0.5);
            goto LABEL_156;
          }
          v111 = iptr;
          v112 = -1.0;
        }
        v113 = v111 + v112;
        if ( ((__int64)v111 & 1) != 0 )
          v111 = v113;
LABEL_156:
        v143 = NGUIText_TypeInfo;
        DWORD1(v107) = 2146435072;
        if ( v111 == INFINITY )
          v144 = 0x80000000;
        else
          v144 = (int)v111;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v143 = NGUIText_TypeInfo;
        }
        v145 = v143->static_fields;
        v146 = v6;
        itemb = *(float *)&v6 + x;
        *(float *)&v8 = y - v37;
        v147 = v101 - v37;
        v377 = *(float *)&v6 + v102;
        if ( v144 <= v145->regionWidth )
        {
          v148 = v110;
          v32 = stringLength;
          v7 = v6;
        }
        else
        {
          v148 = v110;
          v32 = stringLength;
          if ( *(float *)&v6 == 0.0 )
            return;
          if ( !v143->_2.cctor_finished )
          {
            v146 = j_il2cpp_runtime_class_init_0(v143);
            v143 = NGUIText_TypeInfo;
            v145 = NGUIText_TypeInfo->static_fields;
          }
          if ( v145->alignment != 1 && v148 < verts->fields.size )
          {
            if ( !v143->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v143);
              v145 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, v148, *(float *)&v6 - v145->finalSpacingX, v31);
            v148 = verts->fields.size;
            v143 = NGUIText_TypeInfo;
          }
          if ( !v143->_2.cctor_finished )
          {
            v146 = j_il2cpp_runtime_class_init_0(v143);
            v143 = NGUIText_TypeInfo;
          }
          LODWORD(v7) = 0;
          v149 = v143->static_fields->finalLineHeight;
          itemb = itemb - *(float *)&v6;
          *(float *)&v8 = *(float *)&v8 - v149;
          v147 = v147 - v149;
          v37 = v37 + v149;
          v377 = v377 - *(float *)&v6;
        }
        *(float32x2_t *)&v6 = v374;
        v364 = v148;
        if ( !v143->_2.cctor_finished )
          v146 = j_il2cpp_runtime_class_init_0(v143);
        if ( Chars - 8201 < 3 || (v150 = Chars, Chars == 32) )
        {
          if ( underline )
          {
            v150 = 95;
          }
          else if ( strike )
          {
            v150 = 45;
          }
          else
          {
            v150 = Chars;
          }
        }
        v151 = NGUIText_TypeInfo;
        cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
        if ( !cctor_finished )
        {
          v146 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v151 = NGUIText_TypeInfo;
          cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
        }
        v153 = v151->static_fields;
        if ( v65 )
          v154 = (float)(v153->finalSpacingX + v66->fields.advance) * 0.75;
        else
          v154 = v153->finalSpacingX + v66->fields.advance;
        if ( !cctor_finished )
          v146 = j_il2cpp_runtime_class_init_0(v151);
        *(float *)&v5 = *(float *)&v7 + v154;
        if ( (unsigned int)(v150 - 8201) < 3 || (v372 = *(float *)&v5, v150 == 32) )
        {
          size = v364;
LABEL_193:
          v36 = Chars;
          *(float32x2_t *)&v9 = v373;
          goto LABEL_194;
        }
        if ( uvs )
        {
          v155 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v155 = NGUIText_TypeInfo;
          }
          v156 = (UnityEngine_Object_o *)v155->static_fields->bitmapFont;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v156, 0, 0) )
          {
            v157 = m_XMin + (float)(v362 * v66->fields.u0.fields.x);
            v158 = m_XMin + (float)(v362 * v66->fields.u2.fields.x);
            v159 = v360 - (float)(v361 * v66->fields.u0.fields.y);
            v160 = v360 - (float)(v361 * v66->fields.u2.fields.y);
            v66->fields.u0.fields.x = v157;
            v66->fields.u0.fields.y = v159;
            v66->fields.u2.fields.x = v158;
            v66->fields.u2.fields.y = v160;
            v66->fields.u1.fields.x = v157;
            v66->fields.u1.fields.y = v160;
            v66->fields.u3.fields.x = v158;
            v66->fields.u3.fields.y = v159;
          }
          v161 = 0;
          if ( bold )
            v162 = 4;
          else
            v162 = 1;
          do
          {
            BetterList_Vector2___Add(uvs, v66->fields.u0, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            BetterList_Vector2___Add(uvs, v66->fields.u1, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            BetterList_Vector2___Add(uvs, v66->fields.u2, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            BetterList_Vector2___Add(uvs, v66->fields.u3, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            ++v161;
          }
          while ( v161 < v162 );
        }
        v365 = *(float *)&v7;
        if ( !cols )
        {
          v166 = bold;
LABEL_250:
          size = v364;
          goto LABEL_251;
        }
        channel = v66->fields.channel;
        if ( channel != 15 && channel )
        {
          *(float *)&v146 = (float)((float)(unsigned __int8)v370 / 255.0) * 0.49;
          *(float *)&v107 = (float)((float)BYTE1(v370) / 255.0) * 0.49;
          *(float *)&v108 = (float)((float)BYTE2(v370) / 255.0) * 0.49;
          *(float *)&v109 = (float)((float)(unsigned __int8)v367 / 255.0) * 0.49;
          switch ( channel )
          {
            case 1:
              *(float *)&v108 = *(float *)&v108 + 0.51;
              break;
            case 2:
              *(float *)&v107 = *(float *)&v107 + 0.51;
              break;
            case 3:
              break;
            case 4:
              *(float *)&v146 = *(float *)&v146 + 0.51;
              break;
            default:
              if ( channel == 8 )
                *(float *)&v109 = *(float *)&v109 + 0.51;
              break;
          }
          v186 = sub_2597300(0, v146, v107, v108, v109);
          v166 = bold;
          v187 = (UnityEngine_Color32_o)v186;
          if ( bold )
            v188 = 16;
          else
            v188 = 4;
          do
          {
            v189 = v187;
            BetterList_Color32___Add(cols, v189, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
            --v188;
          }
          while ( v188 );
          goto LABEL_250;
        }
        IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          v146 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        v164 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
        if ( !spGradient && !v164->gradient )
        {
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v146 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            v164 = NGUIText_TypeInfo->static_fields;
          }
          mGradientColors = v164->mGradientColors;
          if ( !mGradientColors )
            goto LABEL_416;
          if ( mGradientColors->fields.size < 2 )
          {
            v166 = bold;
            if ( bold )
              v167 = 16;
            else
              v167 = 4;
            do
            {
              v168 = (UnityEngine_Color32_o)(v370 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v367 << 24));
              BetterList_Color32___Add(cols, v168, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
              --v167;
            }
            while ( v167 );
            goto LABEL_250;
          }
        }
        v169 = v66->fields.v0.fields.y;
        v357 = LODWORD(v8);
        if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
        {
          v146 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        v170 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
        *(float32x2_t *)&v7 = vsub_f32(v374, v375);
        size = v364;
        *(float32x2_t *)&v8 = vsub_f32(v369, v373);
        v171 = (float)(v366 + (float)(v169 / v170)) / v366;
        v172 = (float)(v366 + (float)(v66->fields.v1.fields.y / v170)) / v366;
        *(float *)&v146 = fminf(v171, 1.0);
        if ( v171 < 0.0 )
          *(float *)&v146 = 0.0;
        *(float32x2_t *)&v107 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v146);
        *(float32x2_t *)&v108 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v146);
        *(float32x2_t *)&v146 = vadd_f32(v375, *(float32x2_t *)&v107);
        *(float32x2_t *)&v108 = vadd_f32(v373, *(float32x2_t *)&v108);
        LODWORD(v107) = DWORD1(v146);
        LODWORD(v109) = DWORD1(v108);
        v173 = sub_2597300(0, v146, v107, v108, v109);
        *(float *)&v177 = fminf(v172, 1.0);
        if ( v172 < 0.0 )
          *(float *)&v177 = 0.0;
        *(float32x2_t *)&v174 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v177);
        *(float32x2_t *)&v175 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v177);
        *(float32x2_t *)&v177 = vadd_f32(v375, *(float32x2_t *)&v174);
        *(float32x2_t *)&v175 = vadd_f32(v373, *(float32x2_t *)&v175);
        LODWORD(v174) = DWORD1(v177);
        NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v173;
        LODWORD(v176) = DWORD1(v175);
        v178 = sub_2597300(0, v177, v174, v175, v176);
        v179 = NGUIText_TypeInfo;
        LODWORD(v8) = v357;
        *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v178;
        v166 = bold;
        if ( bold )
          v180 = 4;
        else
          v180 = 1;
        if ( v180 <= 1 )
          v180 = 1;
        for ( i = v180 - 1; ; --i )
        {
          if ( !v179->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v179);
          rgba = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
          BetterList_Color32___Add(cols, rgba, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          v183 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
          BetterList_Color32___Add(cols, v183, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          v184 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
          BetterList_Color32___Add(cols, v184, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          v185 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
          BetterList_Color32___Add(cols, v185, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          if ( !i )
            break;
          v179 = NGUIText_TypeInfo;
        }
LABEL_251:
        v190 = italic;
        v387 = v37;
        v359 = v166;
        if ( v166 )
        {
          v191 = 0;
          v6 = v8;
          v192 = v147 - *(float *)&v8;
          while ( 1 )
          {
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            }
            v193 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
            s_c1 = v193->s_c1;
            if ( !*(_QWORD *)&s_c1 )
              goto LABEL_416;
            v195 = *(unsigned int *)(*(_QWORD *)&s_c1 + 24LL);
            if ( v191 >= v195 || v191 + 1 >= v195 )
LABEL_417:
              sub_1C7BD48(IsNullOrEmpty);
            v196 = *(_QWORD *)&s_c1 + 4 * v191;
            v197 = *(float *)(v196 + 32);
            v198 = *(float *)(v196 + 36);
            if ( v190 )
            {
              if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
              {
                j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                v193 = NGUIText_TypeInfo->static_fields;
              }
              v199 = (float)((float)v193->fontSize * 0.1) * (float)(v192 / (float)v193->fontSize);
            }
            else
            {
              v199 = 0.0;
            }
            v200 = *(float *)&v6 + v198;
            v417.fields.z = 0.0;
            v417.fields.x = (float)(itemb + v197) - v199;
            v417.fields.y = *(float *)&v6 + v198;
            BetterList_Vector3___Add(verts, v417, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v201 = v147 + v198;
            v418.fields.x = (float)(itemb + v197) + v199;
            v418.fields.z = 0.0;
            v418.fields.y = v201;
            BetterList_Vector3___Add(verts, v418, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v419.fields.z = 0.0;
            v202 = v377 + v197;
            v419.fields.x = v202 + v199;
            v419.fields.y = v201;
            BetterList_Vector3___Add(verts, v419, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v420.fields.x = v202 - v199;
            v420.fields.z = 0.0;
            v420.fields.y = v200;
            BetterList_Vector3___Add(verts, v420, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v37 = v387;
            v191 += 2LL;
            if ( v191 == 8 )
              goto LABEL_271;
          }
        }
        if ( italic )
        {
          v204 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v204 = NGUIText_TypeInfo;
          }
          v205 = (float)((float)v204->static_fields->fontSize * 0.1)
               * (float)((float)(v147 - *(float *)&v8) / (float)v204->static_fields->fontSize);
          v421.fields.x = itemb - v205;
          v421.fields.z = 0.0;
          v421.fields.y = *(float *)&v8;
          BetterList_Vector3___Add(verts, v421, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v422.fields.x = itemb + v205;
          v422.fields.z = 0.0;
          v422.fields.y = v147;
          BetterList_Vector3___Add(verts, v422, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v423.fields.z = 0.0;
          v423.fields.x = v377 + v205;
          v423.fields.y = v147;
          BetterList_Vector3___Add(verts, v423, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v206 = v377 - v205;
        }
        else
        {
          v424.fields.z = 0.0;
          v424.fields.x = itemb;
          v424.fields.y = *(float *)&v8;
          BetterList_Vector3___Add(verts, v424, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v425.fields.z = 0.0;
          v425.fields.x = itemb;
          v425.fields.y = v147;
          BetterList_Vector3___Add(verts, v425, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v426.fields.z = 0.0;
          v426.fields.x = v377;
          v426.fields.y = v147;
          BetterList_Vector3___Add(verts, v426, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v206 = v377;
        }
        v207 = 0;
        v208 = LODWORD(v8);
        v6 = v8;
        BetterList_Vector3___Add(
          verts,
          *(UnityEngine_Vector3_o *)&v206,
          (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
LABEL_271:
        if ( isOutline )
        {
          v209 = NGUIText_TypeInfo;
          v210 = verts->fields.size;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v209 = NGUIText_TypeInfo;
          }
          v211 = v209->static_fields;
          v213 = v211->outlineDistance.fields.x;
          v212 = v211->outlineDistance.fields.y;
          NGUIText__ApplyEffect(verts, uvs, cols, v210 - 4, v210, v213 / 1.4142, -(float)(v212 / 1.4142), v203);
          v214 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v210, v214, -(float)(v213 / 1.4142), v212 / 1.4142, v215);
          v216 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v214, v216, v213 / 1.4142, v212 / 1.4142, v217);
          v218 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v216, v218, -(float)(v213 / 1.4142), -(float)(v212 / 1.4142), v219);
          v220 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v218, v220, -v213, 0.0, v221);
          v222 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v220, v222, v213, 0.0, v223);
          v224 = verts->fields.size;
          NGUIText__ApplyEffect(verts, uvs, cols, v222, v224, 0.0, v212, v225);
          NGUIText__ApplyEffect(verts, uvs, cols, v224, verts->fields.size, 0.0, -v212, v226);
          v37 = v387;
        }
        v227 = v365;
        if ( !v391 )
          goto LABEL_339;
        if ( diagonalLineInfo.fields._Offset_k__BackingField <= 0.0 )
        {
          v228 = fminf(-diagonalLineInfo.fields._Offset_k__BackingField, 1.0);
          v229 = v147;
        }
        else
        {
          v228 = fminf(diagonalLineInfo.fields._Offset_k__BackingField, 1.0);
          if ( diagonalLineInfo.fields._Offset_k__BackingField < 0.0 )
            v228 = 0.0;
          v229 = *(float *)&v6;
        }
        v230 = (float)(*(float *)&v6 + v147) * 0.5;
        Slope_k__BackingField = (int)diagonalLineInfo.fields._Slope_k__BackingField;
        v232 = (float)(v230 + (float)((float)(v229 - v230) * v228)) - v230;
        if ( diagonalLineInfo.fields._Slope_k__BackingField == INFINITY )
          Slope_k__BackingField = 0x80000000;
        v233 = v230 + v232;
        v234 = (float)Slope_k__BackingField;
        if ( diagonalLineInfo.fields._Slope_k__BackingField <= 0.0 )
        {
          v235 = 1.0;
          v240 = fminf(-(float)(diagonalLineInfo.fields._Slope_k__BackingField - v234), 1.0);
          v241 = (float)(v147 + v232) - v233;
          if ( (float)(diagonalLineInfo.fields._Slope_k__BackingField - v234) > 0.0 )
            v240 = 0.0;
          v239 = (float)(v233 + (float)(v241 * v240)) - (float)((float)(v147 - v230) * v234);
        }
        else
        {
          v235 = 1.0;
          v236 = fminf(diagonalLineInfo.fields._Slope_k__BackingField - v234, 1.0);
          v237 = (float)(*(float *)&v6 + v232) - v233;
          if ( (float)(diagonalLineInfo.fields._Slope_k__BackingField - v234) < 0.0 )
            v238 = 0.0;
          else
            v238 = v236;
          v239 = (float)((float)(*(float *)&v6 - v230) * v234) + (float)(v233 + (float)(v237 * v238));
        }
        if ( diagonalLineInfo.fields._Length_k__BackingField == INFINITY )
          Length_k__BackingField = -2147500000.0;
        else
          Length_k__BackingField = (float)(int)diagonalLineInfo.fields._Length_k__BackingField;
        v243 = fminf(diagonalLineInfo.fields._Length_k__BackingField - Length_k__BackingField, v235);
        if ( (float)(diagonalLineInfo.fields._Length_k__BackingField - Length_k__BackingField) < 0.0 )
          v244 = 0.0;
        else
          v244 = v243;
        if ( !byte_4CE7E5A )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE7E5A = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v245 = (float)(v233 + v233) - v239;
        v246 = (float)(v377 + itemb) * 0.5;
        v247 = v245 - v239;
        v356 = fmaxf(
                 (float)((float)(v365 - v246) * Length_k__BackingField)
               + (float)(v246 + (float)((float)(v365 - v246) * v244)),
                 0.0);
        v358 = (float)(v246 + v246) - v356;
        v248 = v358 - v356;
        v249 = sqrtf((float)(v247 * v247) + (float)(v248 * v248));
        if ( v249 <= 0.00001 )
        {
          if ( !byte_4CE7D39 )
          {
            sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
            byte_4CE7D39 = 1;
          }
          v252 = UnityEngine_Vector2_TypeInfo->static_fields;
          v250 = v252->zeroVector.fields.x;
          v251 = v252->zeroVector.fields.y;
        }
        else
        {
          v250 = v248 / v249;
          v251 = v247 / v249;
        }
        v253 = -v251;
        if ( diagonalLineInfo.fields._LineEdge_k__BackingField )
          v254 = 0.0;
        else
          v254 = v250;
        v255 = -1.0;
        if ( !diagonalLineInfo.fields._LineEdge_k__BackingField )
          v255 = v253;
        v355 = v255;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        IsNullOrEmpty = (__int64)NGUIText__GetGlyph(45, Chars, v31);
        if ( !IsNullOrEmpty )
          goto LABEL_416;
        Width_k__BackingField = diagonalLineInfo.fields._Width_k__BackingField;
        v261 = *(float *)(IsNullOrEmpty + 28);
        v262 = *(float *)(IsNullOrEmpty + 20);
        v263 = (float *)IsNullOrEmpty;
        if ( uvs )
        {
          v405.fields.x = *(float *)(IsNullOrEmpty + 32);
          v264 = *(float *)(IsNullOrEmpty + 36);
          v265 = diagonalLineInfo.fields._LineGradientAdjust_k__BackingField
               * (float)(vabds_f32(v264, *(float *)(IsNullOrEmpty + 52)) * 0.01);
          v405.fields.y = v264 - v265;
          BetterList_Vector2___Add(uvs, v405, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
          v406.fields.x = v263[10];
          v406.fields.y = v263[11] - v265;
          BetterList_Vector2___Add(uvs, v406, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
          v407.fields.x = v263[12];
          v407.fields.y = v265 + v263[13];
          BetterList_Vector2___Add(uvs, v407, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
          v408.fields.x = v263[14];
          v408.fields.y = v265 + v263[15];
          BetterList_Vector2___Add(uvs, v408, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
        }
        IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          v256 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        v266 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
        v267 = fmaxf(Width_k__BackingField, 0.0) * vabds_f32(v261, v262);
        v268 = v239 + (float)(v254 * v267);
        *(float *)&v9 = v239 - (float)(v254 * v267);
        v269 = v245 - (float)(v254 * v267);
        *(float *)&v7 = v245 + (float)(v254 * v267);
        itemc = v268;
        if ( spGradient || v266->gradient )
        {
          v270 = v366;
          *(float32x2_t *)&v6 = v373;
          LODWORD(v257) = 1.0;
LABEL_326:
          v354 = v267;
          v5 = v9;
          v378 = v269;
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v256 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            LODWORD(v257) = 1.0;
          }
          v276.n64_u64[0] = vsub_f32(v374, v375).n64_u64[0];
          v277 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
          *(float32x2_t *)&v8 = vsub_f32(v369, *(float32x2_t *)&v6);
          v278 = (float)(v270 + (float)(itemc / v277)) / v270;
          v279 = fminf(v278, *(float *)&v257);
          _NF = v278 < 0.0;
          LODWORD(v256) = 0;
          if ( !_NF )
            *(float *)&v256 = v279;
          *(float32x2_t *)&v257 = vmul_n_f32(v276, *(float *)&v256);
          *(float32x2_t *)&v258 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v256);
          *(float32x2_t *)&v256 = vadd_f32(v375, *(float32x2_t *)&v257);
          *(float32x2_t *)&v258 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v258);
          LODWORD(v257) = DWORD1(v256);
          LODWORD(v259) = DWORD1(v258);
          IsNullOrEmpty = sub_2597300(0, v256, v257, v258, v259);
          if ( !cols )
            goto LABEL_416;
          v280 = v270 + (float)(*(float *)&v7 / v277);
          v281 = (UnityEngine_Color32_o)(unsigned int)IsNullOrEmpty;
          v353 = LODWORD(v7);
          v282 = (float)(v270 + (float)(*(float *)&v9 / v277)) / v270;
          v283 = (float)(v270 + (float)(v378 / v277)) / v270;
          v284 = v280 / v270;
          BetterList_Color32___Add(cols, v281, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          *(float *)&v288 = fminf(v282, 1.0);
          if ( v282 < 0.0 )
            *(float *)&v288 = 0.0;
          *(float32x2_t *)&v285 = vmul_n_f32(v276, *(float *)&v288);
          *(float32x2_t *)&v286 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v288);
          *(float32x2_t *)&v288 = vadd_f32(v375, *(float32x2_t *)&v285);
          *(float32x2_t *)&v286 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v286);
          LODWORD(v285) = DWORD1(v288);
          LODWORD(v287) = DWORD1(v286);
          v289 = (UnityEngine_Color32_o)(unsigned int)sub_2597300(0, v288, v285, v286, v287);
          BetterList_Color32___Add(cols, v289, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          *(float *)&v293 = fminf(v283, 1.0);
          if ( v283 < 0.0 )
            *(float *)&v293 = 0.0;
          *(float32x2_t *)&v290 = vmul_n_f32(v276, *(float *)&v293);
          *(float32x2_t *)&v291 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v293);
          *(float32x2_t *)&v293 = vadd_f32(v375, *(float32x2_t *)&v290);
          *(float32x2_t *)&v291 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v291);
          LODWORD(v290) = DWORD1(v293);
          LODWORD(v292) = DWORD1(v291);
          v294 = (UnityEngine_Color32_o)(unsigned int)sub_2597300(0, v293, v290, v291, v292);
          BetterList_Color32___Add(cols, v294, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          *(float *)&v298 = fminf(v284, 1.0);
          if ( v284 < 0.0 )
            *(float *)&v298 = 0.0;
          *(float32x2_t *)&v295 = vmul_n_f32(v276, *(float *)&v298);
          *(float32x2_t *)&v296 = vmul_n_f32(*(float32x2_t *)&v8, *(float *)&v298);
          v269 = v378;
          *(float32x2_t *)&v298 = vadd_f32(v375, *(float32x2_t *)&v295);
          *(float32x2_t *)&v296 = vadd_f32(*(float32x2_t *)&v6, *(float32x2_t *)&v296);
          LODWORD(v6) = v353;
          LODWORD(v295) = DWORD1(v298);
          LODWORD(v297) = DWORD1(v296);
          v299 = (UnityEngine_Color32_o)(unsigned int)sub_2597300(0, v298, v295, v296, v297);
          BetterList_Color32___Add(cols, v299, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          v267 = v354;
          goto LABEL_338;
        }
        v270 = v366;
        *(float32x2_t *)&v6 = v373;
        LODWORD(v257) = 1.0;
        if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
        {
          v256 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          LODWORD(v257) = 1.0;
          v266 = NGUIText_TypeInfo->static_fields;
        }
        v271 = v266->mGradientColors;
        if ( !v271 )
          goto LABEL_416;
        if ( v271->fields.size >= 2 )
          goto LABEL_326;
        if ( !cols )
          goto LABEL_416;
        v272 = (UnityEngine_Color32_o)(v370 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v367 << 24));
        BetterList_Color32___Add(cols, v272, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
        v273 = (UnityEngine_Color32_o)(v370 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v367 << 24));
        BetterList_Color32___Add(cols, v273, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
        v274 = (UnityEngine_Color32_o)(v370 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v367 << 24));
        BetterList_Color32___Add(cols, v274, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
        v275 = (UnityEngine_Color32_o)(v370 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v367 << 24));
        BetterList_Color32___Add(cols, v275, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
        v6 = v7;
LABEL_338:
        v427.fields.x = v356 + (float)(v355 * v267);
        v427.fields.y = itemc;
        v427.fields.z = 0.0;
        BetterList_Vector3___Add(verts, v427, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v428.fields.z = 0.0;
        v428.fields.x = v356 - (float)(v355 * v267);
        v428.fields.y = *(float *)&v9;
        BetterList_Vector3___Add(verts, v428, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v429.fields.z = 0.0;
        v429.fields.x = v358 - (float)(v355 * v267);
        v429.fields.y = v269;
        BetterList_Vector3___Add(verts, v429, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v430.fields.z = 0.0;
        v430.fields.x = v358 + (float)(v355 * v267);
        v430.fields.y = *(float *)&v6;
        BetterList_Vector3___Add(verts, v430, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v37 = v387;
        v227 = v365;
LABEL_339:
        if ( !strike && !underline )
        {
          *(float *)&v5 = v372;
          v36 = Chars;
          goto LABEL_149;
        }
        v300 = v366;
        *(float32x2_t *)&v6 = v374;
        if ( strike )
          v301 = 45;
        else
          v301 = 95;
        v302 = 1.0;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v303 = NGUIText__GetGlyph(v301, Chars, v31);
        if ( !v303 )
        {
          *(float *)&v5 = v372;
          goto LABEL_193;
        }
        v304 = (float *)v303;
        if ( uvs )
        {
          v305 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v305 = NGUIText_TypeInfo;
          }
          v306 = (UnityEngine_Object_o *)v305->static_fields->bitmapFont;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v307 = UnityEngine_Object__op_Inequality(v306, 0, 0);
          v308 = v304[8];
          if ( v307 )
          {
            v308 = m_XMin + (float)(v362 * v308);
            v309 = m_XMin + (float)(v362 * v304[12]);
            v310 = v360 - (float)(v361 * v304[9]);
            v311 = v360 - (float)(v361 * v304[13]);
            v304[8] = v308;
            v304[9] = v310;
            v304[12] = v309;
            v304[13] = v311;
          }
          else
          {
            v309 = v304[12];
          }
          v312 = 0;
          v313 = (float)(v308 + v309) * 0.5;
          if ( v359 )
            v314 = 4;
          else
            v314 = 1;
          do
          {
            v409.fields.y = v304[9];
            v409.fields.x = v313;
            BetterList_Vector2___Add(uvs, v409, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            v410.fields.y = v304[13];
            v410.fields.x = v313;
            BetterList_Vector2___Add(uvs, v410, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            v411.fields.y = v304[13];
            v411.fields.x = v313;
            BetterList_Vector2___Add(uvs, v411, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            v412.fields.y = v304[9];
            v412.fields.x = v313;
            BetterList_Vector2___Add(uvs, v412, (const MethodInfo_33A76F0 *)Method_BetterList_Vector2__Add__);
            ++v312;
          }
          while ( v312 < v314 );
        }
        v315 = v304[5] - v37;
        v316 = v304[7] - v37;
        if ( v359 )
        {
          v317 = 0;
          while ( 1 )
          {
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            }
            v318 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 336LL);
            if ( !v318 )
              goto LABEL_416;
            v319 = *(unsigned int *)(v318 + 24);
            if ( v317 >= v319 || v317 + 1 >= v319 )
              goto LABEL_417;
            v320 = v318 + 4 * v317;
            v322 = *(float *)(v320 + 32);
            v321 = *(float *)(v320 + 36);
            v431.fields.z = 0.0;
            v323 = v315 + v321;
            v431.fields.x = v365 + v322;
            v431.fields.y = v315 + v321;
            BetterList_Vector3___Add(verts, v431, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v324 = v316 + v321;
            v432.fields.z = 0.0;
            v432.fields.x = v365 + v322;
            v432.fields.y = v324;
            BetterList_Vector3___Add(verts, v432, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v433.fields.z = 0.0;
            v433.fields.x = v372 + v322;
            v433.fields.y = v324;
            BetterList_Vector3___Add(verts, v433, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v434.fields.z = 0.0;
            v434.fields.x = v372 + v322;
            v434.fields.y = v323;
            BetterList_Vector3___Add(verts, v434, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
            v300 = v366;
            v317 += 2LL;
            v302 = 1.0;
            if ( v317 == 8 )
              goto LABEL_370;
          }
        }
        v435.fields.z = 0.0;
        v435.fields.x = v227;
        v435.fields.y = v304[5] - v37;
        BetterList_Vector3___Add(verts, v435, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v436.fields.z = 0.0;
        v436.fields.x = v227;
        v436.fields.y = v316;
        BetterList_Vector3___Add(verts, v436, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v437.fields.z = 0.0;
        v437.fields.x = v372;
        v437.fields.y = v316;
        BetterList_Vector3___Add(verts, v437, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v438.fields.z = 0.0;
        v438.fields.x = v372;
        v438.fields.y = v315;
        BetterList_Vector3___Add(verts, v438, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
LABEL_370:
        IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          v325 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
        }
        size = v364;
        v329 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
        *(float *)&v5 = v372;
        if ( spGradient || v329->gradient )
        {
LABEL_385:
          v333 = v304[5];
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v325 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          }
          *(float32x2_t *)&v328 = v373;
          v334 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
          *(float32x2_t *)&v7 = vsub_f32(v369, v373);
          v8 = v6;
          v335 = (float)(v300 + (float)(v333 / v334)) / v300;
          v336 = (float)(v300 + (float)(v304[7] / v334)) / v300;
          *(float *)&v325 = fminf(v335, v302);
          v337.n64_u64[0] = vsub_f32(v374, v375).n64_u64[0];
          if ( v335 < 0.0 )
            *(float *)&v325 = 0.0;
          *(float32x2_t *)&v326 = vmul_n_f32(v337, *(float *)&v325);
          *(float32x2_t *)&v327 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v325);
          *(float32x2_t *)&v325 = vadd_f32(v375, *(float32x2_t *)&v326);
          *(float32x2_t *)&v327 = vadd_f32(v373, *(float32x2_t *)&v327);
          v9 = v328;
          LODWORD(v326) = DWORD1(v325);
          LODWORD(v328) = DWORD1(v327);
          v338 = sub_2597300(0, v325, v326, v327, v328);
          *(float *)&v342 = fminf(v336, v302);
          if ( v336 < 0.0 )
            *(float *)&v342 = 0.0;
          *(float32x2_t *)&v339 = vmul_n_f32(v337, *(float *)&v342);
          *(float32x2_t *)&v340 = vmul_n_f32(*(float32x2_t *)&v7, *(float *)&v342);
          *(float32x2_t *)&v342 = vadd_f32(v375, *(float32x2_t *)&v339);
          *(float32x2_t *)&v340 = vadd_f32(*(float32x2_t *)&v9, *(float32x2_t *)&v340);
          LODWORD(v339) = DWORD1(v342);
          NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v338;
          LODWORD(v341) = DWORD1(v340);
          v6 = v8;
          v343 = sub_2597300(0, v342, v339, v340, v341);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          if ( v359 )
            v344 = 4;
          else
            v344 = 1;
          *(float *)&v5 = v372;
          if ( v344 <= 1 )
            v344 = 1;
          v345 = v344 - 1;
          *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v343;
          while ( 1 )
          {
            if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
              j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            if ( !cols )
              goto LABEL_416;
            v346 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
            BetterList_Color32___Add(cols, v346, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
            v347 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
            BetterList_Color32___Add(cols, v347, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
            v348 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
            BetterList_Color32___Add(cols, v348, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
            v349 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
            BetterList_Color32___Add(cols, v349, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
            if ( !v345 )
              goto LABEL_384;
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            --v345;
          }
        }
        if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
        {
          v325 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          v329 = NGUIText_TypeInfo->static_fields;
        }
        v330 = v329->mGradientColors;
        if ( !v330 )
          goto LABEL_416;
        if ( v330->fields.size >= 2 )
          goto LABEL_385;
        v331 = v359 ? 16 : 4;
        if ( !cols )
          goto LABEL_416;
        *(float32x2_t *)&v9 = v373;
        do
        {
          v332 = (UnityEngine_Color32_o)(v370 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v367 << 24));
          BetterList_Color32___Add(cols, v332, (const MethodInfo_33A51A4 *)Method_BetterList_Color32__Add__);
          --v331;
        }
        while ( v331 );
        size = v364;
LABEL_384:
        v36 = Chars;
LABEL_194:
        v15 = (const MethodInfo *)(unsigned int)++index;
        if ( index >= v32 )
          goto LABEL_403;
      }
    }
    LODWORD(v5) = 0;
LABEL_403:
    v350 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v350 = NGUIText_TypeInfo;
    }
    v351 = v350->static_fields;
    if ( v351->alignment != 1 && size < verts->fields.size )
    {
      if ( !v350->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v350);
        v351 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(verts, size, *(float *)&v5 - v351->finalSpacingX, v31);
      v350 = NGUIText_TypeInfo;
    }
    if ( !v350->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v350);
      v350 = NGUIText_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v350->static_fields->mColors;
    if ( !IsNullOrEmpty
      || (BetterList_Color___Clear(
            (BetterList_Color__o *)IsNullOrEmpty,
            (const MethodInfo_33A4638 *)Method_BetterList_Color__Clear__),
          (IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors) == 0) )
    {
LABEL_416:
      sub_1C7BD40(IsNullOrEmpty, v15);
    }
    BetterList_Color___Clear(
      (BetterList_Color__o *)IsNullOrEmpty,
      (const MethodInfo_33A4638 *)Method_BetterList_Color__Clear__);
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

  if ( (byte_4CF2DEC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector3__Add__);
    sub_1C7BAE8(&Method_BetterList_int__Add__);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    byte_4CF2DEC = 1;
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
    sub_1C7BD40(v9, v10);
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
    BetterList_Vector3___Add(verts, v66, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
    if ( !indices )
      goto LABEL_120;
    v24 = (unsigned __int16)v24;
    BetterList_int___Add(indices, item, (const MethodInfo_33A5B48 *)Method_BetterList_int__Add__);
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
      if ( !byte_4CE8569 )
      {
        sub_1C7BAE8(&System_Math_TypeInfo);
        byte_4CE8569 = 1;
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
      BetterList_Vector3___Add(verts, v68, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      BetterList_int___Add(indices, item + 1, (const MethodInfo_33A5B48 *)Method_BetterList_int__Add__);
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
    if ( !byte_4CE8569 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE8569 = 1;
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
    BetterList_Vector3___Add(verts, v67, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
    BetterList_int___Add(indices, item + 1, (const MethodInfo_33A5B48 *)Method_BetterList_int__Add__);
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


// local variable allocation has failed, the output may be wrong!
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
  float v67; // s1 OVERLAPPED
  float v68; // s15
  int v69; // s2
  float v70; // s0
  NGUIText_c *v71; // x0
  struct NGUIText_StaticFields *v72; // x8
  float finalLineHeight; // s0
  NGUIText_c *v74; // x0
  struct NGUIText_StaticFields *v75; // x8
  const MethodInfo_33A817C *v76; // x1
  float v77; // s1
  int v78; // s2
  BetterList_Vector3__o *v79; // x0
  float v80; // s0 OVERLAPPED
  float v81; // s11
  NGUIText_c *v82; // x0
  struct NGUIText_StaticFields *v83; // x8
  float v84; // [xsp+8h] [xbp-C8h]
  int32_t v85; // [xsp+Ch] [xbp-C4h]
  int32_t size; // [xsp+10h] [xbp-C0h]
  __int64 item; // [xsp+14h] [xbp-BCh]
  int32_t prev_4; // [xsp+1Ch] [xbp-B4h]
  float prev_4a; // [xsp+1Ch] [xbp-B4h]
  char v90; // [xsp+20h] [xbp-B0h]
  int32_t index; // [xsp+24h] [xbp-ACh] BYREF
  double iptr; // [xsp+28h] [xbp-A8h] BYREF
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
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF2DEE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector3__Add__);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    byte_4CF2DEE = 1;
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
    sub_1C7BD40(v15, v13);
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
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
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
    v110.fields.z = 0.0;
    v110.fields.x = v29 + -1.0;
    v110.fields.y = (float)-v31 - v25;
    BetterList_Vector3___Add(caret, v110, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
    v111.fields.z = 0.0;
    v111.fields.x = v29 + -1.0;
    v111.fields.y = -v31;
    BetterList_Vector3___Add(caret, v111, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
    v112.fields.z = 0.0;
    v112.fields.x = v29 + 1.0;
    v112.fields.y = -v31;
    BetterList_Vector3___Add(caret, v112, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
    v113.fields.z = 0.0;
    v113.fields.x = v29 + 1.0;
    v113.fields.y = (float)-v31 - v25;
    BetterList_Vector3___Add(caret, v113, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
    goto LABEL_148;
  }
  v28 = 0;
  v29 = 0.0;
  y = v26->zeroVector.fields.y;
  v31 = 0.0;
  prev_4 = 0;
  v90 = 0;
  item = LODWORD(y);
  v85 = end;
  do
  {
    if ( (v90 & 1) == 0 && !v18 && v28 >= end )
    {
      v93.fields.z = 0.0;
      v93.fields.x = v29 + -1.0;
      v93.fields.y = (float)-v31 - v25;
      BetterList_Vector3___Add(caret, v93, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      v94.fields.z = 0.0;
      v94.fields.x = v29 + -1.0;
      v94.fields.y = -v31;
      BetterList_Vector3___Add(caret, v94, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      v95.fields.z = 0.0;
      v95.fields.x = v29 + 1.0;
      v95.fields.y = -v31;
      BetterList_Vector3___Add(caret, v95, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      v96.fields.z = 0.0;
      v96.fields.x = v29 + 1.0;
      v96.fields.y = (float)-v31 - v25;
      BetterList_Vector3___Add(caret, v96, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      v28 = index;
      v90 = 1;
    }
    Chars = System_String__get_Chars(v12, v28, 0);
    if ( Chars == 10 )
    {
      if ( caret != 0 && (v90 & 1) != 0 )
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
        LODWORD(v97.fields.y) = item;
        v97.fields.z = 0.0;
        v97.fields.x = x;
        BetterList_Vector3___Add(highlight, v97, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v36 = x;
        v37 = y;
      }
      else
      {
        if ( v17 > index || v16 <= index )
          goto LABEL_52;
        v37 = (float)-v31 - v25;
        v98.fields.z = 0.0;
        v98.fields.x = v29;
        v98.fields.y = v37;
        BetterList_Vector3___Add(highlight, v98, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v99.fields.z = 0.0;
        v99.fields.x = v29;
        v99.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v99, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v36 = v29 + 2.0;
        v100.fields.z = 0.0;
        v100.fields.x = v29 + 2.0;
        v100.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v100, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      }
      v101.fields.z = 0.0;
      v101.fields.x = v36;
      v101.fields.y = v37;
      BetterList_Vector3___Add(highlight, v101, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
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
        end = v85;
        GlyphWidth = v49->static_fields->fontScale * v51;
        goto LABEL_79;
      }
      v19 = v45;
      v16 = v44;
      v17 = v43;
      highlight = v42;
      v38 = NGUIText_TypeInfo;
      end = v85;
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
    if ( !byte_4CE8569 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE8569 = 1;
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
    v84 = x;
    if ( v63 > v64->regionWidth )
    {
      if ( v29 == 0.0 )
        return;
      if ( caret != 0 && (v90 & 1) != 0 )
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
        LODWORD(v102.fields.y) = item;
        v102.fields.z = 0.0;
        v102.fields.x = x;
        BetterList_Vector3___Add(highlight, v102, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v67 = prev_4a;
      }
      else
      {
        if ( v17 > index || v16 <= index )
          goto LABEL_116;
        v103.fields.z = 0.0;
        v103.fields.x = v29;
        v103.fields.y = v65 - v25;
        BetterList_Vector3___Add(highlight, v103, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v104.fields.z = 0.0;
        v104.fields.x = v29;
        v104.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v104, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        x = v29 + 2.0;
        v105.fields.z = 0.0;
        v105.fields.x = v29 + 2.0;
        v105.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v105, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v67 = v65 - v25;
      }
      v69 = 0;
      v70 = x;
      BetterList_Vector3___Add(
        highlight,
        *(UnityEngine_Vector3_o *)(&v67 - 1),
        (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
LABEL_116:
      v71 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v71 = NGUIText_TypeInfo;
      }
      v72 = v71->static_fields;
      if ( v72->alignment != 1 && v19 < highlight->fields.size )
      {
        if ( !v71->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v71);
          v72 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(highlight, v19, v29 - v72->finalSpacingX, v14);
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
      v68 = v29 - v29;
      v55 = v55 - v29;
      v29 = 0.0;
      finalLineHeight = v62->static_fields->finalLineHeight;
      v66 = v66 - finalLineHeight;
      v65 = v65 - finalLineHeight;
      v31 = v31 + finalLineHeight;
      goto LABEL_127;
    }
    v68 = v29;
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
          LODWORD(v108.fields.y) = item;
          v108.fields.z = 0.0;
          v108.fields.x = v84;
          BetterList_Vector3___Add(highlight, v108, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v109.fields.y = prev_4a;
          v109.fields.z = 0.0;
          v109.fields.x = v84;
          BetterList_Vector3___Add(highlight, v109, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        }
        BYTE4(item) = 0;
      }
      else
      {
        if ( (item & 0x100000000LL) == 0 )
        {
          v106.fields.z = 0.0;
          v106.fields.x = v68;
          v106.fields.y = v66;
          BetterList_Vector3___Add(highlight, v106, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
          v107.fields.z = 0.0;
          v107.fields.x = v68;
          v107.fields.y = v65;
          BetterList_Vector3___Add(highlight, v107, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
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
  if ( (v90 & 1) == 0 )
    goto LABEL_147;
LABEL_148:
  v74 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v74 = NGUIText_TypeInfo;
  }
  v75 = v74->static_fields;
  if ( v75->alignment != 1 )
  {
    if ( !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v75 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(caret, size, v29 - v75->finalSpacingX, v14);
  }
LABEL_154:
  if ( highlight )
  {
    if ( (item & 0x100000000LL) != 0 )
    {
      v76 = (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__;
      v77 = *(float *)&item;
      v78 = 0;
      v79 = highlight;
      v80 = x;
      goto LABEL_161;
    }
LABEL_158:
    if ( v17 < index && v16 == index )
    {
      v81 = -v31;
      y = v81 - v25;
      v114.fields.z = 0.0;
      v114.fields.x = v29;
      v114.fields.y = v81 - v25;
      BetterList_Vector3___Add(highlight, v114, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      v115.fields.z = 0.0;
      v115.fields.x = v29;
      v115.fields.y = v81;
      BetterList_Vector3___Add(highlight, v115, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      v76 = (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__;
      x = v29 + 2.0;
      v78 = 0;
      v79 = highlight;
      v80 = v29 + 2.0;
      v77 = v81;
LABEL_161:
      BetterList_Vector3___Add(v79, *(UnityEngine_Vector3_o *)&v80, v76);
      v116.fields.z = 0.0;
      v116.fields.x = x;
      v116.fields.y = y;
      BetterList_Vector3___Add(highlight, v116, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
    }
    v82 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v82 = NGUIText_TypeInfo;
    }
    v83 = v82->static_fields;
    if ( v83->alignment != 1 && v19 < highlight->fields.size )
    {
      if ( !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82);
        v83 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(highlight, v19, v29 - v83->finalSpacingX, v14);
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

  if ( (byte_4CF2DED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector3__Add__);
    sub_1C7BAE8(&Method_BetterList_int__Add__);
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    byte_4CF2DED = 1;
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
    sub_1C7BD40(v9, v10);
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
        if ( !byte_4CE8569 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE8569 = 1;
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
        BetterList_int___Add(indices, index, (const MethodInfo_33A5B48 *)Method_BetterList_int__Add__);
        v59.fields.y = (float)-v22 - v21;
        v59.fields.z = 0.0;
        v59.fields.x = v20;
        BetterList_Vector3___Add(verts, v59, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
        v60.fields.z = 0.0;
        v60.fields.x = v37;
        v60.fields.y = -v22;
        BetterList_Vector3___Add(verts, v60, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
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
      if ( !byte_4CE8569 )
      {
        sub_1C7BAE8(&System_Math_TypeInfo);
        byte_4CE8569 = 1;
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
      BetterList_int___Add(indices, index, (const MethodInfo_33A5B48 *)Method_BetterList_int__Add__);
      v61.fields.y = (float)-v22 - v21;
      v61.fields.z = 0.0;
      v61.fields.x = v20;
      BetterList_Vector3___Add(verts, v61, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
      v62.fields.z = 0.0;
      v62.fields.x = v37;
      v62.fields.y = -v22;
      BetterList_Vector3___Add(verts, v62, (const MethodInfo_33A817C *)Method_BetterList_Vector3__Add__);
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

  if ( (byte_4CF2DE5 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE5 = 1;
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
      sub_1C7BD40(v3, method);
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

  if ( (byte_4CF2DE0 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE0 = 1;
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
        *(_OWORD *)&v10.fields._Slope_k__BackingField = xmmword_CF5E70;
        *(_QWORD *)&v10.fields._LineEdge_k__BackingField = 0;
        index = v4;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        if ( NGUIText__ParseSymbol_49834612(
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
            sub_1C7BD40(0, v6);
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

  if ( (byte_4CF2DD5 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DD5 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Update_49828740(1, v1);
}


void NGUIText__Update_49828740(bool request, const MethodInfo *method)
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

  if ( (byte_4CF2DD6 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_784/*")_-"*/);
    sub_1C7BAE8(&StringLiteral_1778/*"A"*/);
    byte_4CF2DD6 = 1;
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
  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
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
    sub_1C7BD40(v22, v20);
  }
}


bool NGUIText__WrapText(System_String_o *text, System_String_o **finalText, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CF2DE9 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    byte_4CF2DE9 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__WrapText_49845104(text, finalText, 0, v3);
}


bool NGUIText__WrapText_49845104(
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

  if ( (byte_4CF2DEA & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIText_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF2DEA = 1;
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
  if ( !byte_4CE7E58 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E58 = 1;
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
    sub_1C7BA8C(
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
  v25 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
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
          Chars = (System_String_o *)System_Text_StringBuilder__Append_64263200(v25, 0xAu, 0);
        }
        else
        {
          Chars = System_String__Substring_64222852(v24, v30, index - v30 + 1, 0);
          if ( !v25 )
            goto LABEL_170;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_64260872(v25, Chars, 0);
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
        Chars = System_String__Substring_64222852(v24, v30, (int)v27 - v30, 0);
        if ( v25 )
        {
          System_Text_StringBuilder__Append_64260872(v25, Chars, 0);
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
      sub_1C7BD40(Chars, v27);
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
        Chars = System_String__Substring_64222852(v24, v30, v48, 0);
        if ( !v25 )
          goto LABEL_170;
        System_Text_StringBuilder__Append_64260872(v25, Chars, 0);
        stringLength = v81;
        v35 = 0;
        v30 = index + 1;
      }
    }
    if ( !byte_4CE8569 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE8569 = 1;
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
  Chars = System_String__Substring_64222852(v24, v30, (index - v30) & (unsigned int)~((index - v30) >> 31), 0);
  if ( !v25 )
    goto LABEL_170;
  System_Text_StringBuilder__Append_64260872(v25, Chars, 0);
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
  sub_1C7BA8C(v68, v69, v70, v71, v72, v73, v74, v75);
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