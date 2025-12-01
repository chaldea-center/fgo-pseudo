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
  BetterList_Color__o *v20; // x19
  struct NGUIText_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  BetterList_Color__o *v28; // x19
  struct NGUIText_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  BetterList_float__o *v36; // x19
  GrandQuestFolderBoardItem_o *p_mSizes; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Array_o *v44; // x0
  System_RuntimeFieldHandle_o v45; // x1
  GrandQuestFolderBoardItem_c *v46; // x19
  GrandQuestFolderBoardItem_o *v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7

  if ( (byte_4CCBC0C & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_float___ctor__);
    sub_1C713B0(&Method_BetterList_Color___ctor__);
    sub_1C713B0(&BetterList_float__TypeInfo);
    sub_1C713B0(&BetterList_Color__TypeInfo);
    sub_1C713B0(&NGUIText_GlyphInfo_TypeInfo);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&float___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0);
    byte_4CCBC0C = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(NGUIText_GlyphInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  static_fields = NGUIText_TypeInfo->static_fields;
  static_fields->glyph = (struct NGUIText_GlyphInfo_o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->glyph, (int32_t)v1, v3, v4, v5, v6, v7, v8);
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
  if ( !byte_4CC7810 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC7810 = 1;
  }
  v18 = NGUIText_TypeInfo;
  NGUIText_TypeInfo->static_fields->outlineDistance = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  v18->static_fields->outlineEffect = (struct UnityEngine_Color_o)xmmword_CF01D0;
  v19 = v18->static_fields;
  v19->encoding = 0;
  *(_QWORD *)&v19->spacingX = 0;
  v19->premultiply = 0;
  *(_QWORD *)&v19->finalSize = 0;
  *(_QWORD *)&v19->finalLineHeight = 0;
  v19->useSymbols = 0;
  *(_QWORD *)&v19->mInvisible.fields.b = 0;
  *(_QWORD *)&v19->mInvisible.fields.r = 0;
  v20 = (BetterList_Color__o *)sub_1C715FC(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v20, (const MethodInfo_33801B0 *)Method_BetterList_Color___ctor__);
  v21 = NGUIText_TypeInfo->static_fields;
  v21->mColors = v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v21->mColors, (int32_t)v20, v22, v23, v24, v25, v26, v27);
  v28 = (BetterList_Color__o *)sub_1C715FC(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v28, (const MethodInfo_33801B0 *)Method_BetterList_Color___ctor__);
  v29 = NGUIText_TypeInfo->static_fields;
  v29->mGradientColors = v28;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v29->mGradientColors, (int32_t)v28, v30, v31, v32, v33, v34, v35);
  NGUIText_TypeInfo->static_fields->mAlpha = 1.0;
  v36 = (BetterList_float__o *)sub_1C715FC(BetterList_float__TypeInfo);
  BetterList_float____ctor(v36, (const MethodInfo_33826F4 *)Method_BetterList_float___ctor__);
  p_mSizes = (GrandQuestFolderBoardItem_o *)&NGUIText_TypeInfo->static_fields->mSizes;
  p_mSizes->klass = (GrandQuestFolderBoardItem_c *)v36;
  sub_1C71354(p_mSizes, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  v44 = (System_Array_o *)sub_1C71458(float___TypeInfo, 8);
  v45.fields.value = Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0;
  v46 = (GrandQuestFolderBoardItem_c *)v44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v44, v45, 0);
  v47 = (GrandQuestFolderBoardItem_o *)NGUIText_TypeInfo->static_fields;
  v47[2].klass = v46;
  sub_1C71354(v47 + 2, (int32_t)v46, v48, v49, v50, v51, v52, v53);
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
  if ( (byte_4CCBBFD & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBBFD = 1;
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
  if ( !byte_4CC24D5 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC24D5 = 1;
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
  if ( !byte_4CC24D5 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC24D5 = 1;
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
        sub_1C71610(v7);
      v64 = (float *)((char *)v63 + 12 * v5++);
      v64[8] = v15 + v64[8];
      if ( v62 == v5 )
        return;
    }
LABEL_115:
    sub_1C71608(v7, *(_QWORD *)&indexOffset);
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
  if ( (byte_4CCBC0B & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_Vector3__Add__);
    sub_1C713B0(&Method_BetterList_Color32__Add__);
    sub_1C713B0(&Method_BetterList_Vector2__Add__);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBC0B = 1;
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
  v29 = (UIFont_o *)sub_25672D0(0, inited, v26, v25, v8);
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
          (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v37 = uvs->fields.buffer;
        if ( !v37 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v37->max_length) )
          goto LABEL_51;
        BetterList_Vector2___Add(uvs, v37->m_Items[v33], (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v38 = cols->fields.buffer;
        if ( !v38 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v38->max_length) )
          goto LABEL_51;
        v39 = (UnityEngine_Color32_o)*((unsigned int *)&v38->obj.klass + v34);
        BetterList_Color32___Add(cols, v39, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
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
          v29 = (UIFont_o *)sub_25672D0(0, v48, v47, v46, v9);
          if ( (unsigned int)v14 >= LODWORD(v41->max_length) )
LABEL_51:
            sub_1C71610(v29);
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
    sub_1C71608(v29, v24);
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

  if ( (byte_4CCBC03 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_float__Add__);
    sub_1C713B0(&Method_BetterList_float__Clear__);
    sub_1C713B0(&Method_BetterList_float__get_Item__);
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBC03 = 1;
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
        (const MethodInfo_338208C *)Method_BetterList_float__Add__);
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
            (const MethodInfo_338208C *)Method_BetterList_float__Add__);
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
          (const MethodInfo_338208C *)Method_BetterList_float__Add__);
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
             (const MethodInfo_3381E8C *)Method_BetterList_float__get_Item__);
    mSizes = NGUIText_TypeInfo;
  }
  if ( !mSizes )
LABEL_49:
    sub_1C71608(mSizes, v6);
  BetterList_float___Clear((BetterList_float__o *)mSizes, (const MethodInfo_3382074 *)Method_BetterList_float__Clear__);
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

  if ( (byte_4CCBC02 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBC02 = 1;
  }
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
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
    sub_1C71608(v9, v10);
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
      if ( !byte_4CC24D5 )
      {
        sub_1C713B0(&System_Math_TypeInfo);
        byte_4CC24D5 = 1;
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
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
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

  if ( !byte_4CC24D5 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC24D5 = 1;
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
  if ( (byte_4CCBBF8 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBBF8 = 1;
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


System_String_o *NGUIText__EncodeColor_49681844(System_String_o *text, UnityEngine_Color_o c, const MethodInfo *method)
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
  if ( (byte_4CCBBF9 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_15965/*"[c]["*/);
    sub_1C713B0(&StringLiteral_16058/*"]"*/);
    sub_1C713B0(&StringLiteral_15829/*"[-][/c]"*/);
    byte_4CCBBF9 = 1;
  }
  v8 = (System_String_o *)sub_1C71458(string___TypeInfo, 5);
  if ( !v8 )
    sub_1C71608(0, v9);
  v16 = v8;
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_12;
  v17 = StringLiteral_15965/*"[c]["*/;
  v8[1].monitor = (void *)StringLiteral_15965/*"[c]["*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8[1].monitor, v17, v10, v11, v12, v13, v14, v15);
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
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v16[1].fields, (int32_t)v8, v19, v20, v21, v22, v23, v24),
        LODWORD(v16[1].klass) <= 2)
    || (v31 = StringLiteral_16058/*"]"*/,
        v16[2].klass = (System_String_c *)StringLiteral_16058/*"]"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v16[2], v31, v25, v26, v27, v28, v29, v30),
        LODWORD(v16[1].klass) <= 3)
    || (v16[2].monitor = text,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v16[2].monitor, (int32_t)text, v32, v33, v34, v35, v36, v37),
        LODWORD(v16[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C71610(v8);
  }
  v44 = StringLiteral_15829/*"[-][/c]"*/;
  v16[2].fields = (System_String_Fields)StringLiteral_15829/*"[-][/c]"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16[2].fields, v44, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_64072256((System_String_array *)v16, 0);
}


void NGUIText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_4CCBC00 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBC00 = 1;
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
      sub_1C71608(v3, method);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_14;
  System_Text_StringBuilder__Append_64118012(v3, 0xAu, 0);
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
  if ( (byte_4CCBBFF & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C713B0(&Method_BetterList_Vector3__get_Item__);
    byte_4CCBBFF = 1;
  }
  if ( !v8 )
    goto LABEL_16;
  if ( v8->fields.size < 1 )
  {
    v10 = 0;
    if ( indices )
      return BetterList_int___get_Item(indices, v10, (const MethodInfo_3380BD4 *)Method_BetterList_int__get_Item__);
LABEL_16:
    sub_1C71608(verts, indices);
  }
  LODWORD(v4) = 2139095039;
  v9 = 0;
  v10 = 0;
  v11 = v4;
  do
  {
    Item = BetterList_Vector3___get_Item(v8, v9, (const MethodInfo_33831E0 *)Method_BetterList_Vector3__get_Item__);
    v12 = vabds_f32(y, Item.fields.y);
    if ( v12 > *(float *)&v4 )
      goto LABEL_11;
    *(float *)&v13 = vabds_f32(
                       x,
                       COERCE_FLOAT(
                         BetterList_Vector3___get_Item(
                           v8,
                           v9,
                           (const MethodInfo_33831E0 *)Method_BetterList_Vector3__get_Item__)));
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
  return BetterList_int___get_Item(indices, v10, (const MethodInfo_3380BD4 *)Method_BetterList_int__get_Item__);
}


System_String_o *NGUIText__GetEndOfLineThatFits(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t stringLength; // w20
  int32_t v4; // w1

  v2 = text;
  if ( (byte_4CCBC04 & 1) == 0 )
  {
    text = (System_String_o *)sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBC04 = 1;
  }
  if ( !v2 )
    sub_1C71608(text, method);
  stringLength = v2->fields._stringLength;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v4 = NGUIText__CalculateOffsetToFit(v2, method);
  return System_String__Substring_64077664(v2, v4, stringLength - v4, 0);
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
  if ( (byte_4CCBBFE & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C713B0(&Method_BetterList_Vector3__get_Item__);
    byte_4CCBBFE = 1;
  }
  if ( !indices )
LABEL_14:
    sub_1C71608(verts, indices);
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
                  (const MethodInfo_33831E0 *)Method_BetterList_Vector3__get_Item__))
      && x <= COERCE_FLOAT(BetterList_Vector3___get_Item(v7, i, (const MethodInfo_33831E0 *)Method_BetterList_Vector3__get_Item__)) )
    {
      Item = BetterList_Vector3___get_Item(v7, i - 1, (const MethodInfo_33831E0 *)Method_BetterList_Vector3__get_Item__);
      if ( y >= Item.fields.y )
      {
        v12 = BetterList_Vector3___get_Item(v7, i, (const MethodInfo_33831E0 *)Method_BetterList_Vector3__get_Item__);
        if ( y <= v12.fields.y )
          break;
      }
    }
    if ( ++v8 >= indices->fields.size )
      return 0;
  }
  return BetterList_int___get_Item(indices, v8, (const MethodInfo_3380BD4 *)Method_BetterList_int__get_Item__);
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

  if ( (byte_4CCBBF6 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBF6 = 1;
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
    result = (NGUIText_GlyphInfo_o *)BMFont__GetGlyph_49633996((BMFont_o *)bmFont, v9, 0);
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
    bmFont = (void *)UnityEngine_CharacterInfo__get_minX((UnityEngine_CharacterInfo_o *)(v36 + 252), 0);
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
      sub_1C71608(bmFont, v7);
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
  BMGlyph_o *Glyph_49633996; // x0
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

  if ( (byte_4CCBBF5 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBF5 = 1;
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
        Glyph_49633996 = BMFont__GetGlyph_49633996(bmFont, v9, 0);
        if ( !Glyph_49633996 )
          return 0.0;
        v12 = Glyph_49633996;
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
    sub_1C71608(bmFont, v7);
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

  if ( (byte_4CCBBF4 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBF4 = 1;
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
    sub_1C71608(0, v9);
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
    sub_1C71608(0, index);
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
  if ( (byte_4CCBBF7 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBBF7 = 1;
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
    sub_1C71608(0, offset);
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
    sub_1C71608(0, offset);
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
  const MethodInfo *v6; // [xsp+28h] [xbp-58h]
  bool isOutline; // [xsp+38h] [xbp-48h] BYREF
  bool v8; // [xsp+3Ch] [xbp-44h] BYREF
  bool ignoreColor; // [xsp+40h] [xbp-40h] BYREF
  bool strike; // [xsp+44h] [xbp-3Ch] BYREF
  bool underline; // [xsp+48h] [xbp-38h] BYREF
  bool italic; // [xsp+4Ch] [xbp-34h] BYREF
  bool bold; // [xsp+58h] [xbp-28h] BYREF
  int32_t sub; // [xsp+5Ch] [xbp-24h] BYREF

  if ( (byte_4CCBBFA & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBBFA = 1;
  }
  bold = 0;
  italic = 0;
  underline = 0;
  strike = 0;
  sub = 1;
  ignoreColor = 0;
  v8 = 0;
  isOutline = 0;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__ParseSymbol_49682736(
           text,
           index,
           0,
           0,
           &sub,
           &bold,
           &italic,
           &underline,
           &strike,
           &ignoreColor,
           &v8,
           &isOutline,
           0,
           v6);
}


bool NGUIText__ParseSymbol_49682736(
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
        const MethodInfo *method)
{
  System_String_o *v21; // x20
  int stringLength; // w29
  int32_t size; // w8
  int32_t v24; // w8
  System_String_o *v25; // x23
  uint32_t v26; // w0
  bool *v27; // x8
  bool result; // w0
  int32_t v29; // w8
  System_String_o *v30; // x23
  uint32_t v31; // w0
  bool *v32; // x8
  uint16_t Chars; // w25
  uint16_t v34; // w26
  int32_t v35; // w20
  int32_t v36; // w0
  NGUIText_c *v37; // x8
  int32_t v38; // w21
  System_String_o *v39; // x25
  System_String_o *v40; // x25
  int32_t v41; // w0
  uint16_t v42; // w0
  const MethodInfo *v43; // x2
  int32_t v44; // w23
  float r; // s10
  float g; // s9
  float b; // s8
  unsigned int v48; // w0
  System_String_o *v49; // x23
  System_String_o *v50; // x0
  float a; // s11
  NGUIText_c *v52; // x0
  float *static_fields; // x8
  float v54; // s0
  uint16_t v55; // w0
  const MethodInfo *v56; // x2
  int32_t v57; // w23
  int32_t v58; // w0
  System_String_o *v59; // x23
  System_String_o *v60; // x0
  NGUIText_c *v61; // x0
  float32x4_t v62; // q3
  float v63; // s0
  float32x4_t v64; // q0
  uint16_t v65; // w0
  const MethodInfo *v66; // x2
  int32_t v67; // w21
  float v68; // s8
  float v69; // s9
  float v70; // s10
  float v71; // s11
  unsigned int v72; // w0
  System_String_o *v73; // x21
  System_String_o *v74; // x0
  const MethodInfo *v75; // x2
  int32_t v76; // w21
  float v77; // s12
  float v78; // s13
  float v79; // s14
  float v80; // s15
  unsigned int v81; // w0
  System_String_o *v82; // x21
  System_String_o *v83; // x0
  const MethodInfo *v84; // x2
  int32_t v85; // w21
  float v86; // s8
  float v87; // s9
  float v88; // s10
  float v89; // s11
  int32_t v90; // w0
  System_String_o *v91; // x21
  System_String_o *v92; // x0
  const MethodInfo *v93; // x2
  int32_t v94; // w21
  float v95; // s12
  float v96; // s13
  float v97; // s14
  float v98; // s15
  int32_t v99; // w0
  System_String_o *v100; // x21
  System_String_o *v101; // x0
  float v102; // [xsp+0h] [xbp-E0h]
  float v103; // [xsp+10h] [xbp-D0h]
  float v104; // [xsp+20h] [xbp-C0h]
  float item; // [xsp+30h] [xbp-B0h]
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v21 = text;
  if ( (byte_4CCBBFB & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_Color__Add__);
    sub_1C713B0(&Method_BetterList_Color__RemoveAt__);
    sub_1C713B0(&Method_BetterList_Color__get_Item__);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&StringLiteral_15838/*"[/sub]"*/);
    sub_1C713B0(&StringLiteral_15841/*"[/url]"*/);
    sub_1C713B0(&StringLiteral_15837/*"[/s]"*/);
    sub_1C713B0(&StringLiteral_15832/*"[/b]"*/);
    sub_1C713B0(&StringLiteral_15998/*"[o]"*/);
    sub_1C713B0(&StringLiteral_15839/*"[/sup]"*/);
    sub_1C713B0(&StringLiteral_16004/*"[sub]"*/);
    sub_1C713B0(&StringLiteral_15833/*"[/c]"*/);
    sub_1C713B0(&StringLiteral_15840/*"[/u]"*/);
    sub_1C713B0(&StringLiteral_16005/*"[sup]"*/);
    sub_1C713B0(&StringLiteral_15834/*"[/g]"*/);
    sub_1C713B0(&StringLiteral_15826/*"[--]"*/);
    sub_1C713B0(&StringLiteral_15986/*"[i]"*/);
    sub_1C713B0(&StringLiteral_15985/*"[g]"*/);
    sub_1C713B0(&StringLiteral_15836/*"[/o]"*/);
    sub_1C713B0(&StringLiteral_15964/*"[c]"*/);
    sub_1C713B0(&StringLiteral_16002/*"[s]"*/);
    sub_1C713B0(&StringLiteral_15963/*"[b]"*/);
    sub_1C713B0(&StringLiteral_15835/*"[/i]"*/);
    text = (System_String_o *)sub_1C713B0(&StringLiteral_16006/*"[u]"*/);
    byte_4CCBBFB = 1;
  }
  if ( !v21 )
    goto LABEL_165;
  stringLength = v21->fields._stringLength;
  if ( *index + 3 > stringLength || System_String__get_Chars(v21, *index, 0) != 91 )
    return 0;
  if ( System_String__get_Chars(v21, *index + 2, 0) == 93 )
  {
    if ( System_String__get_Chars(v21, *index + 1, 0) == 45 )
    {
      if ( colors )
      {
        size = colors->fields.size;
        if ( size >= 2 )
          BetterList_Color___RemoveAt(colors, size - 1, (const MethodInfo_337FF1C *)Method_BetterList_Color__RemoveAt__);
      }
      v24 = *index + 3;
      goto LABEL_84;
    }
    v25 = System_String__Substring_64077664(v21, *index, 3, 0);
    v26 = PrivateImplementationDetails___ComputeStringHash_49921540(v25, 0);
    if ( v26 > 0x7ACE3056 )
    {
      if ( v26 > 0xB6CA119C )
      {
        if ( v26 == -1162838014 )
        {
          if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_16002/*"[s]"*/, 0) )
          {
            result = 1;
            *strike = 1;
            goto LABEL_37;
          }
        }
        else if ( v26 == -1159586610 && System_String__op_Equality(v25, (System_String_o *)StringLiteral_15985/*"[g]"*/, 0) )
        {
          result = 1;
          *ignoreColor = 1;
          v27 = spGradient;
          goto LABEL_28;
        }
      }
      else if ( v26 == -1228271204 )
      {
        if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_15986/*"[i]"*/, 0) )
        {
          result = 1;
          *italic = 1;
          goto LABEL_37;
        }
      }
      else if ( v26 == 2061024690 && System_String__op_Equality(v25, (System_String_o *)StringLiteral_15964/*"[c]"*/, 0) )
      {
        v27 = ignoreColor;
        goto LABEL_23;
      }
    }
    else if ( v26 == 1992236928 )
    {
      if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_16006/*"[u]"*/, 0) )
      {
        result = 1;
        *underline = 1;
        goto LABEL_37;
      }
    }
    else if ( v26 == 1993767119 )
    {
      if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_15963/*"[b]"*/, 0) )
      {
        result = 1;
        *bold = 1;
        goto LABEL_37;
      }
    }
    else if ( v26 == 2060333142 && System_String__op_Equality(v25, (System_String_o *)StringLiteral_15998/*"[o]"*/, 0) )
    {
      v27 = isOutline;
LABEL_23:
      result = 1;
LABEL_28:
      *v27 = 1;
LABEL_37:
      v29 = *index + 3;
LABEL_38:
      *index = v29;
      return result;
    }
  }
  if ( *index + 4 > stringLength )
    return 0;
  if ( System_String__get_Chars(v21, *index + 3, 0) != 93 )
    goto LABEL_86;
  v30 = System_String__Substring_64077664(v21, *index, 4, 0);
  v31 = PrivateImplementationDetails___ComputeStringHash_49921540(v30, 0);
  if ( v31 > 0x258A0629 )
  {
    if ( v31 > 0x615D44FF )
    {
      if ( v31 == -100292593 )
      {
        if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15826/*"[--]"*/, 0) )
        {
          *index += 4;
          if ( gradientColors )
          {
            BetterList_Color___RemoveAt(
              gradientColors,
              gradientColors->fields.size - 1,
              (const MethodInfo_337FF1C *)Method_BetterList_Color__RemoveAt__);
            BetterList_Color___RemoveAt(
              gradientColors,
              gradientColors->fields.size - 1,
              (const MethodInfo_337FF1C *)Method_BetterList_Color__RemoveAt__);
          }
          return 1;
        }
      }
      else if ( v31 == 1636753867 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15837/*"[/s]"*/, 0) )
      {
        *strike = 0;
        goto LABEL_83;
      }
    }
    else if ( v31 == 1632222535 )
    {
      if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15836/*"[/o]"*/, 0) )
      {
        v32 = isOutline;
        goto LABEL_64;
      }
    }
    else if ( v31 == 1633502463 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15834/*"[/g]"*/, 0) )
    {
      *ignoreColor = 0;
      v32 = spGradient;
LABEL_64:
      *v32 = 0;
      goto LABEL_83;
    }
  }
  else
  {
    if ( v31 > 0x2558695D )
    {
      if ( v31 == 627683966 )
      {
        if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15832/*"[/b]"*/, 0) )
        {
          *bold = 0;
          goto LABEL_83;
        }
      }
      else if ( v31 == 629802537 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15840/*"[/u]"*/, 0) )
      {
        *underline = 0;
        goto LABEL_83;
      }
      goto LABEL_70;
    }
    if ( v31 != 560426395 )
    {
      if ( v31 == 626551133 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15835/*"[/i]"*/, 0) )
      {
        *italic = 0;
LABEL_83:
        v24 = *index + 4;
LABEL_84:
        *index = v24;
        return 1;
      }
      goto LABEL_70;
    }
    if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15833/*"[/c]"*/, 0) )
    {
      v32 = ignoreColor;
      goto LABEL_64;
    }
  }
LABEL_70:
  Chars = System_String__get_Chars(v21, *index + 1, 0);
  v34 = System_String__get_Chars(v21, *index + 2, 0);
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  if ( (unsigned __int16)(Chars - 48) < 0xAu
    || (unsigned int)Chars - 65 <= 0x25 && ((1LL << ((unsigned __int8)Chars - 65)) & 0x3F0000003FLL) != 0 )
  {
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    if ( (unsigned __int16)(v34 - 48) < 0xAu
      || (unsigned int)v34 - 65 <= 0x25 && ((1LL << ((unsigned __int8)v34 - 65)) & 0x3F0000003FLL) != 0 )
    {
      v35 = NGUIMath__HexToDecimal(Chars, 0);
      v36 = NGUIMath__HexToDecimal(v34, 0);
      v37 = NGUIText_TypeInfo;
      v38 = v36;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v37 = NGUIText_TypeInfo;
      }
      v37->static_fields->mAlpha = (float)(v38 | (16 * v35)) / 255.0;
      goto LABEL_83;
    }
  }
LABEL_86:
  if ( *index + 5 <= stringLength )
  {
    if ( System_String__get_Chars(v21, *index + 4, 0) == 93 )
    {
      v39 = System_String__Substring_64077664(v21, *index, 5, 0);
      if ( System_String__op_Equality(v39, (System_String_o *)StringLiteral_16004/*"[sub]"*/, 0) )
      {
        result = 1;
        *sub = 1;
        v29 = *index + 5;
        goto LABEL_38;
      }
      if ( System_String__op_Equality(v39, (System_String_o *)StringLiteral_16005/*"[sup]"*/, 0) )
      {
        *sub = 2;
        v24 = *index + 5;
        goto LABEL_84;
      }
    }
    if ( *index + 6 <= stringLength )
    {
      if ( System_String__get_Chars(v21, *index + 5, 0) == 93 )
      {
        v40 = System_String__Substring_64077664(v21, *index, 6, 0);
        if ( System_String__op_Equality(v40, (System_String_o *)StringLiteral_15838/*"[/sub]"*/, 0)
          || System_String__op_Equality(v40, (System_String_o *)StringLiteral_15839/*"[/sup]"*/, 0) )
        {
          *sub = 0;
LABEL_97:
          v24 = *index + 6;
          goto LABEL_84;
        }
        if ( System_String__op_Equality(v40, (System_String_o *)StringLiteral_15841/*"[/url]"*/, 0) )
          goto LABEL_97;
      }
      if ( System_String__get_Chars(v21, *index + 1, 0) == 117
        && System_String__get_Chars(v21, *index + 2, 0) == 114
        && System_String__get_Chars(v21, *index + 3, 0) == 108
        && System_String__get_Chars(v21, *index + 4, 0) == 61 )
      {
        v41 = System_String__IndexOf_64088764(v21, 0x5Du, *index + 4, 0);
        if ( v41 == -1 )
          v24 = v21->fields._stringLength;
        else
          v24 = v41 + 1;
        goto LABEL_84;
      }
      if ( *index + 8 <= stringLength )
      {
        v42 = System_String__get_Chars(v21, *index + 7, 0);
        v44 = *index;
        if ( v42 == 93 )
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v106 = NGUIText__ParseColor24(v21, v44 + 1, v43);
          r = v106.fields.r;
          g = v106.fields.g;
          b = v106.fields.b;
          v48 = NGUIMath__ColorToInt(v106, 0);
          v49 = NGUIMath__DecimalToHex24(v48 >> 8, 0);
          text = System_String__Substring_64077664(v21, *index + 1, 6, 0);
          if ( text )
          {
            v50 = System_String__ToUpper(text, 0);
            if ( !System_String__op_Inequality(v49, v50, 0) )
            {
              if ( colors )
              {
                v107 = BetterList_Color___get_Item(
                         colors,
                         colors->fields.size - 1,
                         (const MethodInfo_337F6CC *)Method_BetterList_Color__get_Item__);
                a = v107.fields.a;
                if ( v107.fields.a != 1.0 && premultiply )
                {
                  v52 = NGUIText_TypeInfo;
                  if ( !NGUIText_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                    v52 = NGUIText_TypeInfo;
                  }
                  static_fields = (float *)v52->static_fields;
                  v54 = fminf(a, 1.0);
                  if ( a < 0.0 )
                    v54 = 0.0;
                  r = static_fields[53] + (float)(v54 * (float)(r - static_fields[53]));
                  g = static_fields[54] + (float)(v54 * (float)(g - static_fields[54]));
                  b = static_fields[55] + (float)(v54 * (float)(b - static_fields[55]));
                  a = static_fields[56] + (float)(v54 * (float)(a - static_fields[56]));
                }
                v108.fields.r = r;
                v108.fields.g = g;
                v108.fields.b = b;
                v108.fields.a = a;
                BetterList_Color___Add(colors, v108, (const MethodInfo_337F8E0 *)Method_BetterList_Color__Add__);
              }
              v24 = *index + 8;
              goto LABEL_84;
            }
            return 0;
          }
        }
        else
        {
          if ( v44 + 10 > stringLength )
            return 0;
          v55 = System_String__get_Chars(v21, v44 + 9, 0);
          v57 = *index;
          if ( v55 == 93 )
          {
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v109 = NGUIText__ParseColor32(v21, v57 + 1, v56);
            v103 = v109.fields.b;
            v104 = v109.fields.r;
            v102 = v109.fields.g;
            item = v109.fields.a;
            v58 = NGUIMath__ColorToInt(v109, 0);
            v59 = NGUIMath__DecimalToHex32(v58, 0);
            text = System_String__Substring_64077664(v21, *index + 1, 8, 0);
            if ( text )
            {
              v60 = System_String__ToUpper(text, 0);
              if ( !System_String__op_Inequality(v59, v60, 0) )
              {
                if ( colors )
                {
                  if ( item != 1.0 && premultiply )
                  {
                    v61 = NGUIText_TypeInfo;
                    if ( !NGUIText_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                      v61 = NGUIText_TypeInfo;
                    }
                    v62.n128_u64[0] = __PAIR64__(LODWORD(v102), LODWORD(v104));
                    v62.n128_u64[1] = __PAIR64__(LODWORD(item), LODWORD(v103));
                    v63 = fminf(item, 1.0);
                    if ( item < 0.0 )
                      v63 = 0.0;
                    v64 = vaddq_f32(
                            (float32x4_t)v61->static_fields->mInvisible,
                            vmulq_n_f32(vsubq_f32(v62, (float32x4_t)v61->static_fields->mInvisible), v63));
                    v102 = v64.n128_f32[1];
                    v104 = v64.n128_f32[0];
                    item = v64.n128_f32[3];
                    v103 = v64.n128_f32[2];
                  }
                  v110.fields.b = v103;
                  v110.fields.r = v104;
                  v110.fields.g = v102;
                  v110.fields.a = item;
                  BetterList_Color___Add(colors, v110, (const MethodInfo_337F8E0 *)Method_BetterList_Color__Add__);
                }
                v24 = *index + 10;
                goto LABEL_84;
              }
              return 0;
            }
          }
          else
          {
            if ( v57 + 15 > stringLength )
              return 0;
            v65 = System_String__get_Chars(v21, v57 + 14, 0);
            v67 = *index;
            if ( v65 == 93 )
            {
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v111 = NGUIText__ParseColor24(v21, v67 + 1, v66);
              v68 = v111.fields.r;
              v69 = v111.fields.g;
              v70 = v111.fields.b;
              v71 = v111.fields.a;
              v72 = NGUIMath__ColorToInt(v111, 0);
              v73 = NGUIMath__DecimalToHex24(v72 >> 8, 0);
              text = System_String__Substring_64077664(v21, *index + 1, 6, 0);
              if ( text )
              {
                v74 = System_String__ToUpper(text, 0);
                if ( System_String__op_Inequality(v73, v74, 0) )
                  return 0;
                v76 = *index;
                if ( !NGUIText_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v112 = NGUIText__ParseColor24(v21, v76 + 8, v75);
                v77 = v112.fields.r;
                v78 = v112.fields.g;
                v79 = v112.fields.b;
                v80 = v112.fields.a;
                v81 = NGUIMath__ColorToInt(v112, 0);
                v82 = NGUIMath__DecimalToHex24(v81 >> 8, 0);
                text = System_String__Substring_64077664(v21, *index + 8, 6, 0);
                if ( text )
                {
                  v83 = System_String__ToUpper(text, 0);
                  if ( !System_String__op_Inequality(v82, v83, 0) )
                  {
                    if ( gradientColors )
                    {
                      v113.fields.r = v68;
                      v113.fields.g = v69;
                      v113.fields.b = v70;
                      v113.fields.a = v71;
                      BetterList_Color___Add(
                        gradientColors,
                        v113,
                        (const MethodInfo_337F8E0 *)Method_BetterList_Color__Add__);
                      v114.fields.r = v77;
                      v114.fields.g = v78;
                      v114.fields.b = v79;
                      v114.fields.a = v80;
                      BetterList_Color___Add(
                        gradientColors,
                        v114,
                        (const MethodInfo_337F8E0 *)Method_BetterList_Color__Add__);
                    }
                    v24 = *index + 15;
                    goto LABEL_84;
                  }
                  return 0;
                }
              }
            }
            else
            {
              if ( v67 + 19 > stringLength || System_String__get_Chars(v21, v67 + 18, 0) != 93 )
                return 0;
              v85 = *index;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v115 = NGUIText__ParseColor32(v21, v85 + 1, v84);
              v86 = v115.fields.r;
              v87 = v115.fields.g;
              v88 = v115.fields.b;
              v89 = v115.fields.a;
              v90 = NGUIMath__ColorToInt(v115, 0);
              v91 = NGUIMath__DecimalToHex32(v90, 0);
              text = System_String__Substring_64077664(v21, *index + 1, 8, 0);
              if ( text )
              {
                v92 = System_String__ToUpper(text, 0);
                if ( System_String__op_Inequality(v91, v92, 0) )
                  return 0;
                v94 = *index;
                if ( !NGUIText_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v116 = NGUIText__ParseColor32(v21, v94 + 10, v93);
                v95 = v116.fields.r;
                v96 = v116.fields.g;
                v97 = v116.fields.b;
                v98 = v116.fields.a;
                v99 = NGUIMath__ColorToInt(v116, 0);
                v100 = NGUIMath__DecimalToHex32(v99, 0);
                text = System_String__Substring_64077664(v21, *index + 10, 8, 0);
                if ( text )
                {
                  v101 = System_String__ToUpper(text, 0);
                  if ( !System_String__op_Inequality(v100, v101, 0) )
                  {
                    if ( gradientColors )
                    {
                      v117.fields.r = v86;
                      v117.fields.g = v87;
                      v117.fields.b = v88;
                      v117.fields.a = v89;
                      BetterList_Color___Add(
                        gradientColors,
                        v117,
                        (const MethodInfo_337F8E0 *)Method_BetterList_Color__Add__);
                      v118.fields.r = v95;
                      v118.fields.g = v96;
                      v118.fields.b = v97;
                      v118.fields.a = v98;
                      BetterList_Color___Add(
                        gradientColors,
                        v118,
                        (const MethodInfo_337F8E0 *)Method_BetterList_Color__Add__);
                    }
                    v24 = *index + 19;
                    goto LABEL_84;
                  }
                  return 0;
                }
              }
            }
          }
        }
LABEL_165:
        sub_1C71608(text, index);
      }
    }
  }
  return 0;
}


void NGUIText__Prepare(System_String_o *text, const MethodInfo *method)
{
  NGUIText_c *v3; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  __int64 v5; // x1
  NGUIText_c *v6; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  UnityEngine_Font_o *v8; // x0

  if ( (byte_4CCBBF3 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBF3 = 1;
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
      sub_1C71608(0, v5);
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
  __int128 v5; // q8
  __int128 v6; // q14
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v12; // x1
  int32_t size; // w29
  struct NGUIText_StaticFields *static_fields; // x8
  long double v15; // q0
  long double v16; // q2
  int finalSize; // w24
  float32x2_t v18; // d13
  float32x2_t v19; // d15
  long double v20; // q1
  long double v21; // q3
  int stringLength; // w27
  unsigned __int64 v23; // x26
  struct NGUIText_StaticFields *v24; // x8
  float pixelDensity; // s9
  UnityEngine_Object_o *bitmapFont; // x25
  bool v27; // w0
  const MethodInfo *v28; // x2
  float m_YMin; // s10
  float m_Height; // s11
  float v31; // s1
  NGUIText_c *v32; // x0
  float m_Width; // s12
  int32_t v34; // w28
  float v35; // s15
  const MethodInfo *v36; // x3
  unsigned int Chars; // w26
  NGUIText_c *v38; // x0
  struct NGUIText_StaticFields *v39; // x8
  NGUIText_c *v40; // x0
  struct NGUIText_StaticFields *v41; // x8
  NGUIText_c *v42; // x0
  _BOOL4 v43; // w26
  struct NGUIText_StaticFields *v44; // x8
  float mAlpha; // s4
  int32_t v46; // w25
  int32_t v47; // w29
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v49; // x29
  NGUIText_c *v50; // x0
  int mOffsetX; // w27
  int mOffsetY; // s12
  int mWidth; // s13
  float fontScale; // s8
  int mAdvance; // s10
  int mHeight; // s11
  __int128 v57; // q9
  float v58; // s14
  double v59; // d10
  const MethodInfo *v60; // x2
  double v61; // d0
  double v62; // d0
  double v63; // d1
  NGUIText_GlyphInfo_o *Glyph; // x0
  int32_t v65; // w28
  NGUIText_GlyphInfo_o *v66; // x29
  float32x4_t v72; // q3
  NGUIText_c *v73; // x0
  struct NGUIText_StaticFields *v74; // x8
  float fontSize; // s0
  float v76; // s1
  float v77; // s0
  double v78; // d1
  float a; // s8
  float b; // s10
  float g; // s11
  float r; // s12
  NGUIText_c *v83; // x8
  __int128 v84; // q0
  struct BetterList_Color__o *mColors; // x9
  int32_t v86; // w27
  int v87; // w26
  struct NGUIText_StaticFields *v88; // x9
  float32x2_t v89; // d2
  float v90; // v2.s[1]
  float v91; // v0.s[1]
  float v92; // v0.s[1]
  int v93; // v2.s[1]
  NGUIText_c *v94; // x0
  struct NGUIText_StaticFields *v95; // x8
  NGUIText_c *v96; // x0
  float y; // s11
  float x; // s13
  float v99; // s8
  float v100; // s12
  float advance; // s10
  float finalSpacingX; // s0
  __int128 v103; // q9
  float v104; // s14
  double v105; // d10
  long double inited; // q0
  long double v107; // q1
  long double v108; // q2
  long double v109; // q3
  double v110; // d1
  double v111; // d1
  NGUIText_c *v112; // x0
  struct NGUIText_StaticFields *v113; // x8
  float v114; // s2
  float v115; // s13
  float v116; // s10
  float v117; // s12
  int v118; // w10
  float v119; // s11
  float v120; // s0
  NGUIText_c *v121; // x0
  struct NGUIText_StaticFields *v122; // x8
  int v123; // s15
  int32_t v124; // w26
  float v125; // s8
  float v126; // s14
  long double v127; // q0
  long double v128; // q1
  long double v129; // q2
  long double v130; // q3
  float v131; // s10
  float v132; // s11
  float v133; // s12
  float v134; // s13
  float v135; // s0
  NGUIText_c *v136; // x0
  int v137; // w26
  UnityEngine_Color32_o v138; // x1
  unsigned __int64 v139; // x27
  int v140; // w26
  UnityEngine_Color32_o v141; // x1
  NGUIText_c *v142; // x0
  int v143; // w27
  struct NGUIText_StaticFields *v144; // x8
  float v145; // s11
  float v146; // s9
  float finalLineHeight; // s0
  int v148; // w27
  NGUIText_c *v149; // x0
  uint32_t cctor_finished; // w8
  struct NGUIText_StaticFields *v151; // x9
  float v152; // s8
  NGUIText_c *v153; // x0
  UnityEngine_Object_o *v154; // x28
  float v155; // s0
  float v156; // s1
  float v157; // s2
  float v158; // s3
  unsigned int v159; // w27
  unsigned int v160; // w28
  int32_t channel; // w8
  struct NGUIText_StaticFields *v162; // x8
  struct BetterList_Color__o *mGradientColors; // x8
  _BOOL4 v164; // w24
  int v165; // w27
  UnityEngine_Color32_o v166; // x1
  _BOOL4 v167; // w8
  float v168; // s8
  float v169; // s0
  float32x2_t v170; // d10
  float32x2_t v171; // d11
  float v172; // s1
  float v173; // s8
  int32_t v174; // w0
  long double v175; // q1
  long double v176; // q2
  long double v177; // q3
  long double v178; // q0
  int v179; // w0
  NGUIText_c *v180; // x8
  unsigned int v181; // w9
  unsigned int i; // w28
  UnityEngine_Color32_o rgba; // x1
  UnityEngine_Color32_o v184; // x1
  UnityEngine_Color32_o v185; // x1
  UnityEngine_Color32_o v186; // x1
  unsigned int v187; // w0
  int v188; // w27
  UnityEngine_Color32_o v189; // x28
  UnityEngine_Color32_o v190; // x1
  _BOOL4 v191; // w28
  unsigned __int64 v192; // x29
  float v193; // s10
  float v194; // s13
  struct NGUIText_StaticFields *v195; // x8
  struct UnityEngine_Color32_o s_c1; // x9
  unsigned __int64 v197; // x10
  unsigned __int64 v198; // x9
  float v199; // s8
  float v200; // s12
  float v201; // s11
  float v202; // s15
  float v203; // s8
  float v204; // s12
  const MethodInfo *v205; // x5
  NGUIText_c *v206; // x0
  float v207; // s0
  float v208; // s8
  NGUIText_c *v209; // x0
  int32_t v210; // w28
  struct NGUIText_StaticFields *v211; // x8
  float v212; // s11
  float v213; // s12
  int32_t v214; // w29
  const MethodInfo *v215; // x5
  int32_t v216; // w28
  const MethodInfo *v217; // x5
  int32_t v218; // w29
  const MethodInfo *v219; // x5
  int32_t v220; // w28
  const MethodInfo *v221; // x5
  int32_t v222; // w29
  const MethodInfo *v223; // x5
  int32_t v224; // w28
  const MethodInfo *v225; // x5
  const MethodInfo *v226; // x5
  int32_t v227; // w28
  NGUIText_GlyphInfo_o *v228; // x0
  float *v229; // x28
  NGUIText_c *v230; // x0
  UnityEngine_Object_o *v231; // x29
  bool v232; // w0
  float v233; // s0
  float v234; // s1
  float v235; // s2
  float v236; // s3
  unsigned int v237; // w27
  float v238; // s11
  unsigned int v239; // w29
  float v240; // s11
  float v241; // s12
  unsigned __int64 v242; // x29
  __int64 v243; // x8
  unsigned __int64 v244; // x9
  __int64 v245; // x8
  float v246; // s10
  float v247; // s14
  float v248; // s13
  float v249; // s14
  long double v250; // q0
  long double v251; // q1
  long double v252; // q2
  long double v253; // q3
  struct NGUIText_StaticFields *v254; // x8
  struct BetterList_Color__o *v255; // x8
  int v256; // w27
  UnityEngine_Color32_o v257; // x1
  float v258; // s8
  float v259; // s0
  float32x2_t v260; // d9
  float32x2_t v261; // d10
  float v262; // s1
  float v263; // s8
  int32_t v264; // w0
  long double v265; // q1
  long double v266; // q2
  long double v267; // q3
  long double v268; // q0
  int v269; // w8
  unsigned int v270; // w10
  unsigned int v271; // w28
  UnityEngine_Color32_o v272; // x1
  UnityEngine_Color32_o v273; // x1
  UnityEngine_Color32_o v274; // x1
  UnityEngine_Color32_o v275; // x1
  NGUIText_c *v276; // x0
  struct NGUIText_StaticFields *v277; // x8
  const MethodInfo *v278; // [xsp+28h] [xbp-178h]
  float v279; // [xsp+38h] [xbp-168h]
  _BOOL4 v280; // [xsp+3Ch] [xbp-164h]
  float v281; // [xsp+40h] [xbp-160h]
  float v282; // [xsp+44h] [xbp-15Ch]
  float v283; // [xsp+48h] [xbp-158h]
  float v284; // [xsp+4Ch] [xbp-154h]
  float m_XMin; // [xsp+50h] [xbp-150h]
  float v286; // [xsp+54h] [xbp-14Ch]
  unsigned __int64 v287; // [xsp+58h] [xbp-148h]
  float32x2_t v288; // [xsp+60h] [xbp-140h]
  float32x2_t v289; // [xsp+68h] [xbp-138h]
  float32x2_t v290; // [xsp+70h] [xbp-130h]
  float32x2_t v291; // [xsp+78h] [xbp-128h]
  unsigned __int64 v292; // [xsp+80h] [xbp-120h]
  int32_t indexOffset; // [xsp+88h] [xbp-118h]
  int v294; // [xsp+8Ch] [xbp-114h]
  float v295; // [xsp+90h] [xbp-110h]
  float v296; // [xsp+90h] [xbp-110h]
  float item; // [xsp+A0h] [xbp-100h]
  float itema; // [xsp+A0h] [xbp-100h]
  float32x2_t v299; // [xsp+B0h] [xbp-F0h]
  float v300; // [xsp+B0h] [xbp-F0h]
  float v301; // [xsp+B0h] [xbp-F0h]
  float32x2_t v302; // [xsp+C0h] [xbp-E0h]
  __int128 v303; // [xsp+C0h] [xbp-E0h]
  __int128 v304; // [xsp+C0h] [xbp-E0h]
  float v305; // [xsp+C0h] [xbp-E0h]
  float v306; // [xsp+C0h] [xbp-E0h]
  unsigned __int32 v307; // [xsp+C4h] [xbp-DCh]
  int32_t index; // [xsp+D4h] [xbp-CCh] BYREF
  bool spGradient; // [xsp+D8h] [xbp-C8h] BYREF
  bool isOutline; // [xsp+DCh] [xbp-C4h] BYREF
  bool ignoreColor; // [xsp+E0h] [xbp-C0h] BYREF
  bool strike; // [xsp+E4h] [xbp-BCh] BYREF
  bool underline; // [xsp+E8h] [xbp-B8h] BYREF
  bool italic; // [xsp+ECh] [xbp-B4h] BYREF
  bool bold; // [xsp+F0h] [xbp-B0h] BYREF
  int32_t sub; // [xsp+F4h] [xbp-ACh] BYREF
  double iptr; // [xsp+F8h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o v318; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v319; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v320; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v321; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v322; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v323; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v324; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v325; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v326; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v327; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v328; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v329; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v330; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v331; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v332; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v333; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v334; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v335; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v336; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v337; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v338; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v339; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v340; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v341; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v342; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v343; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v344; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v345; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v346; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v347; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v348; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v349; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o uvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  long double v351; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Color_o v352; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v353; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Color_o v354; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4CCBC07 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_Vector3__Add__);
    sub_1C713B0(&Method_BetterList_Color32__Add__);
    sub_1C713B0(&Method_BetterList_Color__Add__);
    sub_1C713B0(&Method_BetterList_Vector2__Add__);
    sub_1C713B0(&Method_BetterList_Color__Clear__);
    sub_1C713B0(&Method_BetterList_Color__get_Item__);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBC07 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !verts )
      goto LABEL_353;
    size = verts->fields.size;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    NGUIText__Prepare(text, v12);
    IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mColors;
    if ( !IsNullOrEmpty )
      goto LABEL_353;
    v349.fields.r = 1.0;
    v349.fields.g = 1.0;
    v349.fields.b = 1.0;
    v349.fields.a = 1.0;
    BetterList_Color___Add(
      (BetterList_Color__o *)IsNullOrEmpty,
      v349,
      (const MethodInfo_337F8E0 *)Method_BetterList_Color__Add__);
    static_fields = NGUIText_TypeInfo->static_fields;
    *(_QWORD *)&v15 = *(_QWORD *)&static_fields->tint.fields.r;
    *(_QWORD *)&v16 = *(_QWORD *)&static_fields->tint.fields.b;
    finalSize = static_fields->finalSize;
    v18.n64_u64[0] = *(unsigned __int64 *)&static_fields->gradientBottom.fields.r;
    *(_QWORD *)&v6 = *(_QWORD *)&static_fields->gradientBottom.fields.b;
    v19.n64_u64[0] = *(unsigned __int64 *)&static_fields->gradientTop.fields.r;
    *(_QWORD *)&v5 = *(_QWORD *)&static_fields->gradientTop.fields.b;
    LODWORD(v20) = DWORD1(v15);
    LODWORD(v21) = DWORD1(v16);
    static_fields->mAlpha = 1.0;
    v299.n64_u64[0] = *(unsigned __int64 *)&v16;
    v302.n64_u64[0] = *(unsigned __int64 *)&v15;
    IsNullOrEmpty = sub_25672D0(0, v15, v20, v16, v21);
    if ( !text )
      goto LABEL_353;
    stringLength = text->fields._stringLength;
    v23 = IsNullOrEmpty;
    v24 = NGUIText_TypeInfo->static_fields;
    pixelDensity = v24->pixelDensity;
    sub = 0;
    bold = 0;
    italic = 0;
    underline = 0;
    strike = 0;
    ignoreColor = 0;
    isOutline = 0;
    spGradient = 0;
    bitmapFont = (UnityEngine_Object_o *)v24->bitmapFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(bitmapFont, 0, 0);
    m_XMin = 0.0;
    m_YMin = 0.0;
    m_Height = 0.0;
    v31 = 0.0;
    v284 = 0.0;
    if ( v27 )
    {
      v32 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v32 = NGUIText_TypeInfo;
      }
      IsNullOrEmpty = (__int64)v32->static_fields->bitmapFont;
      if ( !IsNullOrEmpty )
        goto LABEL_353;
      uvRect = UIFont__get_uvRect((UIFont_o *)IsNullOrEmpty, 0);
      m_XMin = uvRect.fields.m_XMin;
      IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->bitmapFont;
      if ( !IsNullOrEmpty )
        goto LABEL_353;
      m_YMin = uvRect.fields.m_YMin;
      m_Width = uvRect.fields.m_Width;
      m_Height = uvRect.fields.m_Height;
      IsNullOrEmpty = UIFont__get_texWidth((UIFont_o *)IsNullOrEmpty, 0);
      if ( !NGUIText_TypeInfo->static_fields->bitmapFont )
        goto LABEL_353;
      v284 = m_Width / (float)(int)IsNullOrEmpty;
      v31 = m_Height / (float)UIFont__get_texHeight(NGUIText_TypeInfo->static_fields->bitmapFont, 0);
    }
    index = 0;
    if ( stringLength >= 1 )
    {
      v282 = v31;
      v290.n64_u64[0] = vmul_f32(v299, *(float32x2_t *)&v6).n64_u64[0];
      v291.n64_u64[0] = vmul_f32(v302, v18).n64_u64[0];
      v288.n64_u64[0] = vmul_f32(v299, *(float32x2_t *)&v5).n64_u64[0];
      v289.n64_u64[0] = vmul_f32(v302, v19).n64_u64[0];
      v281 = m_YMin + m_Height;
      v34 = 0;
      LODWORD(v12) = 0;
      LODWORD(v6) = 0;
      v35 = 0.0;
      v283 = pixelDensity * (float)finalSize;
      LODWORD(v292) = v23;
      v287 = v23 >> 24;
      v294 = stringLength;
      while ( 1 )
      {
        Chars = System_String__get_Chars(text, (int32_t)v12, 0);
        if ( Chars == 10 )
        {
          v38 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v38 = NGUIText_TypeInfo;
          }
          v39 = v38->static_fields;
          if ( v39->alignment != 1 )
          {
            if ( !v38->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v38);
              v39 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, size, *(float *)&v6 - v39->finalSpacingX, v28);
            size = verts->fields.size;
            v38 = NGUIText_TypeInfo;
          }
          if ( !v38->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38);
            v38 = NGUIText_TypeInfo;
          }
          v34 = 0;
          LODWORD(v6) = 0;
          v35 = v35 + v38->static_fields->finalLineHeight;
          goto LABEL_292;
        }
        if ( Chars < 0x20 )
          goto LABEL_291;
        v40 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v40 = NGUIText_TypeInfo;
        }
        v41 = v40->static_fields;
        if ( v41->encoding )
        {
          if ( !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v41 = NGUIText_TypeInfo->static_fields;
          }
          if ( NGUIText__ParseSymbol_49682736(
                 text,
                 &index,
                 v41->mColors,
                 v41->premultiply,
                 &sub,
                 &bold,
                 &italic,
                 &underline,
                 &strike,
                 &ignoreColor,
                 &spGradient,
                 &isOutline,
                 v41->mGradientColors,
                 v278) )
          {
            v42 = NGUIText_TypeInfo;
            v43 = ignoreColor;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v42 = NGUIText_TypeInfo;
            }
            v44 = v42->static_fields;
            IsNullOrEmpty = (__int64)v44->mColors;
            if ( v43 )
            {
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              *(UnityEngine_Color_o *)&v351 = BetterList_Color___get_Item(
                                                (BetterList_Color__o *)IsNullOrEmpty,
                                                *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                                                (const MethodInfo_337F6CC *)Method_BetterList_Color__get_Item__);
              mAlpha = NGUIText_TypeInfo->static_fields->mAlpha * NGUIText_TypeInfo->static_fields->tint.fields.a;
            }
            else
            {
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              b = v44->tint.fields.b;
              a = v44->tint.fields.a;
              r = v44->tint.fields.r;
              g = v44->tint.fields.g;
              *(UnityEngine_Color_o *)&v351 = BetterList_Color___get_Item(
                                                (BetterList_Color__o *)IsNullOrEmpty,
                                                *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                                                (const MethodInfo_337F6CC *)Method_BetterList_Color__get_Item__);
              *(float *)&v351 = r * *(float *)&v351;
              *((float *)&v351 + 1) = g * *((float *)&v351 + 1);
              *((float *)&v351 + 2) = b * *((float *)&v351 + 2);
              *((float *)&v351 + 3) = a * *((float *)&v351 + 3);
              mAlpha = NGUIText_TypeInfo->static_fields->mAlpha;
            }
            *((float *)&v351 + 3) = *((float *)&v351 + 3) * mAlpha;
            item = *((float *)&v351 + 2);
            v300 = *(float *)&v351;
            v295 = *((float *)&v351 + 1);
            v303 = *(_OWORD *)((char *)&v351 + 12);
            IsNullOrEmpty = sub_25672D0(
                              0,
                              v351,
                              *(long double *)((char *)&v351 + 4),
                              *(long double *)((char *)&v351 + 8),
                              *(long double *)((char *)&v351 + 12));
            v83 = NGUIText_TypeInfo;
            v292 = IsNullOrEmpty;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v83 = NGUIText_TypeInfo;
            }
            v84 = v303;
            mColors = v83->static_fields->mColors;
            if ( !mColors )
              goto LABEL_353;
            v86 = 0;
            v287 = v292 >> 24;
            v87 = (mColors->fields.size - 2) & ~((mColors->fields.size - 2) >> 31);
            while ( 1 )
            {
              v304 = v84;
              if ( !v83->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v83);
                v83 = NGUIText_TypeInfo;
              }
              v88 = v83->static_fields;
              v89.n64_f32[0] = v300;
              if ( v87 == v86 )
                break;
              IsNullOrEmpty = (__int64)v88->mColors;
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              v352 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       v86,
                       (const MethodInfo_337F6CC *)Method_BetterList_Color__get_Item__);
              v84 = v304;
              v83 = NGUIText_TypeInfo;
              ++v86;
              *(float *)&v84 = *(float *)&v304 * v352.fields.a;
            }
            if ( v88->gradient )
            {
              stringLength = v294;
              if ( !v83->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v83);
                v83 = NGUIText_TypeInfo;
                v89.n64_f32[0] = v300;
                v88 = NGUIText_TypeInfo->static_fields;
              }
              v89.n64_f32[1] = v295;
              v290.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v304, LODWORD(item)),
                                  *(float32x2_t *)&v88->gradientBottom.fields.b).n64_u64[0];
              v291.n64_u64[0] = vmul_f32(v89, *(float32x2_t *)&v88->gradientBottom.fields.r).n64_u64[0];
              v288.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v304, LODWORD(item)),
                                  *(float32x2_t *)&v88->gradientTop.fields.b).n64_u64[0];
              v289.n64_u64[0] = vmul_f32(v89, *(float32x2_t *)&v88->gradientTop.fields.r).n64_u64[0];
            }
            else
            {
              stringLength = v294;
            }
            if ( !v83->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v83);
              v83 = NGUIText_TypeInfo;
            }
            IsNullOrEmpty = (__int64)v83->static_fields->mGradientColors;
            if ( !IsNullOrEmpty )
              goto LABEL_353;
            if ( *(int *)(IsNullOrEmpty + 24) >= 2 )
            {
              if ( !v83->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v83);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
                if ( !IsNullOrEmpty )
                  goto LABEL_353;
              }
              v353 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 2,
                       (const MethodInfo_337F6CC *)Method_BetterList_Color__get_Item__);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              v90 = v353.fields.a;
              v91 = v353.fields.g;
              v290.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(v304, LODWORD(item)), *(float32x2_t *)&v353.fields.b).n64_u64[0];
              v291.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v295), LODWORD(v300)),
                                  *(float32x2_t *)&v353.fields.r).n64_u64[0];
              v354 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                       (const MethodInfo_337F6CC *)Method_BetterList_Color__get_Item__);
              v92 = v295;
              v93 = v304;
              v288.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v354.fields.a), LODWORD(item)),
                                  *(float32x2_t *)&v354.fields.b).n64_u64[0];
              v289.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v354.fields.g), LODWORD(v300)),
                                  *(float32x2_t *)&v354.fields.r).n64_u64[0];
            }
            if ( spGradient )
            {
              v94 = NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v94 = NGUIText_TypeInfo;
              }
              v95 = v94->static_fields;
              v290.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v304, LODWORD(item)),
                                  *(float32x2_t *)&v95->specificGradientBottom.fields.b).n64_u64[0];
              v291.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v295), LODWORD(v300)),
                                  *(float32x2_t *)&v95->specificGradientBottom.fields.r).n64_u64[0];
              v288.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v304, LODWORD(item)),
                                  *(float32x2_t *)&v95->specificGradientTop.fields.b).n64_u64[0];
              v289.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v295), LODWORD(v300)),
                                  *(float32x2_t *)&v95->specificGradientTop.fields.r).n64_u64[0];
            }
            --index;
            goto LABEL_292;
          }
          v40 = NGUIText_TypeInfo;
        }
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = NGUIText_TypeInfo;
        }
        if ( !v40->static_fields->useSymbols )
          goto LABEL_59;
        v46 = size;
        v47 = index;
        if ( !v40->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v40);
        Symbol = NGUIText__GetSymbol(text, v47, stringLength, v36);
        if ( !Symbol )
        {
          v40 = NGUIText_TypeInfo;
          size = v46;
LABEL_59:
          indexOffset = size;
          if ( !v40->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v40);
          Glyph = NGUIText__GetGlyph(Chars, v34, v28);
          if ( !Glyph )
            goto LABEL_292;
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
              v307 = v72.n128_u32[1];
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v72.n128_u32[1] = v307;
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
          v96 = NGUIText_TypeInfo;
          x = v66->fields.v0.fields.x;
          y = v66->fields.v0.fields.y;
          v100 = v66->fields.v1.fields.x;
          v99 = v66->fields.v1.fields.y;
          advance = v66->fields.advance;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v96 = NGUIText_TypeInfo;
          }
          finalSpacingX = v96->static_fields->finalSpacingX;
          if ( finalSpacingX < 0.0 )
          {
            if ( !v96->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v96);
              finalSpacingX = NGUIText_TypeInfo->static_fields->finalSpacingX;
            }
            advance = advance + finalSpacingX;
          }
          if ( !byte_4CC24D5 )
          {
            sub_1C713B0(&System_Math_TypeInfo);
            byte_4CC24D5 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v103 = v6;
          v104 = *(float *)&v6 + advance;
          v105 = v104;
          *(double *)&inited = modf(v104, &iptr);
          if ( v104 >= 0.0 )
          {
            if ( *(double *)&inited == 0.5 )
            {
              *(double *)&inited = iptr;
              v110 = 1.0;
              goto LABEL_119;
            }
            *(double *)&inited = floor(v105 + 0.5);
          }
          else if ( *(double *)&inited == -0.5 )
          {
            *(double *)&inited = iptr;
            v110 = -1.0;
LABEL_119:
            v111 = *(double *)&inited + v110;
            if ( ((__int64)*(double *)&inited & 1) != 0 )
              *(double *)&inited = v111;
          }
          else
          {
            *(double *)&inited = ceil(v105 + -0.5);
          }
          v142 = NGUIText_TypeInfo;
          DWORD1(v107) = 2146435072;
          v6 = v103;
          if ( *(double *)&inited == INFINITY )
            v143 = 0x80000000;
          else
            v143 = (int)*(double *)&inited;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v142 = NGUIText_TypeInfo;
          }
          v144 = v142->static_fields;
          itema = *(float *)&v103 + x;
          v145 = y - v35;
          v146 = *(float *)&v103 + v100;
          v301 = v99 - v35;
          if ( v143 > v144->regionWidth )
          {
            if ( *(float *)&v6 == 0.0 )
              return;
            if ( !v142->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(v142);
              v142 = NGUIText_TypeInfo;
              v144 = NGUIText_TypeInfo->static_fields;
            }
            if ( v144->alignment != 1 && indexOffset < verts->fields.size )
            {
              if ( !v142->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v142);
                v144 = NGUIText_TypeInfo->static_fields;
              }
              NGUIText__Align(verts, indexOffset, *(float *)&v6 - v144->finalSpacingX, v28);
              v142 = NGUIText_TypeInfo;
              indexOffset = verts->fields.size;
            }
            if ( !v142->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(v142);
              v142 = NGUIText_TypeInfo;
            }
            v146 = v146 - *(float *)&v6;
            finalLineHeight = v142->static_fields->finalLineHeight;
            itema = itema - *(float *)&v6;
            LODWORD(v6) = 0;
            v145 = v145 - finalLineHeight;
            v35 = v35 + finalLineHeight;
            v301 = v301 - finalLineHeight;
          }
          if ( !v142->_2.cctor_finished )
            inited = j_il2cpp_runtime_class_init_0(v142);
          if ( Chars - 8201 < 3 || (v148 = Chars, Chars == 32) )
          {
            if ( underline )
            {
              v148 = 95;
            }
            else if ( strike )
            {
              v148 = 45;
            }
            else
            {
              v148 = Chars;
            }
          }
          v149 = NGUIText_TypeInfo;
          cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
          if ( !cctor_finished )
          {
            inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v149 = NGUIText_TypeInfo;
            cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
          }
          v151 = v149->static_fields;
          if ( v65 )
            v152 = (float)(v151->finalSpacingX + v66->fields.advance) * 0.75;
          else
            v152 = v151->finalSpacingX + v66->fields.advance;
          if ( !cctor_finished )
            inited = j_il2cpp_runtime_class_init_0(v149);
          *(float *)&v5 = *(float *)&v6 + v152;
          if ( (unsigned int)(v148 - 8201) < 3 || v148 == 32 )
          {
            size = indexOffset;
            v6 = v5;
            goto LABEL_192;
          }
          if ( uvs )
          {
            v153 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v153 = NGUIText_TypeInfo;
            }
            v154 = (UnityEngine_Object_o *)v153->static_fields->bitmapFont;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v154, 0, 0) )
            {
              v155 = m_XMin + (float)(v284 * v66->fields.u0.fields.x);
              v156 = m_XMin + (float)(v284 * v66->fields.u2.fields.x);
              v157 = v281 - (float)(v282 * v66->fields.u0.fields.y);
              v158 = v281 - (float)(v282 * v66->fields.u2.fields.y);
              v66->fields.u0.fields.x = v155;
              v66->fields.u0.fields.y = v157;
              v66->fields.u2.fields.x = v156;
              v66->fields.u2.fields.y = v158;
              v66->fields.u1.fields.x = v155;
              v66->fields.u1.fields.y = v158;
              v66->fields.u3.fields.x = v156;
              v66->fields.u3.fields.y = v157;
            }
            v159 = 0;
            if ( bold )
              v160 = 4;
            else
              v160 = 1;
            do
            {
              BetterList_Vector2___Add(
                uvs,
                v66->fields.u0,
                (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v66->fields.u1,
                (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v66->fields.u2,
                (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v66->fields.u3,
                (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              ++v159;
            }
            while ( v159 < v160 );
          }
          v286 = *(float *)&v5;
          v296 = *(float *)&v6;
          if ( cols )
          {
            channel = v66->fields.channel;
            if ( channel != 15 && channel )
            {
              *(float *)&inited = (float)((float)(unsigned __int8)v292 / 255.0) * 0.49;
              *(float *)&v107 = (float)((float)BYTE1(v292) / 255.0) * 0.49;
              *(float *)&v108 = (float)((float)BYTE2(v292) / 255.0) * 0.49;
              *(float *)&v109 = (float)((float)(unsigned __int8)v287 / 255.0) * 0.49;
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
                  *(float *)&inited = *(float *)&inited + 0.51;
                  break;
                default:
                  if ( channel == 8 )
                    *(float *)&v109 = *(float *)&v109 + 0.51;
                  break;
              }
              v187 = sub_25672D0(0, inited, v107, v108, v109);
              v164 = bold;
              if ( bold )
                v188 = 16;
              else
                v188 = 4;
              v189 = (UnityEngine_Color32_o)v187;
              do
              {
                v190 = v189;
                BetterList_Color32___Add(cols, v190, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
                --v188;
              }
              while ( v188 );
LABEL_249:
              stringLength = v294;
            }
            else
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v162 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
              if ( !spGradient && !v162->gradient )
              {
                if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
                {
                  inited = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                  IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                  v162 = NGUIText_TypeInfo->static_fields;
                }
                mGradientColors = v162->mGradientColors;
                if ( !mGradientColors )
                  goto LABEL_353;
                if ( mGradientColors->fields.size < 2 )
                {
                  v164 = bold;
                  if ( bold )
                    v165 = 16;
                  else
                    v165 = 4;
                  do
                  {
                    v166 = (UnityEngine_Color32_o)(v292 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v287 << 24));
                    BetterList_Color32___Add(cols, v166, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
                    --v165;
                  }
                  while ( v165 );
                  goto LABEL_249;
                }
              }
              v168 = v66->fields.v0.fields.y;
              v279 = v145;
              if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
              {
                inited = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v169 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
              v170.n64_u64[0] = vsub_f32(v289, v291).n64_u64[0];
              stringLength = v294;
              v171.n64_u64[0] = vsub_f32(v288, v290).n64_u64[0];
              v172 = (float)(v283 + (float)(v168 / v169)) / v283;
              v173 = (float)(v283 + (float)(v66->fields.v1.fields.y / v169)) / v283;
              *(float *)&inited = fminf(v172, 1.0);
              if ( v172 < 0.0 )
                *(float *)&inited = 0.0;
              *(float32x2_t *)&v107 = vmul_n_f32(v170, *(float *)&inited);
              *(float32x2_t *)&v108 = vmul_n_f32(v171, *(float *)&inited);
              *(float32x2_t *)&inited = vadd_f32(v291, *(float32x2_t *)&v107);
              *(float32x2_t *)&v108 = vadd_f32(v290, *(float32x2_t *)&v108);
              LODWORD(v107) = DWORD1(inited);
              LODWORD(v109) = DWORD1(v108);
              v174 = sub_25672D0(0, inited, v107, v108, v109);
              *(float *)&v178 = fminf(v173, 1.0);
              if ( v173 < 0.0 )
                *(float *)&v178 = 0.0;
              *(float32x2_t *)&v175 = vmul_n_f32(v170, *(float *)&v178);
              *(float32x2_t *)&v176 = vmul_n_f32(v171, *(float *)&v178);
              *(float32x2_t *)&v178 = vadd_f32(v291, *(float32x2_t *)&v175);
              *(float32x2_t *)&v176 = vadd_f32(v290, *(float32x2_t *)&v176);
              LODWORD(v175) = DWORD1(v178);
              NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v174;
              LODWORD(v177) = DWORD1(v176);
              v179 = sub_25672D0(0, v178, v175, v176, v177);
              v180 = NGUIText_TypeInfo;
              v145 = v279;
              *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v179;
              v164 = bold;
              if ( bold )
                v181 = 4;
              else
                v181 = 1;
              if ( v181 <= 1 )
                v181 = 1;
              for ( i = v181 - 1; ; --i )
              {
                if ( !v180->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v180);
                rgba = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
                BetterList_Color32___Add(cols, rgba, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
                v184 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                BetterList_Color32___Add(cols, v184, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
                v185 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                BetterList_Color32___Add(cols, v185, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
                v186 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
                BetterList_Color32___Add(cols, v186, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
                if ( !i )
                  break;
                v180 = NGUIText_TypeInfo;
              }
            }
            v167 = v164;
          }
          else
          {
            v167 = bold;
            stringLength = v294;
          }
          v191 = italic;
          v306 = v35;
          v280 = v167;
          if ( v167 )
          {
            v192 = 0;
            v193 = v145;
            v194 = v301 - v145;
            while ( 1 )
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v195 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
              s_c1 = v195->s_c1;
              if ( !*(_QWORD *)&s_c1 )
                goto LABEL_353;
              v197 = *(unsigned int *)(*(_QWORD *)&s_c1 + 24LL);
              if ( v192 >= v197 || v192 + 1 >= v197 )
LABEL_354:
                sub_1C71610(IsNullOrEmpty);
              v198 = *(_QWORD *)&s_c1 + 4 * v192;
              v200 = *(float *)(v198 + 32);
              v199 = *(float *)(v198 + 36);
              if ( v191 )
              {
                if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
                {
                  j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                  v195 = NGUIText_TypeInfo->static_fields;
                }
                v201 = (float)((float)v195->fontSize * 0.1) * (float)(v194 / (float)v195->fontSize);
              }
              else
              {
                v201 = 0.0;
              }
              v202 = v193 + v199;
              v330.fields.z = 0.0;
              v330.fields.x = (float)(itema + v200) - v201;
              v330.fields.y = v193 + v199;
              BetterList_Vector3___Add(verts, v330, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v331.fields.x = (float)(itema + v200) + v201;
              v331.fields.z = 0.0;
              v203 = v301 + v199;
              v331.fields.y = v203;
              BetterList_Vector3___Add(verts, v331, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v204 = v146 + v200;
              v332.fields.x = v204 + v201;
              v332.fields.z = 0.0;
              v332.fields.y = v203;
              BetterList_Vector3___Add(verts, v332, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v333.fields.x = v204 - v201;
              v333.fields.z = 0.0;
              v333.fields.y = v202;
              BetterList_Vector3___Add(verts, v333, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v35 = v306;
              *(float *)&v6 = v296;
              v192 += 2LL;
              if ( v192 == 8 )
                goto LABEL_271;
            }
          }
          if ( italic )
          {
            v206 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v206 = NGUIText_TypeInfo;
            }
            v207 = (float)v206->static_fields->fontSize;
            v208 = (float)(v207 * 0.1) * (float)((float)(v301 - v145) / v207);
            v334.fields.x = itema - v208;
            v334.fields.z = 0.0;
            v334.fields.y = v145;
            BetterList_Vector3___Add(verts, v334, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
            v335.fields.x = itema + v208;
            v335.fields.z = 0.0;
            v335.fields.y = v301;
            BetterList_Vector3___Add(verts, v335, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
            v336.fields.x = v146 + v208;
            v336.fields.z = 0.0;
            v336.fields.y = v301;
            BetterList_Vector3___Add(verts, v336, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
            v146 = v146 - v208;
          }
          else
          {
            v337.fields.z = 0.0;
            v337.fields.x = itema;
            v337.fields.y = v145;
            BetterList_Vector3___Add(verts, v337, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
            v338.fields.x = itema;
            v338.fields.z = 0.0;
            v338.fields.y = v301;
            BetterList_Vector3___Add(verts, v338, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
            v339.fields.z = 0.0;
            v339.fields.x = v146;
            v339.fields.y = v301;
            BetterList_Vector3___Add(verts, v339, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
          }
          v340.fields.z = 0.0;
          v340.fields.x = v146;
          v340.fields.y = v145;
          BetterList_Vector3___Add(verts, v340, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
            NGUIText__ApplyEffect(verts, uvs, cols, v210 - 4, v210, v213 / 1.4142, -(float)(v212 / 1.4142), v205);
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
            v35 = v306;
            *(float *)&v6 = v296;
          }
          if ( !strike && !underline )
          {
            *(float *)&v6 = v286;
            size = indexOffset;
            v34 = Chars;
            goto LABEL_292;
          }
          size = indexOffset;
          if ( strike )
            v227 = 45;
          else
            v227 = 95;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v228 = NGUIText__GetGlyph(v227, Chars, v28);
          if ( !v228 )
          {
            *(float *)&v6 = v286;
LABEL_291:
            v34 = Chars;
            goto LABEL_292;
          }
          v229 = (float *)v228;
          if ( uvs )
          {
            v230 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v230 = NGUIText_TypeInfo;
            }
            v231 = (UnityEngine_Object_o *)v230->static_fields->bitmapFont;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v232 = UnityEngine_Object__op_Inequality(v231, 0, 0);
            v233 = v229[8];
            if ( v232 )
            {
              v233 = m_XMin + (float)(v284 * v233);
              v234 = m_XMin + (float)(v284 * v229[12]);
              v235 = v281 - (float)(v282 * v229[9]);
              v236 = v281 - (float)(v282 * v229[13]);
              v229[8] = v233;
              v229[9] = v235;
              v229[12] = v234;
              v229[13] = v236;
            }
            else
            {
              v234 = v229[12];
            }
            v237 = 0;
            v238 = (float)(v233 + v234) * 0.5;
            if ( v280 )
              v239 = 4;
            else
              v239 = 1;
            do
            {
              v322.fields.y = v229[9];
              v322.fields.x = v238;
              BetterList_Vector2___Add(uvs, v322, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              v323.fields.y = v229[13];
              v323.fields.x = v238;
              BetterList_Vector2___Add(uvs, v323, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              v324.fields.y = v229[13];
              v324.fields.x = v238;
              BetterList_Vector2___Add(uvs, v324, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              v325.fields.y = v229[9];
              v325.fields.x = v238;
              BetterList_Vector2___Add(uvs, v325, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
              ++v237;
            }
            while ( v237 < v239 );
          }
          v240 = v229[5] - v35;
          v241 = v229[7] - v35;
          if ( v280 )
          {
            v242 = 0;
            while ( 1 )
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v243 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 320LL);
              if ( !v243 )
                goto LABEL_353;
              v244 = *(unsigned int *)(v243 + 24);
              if ( v242 >= v244 || v242 + 1 >= v244 )
                goto LABEL_354;
              v245 = v243 + 4 * v242;
              v246 = *(float *)(v245 + 32);
              v247 = *(float *)(v245 + 36);
              v341.fields.z = 0.0;
              v248 = v240 + v247;
              v341.fields.x = v296 + v246;
              v341.fields.y = v240 + v247;
              BetterList_Vector3___Add(verts, v341, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v249 = v241 + v247;
              v342.fields.z = 0.0;
              v342.fields.x = v296 + v246;
              v342.fields.y = v249;
              BetterList_Vector3___Add(verts, v342, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v343.fields.z = 0.0;
              v343.fields.x = v286 + v246;
              v343.fields.y = v249;
              BetterList_Vector3___Add(verts, v343, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v344.fields.z = 0.0;
              v344.fields.x = v286 + v246;
              v344.fields.y = v248;
              BetterList_Vector3___Add(verts, v344, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
              v242 += 2LL;
              if ( v242 == 8 )
                goto LABEL_309;
            }
          }
          v345.fields.z = 0.0;
          LODWORD(v345.fields.x) = v6;
          v345.fields.y = v229[5] - v35;
          BetterList_Vector3___Add(verts, v345, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
          v346.fields.z = 0.0;
          LODWORD(v346.fields.x) = v6;
          v346.fields.y = v241;
          BetterList_Vector3___Add(verts, v346, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
          v347.fields.z = 0.0;
          v347.fields.x = v286;
          v347.fields.y = v241;
          BetterList_Vector3___Add(verts, v347, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
          v348.fields.z = 0.0;
          v348.fields.x = v286;
          v348.fields.y = v240;
          BetterList_Vector3___Add(verts, v348, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
LABEL_309:
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            v250 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          }
          size = indexOffset;
          stringLength = v294;
          v254 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
          *(float *)&v6 = v286;
          if ( spGradient || v254->gradient )
          {
LABEL_322:
            v258 = v229[5];
            if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
            {
              v250 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            }
            DWORD1(v6) = v290.n64_u32[1];
            v259 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
            v260.n64_u64[0] = vsub_f32(v289, v291).n64_u64[0];
            v261.n64_u64[0] = vsub_f32(v288, v290).n64_u64[0];
            v262 = (float)(v283 + (float)(v258 / v259)) / v283;
            v263 = (float)(v283 + (float)(v229[7] / v259)) / v283;
            *(float *)&v250 = fminf(v262, 1.0);
            if ( v262 < 0.0 )
              *(float *)&v250 = 0.0;
            *(float32x2_t *)&v251 = vmul_n_f32(v260, *(float *)&v250);
            *(float32x2_t *)&v252 = vmul_n_f32(v261, *(float *)&v250);
            *(float32x2_t *)&v250 = vadd_f32(v291, *(float32x2_t *)&v251);
            *(float32x2_t *)&v252 = vadd_f32(v290, *(float32x2_t *)&v252);
            LODWORD(v251) = DWORD1(v250);
            LODWORD(v253) = DWORD1(v252);
            v264 = sub_25672D0(0, v250, v251, v252, v253);
            *(float *)&v268 = fminf(v263, 1.0);
            if ( v263 < 0.0 )
              *(float *)&v268 = 0.0;
            *(float32x2_t *)&v265 = vmul_n_f32(v260, *(float *)&v268);
            *(float32x2_t *)&v266 = vmul_n_f32(v261, *(float *)&v268);
            *(float32x2_t *)&v268 = vadd_f32(v291, *(float32x2_t *)&v265);
            *(float32x2_t *)&v266 = vadd_f32(v290, *(float32x2_t *)&v266);
            LODWORD(v265) = DWORD1(v268);
            NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v264;
            LODWORD(v267) = DWORD1(v266);
            v269 = sub_25672D0(0, v268, v265, v266, v267);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            if ( v280 )
              v270 = 4;
            else
              v270 = 1;
            *(float *)&v6 = v286;
            if ( v270 <= 1 )
              v270 = 1;
            v271 = v270 - 1;
            *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v269;
            while ( 1 )
            {
              if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
                j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
              if ( !cols )
                goto LABEL_353;
              v272 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
              BetterList_Color32___Add(cols, v272, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
              v273 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
              BetterList_Color32___Add(cols, v273, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
              v274 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
              BetterList_Color32___Add(cols, v274, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
              v275 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
              BetterList_Color32___Add(cols, v275, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
              if ( !v271 )
                goto LABEL_291;
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              --v271;
            }
          }
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v250 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            v254 = NGUIText_TypeInfo->static_fields;
          }
          v255 = v254->mGradientColors;
          if ( !v255 )
            goto LABEL_353;
          if ( v255->fields.size >= 2 )
            goto LABEL_322;
          v256 = v280 ? 16 : 4;
          if ( !cols )
            goto LABEL_353;
          do
          {
            v257 = (UnityEngine_Color32_o)(v292 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v287 << 24));
            BetterList_Color32___Add(cols, v257, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
            --v256;
          }
          while ( v256 );
LABEL_192:
          v34 = Chars;
LABEL_193:
          stringLength = v294;
          goto LABEL_292;
        }
        v49 = Symbol;
        v50 = NGUIText_TypeInfo;
        mOffsetX = v49->fields.mOffsetX;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v50 = NGUIText_TypeInfo;
        }
        mOffsetY = v49->fields.mOffsetY;
        mWidth = v49->fields.mWidth;
        fontScale = v50->static_fields->fontScale;
        mHeight = v49->fields.mHeight;
        mAdvance = v49->fields.mAdvance;
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v57 = v6;
        v58 = *(float *)&v6 + (float)(fontScale * (float)mAdvance);
        v59 = v58;
        v61 = modf(v58, &iptr);
        if ( v58 >= 0.0 )
        {
          if ( v61 == 0.5 )
          {
            v62 = iptr;
            v63 = 1.0;
LABEL_70:
            v78 = v62 + v63;
            if ( ((__int64)v62 & 1) != 0 )
              v62 = v78;
            goto LABEL_124;
          }
          v62 = floor(v59 + 0.5);
        }
        else
        {
          if ( v61 == -0.5 )
          {
            v62 = iptr;
            v63 = -1.0;
            goto LABEL_70;
          }
          v62 = ceil(v59 + -0.5);
        }
LABEL_124:
        v112 = NGUIText_TypeInfo;
        v113 = NGUIText_TypeInfo->static_fields;
        v114 = fontScale * (float)mWidth;
        v115 = *(float *)&v57 + (float)(fontScale * (float)mOffsetX);
        v116 = v115 + v114;
        v117 = -(float)(v35 + (float)(fontScale * (float)mOffsetY));
        v118 = (int)v62;
        if ( v62 == INFINITY )
          v118 = 0x80000000;
        v119 = v117 - (float)(fontScale * (float)mHeight);
        if ( v118 <= v113->regionWidth )
        {
          stringLength = v294;
        }
        else
        {
          stringLength = v294;
          if ( *(float *)&v57 == 0.0 )
            return;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v112 = NGUIText_TypeInfo;
            v113 = NGUIText_TypeInfo->static_fields;
          }
          if ( v113->alignment != 1 && v46 < verts->fields.size )
          {
            if ( !v112->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v112);
              v113 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, v46, *(float *)&v57 - v113->finalSpacingX, v60);
            v46 = verts->fields.size;
            v112 = NGUIText_TypeInfo;
          }
          if ( !v112->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v112);
            v112 = NGUIText_TypeInfo;
          }
          v115 = v115 - *(float *)&v57;
          v116 = v116 - *(float *)&v57;
          LODWORD(v57) = 0;
          v120 = v112->static_fields->finalLineHeight;
          v119 = v119 - v120;
          v117 = v117 - v120;
          v35 = v35 + v120;
        }
        v326.fields.z = 0.0;
        v326.fields.x = v115;
        v326.fields.y = v119;
        BetterList_Vector3___Add(verts, v326, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v327.fields.z = 0.0;
        v327.fields.x = v115;
        v327.fields.y = v117;
        BetterList_Vector3___Add(verts, v327, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v328.fields.z = 0.0;
        v328.fields.x = v116;
        v328.fields.y = v117;
        BetterList_Vector3___Add(verts, v328, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v329.fields.z = 0.0;
        v329.fields.x = v116;
        v329.fields.y = v119;
        BetterList_Vector3___Add(verts, v329, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v121 = NGUIText_TypeInfo;
        v305 = v35;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v121 = NGUIText_TypeInfo;
        }
        v122 = v121->static_fields;
        v123 = v49->fields.mAdvance;
        v124 = index;
        v125 = v122->finalSpacingX;
        v126 = v122->fontScale;
        index = v124 + BMSymbol__get_length(v49, 0) - 1;
        if ( uvs )
        {
          v131 = v49->fields.mUV.fields.m_XMin;
          v132 = v49->fields.mUV.fields.m_YMin;
          v133 = v132 + v49->fields.mUV.fields.m_Height;
          v134 = v131 + v49->fields.mUV.fields.m_Width;
          v318.fields.x = v131;
          v318.fields.y = v132;
          BetterList_Vector2___Add(uvs, v318, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
          v319.fields.x = v131;
          v319.fields.y = v133;
          BetterList_Vector2___Add(uvs, v319, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
          v320.fields.x = v134;
          v320.fields.y = v133;
          BetterList_Vector2___Add(uvs, v320, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
          v321.fields.x = v134;
          v321.fields.y = v132;
          BetterList_Vector2___Add(uvs, v321, (const MethodInfo_3382980 *)Method_BetterList_Vector2__Add__);
        }
        v135 = v125 + (float)(v126 * (float)v123);
        v6 = v57;
        *(float *)&v6 = *(float *)&v57 + v135;
        if ( cols )
        {
          v136 = NGUIText_TypeInfo;
          v35 = v305;
          size = v46;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            v127 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v136 = NGUIText_TypeInfo;
          }
          if ( v136->static_fields->symbolStyle == 2 )
          {
            v137 = 4;
            do
            {
              v138 = (UnityEngine_Color32_o)(v292 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v287 << 24));
              BetterList_Color32___Add(cols, v138, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
              --v137;
            }
            while ( v137 );
          }
          else
          {
            LODWORD(v127) = 1.0;
            LODWORD(v128) = 1.0;
            LODWORD(v129) = 1.0;
            LODWORD(v130) = 1.0;
            v139 = sub_25672D0(0, v127, v128, v129, v130) & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v287 << 24);
            v140 = 4;
            do
            {
              v141 = (UnityEngine_Color32_o)v139;
              BetterList_Color32___Add(cols, v141, (const MethodInfo_3380434 *)Method_BetterList_Color32__Add__);
              --v140;
            }
            while ( v140 );
          }
          v34 = 0;
          goto LABEL_193;
        }
        size = v46;
        v35 = v305;
        v34 = 0;
LABEL_292:
        v12 = (const MethodInfo *)(unsigned int)++index;
        if ( index >= stringLength )
          goto LABEL_340;
      }
    }
    LODWORD(v6) = 0;
LABEL_340:
    v276 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v276 = NGUIText_TypeInfo;
    }
    v277 = v276->static_fields;
    if ( v277->alignment != 1 && size < verts->fields.size )
    {
      if ( !v276->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v276);
        v277 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(verts, size, *(float *)&v6 - v277->finalSpacingX, v28);
      v276 = NGUIText_TypeInfo;
    }
    if ( !v276->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v276);
      v276 = NGUIText_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v276->static_fields->mColors;
    if ( !IsNullOrEmpty
      || (BetterList_Color___Clear(
            (BetterList_Color__o *)IsNullOrEmpty,
            (const MethodInfo_337F8C8 *)Method_BetterList_Color__Clear__),
          (IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors) == 0) )
    {
LABEL_353:
      sub_1C71608(IsNullOrEmpty, v12);
    }
    BetterList_Color___Clear(
      (BetterList_Color__o *)IsNullOrEmpty,
      (const MethodInfo_337F8C8 *)Method_BetterList_Color__Clear__);
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

  if ( (byte_4CCBC08 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_Vector3__Add__);
    sub_1C713B0(&Method_BetterList_int__Add__);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    byte_4CCBC08 = 1;
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
    sub_1C71608(v9, v10);
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
    BetterList_Vector3___Add(verts, v66, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
    if ( !indices )
      goto LABEL_120;
    v24 = (unsigned __int16)v24;
    BetterList_int___Add(indices, item, (const MethodInfo_3380DD8 *)Method_BetterList_int__Add__);
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
      if ( !byte_4CC24D5 )
      {
        sub_1C713B0(&System_Math_TypeInfo);
        byte_4CC24D5 = 1;
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
      BetterList_Vector3___Add(verts, v68, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      BetterList_int___Add(indices, item + 1, (const MethodInfo_3380DD8 *)Method_BetterList_int__Add__);
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
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
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
    BetterList_Vector3___Add(verts, v67, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
    BetterList_int___Add(indices, item + 1, (const MethodInfo_3380DD8 *)Method_BetterList_int__Add__);
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
  const MethodInfo_338340C *v76; // x1
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

  if ( (byte_4CCBC0A & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_Vector3__Add__);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    byte_4CCBC0A = 1;
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
    sub_1C71608(v15, v13);
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
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
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
    BetterList_Vector3___Add(caret, v110, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
    v111.fields.z = 0.0;
    v111.fields.x = v29 + -1.0;
    v111.fields.y = -v31;
    BetterList_Vector3___Add(caret, v111, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
    v112.fields.z = 0.0;
    v112.fields.x = v29 + 1.0;
    v112.fields.y = -v31;
    BetterList_Vector3___Add(caret, v112, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
    v113.fields.z = 0.0;
    v113.fields.x = v29 + 1.0;
    v113.fields.y = (float)-v31 - v25;
    BetterList_Vector3___Add(caret, v113, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
      BetterList_Vector3___Add(caret, v93, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      v94.fields.z = 0.0;
      v94.fields.x = v29 + -1.0;
      v94.fields.y = -v31;
      BetterList_Vector3___Add(caret, v94, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      v95.fields.z = 0.0;
      v95.fields.x = v29 + 1.0;
      v95.fields.y = -v31;
      BetterList_Vector3___Add(caret, v95, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      v96.fields.z = 0.0;
      v96.fields.x = v29 + 1.0;
      v96.fields.y = (float)-v31 - v25;
      BetterList_Vector3___Add(caret, v96, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
        BetterList_Vector3___Add(highlight, v97, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
        BetterList_Vector3___Add(highlight, v98, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v99.fields.z = 0.0;
        v99.fields.x = v29;
        v99.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v99, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v36 = v29 + 2.0;
        v100.fields.z = 0.0;
        v100.fields.x = v29 + 2.0;
        v100.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v100, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      }
      v101.fields.z = 0.0;
      v101.fields.x = v36;
      v101.fields.y = v37;
      BetterList_Vector3___Add(highlight, v101, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
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
        BetterList_Vector3___Add(highlight, v102, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v67 = prev_4a;
      }
      else
      {
        if ( v17 > index || v16 <= index )
          goto LABEL_116;
        v103.fields.z = 0.0;
        v103.fields.x = v29;
        v103.fields.y = v65 - v25;
        BetterList_Vector3___Add(highlight, v103, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v104.fields.z = 0.0;
        v104.fields.x = v29;
        v104.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v104, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        x = v29 + 2.0;
        v105.fields.z = 0.0;
        v105.fields.x = v29 + 2.0;
        v105.fields.y = -v31;
        BetterList_Vector3___Add(highlight, v105, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v67 = v65 - v25;
      }
      v69 = 0;
      v70 = x;
      BetterList_Vector3___Add(
        highlight,
        *(UnityEngine_Vector3_o *)(&v67 - 1),
        (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
          BetterList_Vector3___Add(highlight, v108, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
          v109.fields.y = prev_4a;
          v109.fields.z = 0.0;
          v109.fields.x = v84;
          BetterList_Vector3___Add(highlight, v109, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
          BetterList_Vector3___Add(highlight, v106, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
          v107.fields.z = 0.0;
          v107.fields.x = v68;
          v107.fields.y = v65;
          BetterList_Vector3___Add(highlight, v107, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
      v76 = (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__;
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
      BetterList_Vector3___Add(highlight, v114, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      v115.fields.z = 0.0;
      v115.fields.x = v29;
      v115.fields.y = v81;
      BetterList_Vector3___Add(highlight, v115, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      v76 = (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__;
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
      BetterList_Vector3___Add(highlight, v116, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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

  if ( (byte_4CCBC09 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_Vector3__Add__);
    sub_1C713B0(&Method_BetterList_int__Add__);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    byte_4CCBC09 = 1;
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
    sub_1C71608(v9, v10);
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
        if ( !byte_4CC24D5 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC24D5 = 1;
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
        BetterList_int___Add(indices, index, (const MethodInfo_3380DD8 *)Method_BetterList_int__Add__);
        v59.fields.y = (float)-v22 - v21;
        v59.fields.z = 0.0;
        v59.fields.x = v20;
        BetterList_Vector3___Add(verts, v59, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
        v60.fields.z = 0.0;
        v60.fields.x = v37;
        v60.fields.y = -v22;
        BetterList_Vector3___Add(verts, v60, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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
      if ( !byte_4CC24D5 )
      {
        sub_1C713B0(&System_Math_TypeInfo);
        byte_4CC24D5 = 1;
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
      BetterList_int___Add(indices, index, (const MethodInfo_3380DD8 *)Method_BetterList_int__Add__);
      v61.fields.y = (float)-v22 - v21;
      v61.fields.z = 0.0;
      v61.fields.x = v20;
      BetterList_Vector3___Add(verts, v61, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
      v62.fields.z = 0.0;
      v62.fields.x = v37;
      v62.fields.y = -v22;
      BetterList_Vector3___Add(verts, v62, (const MethodInfo_338340C *)Method_BetterList_Vector3__Add__);
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

  if ( (byte_4CCBC01 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBC01 = 1;
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
      sub_1C71608(v3, method);
    }
  }
}


System_String_o *NGUIText__StripSymbols(System_String_o *text, const MethodInfo *method)
{
  int32_t stringLength; // w26
  int32_t v4; // w20
  System_String_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v8; // [xsp+28h] [xbp-78h]
  int32_t index; // [xsp+34h] [xbp-6Ch] BYREF
  bool isOutline; // [xsp+38h] [xbp-68h] BYREF
  bool v11; // [xsp+3Ch] [xbp-64h] BYREF
  bool ignoreColor; // [xsp+40h] [xbp-60h] BYREF
  bool strike; // [xsp+44h] [xbp-5Ch] BYREF
  bool underline; // [xsp+48h] [xbp-58h] BYREF
  bool italic; // [xsp+4Ch] [xbp-54h] BYREF
  bool bold; // [xsp+58h] [xbp-48h] BYREF
  int32_t sub; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_4CCBBFC & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBBFC = 1;
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
        v11 = 0;
        isOutline = 0;
        index = v4;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        if ( NGUIText__ParseSymbol_49682736(
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
               &v11,
               &isOutline,
               0,
               v8) )
        {
          v5 = System_String__Remove(text, v4, index - v4, 0);
          if ( !v5 )
            sub_1C71608(0, v6);
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

  if ( (byte_4CCBBF1 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBBF1 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Update_49676916(1, v1);
}


void NGUIText__Update_49676916(bool request, const MethodInfo *method)
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

  if ( (byte_4CCBBF2 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_783/*")_-"*/);
    sub_1C713B0(&StringLiteral_1777/*"A"*/);
    byte_4CCBBF2 = 1;
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
  if ( !byte_4CC24D5 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC24D5 = 1;
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
        (System_String_o *)StringLiteral_783/*")_-"*/,
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
            (System_String_o *)StringLiteral_1777/*"A"*/,
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
    sub_1C71608(v22, v20);
  }
}


bool NGUIText__WrapText(System_String_o *text, System_String_o **finalText, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CCBC05 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    byte_4CCBC05 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__WrapText_49692068(text, finalText, 0, v3);
}


bool NGUIText__WrapText_49692068(
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

  if ( (byte_4CCBC06 & 1) == 0 )
  {
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCBC06 = 1;
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
  if ( !byte_4CC0D08 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D08 = 1;
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
    sub_1C71354(
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
  v25 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
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
          Chars = (System_String_o *)System_Text_StringBuilder__Append_64118012(v25, 0xAu, 0);
        }
        else
        {
          Chars = System_String__Substring_64077664(v24, v30, index - v30 + 1, 0);
          if ( !v25 )
            goto LABEL_170;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_64115684(v25, Chars, 0);
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
        Chars = System_String__Substring_64077664(v24, v30, (int)v27 - v30, 0);
        if ( v25 )
        {
          System_Text_StringBuilder__Append_64115684(v25, Chars, 0);
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
      sub_1C71608(Chars, v27);
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
        Chars = System_String__Substring_64077664(v24, v30, v48, 0);
        if ( !v25 )
          goto LABEL_170;
        System_Text_StringBuilder__Append_64115684(v25, Chars, 0);
        stringLength = v81;
        v35 = 0;
        v30 = index + 1;
      }
    }
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
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
  Chars = System_String__Substring_64077664(v24, v30, (index - v30) & (unsigned int)~((index - v30) >> 31), 0);
  if ( !v25 )
    goto LABEL_170;
  System_Text_StringBuilder__Append_64115684(v25, Chars, 0);
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
  sub_1C71354(v68, v69, v70, v71, v72, v73, v74, v75);
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


void NGUIText_GlyphInfo___ctor(NGUIText_GlyphInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}