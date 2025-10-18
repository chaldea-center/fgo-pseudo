void NGUIText___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct NGUIText_StaticFields *static_fields; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  NGUIText_c *v5; // x8
  struct NGUIText_StaticFields *v11; // x10
  struct NGUIText_StaticFields *v13; // x9
  NGUIText_c *v14; // x9
  struct NGUIText_StaticFields *v15; // x8
  BetterList_Color__o *v16; // x19
  struct NGUIText_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BetterList_Color__o *v20; // x19
  struct NGUIText_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BetterList_float__o *v24; // x19
  CGThumbnailListItem_o *p_mSizes; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Array_o *v28; // x0
  System_RuntimeFieldHandle_o v29; // x1
  System_Array_o *v30; // x19
  struct NGUIText_StaticFields *v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4C476DF & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_float___ctor__);
    sub_1C37058(&Method_BetterList_Color___ctor__);
    sub_1C37058(&BetterList_float__TypeInfo);
    sub_1C37058(&BetterList_Color__TypeInfo);
    sub_1C37058(&NGUIText_GlyphInfo_TypeInfo);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&float___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0);
    byte_4C476DF = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(NGUIText_GlyphInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  static_fields = NGUIText_TypeInfo->static_fields;
  static_fields->glyph = (struct NGUIText_GlyphInfo_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->glyph, (int32_t)v1, v3, v4);
  v5 = NGUIText_TypeInfo;
  __asm { FMOV            V1.2S, #1.0 }
  v11 = NGUIText_TypeInfo->static_fields;
  *(_QWORD *)&v11->fontScale = _D1;
  __asm { FMOV            V1.4S, #1.0 }
  v11->fontSize = 16;
  *(_QWORD *)&v11->fontStyle = 0x100000000LL;
  v11->tint = _Q1;
  v13 = v5->static_fields;
  *(int32x4_t *)&v13->rectWidth = vdupq_n_s32(0xF4240u);
  v13->maxLines = 0;
  v13->gradient = 0;
  v13->gradientBottom = _Q1;
  v5->static_fields->gradientTop = _Q1;
  v5->static_fields->specificGradientBottom = _Q1;
  v5->static_fields->specificGradientTop = _Q1;
  if ( !byte_4C433CF )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C433CF = 1;
  }
  v14 = NGUIText_TypeInfo;
  NGUIText_TypeInfo->static_fields->outlineDistance = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  v14->static_fields->outlineEffect = (struct UnityEngine_Color_o)xmmword_C0FC60;
  v15 = v14->static_fields;
  v15->encoding = 0;
  *(_QWORD *)&v15->spacingX = 0;
  v15->premultiply = 0;
  *(_QWORD *)&v15->finalSize = 0;
  *(_QWORD *)&v15->finalLineHeight = 0;
  v15->useSymbols = 0;
  *(_QWORD *)&v15->mInvisible.fields.b = 0;
  *(_QWORD *)&v15->mInvisible.fields.r = 0;
  v16 = (BetterList_Color__o *)sub_1C372A4(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v16, (const MethodInfo_3318AB8 *)Method_BetterList_Color___ctor__);
  v17 = NGUIText_TypeInfo->static_fields;
  v17->mColors = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->mColors, (int32_t)v16, v18, v19);
  v20 = (BetterList_Color__o *)sub_1C372A4(BetterList_Color__TypeInfo);
  BetterList_Color____ctor(v20, (const MethodInfo_3318AB8 *)Method_BetterList_Color___ctor__);
  v21 = NGUIText_TypeInfo->static_fields;
  v21->mGradientColors = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->mGradientColors, (int32_t)v20, v22, v23);
  NGUIText_TypeInfo->static_fields->mAlpha = 1.0;
  v24 = (BetterList_float__o *)sub_1C372A4(BetterList_float__TypeInfo);
  BetterList_float____ctor(v24, (const MethodInfo_331AFFC *)Method_BetterList_float___ctor__);
  p_mSizes = (CGThumbnailListItem_o *)&NGUIText_TypeInfo->static_fields->mSizes;
  p_mSizes->klass = (CGThumbnailListItem_c *)v24;
  sub_1C36FFC(p_mSizes, (int32_t)v24, v26, v27);
  v28 = (System_Array_o *)sub_1C37100(float___TypeInfo, 8);
  v29.fields.value = Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0;
  v30 = v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v28, v29, 0);
  v31 = NGUIText_TypeInfo->static_fields;
  v31->s_c1 = (struct UnityEngine_Color32_o)v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&v31->s_c1, (int32_t)v30, v32, v33);
}


void NGUIText__Align(BetterList_Vector3__o *verts, int32_t indexOffset, float printedWidth, const MethodInfo *method)
{
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
  int v25; // w20
  int i; // w21
  unsigned int max_length; // w10
  int v28; // w9
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

  if ( (byte_4C476D0 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476D0 = 1;
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
          if ( size > indexOffset )
          {
            buffer = verts->fields.buffer;
            while ( buffer )
            {
              if ( (unsigned int)indexOffset >= LODWORD(buffer->max_length) )
                goto LABEL_114;
              v13 = (float *)((char *)buffer + 12 * indexOffset++);
              v13[8] = v10 + v13[8];
              if ( size == indexOffset )
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
    v22 = v21 - indexOffset;
    if ( v21 - indexOffset < 4 )
      return;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v21 = verts->fields.size;
      rectWidth = (float)NGUIText_TypeInfo->static_fields->rectWidth;
    }
    if ( indexOffset + 4 >= v21 )
      return;
    v23 = verts->fields.buffer;
    v24 = rectWidth / printedWidth;
    v25 = indexOffset + 7;
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
      v32 = *((float *)&v23->bounds + 3 * v25 + 1);
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
      *((float *)&v23->obj.monitor + 3 * v25) = v45;
      if ( v29 >= v51 )
        goto LABEL_114;
      *((float *)&v23->bounds + 3 * v25 + 1) = v49;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( v62 > indexOffset )
  {
    v63 = verts->fields.buffer;
    while ( v63 )
    {
      if ( (unsigned int)indexOffset >= LODWORD(v63->max_length) )
LABEL_114:
        sub_1C372BC(v7);
      v64 = (float *)((char *)v63 + 12 * indexOffset++);
      v64[8] = v15 + v64[8];
      if ( v62 == indexOffset )
        return;
    }
LABEL_115:
    sub_1C372B4(v7);
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
  long double v24; // q2
  long double v25; // q1
  long double inited; // q0
  NGUIText_c *v27; // x0
  UIFont_o *v28; // x0
  bool premultipliedAlphaShader; // w0
  float v30; // s1
  __int64 v31; // x27
  __int64 v32; // x28
  __int64 v33; // x23
  __int64 v34; // x26
  struct UnityEngine_Vector3_array *buffer; // x8
  struct UnityEngine_Vector2_array *v36; // x8
  struct UnityEngine_Color32_array *v37; // x8
  UnityEngine_Color32_o v38; // x1
  struct UnityEngine_Vector3_array *v39; // x8
  struct UnityEngine_Color32_array *v40; // x25
  unsigned __int64 v41; // x29
  NGUIText_c *v42; // x0
  UnityEngine_Object_o *v43; // x24
  bool v44; // w0
  long double v45; // q2
  long double v46; // q1
  long double v47; // q0
  NGUIText_c *v48; // x0
  bool v49; // w0
  int v50; // [xsp+8h] [xbp-B8h]
  __int64 v52; // [xsp+10h] [xbp-B0h]
  float32x2_t v54; // [xsp+20h] [xbp-A0h]

  v14 = (unsigned int)start;
  if ( (byte_4C476DE & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476DE = 1;
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
  v24 = v12;
  v25 = v11;
  inited = v10;
  if ( v23 )
  {
    v27 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v27 = NGUIText_TypeInfo;
    }
    v28 = v27->static_fields->bitmapFont;
    if ( !v28 )
      goto LABEL_50;
    premultipliedAlphaShader = UIFont__get_premultipliedAlphaShader(v28, 0);
    v24 = v12;
    v25 = v11;
    inited = v10;
    if ( premultipliedAlphaShader )
    {
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      *(float *)&inited = *(float *)&v10 * *(float *)&v8;
      *(float *)&v25 = *(float *)&v11 * *(float *)&v8;
      *(float *)&v24 = *(float *)&v12 * *(float *)&v8;
      if ( *(float *)&v8 == 1.0 )
      {
        *(float *)&v24 = *(float *)&v12;
        *(float *)&v25 = *(float *)&v11;
        *(float *)&inited = *(float *)&v10;
      }
    }
  }
  v28 = (UIFont_o *)sub_2526688(0, inited, v25, v24, v8);
  v50 = (int)v28;
  if ( (int)v14 < end )
  {
    if ( verts )
    {
      v30 = y;
      v52 = -(__int64)end;
      v31 = v14 << 32;
      v32 = (int)v14;
      v33 = (int)v14 + 8LL;
      v34 = 12LL * (int)v14 + 32;
      v54.n64_u64[0] = __PAIR64__(LODWORD(v30), LODWORD(x));
      while ( 1 )
      {
        buffer = verts->fields.buffer;
        if ( !buffer )
          break;
        if ( (unsigned int)v14 >= LODWORD(buffer->max_length) )
          goto LABEL_51;
        BetterList_Vector3___Add(
          verts,
          *(UnityEngine_Vector3_o *)((char *)&buffer->obj.klass + v34),
          (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v36 = uvs->fields.buffer;
        if ( !v36 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v36->max_length) )
          goto LABEL_51;
        BetterList_Vector2___Add(uvs, v36->m_Items[v32], (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v37 = cols->fields.buffer;
        if ( !v37 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v37->max_length) )
          goto LABEL_51;
        v38 = (UnityEngine_Color32_o)*((unsigned int *)&v37->obj.klass + v33);
        BetterList_Color32___Add(cols, v38, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v39 = verts->fields.buffer;
        if ( !v39 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v39->max_length) )
          goto LABEL_51;
        *(float32x2_t *)((char *)&v39->obj.klass + v34) = vadd_f32(*(float32x2_t *)((char *)&v39->obj.klass + v34), v54);
        v40 = cols->fields.buffer;
        if ( !v40 )
          break;
        if ( (unsigned int)v14 >= LODWORD(v40->max_length) )
          goto LABEL_51;
        v41 = *((unsigned int *)&v40->obj.klass + v33);
        if ( (~(_DWORD)v41 & 0xFF000000) != 0 )
        {
          v42 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v42 = NGUIText_TypeInfo;
          }
          v43 = (UnityEngine_Object_o *)v42->static_fields->bitmapFont;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          *(float *)&v9 = *(float *)&v8 * (float)((float)(unsigned int)(v41 >> 24) / 255.0);
          v44 = UnityEngine_Object__op_Inequality(v43, 0, 0);
          v45 = v12;
          v46 = v11;
          v47 = v10;
          if ( v44 )
          {
            v48 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v48 = NGUIText_TypeInfo;
            }
            v28 = v48->static_fields->bitmapFont;
            if ( !v28 )
              break;
            v49 = UIFont__get_premultipliedAlphaShader(v28, 0);
            v45 = v12;
            v46 = v11;
            v47 = v10;
            if ( v49 )
            {
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                v47 = j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
              *(float *)&v47 = *(float *)&v10 * *(float *)&v9;
              *(float *)&v46 = *(float *)&v11 * *(float *)&v9;
              *(float *)&v45 = *(float *)&v12 * *(float *)&v9;
              if ( *(float *)&v9 == 1.0 )
              {
                *(float *)&v45 = *(float *)&v12;
                *(float *)&v46 = *(float *)&v11;
                *(float *)&v47 = *(float *)&v10;
              }
            }
          }
          v28 = (UIFont_o *)sub_2526688(0, v47, v46, v45, v9);
          if ( (unsigned int)v14 >= LODWORD(v40->max_length) )
LABEL_51:
            sub_1C372BC(v28);
          *(int32_t *)((char *)&v40->m_Items[0].fields.rgba + (v31 >> 30)) = (int)v28;
        }
        else
        {
          *((_DWORD *)&v40->obj.klass + v33) = v50;
        }
        v31 += 0x100000000LL;
        ++v33;
        v34 += 12;
        ++v32;
        LODWORD(v14) = v14 + 1;
        if ( v52 + v33 == 8 )
          return;
      }
    }
LABEL_50:
    sub_1C372B4(v28);
  }
}


int32_t NGUIText__CalculateOffsetToFit(System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  NGUIText_c *v4; // x0
  NGUIText_c *mSizes; // x0
  const MethodInfo *v6; // x3
  int32_t stringLength; // w20
  int32_t v8; // w21
  int32_t i; // w23
  struct NGUIText_StaticFields *static_fields; // x8
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v12; // x22
  NGUIText_c *v13; // x0
  struct NGUIText_StaticFields *v14; // x8
  struct System_String_o *sequence; // x8
  int v16; // w23
  NGUIText_c *v17; // x0
  int32_t v18; // w22
  const MethodInfo *v19; // x2
  float GlyphWidth; // s0
  NGUIText_c *v21; // x0
  float v22; // s8
  struct NGUIText_StaticFields *v23; // x8
  int32_t size; // w19
  struct BetterList_float__o *v26; // x9
  float j; // s8
  float Item; // s0

  if ( (byte_4C476D6 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_float__Add__);
    sub_1C37058(&Method_BetterList_float__Clear__);
    sub_1C37058(&Method_BetterList_float__get_Item__);
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476D6 = 1;
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
  v8 = 0;
  for ( i = 0; ; i = v18 )
  {
    mSizes = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      mSizes = NGUIText_TypeInfo;
    }
    static_fields = mSizes->static_fields;
    if ( v8 >= stringLength )
      break;
    if ( !static_fields->useSymbols )
      goto LABEL_29;
    if ( !mSizes->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(mSizes);
    Symbol = NGUIText__GetSymbol(text, v8, stringLength, v6);
    if ( Symbol )
    {
      v12 = Symbol;
      v13 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v13 = NGUIText_TypeInfo;
      }
      v14 = v13->static_fields;
      mSizes = (NGUIText_c *)v14->mSizes;
      if ( !mSizes )
        goto LABEL_49;
      BetterList_float___Add(
        (BetterList_float__o *)mSizes,
        v14->finalSpacingX + (float)(v14->fontScale * (float)v12->fields.mAdvance),
        (const MethodInfo_331A994 *)Method_BetterList_float__Add__);
      sequence = v12->fields.sequence;
      if ( !sequence )
        goto LABEL_49;
      v16 = sequence->fields._stringLength - 1;
      if ( v16 >= 1 )
      {
        do
        {
          v17 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v17 = NGUIText_TypeInfo;
          }
          mSizes = (NGUIText_c *)v17->static_fields->mSizes;
          if ( !mSizes )
            goto LABEL_49;
          BetterList_float___Add(
            (BetterList_float__o *)mSizes,
            0.0,
            (const MethodInfo_331A994 *)Method_BetterList_float__Add__);
          --v16;
        }
        while ( v16 );
        sequence = v12->fields.sequence;
        if ( !sequence )
          goto LABEL_49;
      }
      v18 = 0;
      v8 = v8 + sequence->fields._stringLength - 1;
    }
    else
    {
LABEL_29:
      LOWORD(v18) = System_String__get_Chars(text, v8, 0);
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v18 = (unsigned __int16)v18;
      GlyphWidth = NGUIText__GetGlyphWidth((unsigned __int16)v18, i, v19);
      if ( GlyphWidth != 0.0 )
      {
        v21 = NGUIText_TypeInfo;
        v22 = GlyphWidth;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v21 = NGUIText_TypeInfo;
        }
        v23 = v21->static_fields;
        mSizes = (NGUIText_c *)v23->mSizes;
        if ( !mSizes )
          goto LABEL_49;
        BetterList_float___Add(
          (BetterList_float__o *)mSizes,
          v22 + v23->finalSpacingX,
          (const MethodInfo_331A994 *)Method_BetterList_float__Add__);
      }
    }
    ++v8;
  }
  v26 = static_fields->mSizes;
  if ( !v26 )
    goto LABEL_49;
  size = v26->fields.size;
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
             (const MethodInfo_331A794 *)Method_BetterList_float__get_Item__);
    mSizes = NGUIText_TypeInfo;
  }
  if ( !mSizes )
LABEL_49:
    sub_1C372B4(mSizes);
  BetterList_float___Clear((BetterList_float__o *)mSizes, (const MethodInfo_331A97C *)Method_BetterList_float__Clear__);
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
  int stringLength; // w20
  int32_t v11; // w24
  int32_t v12; // w21
  float v13; // s15
  float v14; // s9
  float v15; // s14
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  unsigned int Chars; // w23
  NGUIText_c *v19; // x0
  NGUIText_c *v20; // x8
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v22; // x25
  int mAdvance; // s13
  struct NGUIText_StaticFields *v24; // x8
  float finalSpacingX; // s8
  float fontScale; // s11
  float v27; // s11
  double v28; // d8
  double v29; // d0
  double v30; // d0
  double v31; // d1
  float GlyphWidth; // s0
  NGUIText_c *v33; // x0
  float v34; // s8
  float v35; // s11
  double v36; // d8
  double v37; // d0
  double v38; // d0
  double v39; // d1
  double v40; // d1
  int v41; // w10
  struct NGUIText_StaticFields *v42; // x8
  struct System_String_o *sequence; // x8
  double v44; // d1
  NGUIText_c *v45; // x0
  int v46; // w10
  struct NGUIText_StaticFields *v47; // x8
  NGUIText_c *v48; // x0
  float v49; // s0
  float v50; // s1
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C476D5 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476D5 = 1;
  }
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
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
    sub_1C372B4(v9);
  stringLength = text->fields._stringLength;
  if ( stringLength < 1 )
  {
    v14 = 0.0;
    v15 = 0.0;
    goto LABEL_97;
  }
  v11 = 0;
  v12 = 0;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  do
  {
    Chars = System_String__get_Chars(text, v12, 0);
    if ( Chars == 10 )
    {
      v19 = NGUIText_TypeInfo;
      if ( v13 > v15 )
        v15 = v13;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v19 = NGUIText_TypeInfo;
      }
      v13 = 0.0;
      v14 = v14 + v19->static_fields->finalLineHeight;
      goto LABEL_72;
    }
    if ( Chars < 0x20 )
      goto LABEL_72;
    v20 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v20 = NGUIText_TypeInfo;
    }
    if ( v20->static_fields->useSymbols )
    {
      if ( !v20->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v20);
      Symbol = NGUIText__GetSymbol(text, v12, stringLength, v17);
      v20 = NGUIText_TypeInfo;
      v22 = Symbol;
    }
    else
    {
      v22 = 0;
    }
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      if ( !v22 )
        goto LABEL_41;
LABEL_33:
      mAdvance = v22->fields.mAdvance;
      v24 = NGUIText_TypeInfo->static_fields;
      finalSpacingX = v24->finalSpacingX;
      fontScale = v24->fontScale;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v27 = finalSpacingX + (float)(fontScale * (float)mAdvance);
      v28 = (float)(v13 + v27);
      v29 = modf(v28, &iptr);
      if ( (float)(v13 + v27) >= 0.0 )
      {
        if ( v29 == 0.5 )
        {
          v30 = iptr;
          v31 = 1.0;
LABEL_53:
          v40 = v30 + v31;
          if ( ((__int64)v30 & 1) != 0 )
            v30 = v40;
          goto LABEL_58;
        }
        v30 = floor(v28 + 0.5);
      }
      else
      {
        if ( v29 == -0.5 )
        {
          v30 = iptr;
          v31 = -1.0;
          goto LABEL_53;
        }
        v30 = ceil(v28 + -0.5);
      }
LABEL_58:
      v9 = NGUIText_TypeInfo;
      v41 = (int)v30;
      v42 = NGUIText_TypeInfo->static_fields;
      if ( v30 == INFINITY )
        v41 = 0x80000000;
      if ( v41 <= v42->regionWidth )
      {
        v27 = v13 + v27;
      }
      else
      {
        if ( v13 > v15 )
        {
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v9 = NGUIText_TypeInfo;
            v42 = NGUIText_TypeInfo->static_fields;
          }
          v15 = v13 - v42->finalSpacingX;
        }
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = NGUIText_TypeInfo;
        }
        v14 = v14 + v9->static_fields->finalLineHeight;
      }
      sequence = v22->fields.sequence;
      if ( !sequence )
        goto LABEL_102;
      v11 = 0;
      v12 = v12 + sequence->fields._stringLength - 1;
      goto LABEL_71;
    }
    if ( v22 )
      goto LABEL_33;
LABEL_41:
    GlyphWidth = NGUIText__GetGlyphWidth(Chars, v11, v16);
    if ( GlyphWidth == 0.0 )
      goto LABEL_72;
    v33 = NGUIText_TypeInfo;
    v34 = GlyphWidth;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v33 = NGUIText_TypeInfo;
    }
    v35 = v33->static_fields->finalSpacingX;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = v34 + v35;
    v36 = (float)(v13 + v27);
    v37 = modf(v36, &iptr);
    if ( (float)(v13 + v27) >= 0.0 )
    {
      if ( v37 == 0.5 )
      {
        v38 = iptr;
        v39 = 1.0;
LABEL_76:
        v44 = v38 + v39;
        if ( ((__int64)v38 & 1) != 0 )
          v38 = v44;
        goto LABEL_81;
      }
      v38 = floor(v36 + 0.5);
    }
    else
    {
      if ( v37 == -0.5 )
      {
        v38 = iptr;
        v39 = -1.0;
        goto LABEL_76;
      }
      v38 = ceil(v36 + -0.5);
    }
LABEL_81:
    v45 = NGUIText_TypeInfo;
    v46 = (int)v38;
    v47 = NGUIText_TypeInfo->static_fields;
    if ( v38 == INFINITY )
      v46 = 0x80000000;
    if ( v46 > v47->regionWidth )
    {
      if ( v13 > v15 )
      {
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v45 = NGUIText_TypeInfo;
          v47 = NGUIText_TypeInfo->static_fields;
        }
        v15 = v13 - v47->finalSpacingX;
      }
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = NGUIText_TypeInfo;
      }
      v11 = Chars;
      v14 = v14 + v45->static_fields->finalLineHeight;
LABEL_71:
      v13 = v27;
      goto LABEL_72;
    }
    v11 = Chars;
    v13 = v13 + v27;
LABEL_72:
    ++v12;
  }
  while ( v12 < stringLength );
  if ( v13 <= v15 )
  {
LABEL_97:
    v48 = NGUIText_TypeInfo;
    goto LABEL_98;
  }
  v48 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v48 = NGUIText_TypeInfo;
  }
  v15 = v13 - v48->static_fields->finalSpacingX;
LABEL_98:
  if ( !v48->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v48);
    v48 = NGUIText_TypeInfo;
  }
  x = v15;
  y = v14 + v48->static_fields->finalLineHeight;
LABEL_101:
  v49 = x;
  v50 = y;
  result.fields.y = v50;
  result.fields.x = v49;
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

  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  if ( (byte_4C476CB & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476CB = 1;
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


System_String_o *NGUIText__EncodeColor_49314788(System_String_o *text, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  System_String_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x20
  int32_t v12; // w1
  unsigned int v13; // w0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4C476CC & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_15965/*"[c]["*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    sub_1C37058(&StringLiteral_15825/*"[-][/c]"*/);
    byte_4C476CC = 1;
  }
  v8 = (System_String_o *)sub_1C37100(string___TypeInfo, 5);
  if ( !v8 )
    sub_1C372B4(0);
  v11 = v8;
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_12;
  v12 = StringLiteral_15965/*"[c]["*/;
  v8[1].monitor = (void *)StringLiteral_15965/*"[c]["*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8[1].monitor, v12, v9, v10);
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  v13 = NGUIMath__ColorToInt(v25, 0);
  v8 = NGUIMath__DecimalToHex24(v13 >> 8, 0);
  if ( LODWORD(v11[1].klass) <= 1
    || (v11[1].fields = (System_String_Fields)v8,
        sub_1C36FFC((CGThumbnailListItem_o *)&v11[1].fields, (int32_t)v8, v14, v15),
        LODWORD(v11[1].klass) <= 2)
    || (v18 = StringLiteral_16058/*"]"*/,
        v11[2].klass = (System_String_c *)StringLiteral_16058/*"]"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)&v11[2], v18, v16, v17),
        LODWORD(v11[1].klass) <= 3)
    || (v11[2].monitor = text,
        sub_1C36FFC((CGThumbnailListItem_o *)&v11[2].monitor, (int32_t)text, v19, v20),
        LODWORD(v11[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C372BC(v8);
  }
  v23 = StringLiteral_15825/*"[-][/c]"*/;
  v11[2].fields = (System_String_Fields)StringLiteral_15825/*"[-][/c]"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11[2].fields, v23, v21, v22);
  return System_String__Concat_63602172((System_String_array *)v11, 0);
}


void NGUIText__EndLine(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_4C476D3 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476D3 = 1;
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
      sub_1C372B4(v3);
    }
  }
  v3 = *s;
  if ( !*s )
    goto LABEL_14;
  System_Text_StringBuilder__Append_63649048(v3, 0xAu, 0);
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
  if ( (byte_4C476D2 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C37058(&Method_BetterList_Vector3__get_Item__);
    byte_4C476D2 = 1;
  }
  if ( !v8 )
    goto LABEL_16;
  if ( v8->fields.size < 1 )
  {
    v10 = 0;
    if ( indices )
      return BetterList_int___get_Item(indices, v10, (const MethodInfo_33194DC *)Method_BetterList_int__get_Item__);
LABEL_16:
    sub_1C372B4(verts);
  }
  LODWORD(v4) = 2139095039;
  v9 = 0;
  v10 = 0;
  v11 = v4;
  do
  {
    Item = BetterList_Vector3___get_Item(v8, v9, (const MethodInfo_331BAE8 *)Method_BetterList_Vector3__get_Item__);
    v12 = vabds_f32(y, Item.fields.y);
    if ( v12 > *(float *)&v4 )
      goto LABEL_11;
    *(float *)&v13 = vabds_f32(
                       x,
                       COERCE_FLOAT(
                         BetterList_Vector3___get_Item(
                           v8,
                           v9,
                           (const MethodInfo_331BAE8 *)Method_BetterList_Vector3__get_Item__)));
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
  return BetterList_int___get_Item(indices, v10, (const MethodInfo_33194DC *)Method_BetterList_int__get_Item__);
}


System_String_o *NGUIText__GetEndOfLineThatFits(System_String_o *text, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t stringLength; // w20
  int32_t v4; // w1

  v2 = text;
  if ( (byte_4C476D7 & 1) == 0 )
  {
    text = (System_String_o *)sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476D7 = 1;
  }
  if ( !v2 )
    sub_1C372B4(text);
  stringLength = v2->fields._stringLength;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v4 = NGUIText__CalculateOffsetToFit(v2, method);
  return System_String__Substring_63607580(v2, v4, stringLength - v4, 0);
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
  if ( (byte_4C476D1 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_int__get_Item__);
    verts = (BetterList_Vector3__o *)sub_1C37058(&Method_BetterList_Vector3__get_Item__);
    byte_4C476D1 = 1;
  }
  if ( !indices )
LABEL_14:
    sub_1C372B4(verts);
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
                  (const MethodInfo_331BAE8 *)Method_BetterList_Vector3__get_Item__))
      && x <= COERCE_FLOAT(BetterList_Vector3___get_Item(v7, i, (const MethodInfo_331BAE8 *)Method_BetterList_Vector3__get_Item__)) )
    {
      Item = BetterList_Vector3___get_Item(v7, i - 1, (const MethodInfo_331BAE8 *)Method_BetterList_Vector3__get_Item__);
      if ( y >= Item.fields.y )
      {
        v12 = BetterList_Vector3___get_Item(v7, i, (const MethodInfo_331BAE8 *)Method_BetterList_Vector3__get_Item__);
        if ( y <= v12.fields.y )
          break;
      }
    }
    if ( ++v8 >= indices->fields.size )
      return 0;
  }
  return BetterList_int___get_Item(indices, v8, (const MethodInfo_33194DC *)Method_BetterList_int__get_Item__);
}


NGUIText_GlyphInfo_o *NGUIText__GetGlyph(int32_t ch, int32_t prev, const MethodInfo *method)
{
  NGUIText_c *v5; // x0
  UnityEngine_Object_o *bitmapFont; // x20
  NGUIText_c *v7; // x0
  int32_t v8; // w20
  void *bmFont; // x0
  NGUIText_GlyphInfo_o *result; // x0
  NGUIText_GlyphInfo_o *v11; // x20
  struct NGUIText_StaticFields *static_fields; // x8
  struct NGUIText_GlyphInfo_o *glyph; // x9
  float x; // s1
  float v15; // s0
  int y_low; // w10
  int x_low; // w11
  int v18; // w12
  int32x2_t v19; // d1
  __int128 v20; // q1
  float v21; // s2
  int v22; // w23
  char v23; // w19
  __int64 v24; // x9
  float32x2_t *v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  float v28; // s0
  NGUIText_c *v29; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  bool v31; // w8
  NGUIText_c *v32; // x0
  struct NGUIText_StaticFields *v33; // x8
  bool CharacterInfo; // w8
  __int64 v35; // x8
  __int64 v36; // x19
  struct NGUIText_StaticFields *v37; // x8
  struct NGUIText_GlyphInfo_o *v38; // x19
  struct NGUIText_StaticFields *v39; // x8
  struct NGUIText_GlyphInfo_o *v40; // x19
  struct NGUIText_StaticFields *v41; // x8
  struct NGUIText_GlyphInfo_o *v42; // x19
  int32_t minY; // w0
  struct NGUIText_StaticFields *v44; // x8
  UnityEngine_Vector2_o *v45; // x19
  UnityEngine_Vector2_o uvTopLeft; // kr00_8
  struct NGUIText_StaticFields *v47; // x8
  UnityEngine_Vector2_o *v48; // x19
  UnityEngine_Vector2_o uvBottomLeft; // kr08_8
  struct NGUIText_StaticFields *v50; // x8
  UnityEngine_Vector2_o *v51; // x19
  UnityEngine_Vector2_o uvBottomRight; // kr10_8
  struct NGUIText_StaticFields *v53; // x8
  UnityEngine_Vector2_o *v54; // x19
  UnityEngine_Vector2_o uvTopRight; // kr18_8
  struct NGUIText_StaticFields *v56; // x8
  struct NGUIText_GlyphInfo_o *v57; // x19
  struct NGUIText_GlyphInfo_o *v58; // x19
  float v59; // s8
  double v60; // d0
  double v61; // d0
  float v62; // s1
  __int64 v63; // x8
  float v64; // s0
  float v65; // s1
  struct NGUIText_GlyphInfo_o *v66; // x19
  float y; // s8
  double v68; // d0
  double v69; // d0
  float v70; // s1
  __int64 v71; // x8
  float v72; // s0
  float v73; // s1
  struct NGUIText_GlyphInfo_o *v74; // x19
  float v75; // s8
  double v76; // d0
  double v77; // d0
  float v78; // s1
  __int64 v79; // x8
  float v80; // s0
  float v81; // s1
  struct NGUIText_GlyphInfo_o *v82; // x19
  float v83; // s8
  double v84; // d0
  int32x2_t v85; // d2
  double v86; // d0
  float v87; // s1
  __int64 v88; // x8
  float v89; // s0
  float v90; // s1
  struct NGUIText_StaticFields *v91; // x8
  float32x2_t *v92; // x8
  float32x2_t *v93; // x8
  unsigned __int64 v94; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C476C9 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C9 = 1;
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
    v7 = NGUIText_TypeInfo;
    if ( ch == 8201 )
      v8 = 32;
    else
      v8 = ch;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v7 = NGUIText_TypeInfo;
    }
    bmFont = v7->static_fields->bitmapFont;
    if ( !bmFont )
      goto LABEL_107;
    bmFont = UIFont__get_bmFont((UIFont_o *)bmFont, 0);
    if ( !bmFont )
      goto LABEL_107;
    result = (NGUIText_GlyphInfo_o *)BMFont__GetGlyph_49266940((BMFont_o *)bmFont, v8, 0);
    if ( !result )
      return result;
    v11 = result;
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
    glyph->fields.v0.fields.x = (float)(LODWORD(v11->fields.u0.fields.y) + prev);
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
    v15 = (float)-LODWORD(v11->fields.u1.fields.x);
    glyph->fields.v1.fields.y = v15;
    y_low = LODWORD(v11->fields.v1.fields.y);
    glyph->fields.v1.fields.x = x + (float)y_low;
    x_low = LODWORD(v11->fields.u0.fields.x);
    glyph->fields.v0.fields.y = v15 - (float)x_low;
    v18 = LODWORD(v11->fields.v0.fields.y);
    glyph->fields.u0.fields.x = (float)v18;
    v19.n64_u32[0] = LODWORD(v11->fields.v1.fields.x);
    v19.n64_u32[1] = v18 + y_low;
    *(float32x2_t *)&v20 = vcvt_f32_s32(v19);
    v21 = (float)(LODWORD(v11->fields.v1.fields.x) + x_low);
    *((_QWORD *)&v20 + 1) = v20;
    glyph->fields.u0.fields.y = v21;
    glyph->fields.u1.fields.x = (float)v18;
    *(_OWORD *)&glyph->fields.u1.fields.y = v20;
    glyph->fields.u3.fields.y = v21;
    v22 = LODWORD(v11->fields.u1.fields.y);
    v23 = ch == 8201;
    if ( !*((_DWORD *)bmFont + 56) )
    {
      j_il2cpp_runtime_class_init_0(bmFont);
      bmFont = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
      glyph = static_fields->glyph;
      if ( !glyph )
        goto LABEL_107;
    }
    glyph->fields.advance = (float)((v22 >> v23) + prev);
    glyph->fields.channel = LODWORD(v11->fields.u2.fields.x);
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
        v24 = *((_QWORD *)bmFont + 23);
        v25 = *(float32x2_t **)(v24 + 16);
        if ( v25 )
        {
          v25[3].n64_u64[0] = vmul_n_f32(v25[3], *(float *)(v24 + 28)).n64_u64[0];
          v26 = *((_QWORD *)bmFont + 23);
          v27 = *(_QWORD *)(v26 + 16);
          if ( v27 )
          {
            v28 = *(float *)(v27 + 64) * *(float *)(v26 + 28);
LABEL_102:
            *(float *)(v27 + 64) = v28;
            goto LABEL_103;
          }
        }
      }
      goto LABEL_107;
    }
    goto LABEL_103;
  }
  v29 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v29 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v29->static_fields->dynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v31 = UnityEngine_Object__op_Inequality(dynamicFont, 0, 0);
  result = 0;
  if ( v31 )
  {
    v32 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v32 = NGUIText_TypeInfo;
    }
    v33 = v32->static_fields;
    bmFont = v33->dynamicFont;
    if ( !bmFont )
      goto LABEL_107;
    CharacterInfo = UnityEngine_Font__GetCharacterInfo(
                      (UnityEngine_Font_o *)bmFont,
                      ch,
                      &v33->mTempChar,
                      v33->finalSize,
                      v33->fontStyle,
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
    v35 = *((_QWORD *)bmFont + 23);
    v36 = *(_QWORD *)(v35 + 16);
    if ( !v36 )
      goto LABEL_107;
    bmFont = (void *)UnityEngine_CharacterInfo__get_minX((UnityEngine_CharacterInfo_o *)(v35 + 252), 0);
    *(float *)(v36 + 16) = (float)(int)bmFont;
    v37 = NGUIText_TypeInfo->static_fields;
    v38 = v37->glyph;
    if ( !v38 )
      goto LABEL_107;
    bmFont = (void *)UnityEngine_CharacterInfo__get_maxX(&v37->mTempChar, 0);
    v38->fields.v1.fields.x = (float)(int)bmFont;
    v39 = NGUIText_TypeInfo->static_fields;
    v40 = v39->glyph;
    if ( !v40 )
      goto LABEL_107;
    bmFont = (void *)UnityEngine_CharacterInfo__get_maxY(&v39->mTempChar, 0);
    v41 = NGUIText_TypeInfo->static_fields;
    v40->fields.v0.fields.y = (float)(int)bmFont - v41->baseline;
    v42 = v41->glyph;
    if ( !v42 )
      goto LABEL_107;
    minY = UnityEngine_CharacterInfo__get_minY(&v41->mTempChar, 0);
    v44 = NGUIText_TypeInfo->static_fields;
    v42->fields.v1.fields.y = (float)minY - v44->baseline;
    v45 = (UnityEngine_Vector2_o *)v44->glyph;
    uvTopLeft = UnityEngine_CharacterInfo__get_uvTopLeft(&v44->mTempChar, 0);
    if ( !v45 )
      goto LABEL_107;
    v45[4] = uvTopLeft;
    v47 = NGUIText_TypeInfo->static_fields;
    v48 = (UnityEngine_Vector2_o *)v47->glyph;
    uvBottomLeft = UnityEngine_CharacterInfo__get_uvBottomLeft(&v47->mTempChar, 0);
    if ( !v48 )
      goto LABEL_107;
    v48[5] = uvBottomLeft;
    v50 = NGUIText_TypeInfo->static_fields;
    v51 = (UnityEngine_Vector2_o *)v50->glyph;
    uvBottomRight = UnityEngine_CharacterInfo__get_uvBottomRight(&v50->mTempChar, 0);
    if ( !v51 )
      goto LABEL_107;
    v51[6] = uvBottomRight;
    v53 = NGUIText_TypeInfo->static_fields;
    v54 = (UnityEngine_Vector2_o *)v53->glyph;
    uvTopRight = UnityEngine_CharacterInfo__get_uvTopRight(&v53->mTempChar, 0);
    if ( !v54 )
      goto LABEL_107;
    v54[7] = uvTopRight;
    v56 = NGUIText_TypeInfo->static_fields;
    v57 = v56->glyph;
    bmFont = (void *)UnityEngine_CharacterInfo__get_advance(&v56->mTempChar, 0);
    if ( !v57 )
      goto LABEL_107;
    v57->fields.advance = (float)(int)bmFont;
    v58 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v58 )
      goto LABEL_107;
    v59 = v58->fields.v0.fields.x;
    v58->fields.channel = 0;
    v60 = modf(v59, &iptr);
    if ( v59 >= 0.0 )
    {
      if ( v60 != 0.5 )
      {
        v64 = floorf(v59 + 0.5);
        goto LABEL_62;
      }
      v61 = iptr;
      v62 = 1.0;
    }
    else
    {
      if ( v60 != -0.5 )
      {
        v64 = ceilf(v59 + -0.5);
        goto LABEL_62;
      }
      v61 = iptr;
      v62 = -1.0;
    }
    v63 = (__int64)v61;
    v64 = v61;
    v65 = v64 + v62;
    if ( (v63 & 1) != 0 )
      v64 = v65;
LABEL_62:
    v58->fields.v0.fields.x = v64;
    v66 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v66 )
      goto LABEL_107;
    y = v66->fields.v0.fields.y;
    v68 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v68 != 0.5 )
      {
        v72 = floorf(y + 0.5);
        goto LABEL_73;
      }
      v69 = iptr;
      v70 = 1.0;
    }
    else
    {
      if ( v68 != -0.5 )
      {
        v72 = ceilf(y + -0.5);
        goto LABEL_73;
      }
      v69 = iptr;
      v70 = -1.0;
    }
    v71 = (__int64)v69;
    v72 = v69;
    v73 = v72 + v70;
    if ( (v71 & 1) != 0 )
      v72 = v73;
LABEL_73:
    v66->fields.v0.fields.y = v72;
    v74 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v74 )
      goto LABEL_107;
    v75 = v74->fields.v1.fields.x;
    v76 = modf(v75, &iptr);
    if ( v75 >= 0.0 )
    {
      if ( v76 != 0.5 )
      {
        v80 = floorf(v75 + 0.5);
        goto LABEL_84;
      }
      v77 = iptr;
      v78 = 1.0;
    }
    else
    {
      if ( v76 != -0.5 )
      {
        v80 = ceilf(v75 + -0.5);
        goto LABEL_84;
      }
      v77 = iptr;
      v78 = -1.0;
    }
    v79 = (__int64)v77;
    v80 = v77;
    v81 = v80 + v78;
    if ( (v79 & 1) != 0 )
      v80 = v81;
LABEL_84:
    v74->fields.v1.fields.x = v80;
    v82 = NGUIText_TypeInfo->static_fields->glyph;
    if ( !v82 )
      goto LABEL_107;
    v83 = v82->fields.v1.fields.y;
    v84 = modf(v83, &iptr);
    if ( v83 >= 0.0 )
    {
      if ( v84 != 0.5 )
      {
        v89 = floorf(v83 + 0.5);
        goto LABEL_95;
      }
      v86 = iptr;
      v87 = 1.0;
    }
    else
    {
      if ( v84 != -0.5 )
      {
        v89 = ceilf(v83 + -0.5);
        goto LABEL_95;
      }
      v86 = iptr;
      v87 = -1.0;
    }
    v88 = (__int64)v86;
    v89 = v86;
    v90 = v89 + v87;
    if ( (v88 & 1) != 0 )
      v89 = v90;
LABEL_95:
    v82->fields.v1.fields.y = v89;
    bmFont = NGUIText_TypeInfo;
    v91 = NGUIText_TypeInfo->static_fields;
    v85.n64_f32[0] = v91->fontScale * v91->pixelDensity;
    if ( v85.n64_f32[0] != 1.0 )
    {
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        v94 = v85.n64_u64[0];
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        bmFont = NGUIText_TypeInfo;
        v85.n64_u64[0] = v94;
        v91 = NGUIText_TypeInfo->static_fields;
      }
      v92 = (float32x2_t *)v91->glyph;
      if ( v92 )
      {
        v92[2].n64_u64[0] = vmul_n_f32(v92[2], v85.n64_f32[0]).n64_u64[0];
        v93 = *(float32x2_t **)(*((_QWORD *)bmFont + 23) + 16LL);
        if ( v93 )
        {
          v93[3].n64_u64[0] = vmul_f32(vdup_lane_s32(v85, 0), v93[3]).n64_u64[0];
          v27 = *(_QWORD *)(*((_QWORD *)bmFont + 23) + 16LL);
          if ( v27 )
          {
            v28 = v85.n64_f32[0] * *(float *)(v27 + 64);
            goto LABEL_102;
          }
        }
      }
LABEL_107:
      sub_1C372B4(bmFont);
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
  NGUIText_c *v7; // x0
  int32_t v8; // w21
  BMFont_o *bmFont; // x0
  BMGlyph_o *Glyph_49266940; // x0
  BMGlyph_o *v11; // x21
  NGUIText_c *v12; // x0
  int advance; // w23
  char v14; // w19
  float fontScale; // s8
  int v16; // w8
  NGUIText_c *v17; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  float v19; // s8
  NGUIText_c *v20; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  NGUIText_c *v22; // x0

  if ( (byte_4C476C8 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C8 = 1;
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
    v7 = NGUIText_TypeInfo;
    if ( ch == 8201 )
      v8 = 32;
    else
      v8 = ch;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v7 = NGUIText_TypeInfo;
    }
    bmFont = (BMFont_o *)v7->static_fields->bitmapFont;
    if ( bmFont )
    {
      bmFont = UIFont__get_bmFont((UIFont_o *)bmFont, 0);
      if ( bmFont )
      {
        Glyph_49266940 = BMFont__GetGlyph_49266940(bmFont, v8, 0);
        if ( !Glyph_49266940 )
          return 0.0;
        v11 = Glyph_49266940;
        v12 = NGUIText_TypeInfo;
        advance = v11->fields.advance;
        v14 = ch == 8201;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v12 = NGUIText_TypeInfo;
        }
        fontScale = v12->static_fields->fontScale;
        if ( prev )
          v16 = BMGlyph__GetKerning(v11, prev, 0) + (advance >> v14);
        else
          v16 = v11->fields.advance;
        return fontScale * (float)v16;
      }
    }
LABEL_36:
    sub_1C372B4(bmFont);
  }
  v17 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v17 = NGUIText_TypeInfo;
  }
  dynamicFont = (UnityEngine_Object_o *)v17->static_fields->dynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = 0.0;
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) )
  {
    v20 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v20 = NGUIText_TypeInfo;
    }
    static_fields = v20->static_fields;
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
      v22 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v22 = NGUIText_TypeInfo;
      }
      return (float)(NGUIText_TypeInfo->static_fields->fontScale
                   * (float)UnityEngine_CharacterInfo__get_advance(&v22->static_fields->mTempChar, 0))
           * NGUIText_TypeInfo->static_fields->pixelDensity;
    }
  }
  return v19;
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
  NGUIText_c *v9; // x0
  UIFont_o *v10; // x0

  if ( (byte_4C476C7 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C7 = 1;
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
  v9 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v9 = NGUIText_TypeInfo;
  }
  v10 = v9->static_fields->bitmapFont;
  if ( !v10 )
    sub_1C372B4(0);
  return UIFont__MatchSymbol(v10, text, index, textLength, 0);
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
    sub_1C372B4(0);
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
  if ( (byte_4C476CA & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476CA = 1;
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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

  if ( (byte_4C476CD & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476CD = 1;
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
  return NGUIText__ParseSymbol_49315680(
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


bool NGUIText__ParseSymbol_49315680(
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
  if ( (byte_4C476CE & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Color__Add__);
    sub_1C37058(&Method_BetterList_Color__RemoveAt__);
    sub_1C37058(&Method_BetterList_Color__get_Item__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&StringLiteral_15834/*"[/sub]"*/);
    sub_1C37058(&StringLiteral_15837/*"[/url]"*/);
    sub_1C37058(&StringLiteral_15833/*"[/s]"*/);
    sub_1C37058(&StringLiteral_15828/*"[/b]"*/);
    sub_1C37058(&StringLiteral_15998/*"[o]"*/);
    sub_1C37058(&StringLiteral_15835/*"[/sup]"*/);
    sub_1C37058(&StringLiteral_16004/*"[sub]"*/);
    sub_1C37058(&StringLiteral_15829/*"[/c]"*/);
    sub_1C37058(&StringLiteral_15836/*"[/u]"*/);
    sub_1C37058(&StringLiteral_16005/*"[sup]"*/);
    sub_1C37058(&StringLiteral_15830/*"[/g]"*/);
    sub_1C37058(&StringLiteral_15822/*"[--]"*/);
    sub_1C37058(&StringLiteral_15986/*"[i]"*/);
    sub_1C37058(&StringLiteral_15985/*"[g]"*/);
    sub_1C37058(&StringLiteral_15832/*"[/o]"*/);
    sub_1C37058(&StringLiteral_15964/*"[c]"*/);
    sub_1C37058(&StringLiteral_16002/*"[s]"*/);
    sub_1C37058(&StringLiteral_15963/*"[b]"*/);
    sub_1C37058(&StringLiteral_15831/*"[/i]"*/);
    text = (System_String_o *)sub_1C37058(&StringLiteral_16006/*"[u]"*/);
    byte_4C476CE = 1;
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
          BetterList_Color___RemoveAt(colors, size - 1, (const MethodInfo_3318824 *)Method_BetterList_Color__RemoveAt__);
      }
      v24 = *index + 3;
      goto LABEL_84;
    }
    v25 = System_String__Substring_63607580(v21, *index, 3, 0);
    v26 = PrivateImplementationDetails___ComputeStringHash_49554484(v25, 0);
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
  v30 = System_String__Substring_63607580(v21, *index, 4, 0);
  v31 = PrivateImplementationDetails___ComputeStringHash_49554484(v30, 0);
  if ( v31 > 0x258A0629 )
  {
    if ( v31 > 0x615D44FF )
    {
      if ( v31 == -100292593 )
      {
        if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15822/*"[--]"*/, 0) )
        {
          *index += 4;
          if ( gradientColors )
          {
            BetterList_Color___RemoveAt(
              gradientColors,
              gradientColors->fields.size - 1,
              (const MethodInfo_3318824 *)Method_BetterList_Color__RemoveAt__);
            BetterList_Color___RemoveAt(
              gradientColors,
              gradientColors->fields.size - 1,
              (const MethodInfo_3318824 *)Method_BetterList_Color__RemoveAt__);
          }
          return 1;
        }
      }
      else if ( v31 == 1636753867 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15833/*"[/s]"*/, 0) )
      {
        *strike = 0;
        goto LABEL_83;
      }
    }
    else if ( v31 == 1632222535 )
    {
      if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15832/*"[/o]"*/, 0) )
      {
        v32 = isOutline;
        goto LABEL_64;
      }
    }
    else if ( v31 == 1633502463 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15830/*"[/g]"*/, 0) )
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
        if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15828/*"[/b]"*/, 0) )
        {
          *bold = 0;
          goto LABEL_83;
        }
      }
      else if ( v31 == 629802537 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15836/*"[/u]"*/, 0) )
      {
        *underline = 0;
        goto LABEL_83;
      }
      goto LABEL_70;
    }
    if ( v31 != 560426395 )
    {
      if ( v31 == 626551133 && System_String__op_Equality(v30, (System_String_o *)StringLiteral_15831/*"[/i]"*/, 0) )
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
    if ( System_String__op_Equality(v30, (System_String_o *)StringLiteral_15829/*"[/c]"*/, 0) )
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
      v39 = System_String__Substring_63607580(v21, *index, 5, 0);
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
        v40 = System_String__Substring_63607580(v21, *index, 6, 0);
        if ( System_String__op_Equality(v40, (System_String_o *)StringLiteral_15834/*"[/sub]"*/, 0)
          || System_String__op_Equality(v40, (System_String_o *)StringLiteral_15835/*"[/sup]"*/, 0) )
        {
          *sub = 0;
LABEL_97:
          v24 = *index + 6;
          goto LABEL_84;
        }
        if ( System_String__op_Equality(v40, (System_String_o *)StringLiteral_15837/*"[/url]"*/, 0) )
          goto LABEL_97;
      }
      if ( System_String__get_Chars(v21, *index + 1, 0) == 117
        && System_String__get_Chars(v21, *index + 2, 0) == 114
        && System_String__get_Chars(v21, *index + 3, 0) == 108
        && System_String__get_Chars(v21, *index + 4, 0) == 61 )
      {
        v41 = System_String__IndexOf_63618680(v21, 0x5Du, *index + 4, 0);
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
          text = System_String__Substring_63607580(v21, *index + 1, 6, 0);
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
                         (const MethodInfo_3317FD4 *)Method_BetterList_Color__get_Item__);
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
                BetterList_Color___Add(colors, v108, (const MethodInfo_33181E8 *)Method_BetterList_Color__Add__);
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
            text = System_String__Substring_63607580(v21, *index + 1, 8, 0);
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
                  BetterList_Color___Add(colors, v110, (const MethodInfo_33181E8 *)Method_BetterList_Color__Add__);
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
              text = System_String__Substring_63607580(v21, *index + 1, 6, 0);
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
                text = System_String__Substring_63607580(v21, *index + 8, 6, 0);
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
                        (const MethodInfo_33181E8 *)Method_BetterList_Color__Add__);
                      v114.fields.r = v77;
                      v114.fields.g = v78;
                      v114.fields.b = v79;
                      v114.fields.a = v80;
                      BetterList_Color___Add(
                        gradientColors,
                        v114,
                        (const MethodInfo_33181E8 *)Method_BetterList_Color__Add__);
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
              text = System_String__Substring_63607580(v21, *index + 1, 8, 0);
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
                text = System_String__Substring_63607580(v21, *index + 10, 8, 0);
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
                        (const MethodInfo_33181E8 *)Method_BetterList_Color__Add__);
                      v118.fields.r = v95;
                      v118.fields.g = v96;
                      v118.fields.b = v97;
                      v118.fields.a = v98;
                      BetterList_Color___Add(
                        gradientColors,
                        v118,
                        (const MethodInfo_33181E8 *)Method_BetterList_Color__Add__);
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
        sub_1C372B4(text);
      }
    }
  }
  return 0;
}


void NGUIText__Prepare(System_String_o *text, const MethodInfo *method)
{
  NGUIText_c *v3; // x0
  UnityEngine_Object_o *dynamicFont; // x20
  NGUIText_c *v5; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  UnityEngine_Font_o *v7; // x0

  if ( (byte_4C476C6 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476C6 = 1;
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
    v5 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v5 = NGUIText_TypeInfo;
    }
    static_fields = v5->static_fields;
    v7 = static_fields->dynamicFont;
    if ( !v7 )
      sub_1C372B4(0);
    UnityEngine_Font__RequestCharactersInTexture(v7, text, static_fields->finalSize, static_fields->fontStyle, 0);
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
  int32_t v35; // w1
  float v36; // s15
  const MethodInfo *v37; // x3
  unsigned int Chars; // w26
  NGUIText_c *v39; // x0
  struct NGUIText_StaticFields *v40; // x8
  NGUIText_c *v41; // x0
  struct NGUIText_StaticFields *v42; // x8
  NGUIText_c *v43; // x0
  _BOOL4 v44; // w26
  struct NGUIText_StaticFields *v45; // x8
  float mAlpha; // s4
  int32_t v47; // w25
  int32_t v48; // w29
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v50; // x29
  NGUIText_c *v51; // x0
  int mOffsetX; // w27
  int mOffsetY; // s12
  int mWidth; // s13
  float fontScale; // s8
  int mAdvance; // s10
  int mHeight; // s11
  __int128 v58; // q9
  float v59; // s14
  double v60; // d10
  const MethodInfo *v61; // x2
  double v62; // d0
  double v63; // d0
  double v64; // d1
  NGUIText_GlyphInfo_o *Glyph; // x0
  int32_t v66; // w28
  NGUIText_GlyphInfo_o *v67; // x29
  float32x4_t v73; // q3
  NGUIText_c *v74; // x0
  struct NGUIText_StaticFields *v75; // x8
  float fontSize; // s0
  float v77; // s1
  float v78; // s0
  double v79; // d1
  float a; // s8
  float b; // s10
  float g; // s11
  float r; // s12
  NGUIText_c *v84; // x8
  __int128 v85; // q0
  struct BetterList_Color__o *mColors; // x9
  int32_t v87; // w27
  int v88; // w26
  struct NGUIText_StaticFields *v89; // x9
  float32x2_t v90; // d2
  float v91; // v2.s[1]
  float v92; // v0.s[1]
  float v93; // v0.s[1]
  int v94; // v2.s[1]
  NGUIText_c *v95; // x0
  struct NGUIText_StaticFields *v96; // x8
  NGUIText_c *v97; // x0
  float y; // s11
  float x; // s13
  float v100; // s8
  float v101; // s12
  float advance; // s10
  float finalSpacingX; // s0
  __int128 v104; // q9
  float v105; // s14
  double v106; // d10
  long double inited; // q0
  long double v108; // q1
  long double v109; // q2
  long double v110; // q3
  double v111; // d1
  double v112; // d1
  NGUIText_c *v113; // x0
  struct NGUIText_StaticFields *v114; // x8
  float v115; // s2
  float v116; // s13
  float v117; // s10
  float v118; // s12
  int v119; // w10
  float v120; // s11
  float v121; // s0
  NGUIText_c *v122; // x0
  struct NGUIText_StaticFields *v123; // x8
  int v124; // s15
  int32_t v125; // w26
  float v126; // s8
  float v127; // s14
  long double v128; // q0
  long double v129; // q1
  long double v130; // q2
  long double v131; // q3
  float v132; // s10
  float v133; // s11
  float v134; // s12
  float v135; // s13
  float v136; // s0
  NGUIText_c *v137; // x0
  int v138; // w26
  UnityEngine_Color32_o v139; // x1
  unsigned __int64 v140; // x27
  int v141; // w26
  UnityEngine_Color32_o v142; // x1
  NGUIText_c *v143; // x0
  int v144; // w27
  struct NGUIText_StaticFields *v145; // x8
  float v146; // s11
  float v147; // s9
  float finalLineHeight; // s0
  int v149; // w27
  NGUIText_c *v150; // x0
  uint32_t cctor_finished; // w8
  struct NGUIText_StaticFields *v152; // x9
  float v153; // s8
  NGUIText_c *v154; // x0
  UnityEngine_Object_o *v155; // x28
  float v156; // s0
  float v157; // s1
  float v158; // s2
  float v159; // s3
  unsigned int v160; // w27
  unsigned int v161; // w28
  int32_t channel; // w8
  struct NGUIText_StaticFields *v163; // x8
  struct BetterList_Color__o *mGradientColors; // x8
  _BOOL4 v165; // w24
  int v166; // w27
  UnityEngine_Color32_o v167; // x1
  _BOOL4 v168; // w8
  float v169; // s8
  float v170; // s0
  float32x2_t v171; // d10
  float32x2_t v172; // d11
  float v173; // s1
  float v174; // s8
  int32_t v175; // w0
  long double v176; // q1
  long double v177; // q2
  long double v178; // q3
  long double v179; // q0
  int v180; // w0
  NGUIText_c *v181; // x8
  unsigned int v182; // w9
  unsigned int i; // w28
  UnityEngine_Color32_o rgba; // x1
  UnityEngine_Color32_o v185; // x1
  UnityEngine_Color32_o v186; // x1
  UnityEngine_Color32_o v187; // x1
  unsigned int v188; // w0
  int v189; // w27
  UnityEngine_Color32_o v190; // x28
  UnityEngine_Color32_o v191; // x1
  _BOOL4 v192; // w28
  unsigned __int64 v193; // x29
  float v194; // s10
  float v195; // s13
  struct NGUIText_StaticFields *v196; // x8
  struct UnityEngine_Color32_o s_c1; // x9
  unsigned __int64 v198; // x10
  unsigned __int64 v199; // x9
  float v200; // s8
  float v201; // s12
  float v202; // s11
  float v203; // s15
  float v204; // s8
  float v205; // s12
  const MethodInfo *v206; // x5
  NGUIText_c *v207; // x0
  float v208; // s0
  float v209; // s8
  NGUIText_c *v210; // x0
  int32_t v211; // w28
  struct NGUIText_StaticFields *v212; // x8
  float v213; // s11
  float v214; // s12
  int32_t v215; // w29
  const MethodInfo *v216; // x5
  int32_t v217; // w28
  const MethodInfo *v218; // x5
  int32_t v219; // w29
  const MethodInfo *v220; // x5
  int32_t v221; // w28
  const MethodInfo *v222; // x5
  int32_t v223; // w29
  const MethodInfo *v224; // x5
  int32_t v225; // w28
  const MethodInfo *v226; // x5
  const MethodInfo *v227; // x5
  int32_t v228; // w28
  NGUIText_GlyphInfo_o *v229; // x0
  float *v230; // x28
  NGUIText_c *v231; // x0
  UnityEngine_Object_o *v232; // x29
  bool v233; // w0
  float v234; // s0
  float v235; // s1
  float v236; // s2
  float v237; // s3
  unsigned int v238; // w27
  float v239; // s11
  unsigned int v240; // w29
  float v241; // s11
  float v242; // s12
  unsigned __int64 v243; // x29
  __int64 v244; // x8
  unsigned __int64 v245; // x9
  __int64 v246; // x8
  float v247; // s10
  float v248; // s14
  float v249; // s13
  float v250; // s14
  long double v251; // q0
  long double v252; // q1
  long double v253; // q2
  long double v254; // q3
  struct NGUIText_StaticFields *v255; // x8
  struct BetterList_Color__o *v256; // x8
  int v257; // w27
  UnityEngine_Color32_o v258; // x1
  float v259; // s8
  float v260; // s0
  float32x2_t v261; // d9
  float32x2_t v262; // d10
  float v263; // s1
  float v264; // s8
  int32_t v265; // w0
  long double v266; // q1
  long double v267; // q2
  long double v268; // q3
  long double v269; // q0
  int v270; // w8
  unsigned int v271; // w10
  unsigned int v272; // w28
  UnityEngine_Color32_o v273; // x1
  UnityEngine_Color32_o v274; // x1
  UnityEngine_Color32_o v275; // x1
  UnityEngine_Color32_o v276; // x1
  NGUIText_c *v277; // x0
  struct NGUIText_StaticFields *v278; // x8
  const MethodInfo *v279; // [xsp+28h] [xbp-178h]
  float v280; // [xsp+38h] [xbp-168h]
  _BOOL4 v281; // [xsp+3Ch] [xbp-164h]
  float v282; // [xsp+40h] [xbp-160h]
  float v283; // [xsp+44h] [xbp-15Ch]
  float v284; // [xsp+48h] [xbp-158h]
  float v285; // [xsp+4Ch] [xbp-154h]
  float m_XMin; // [xsp+50h] [xbp-150h]
  float v287; // [xsp+54h] [xbp-14Ch]
  unsigned __int64 v288; // [xsp+58h] [xbp-148h]
  float32x2_t v289; // [xsp+60h] [xbp-140h]
  float32x2_t v290; // [xsp+68h] [xbp-138h]
  float32x2_t v291; // [xsp+70h] [xbp-130h]
  float32x2_t v292; // [xsp+78h] [xbp-128h]
  unsigned __int64 v293; // [xsp+80h] [xbp-120h]
  int32_t indexOffset; // [xsp+88h] [xbp-118h]
  int v295; // [xsp+8Ch] [xbp-114h]
  float v296; // [xsp+90h] [xbp-110h]
  float v297; // [xsp+90h] [xbp-110h]
  float item; // [xsp+A0h] [xbp-100h]
  float itema; // [xsp+A0h] [xbp-100h]
  float32x2_t v300; // [xsp+B0h] [xbp-F0h]
  float v301; // [xsp+B0h] [xbp-F0h]
  float v302; // [xsp+B0h] [xbp-F0h]
  float32x2_t v303; // [xsp+C0h] [xbp-E0h]
  __int128 v304; // [xsp+C0h] [xbp-E0h]
  __int128 v305; // [xsp+C0h] [xbp-E0h]
  float v306; // [xsp+C0h] [xbp-E0h]
  float v307; // [xsp+C0h] [xbp-E0h]
  unsigned __int32 v308; // [xsp+C4h] [xbp-DCh]
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
  UnityEngine_Vector2_o v319; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v320; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v321; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v322; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v323; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v324; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v325; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v326; // 0:s0.4,4:s1.4
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
  UnityEngine_Vector3_o v349; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v350; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o uvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  long double v352; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Color_o v353; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v354; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Color_o v355; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4C476DA & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Color__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&Method_BetterList_Color__Clear__);
    sub_1C37058(&Method_BetterList_Color__get_Item__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C476DA = 1;
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
    v350.fields.r = 1.0;
    v350.fields.g = 1.0;
    v350.fields.b = 1.0;
    v350.fields.a = 1.0;
    BetterList_Color___Add(
      (BetterList_Color__o *)IsNullOrEmpty,
      v350,
      (const MethodInfo_33181E8 *)Method_BetterList_Color__Add__);
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
    v300.n64_u64[0] = *(unsigned __int64 *)&v16;
    v303.n64_u64[0] = *(unsigned __int64 *)&v15;
    IsNullOrEmpty = sub_2526688(0, v15, v20, v16, v21);
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
    v285 = 0.0;
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
      v285 = m_Width / (float)(int)IsNullOrEmpty;
      v31 = m_Height / (float)UIFont__get_texHeight(NGUIText_TypeInfo->static_fields->bitmapFont, 0);
    }
    index = 0;
    if ( stringLength >= 1 )
    {
      v283 = v31;
      v291.n64_u64[0] = vmul_f32(v300, *(float32x2_t *)&v6).n64_u64[0];
      v292.n64_u64[0] = vmul_f32(v303, v18).n64_u64[0];
      v289.n64_u64[0] = vmul_f32(v300, *(float32x2_t *)&v5).n64_u64[0];
      v290.n64_u64[0] = vmul_f32(v303, v19).n64_u64[0];
      v282 = m_YMin + m_Height;
      v34 = 0;
      v35 = 0;
      LODWORD(v6) = 0;
      v36 = 0.0;
      v284 = pixelDensity * (float)finalSize;
      LODWORD(v293) = v23;
      v288 = v23 >> 24;
      v295 = stringLength;
      while ( 1 )
      {
        Chars = System_String__get_Chars(text, v35, 0);
        if ( Chars == 10 )
        {
          v39 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v39 = NGUIText_TypeInfo;
          }
          v40 = v39->static_fields;
          if ( v40->alignment != 1 )
          {
            if ( !v39->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v39);
              v40 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, size, *(float *)&v6 - v40->finalSpacingX, v28);
            size = verts->fields.size;
            v39 = NGUIText_TypeInfo;
          }
          if ( !v39->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v39);
            v39 = NGUIText_TypeInfo;
          }
          v34 = 0;
          LODWORD(v6) = 0;
          v36 = v36 + v39->static_fields->finalLineHeight;
          goto LABEL_292;
        }
        if ( Chars < 0x20 )
          goto LABEL_291;
        v41 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v41 = NGUIText_TypeInfo;
        }
        v42 = v41->static_fields;
        if ( v42->encoding )
        {
          if ( !v41->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v41);
            v42 = NGUIText_TypeInfo->static_fields;
          }
          if ( NGUIText__ParseSymbol_49315680(
                 text,
                 &index,
                 v42->mColors,
                 v42->premultiply,
                 &sub,
                 &bold,
                 &italic,
                 &underline,
                 &strike,
                 &ignoreColor,
                 &spGradient,
                 &isOutline,
                 v42->mGradientColors,
                 v279) )
          {
            v43 = NGUIText_TypeInfo;
            v44 = ignoreColor;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v43 = NGUIText_TypeInfo;
            }
            v45 = v43->static_fields;
            IsNullOrEmpty = (__int64)v45->mColors;
            if ( v44 )
            {
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              *(UnityEngine_Color_o *)&v352 = BetterList_Color___get_Item(
                                                (BetterList_Color__o *)IsNullOrEmpty,
                                                *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                                                (const MethodInfo_3317FD4 *)Method_BetterList_Color__get_Item__);
              mAlpha = NGUIText_TypeInfo->static_fields->mAlpha * NGUIText_TypeInfo->static_fields->tint.fields.a;
            }
            else
            {
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              b = v45->tint.fields.b;
              a = v45->tint.fields.a;
              r = v45->tint.fields.r;
              g = v45->tint.fields.g;
              *(UnityEngine_Color_o *)&v352 = BetterList_Color___get_Item(
                                                (BetterList_Color__o *)IsNullOrEmpty,
                                                *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                                                (const MethodInfo_3317FD4 *)Method_BetterList_Color__get_Item__);
              *(float *)&v352 = r * *(float *)&v352;
              *((float *)&v352 + 1) = g * *((float *)&v352 + 1);
              *((float *)&v352 + 2) = b * *((float *)&v352 + 2);
              *((float *)&v352 + 3) = a * *((float *)&v352 + 3);
              mAlpha = NGUIText_TypeInfo->static_fields->mAlpha;
            }
            *((float *)&v352 + 3) = *((float *)&v352 + 3) * mAlpha;
            item = *((float *)&v352 + 2);
            v301 = *(float *)&v352;
            v296 = *((float *)&v352 + 1);
            v304 = *(_OWORD *)((char *)&v352 + 12);
            IsNullOrEmpty = sub_2526688(
                              0,
                              v352,
                              *(long double *)((char *)&v352 + 4),
                              *(long double *)((char *)&v352 + 8),
                              *(long double *)((char *)&v352 + 12));
            v84 = NGUIText_TypeInfo;
            v293 = IsNullOrEmpty;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v84 = NGUIText_TypeInfo;
            }
            v85 = v304;
            mColors = v84->static_fields->mColors;
            if ( !mColors )
              goto LABEL_353;
            v87 = 0;
            v288 = v293 >> 24;
            v88 = (mColors->fields.size - 2) & ~((mColors->fields.size - 2) >> 31);
            while ( 1 )
            {
              v305 = v85;
              if ( !v84->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v84);
                v84 = NGUIText_TypeInfo;
              }
              v89 = v84->static_fields;
              v90.n64_f32[0] = v301;
              if ( v88 == v87 )
                break;
              IsNullOrEmpty = (__int64)v89->mColors;
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              v353 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       v87,
                       (const MethodInfo_3317FD4 *)Method_BetterList_Color__get_Item__);
              v85 = v305;
              v84 = NGUIText_TypeInfo;
              ++v87;
              *(float *)&v85 = *(float *)&v305 * v353.fields.a;
            }
            if ( v89->gradient )
            {
              stringLength = v295;
              if ( !v84->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v84);
                v84 = NGUIText_TypeInfo;
                v90.n64_f32[0] = v301;
                v89 = NGUIText_TypeInfo->static_fields;
              }
              v90.n64_f32[1] = v296;
              v291.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v305, LODWORD(item)),
                                  *(float32x2_t *)&v89->gradientBottom.fields.b).n64_u64[0];
              v292.n64_u64[0] = vmul_f32(v90, *(float32x2_t *)&v89->gradientBottom.fields.r).n64_u64[0];
              v289.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v305, LODWORD(item)),
                                  *(float32x2_t *)&v89->gradientTop.fields.b).n64_u64[0];
              v290.n64_u64[0] = vmul_f32(v90, *(float32x2_t *)&v89->gradientTop.fields.r).n64_u64[0];
            }
            else
            {
              stringLength = v295;
            }
            if ( !v84->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v84);
              v84 = NGUIText_TypeInfo;
            }
            IsNullOrEmpty = (__int64)v84->static_fields->mGradientColors;
            if ( !IsNullOrEmpty )
              goto LABEL_353;
            if ( *(int *)(IsNullOrEmpty + 24) >= 2 )
            {
              if ( !v84->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v84);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
                if ( !IsNullOrEmpty )
                  goto LABEL_353;
              }
              v354 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 2,
                       (const MethodInfo_3317FD4 *)Method_BetterList_Color__get_Item__);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors;
              if ( !IsNullOrEmpty )
                goto LABEL_353;
              v91 = v354.fields.a;
              v92 = v354.fields.g;
              v291.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(v305, LODWORD(item)), *(float32x2_t *)&v354.fields.b).n64_u64[0];
              v292.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v296), LODWORD(v301)),
                                  *(float32x2_t *)&v354.fields.r).n64_u64[0];
              v355 = BetterList_Color___get_Item(
                       (BetterList_Color__o *)IsNullOrEmpty,
                       *(_DWORD *)(IsNullOrEmpty + 24) - 1,
                       (const MethodInfo_3317FD4 *)Method_BetterList_Color__get_Item__);
              v93 = v296;
              v94 = v305;
              v289.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v355.fields.a), LODWORD(item)),
                                  *(float32x2_t *)&v355.fields.b).n64_u64[0];
              v290.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v355.fields.g), LODWORD(v301)),
                                  *(float32x2_t *)&v355.fields.r).n64_u64[0];
            }
            if ( spGradient )
            {
              v95 = NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                v95 = NGUIText_TypeInfo;
              }
              v96 = v95->static_fields;
              v291.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v305, LODWORD(item)),
                                  *(float32x2_t *)&v96->specificGradientBottom.fields.b).n64_u64[0];
              v292.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v296), LODWORD(v301)),
                                  *(float32x2_t *)&v96->specificGradientBottom.fields.r).n64_u64[0];
              v289.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(v305, LODWORD(item)),
                                  *(float32x2_t *)&v96->specificGradientTop.fields.b).n64_u64[0];
              v290.n64_u64[0] = vmul_f32(
                                  (float32x2_t)__PAIR64__(LODWORD(v296), LODWORD(v301)),
                                  *(float32x2_t *)&v96->specificGradientTop.fields.r).n64_u64[0];
            }
            --index;
            goto LABEL_292;
          }
          v41 = NGUIText_TypeInfo;
        }
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = NGUIText_TypeInfo;
        }
        if ( !v41->static_fields->useSymbols )
          goto LABEL_59;
        v47 = size;
        v48 = index;
        if ( !v41->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v41);
        Symbol = NGUIText__GetSymbol(text, v48, stringLength, v37);
        if ( !Symbol )
        {
          v41 = NGUIText_TypeInfo;
          size = v47;
LABEL_59:
          indexOffset = size;
          if ( !v41->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v41);
          Glyph = NGUIText__GetGlyph(Chars, v34, v28);
          if ( !Glyph )
            goto LABEL_292;
          v66 = sub;
          v67 = Glyph;
          if ( sub )
          {
            __asm { FMOV            V1.4S, #0.75 }
            v73 = vmulq_f32(*(float32x4_t *)&Glyph->fields.v0.fields.x, _Q1);
            *(float32x4_t *)&Glyph->fields.v0.fields.x = v73;
            v74 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              v308 = v73.n128_u32[1];
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v73.n128_u32[1] = v308;
              v74 = NGUIText_TypeInfo;
            }
            v75 = v74->static_fields;
            fontSize = (float)v75->fontSize;
            v77 = v75->fontScale * fontSize;
            if ( v66 == 1 )
            {
              v67->fields.v0.fields.y = v73.n128_f32[1] - (float)(v77 * 0.4);
              v78 = v67->fields.v1.fields.y - (float)((float)(v75->fontScale * fontSize) * 0.4);
            }
            else
            {
              v67->fields.v0.fields.y = v73.n128_f32[1] + (float)(v77 * 0.05);
              v78 = v67->fields.v1.fields.y + (float)((float)(v75->fontScale * fontSize) * 0.05);
            }
            v67->fields.v1.fields.y = v78;
          }
          v97 = NGUIText_TypeInfo;
          x = v67->fields.v0.fields.x;
          y = v67->fields.v0.fields.y;
          v101 = v67->fields.v1.fields.x;
          v100 = v67->fields.v1.fields.y;
          advance = v67->fields.advance;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v97 = NGUIText_TypeInfo;
          }
          finalSpacingX = v97->static_fields->finalSpacingX;
          if ( finalSpacingX < 0.0 )
          {
            if ( !v97->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v97);
              finalSpacingX = NGUIText_TypeInfo->static_fields->finalSpacingX;
            }
            advance = advance + finalSpacingX;
          }
          if ( !byte_4C3E100 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3E100 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v104 = v6;
          v105 = *(float *)&v6 + advance;
          v106 = v105;
          *(double *)&inited = modf(v105, &iptr);
          if ( v105 >= 0.0 )
          {
            if ( *(double *)&inited == 0.5 )
            {
              *(double *)&inited = iptr;
              v111 = 1.0;
              goto LABEL_119;
            }
            *(double *)&inited = floor(v106 + 0.5);
          }
          else if ( *(double *)&inited == -0.5 )
          {
            *(double *)&inited = iptr;
            v111 = -1.0;
LABEL_119:
            v112 = *(double *)&inited + v111;
            if ( ((__int64)*(double *)&inited & 1) != 0 )
              *(double *)&inited = v112;
          }
          else
          {
            *(double *)&inited = ceil(v106 + -0.5);
          }
          v143 = NGUIText_TypeInfo;
          DWORD1(v108) = 2146435072;
          v6 = v104;
          if ( *(double *)&inited == INFINITY )
            v144 = 0x80000000;
          else
            v144 = (int)*(double *)&inited;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v143 = NGUIText_TypeInfo;
          }
          v145 = v143->static_fields;
          itema = *(float *)&v104 + x;
          v146 = y - v36;
          v147 = *(float *)&v104 + v101;
          v302 = v100 - v36;
          if ( v144 > v145->regionWidth )
          {
            if ( *(float *)&v6 == 0.0 )
              return;
            if ( !v143->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(v143);
              v143 = NGUIText_TypeInfo;
              v145 = NGUIText_TypeInfo->static_fields;
            }
            if ( v145->alignment != 1 && indexOffset < verts->fields.size )
            {
              if ( !v143->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v143);
                v145 = NGUIText_TypeInfo->static_fields;
              }
              NGUIText__Align(verts, indexOffset, *(float *)&v6 - v145->finalSpacingX, v28);
              v143 = NGUIText_TypeInfo;
              indexOffset = verts->fields.size;
            }
            if ( !v143->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(v143);
              v143 = NGUIText_TypeInfo;
            }
            v147 = v147 - *(float *)&v6;
            finalLineHeight = v143->static_fields->finalLineHeight;
            itema = itema - *(float *)&v6;
            LODWORD(v6) = 0;
            v146 = v146 - finalLineHeight;
            v36 = v36 + finalLineHeight;
            v302 = v302 - finalLineHeight;
          }
          if ( !v143->_2.cctor_finished )
            inited = j_il2cpp_runtime_class_init_0(v143);
          if ( Chars - 8201 < 3 || (v149 = Chars, Chars == 32) )
          {
            if ( underline )
            {
              v149 = 95;
            }
            else if ( strike )
            {
              v149 = 45;
            }
            else
            {
              v149 = Chars;
            }
          }
          v150 = NGUIText_TypeInfo;
          cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
          if ( !cctor_finished )
          {
            inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v150 = NGUIText_TypeInfo;
            cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
          }
          v152 = v150->static_fields;
          if ( v66 )
            v153 = (float)(v152->finalSpacingX + v67->fields.advance) * 0.75;
          else
            v153 = v152->finalSpacingX + v67->fields.advance;
          if ( !cctor_finished )
            inited = j_il2cpp_runtime_class_init_0(v150);
          *(float *)&v5 = *(float *)&v6 + v153;
          if ( (unsigned int)(v149 - 8201) < 3 || v149 == 32 )
          {
            size = indexOffset;
            v6 = v5;
            goto LABEL_192;
          }
          if ( uvs )
          {
            v154 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v154 = NGUIText_TypeInfo;
            }
            v155 = (UnityEngine_Object_o *)v154->static_fields->bitmapFont;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v155, 0, 0) )
            {
              v156 = m_XMin + (float)(v285 * v67->fields.u0.fields.x);
              v157 = m_XMin + (float)(v285 * v67->fields.u2.fields.x);
              v158 = v282 - (float)(v283 * v67->fields.u0.fields.y);
              v159 = v282 - (float)(v283 * v67->fields.u2.fields.y);
              v67->fields.u0.fields.x = v156;
              v67->fields.u0.fields.y = v158;
              v67->fields.u2.fields.x = v157;
              v67->fields.u2.fields.y = v159;
              v67->fields.u1.fields.x = v156;
              v67->fields.u1.fields.y = v159;
              v67->fields.u3.fields.x = v157;
              v67->fields.u3.fields.y = v158;
            }
            v160 = 0;
            if ( bold )
              v161 = 4;
            else
              v161 = 1;
            do
            {
              BetterList_Vector2___Add(
                uvs,
                v67->fields.u0,
                (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v67->fields.u1,
                (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v67->fields.u2,
                (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              BetterList_Vector2___Add(
                uvs,
                v67->fields.u3,
                (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              ++v160;
            }
            while ( v160 < v161 );
          }
          v287 = *(float *)&v5;
          v297 = *(float *)&v6;
          if ( cols )
          {
            channel = v67->fields.channel;
            if ( channel != 15 && channel )
            {
              *(float *)&inited = (float)((float)(unsigned __int8)v293 / 255.0) * 0.49;
              *(float *)&v108 = (float)((float)BYTE1(v293) / 255.0) * 0.49;
              *(float *)&v109 = (float)((float)BYTE2(v293) / 255.0) * 0.49;
              *(float *)&v110 = (float)((float)(unsigned __int8)v288 / 255.0) * 0.49;
              switch ( channel )
              {
                case 1:
                  *(float *)&v109 = *(float *)&v109 + 0.51;
                  break;
                case 2:
                  *(float *)&v108 = *(float *)&v108 + 0.51;
                  break;
                case 3:
                  break;
                case 4:
                  *(float *)&inited = *(float *)&inited + 0.51;
                  break;
                default:
                  if ( channel == 8 )
                    *(float *)&v110 = *(float *)&v110 + 0.51;
                  break;
              }
              v188 = sub_2526688(0, inited, v108, v109, v110);
              v165 = bold;
              if ( bold )
                v189 = 16;
              else
                v189 = 4;
              v190 = (UnityEngine_Color32_o)v188;
              do
              {
                v191 = v190;
                BetterList_Color32___Add(cols, v191, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
                --v189;
              }
              while ( v189 );
LABEL_249:
              stringLength = v295;
            }
            else
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                inited = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v163 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
              if ( !spGradient && !v163->gradient )
              {
                if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
                {
                  inited = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                  IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
                  v163 = NGUIText_TypeInfo->static_fields;
                }
                mGradientColors = v163->mGradientColors;
                if ( !mGradientColors )
                  goto LABEL_353;
                if ( mGradientColors->fields.size < 2 )
                {
                  v165 = bold;
                  if ( bold )
                    v166 = 16;
                  else
                    v166 = 4;
                  do
                  {
                    v167 = (UnityEngine_Color32_o)(v293 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v288 << 24));
                    BetterList_Color32___Add(cols, v167, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
                    --v166;
                  }
                  while ( v166 );
                  goto LABEL_249;
                }
              }
              v169 = v67->fields.v0.fields.y;
              v280 = v146;
              if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
              {
                inited = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v170 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
              v171.n64_u64[0] = vsub_f32(v290, v292).n64_u64[0];
              stringLength = v295;
              v172.n64_u64[0] = vsub_f32(v289, v291).n64_u64[0];
              v173 = (float)(v284 + (float)(v169 / v170)) / v284;
              v174 = (float)(v284 + (float)(v67->fields.v1.fields.y / v170)) / v284;
              *(float *)&inited = fminf(v173, 1.0);
              if ( v173 < 0.0 )
                *(float *)&inited = 0.0;
              *(float32x2_t *)&v108 = vmul_n_f32(v171, *(float *)&inited);
              *(float32x2_t *)&v109 = vmul_n_f32(v172, *(float *)&inited);
              *(float32x2_t *)&inited = vadd_f32(v292, *(float32x2_t *)&v108);
              *(float32x2_t *)&v109 = vadd_f32(v291, *(float32x2_t *)&v109);
              LODWORD(v108) = DWORD1(inited);
              LODWORD(v110) = DWORD1(v109);
              v175 = sub_2526688(0, inited, v108, v109, v110);
              *(float *)&v179 = fminf(v174, 1.0);
              if ( v174 < 0.0 )
                *(float *)&v179 = 0.0;
              *(float32x2_t *)&v176 = vmul_n_f32(v171, *(float *)&v179);
              *(float32x2_t *)&v177 = vmul_n_f32(v172, *(float *)&v179);
              *(float32x2_t *)&v179 = vadd_f32(v292, *(float32x2_t *)&v176);
              *(float32x2_t *)&v177 = vadd_f32(v291, *(float32x2_t *)&v177);
              LODWORD(v176) = DWORD1(v179);
              NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v175;
              LODWORD(v178) = DWORD1(v177);
              v180 = sub_2526688(0, v179, v176, v177, v178);
              v181 = NGUIText_TypeInfo;
              v146 = v280;
              *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v180;
              v165 = bold;
              if ( bold )
                v182 = 4;
              else
                v182 = 1;
              if ( v182 <= 1 )
                v182 = 1;
              for ( i = v182 - 1; ; --i )
              {
                if ( !v181->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v181);
                rgba = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
                BetterList_Color32___Add(cols, rgba, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
                v185 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                BetterList_Color32___Add(cols, v185, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
                v186 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
                BetterList_Color32___Add(cols, v186, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
                v187 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
                BetterList_Color32___Add(cols, v187, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
                if ( !i )
                  break;
                v181 = NGUIText_TypeInfo;
              }
            }
            v168 = v165;
          }
          else
          {
            v168 = bold;
            stringLength = v295;
          }
          v192 = italic;
          v307 = v36;
          v281 = v168;
          if ( v168 )
          {
            v193 = 0;
            v194 = v146;
            v195 = v302 - v146;
            while ( 1 )
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v196 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
              s_c1 = v196->s_c1;
              if ( !*(_QWORD *)&s_c1 )
                goto LABEL_353;
              v198 = *(unsigned int *)(*(_QWORD *)&s_c1 + 24LL);
              if ( v193 >= v198 || v193 + 1 >= v198 )
LABEL_354:
                sub_1C372BC(IsNullOrEmpty);
              v199 = *(_QWORD *)&s_c1 + 4 * v193;
              v201 = *(float *)(v199 + 32);
              v200 = *(float *)(v199 + 36);
              if ( v192 )
              {
                if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
                {
                  j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
                  v196 = NGUIText_TypeInfo->static_fields;
                }
                v202 = (float)((float)v196->fontSize * 0.1) * (float)(v195 / (float)v196->fontSize);
              }
              else
              {
                v202 = 0.0;
              }
              v203 = v194 + v200;
              v331.fields.z = 0.0;
              v331.fields.x = (float)(itema + v201) - v202;
              v331.fields.y = v194 + v200;
              BetterList_Vector3___Add(verts, v331, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v332.fields.x = (float)(itema + v201) + v202;
              v332.fields.z = 0.0;
              v204 = v302 + v200;
              v332.fields.y = v204;
              BetterList_Vector3___Add(verts, v332, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v205 = v147 + v201;
              v333.fields.x = v205 + v202;
              v333.fields.z = 0.0;
              v333.fields.y = v204;
              BetterList_Vector3___Add(verts, v333, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v334.fields.x = v205 - v202;
              v334.fields.z = 0.0;
              v334.fields.y = v203;
              BetterList_Vector3___Add(verts, v334, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v36 = v307;
              *(float *)&v6 = v297;
              v193 += 2LL;
              if ( v193 == 8 )
                goto LABEL_271;
            }
          }
          if ( italic )
          {
            v207 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v207 = NGUIText_TypeInfo;
            }
            v208 = (float)v207->static_fields->fontSize;
            v209 = (float)(v208 * 0.1) * (float)((float)(v302 - v146) / v208);
            v335.fields.x = itema - v209;
            v335.fields.z = 0.0;
            v335.fields.y = v146;
            BetterList_Vector3___Add(verts, v335, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
            v336.fields.x = itema + v209;
            v336.fields.z = 0.0;
            v336.fields.y = v302;
            BetterList_Vector3___Add(verts, v336, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
            v337.fields.x = v147 + v209;
            v337.fields.z = 0.0;
            v337.fields.y = v302;
            BetterList_Vector3___Add(verts, v337, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
            v147 = v147 - v209;
          }
          else
          {
            v338.fields.z = 0.0;
            v338.fields.x = itema;
            v338.fields.y = v146;
            BetterList_Vector3___Add(verts, v338, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
            v339.fields.x = itema;
            v339.fields.z = 0.0;
            v339.fields.y = v302;
            BetterList_Vector3___Add(verts, v339, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
            v340.fields.z = 0.0;
            v340.fields.x = v147;
            v340.fields.y = v302;
            BetterList_Vector3___Add(verts, v340, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
          }
          v341.fields.z = 0.0;
          v341.fields.x = v147;
          v341.fields.y = v146;
          BetterList_Vector3___Add(verts, v341, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
LABEL_271:
          if ( isOutline )
          {
            v210 = NGUIText_TypeInfo;
            v211 = verts->fields.size;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v210 = NGUIText_TypeInfo;
            }
            v212 = v210->static_fields;
            v214 = v212->outlineDistance.fields.x;
            v213 = v212->outlineDistance.fields.y;
            NGUIText__ApplyEffect(verts, uvs, cols, v211 - 4, v211, v214 / 1.4142, -(float)(v213 / 1.4142), v206);
            v215 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v211, v215, -(float)(v214 / 1.4142), v213 / 1.4142, v216);
            v217 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v215, v217, v214 / 1.4142, v213 / 1.4142, v218);
            v219 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v217, v219, -(float)(v214 / 1.4142), -(float)(v213 / 1.4142), v220);
            v221 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v219, v221, -v214, 0.0, v222);
            v223 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v221, v223, v214, 0.0, v224);
            v225 = verts->fields.size;
            NGUIText__ApplyEffect(verts, uvs, cols, v223, v225, 0.0, v213, v226);
            NGUIText__ApplyEffect(verts, uvs, cols, v225, verts->fields.size, 0.0, -v213, v227);
            v36 = v307;
            *(float *)&v6 = v297;
          }
          if ( !strike && !underline )
          {
            *(float *)&v6 = v287;
            size = indexOffset;
            v34 = Chars;
            goto LABEL_292;
          }
          size = indexOffset;
          if ( strike )
            v228 = 45;
          else
            v228 = 95;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v229 = NGUIText__GetGlyph(v228, Chars, v28);
          if ( !v229 )
          {
            *(float *)&v6 = v287;
LABEL_291:
            v34 = Chars;
            goto LABEL_292;
          }
          v230 = (float *)v229;
          if ( uvs )
          {
            v231 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v231 = NGUIText_TypeInfo;
            }
            v232 = (UnityEngine_Object_o *)v231->static_fields->bitmapFont;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v233 = UnityEngine_Object__op_Inequality(v232, 0, 0);
            v234 = v230[8];
            if ( v233 )
            {
              v234 = m_XMin + (float)(v285 * v234);
              v235 = m_XMin + (float)(v285 * v230[12]);
              v236 = v282 - (float)(v283 * v230[9]);
              v237 = v282 - (float)(v283 * v230[13]);
              v230[8] = v234;
              v230[9] = v236;
              v230[12] = v235;
              v230[13] = v237;
            }
            else
            {
              v235 = v230[12];
            }
            v238 = 0;
            v239 = (float)(v234 + v235) * 0.5;
            if ( v281 )
              v240 = 4;
            else
              v240 = 1;
            do
            {
              v323.fields.y = v230[9];
              v323.fields.x = v239;
              BetterList_Vector2___Add(uvs, v323, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              v324.fields.y = v230[13];
              v324.fields.x = v239;
              BetterList_Vector2___Add(uvs, v324, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              v325.fields.y = v230[13];
              v325.fields.x = v239;
              BetterList_Vector2___Add(uvs, v325, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              v326.fields.y = v230[9];
              v326.fields.x = v239;
              BetterList_Vector2___Add(uvs, v326, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
              ++v238;
            }
            while ( v238 < v240 );
          }
          v241 = v230[5] - v36;
          v242 = v230[7] - v36;
          if ( v281 )
          {
            v243 = 0;
            while ( 1 )
            {
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              if ( !NGUIText_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
                IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              }
              v244 = *(_QWORD *)(*(_QWORD *)(IsNullOrEmpty + 184) + 320LL);
              if ( !v244 )
                goto LABEL_353;
              v245 = *(unsigned int *)(v244 + 24);
              if ( v243 >= v245 || v243 + 1 >= v245 )
                goto LABEL_354;
              v246 = v244 + 4 * v243;
              v247 = *(float *)(v246 + 32);
              v248 = *(float *)(v246 + 36);
              v342.fields.z = 0.0;
              v249 = v241 + v248;
              v342.fields.x = v297 + v247;
              v342.fields.y = v241 + v248;
              BetterList_Vector3___Add(verts, v342, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v250 = v242 + v248;
              v343.fields.z = 0.0;
              v343.fields.x = v297 + v247;
              v343.fields.y = v250;
              BetterList_Vector3___Add(verts, v343, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v344.fields.z = 0.0;
              v344.fields.x = v287 + v247;
              v344.fields.y = v250;
              BetterList_Vector3___Add(verts, v344, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v345.fields.z = 0.0;
              v345.fields.x = v287 + v247;
              v345.fields.y = v249;
              BetterList_Vector3___Add(verts, v345, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
              v243 += 2LL;
              if ( v243 == 8 )
                goto LABEL_309;
            }
          }
          v346.fields.z = 0.0;
          LODWORD(v346.fields.x) = v6;
          v346.fields.y = v230[5] - v36;
          BetterList_Vector3___Add(verts, v346, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
          v347.fields.z = 0.0;
          LODWORD(v347.fields.x) = v6;
          v347.fields.y = v242;
          BetterList_Vector3___Add(verts, v347, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
          v348.fields.z = 0.0;
          v348.fields.x = v287;
          v348.fields.y = v242;
          BetterList_Vector3___Add(verts, v348, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
          v349.fields.z = 0.0;
          v349.fields.x = v287;
          v349.fields.y = v241;
          BetterList_Vector3___Add(verts, v349, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
LABEL_309:
          IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            v251 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
          }
          size = indexOffset;
          stringLength = v295;
          v255 = *(struct NGUIText_StaticFields **)(IsNullOrEmpty + 184);
          *(float *)&v6 = v287;
          if ( spGradient || v255->gradient )
          {
LABEL_322:
            v259 = v230[5];
            if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
            {
              v251 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            }
            DWORD1(v6) = v291.n64_u32[1];
            v260 = *(float *)(*(_QWORD *)(IsNullOrEmpty + 184) + 28LL);
            v261.n64_u64[0] = vsub_f32(v290, v292).n64_u64[0];
            v262.n64_u64[0] = vsub_f32(v289, v291).n64_u64[0];
            v263 = (float)(v284 + (float)(v259 / v260)) / v284;
            v264 = (float)(v284 + (float)(v230[7] / v260)) / v284;
            *(float *)&v251 = fminf(v263, 1.0);
            if ( v263 < 0.0 )
              *(float *)&v251 = 0.0;
            *(float32x2_t *)&v252 = vmul_n_f32(v261, *(float *)&v251);
            *(float32x2_t *)&v253 = vmul_n_f32(v262, *(float *)&v251);
            *(float32x2_t *)&v251 = vadd_f32(v292, *(float32x2_t *)&v252);
            *(float32x2_t *)&v253 = vadd_f32(v291, *(float32x2_t *)&v253);
            LODWORD(v252) = DWORD1(v251);
            LODWORD(v254) = DWORD1(v253);
            v265 = sub_2526688(0, v251, v252, v253, v254);
            *(float *)&v269 = fminf(v264, 1.0);
            if ( v264 < 0.0 )
              *(float *)&v269 = 0.0;
            *(float32x2_t *)&v266 = vmul_n_f32(v261, *(float *)&v269);
            *(float32x2_t *)&v267 = vmul_n_f32(v262, *(float *)&v269);
            *(float32x2_t *)&v269 = vadd_f32(v292, *(float32x2_t *)&v266);
            *(float32x2_t *)&v267 = vadd_f32(v291, *(float32x2_t *)&v267);
            LODWORD(v266) = DWORD1(v269);
            NGUIText_TypeInfo->static_fields->s_c0.fields.rgba = v265;
            LODWORD(v268) = DWORD1(v267);
            v270 = sub_2526688(0, v269, v266, v267, v268);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            if ( v281 )
              v271 = 4;
            else
              v271 = 1;
            *(float *)&v6 = v287;
            if ( v271 <= 1 )
              v271 = 1;
            v272 = v271 - 1;
            *(_DWORD *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r = v270;
            while ( 1 )
            {
              if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
                j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
              if ( !cols )
                goto LABEL_353;
              v273 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
              BetterList_Color32___Add(cols, v273, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
              v274 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
              BetterList_Color32___Add(cols, v274, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
              v275 = (UnityEngine_Color32_o)*(unsigned int *)&NGUIText_TypeInfo->static_fields->s_c0.fields.r;
              BetterList_Color32___Add(cols, v275, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
              v276 = (UnityEngine_Color32_o)(unsigned int)NGUIText_TypeInfo->static_fields->s_c0.fields.rgba;
              BetterList_Color32___Add(cols, v276, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
              if ( !v272 )
                goto LABEL_291;
              IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
              --v272;
            }
          }
          if ( !*(_DWORD *)(IsNullOrEmpty + 224) )
          {
            v251 = j_il2cpp_runtime_class_init_0(IsNullOrEmpty);
            IsNullOrEmpty = (__int64)NGUIText_TypeInfo;
            v255 = NGUIText_TypeInfo->static_fields;
          }
          v256 = v255->mGradientColors;
          if ( !v256 )
            goto LABEL_353;
          if ( v256->fields.size >= 2 )
            goto LABEL_322;
          v257 = v281 ? 16 : 4;
          if ( !cols )
            goto LABEL_353;
          do
          {
            v258 = (UnityEngine_Color32_o)(v293 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v288 << 24));
            BetterList_Color32___Add(cols, v258, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
            --v257;
          }
          while ( v257 );
LABEL_192:
          v34 = Chars;
LABEL_193:
          stringLength = v295;
          goto LABEL_292;
        }
        v50 = Symbol;
        v51 = NGUIText_TypeInfo;
        mOffsetX = v50->fields.mOffsetX;
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
        if ( !byte_4C3E100 )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3E100 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v58 = v6;
        v59 = *(float *)&v6 + (float)(fontScale * (float)mAdvance);
        v60 = v59;
        v62 = modf(v59, &iptr);
        if ( v59 >= 0.0 )
        {
          if ( v62 == 0.5 )
          {
            v63 = iptr;
            v64 = 1.0;
LABEL_70:
            v79 = v63 + v64;
            if ( ((__int64)v63 & 1) != 0 )
              v63 = v79;
            goto LABEL_124;
          }
          v63 = floor(v60 + 0.5);
        }
        else
        {
          if ( v62 == -0.5 )
          {
            v63 = iptr;
            v64 = -1.0;
            goto LABEL_70;
          }
          v63 = ceil(v60 + -0.5);
        }
LABEL_124:
        v113 = NGUIText_TypeInfo;
        v114 = NGUIText_TypeInfo->static_fields;
        v115 = fontScale * (float)mWidth;
        v116 = *(float *)&v58 + (float)(fontScale * (float)mOffsetX);
        v117 = v116 + v115;
        v118 = -(float)(v36 + (float)(fontScale * (float)mOffsetY));
        v119 = (int)v63;
        if ( v63 == INFINITY )
          v119 = 0x80000000;
        v120 = v118 - (float)(fontScale * (float)mHeight);
        if ( v119 <= v114->regionWidth )
        {
          stringLength = v295;
        }
        else
        {
          stringLength = v295;
          if ( *(float *)&v58 == 0.0 )
            return;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v113 = NGUIText_TypeInfo;
            v114 = NGUIText_TypeInfo->static_fields;
          }
          if ( v114->alignment != 1 && v47 < verts->fields.size )
          {
            if ( !v113->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v113);
              v114 = NGUIText_TypeInfo->static_fields;
            }
            NGUIText__Align(verts, v47, *(float *)&v58 - v114->finalSpacingX, v61);
            v47 = verts->fields.size;
            v113 = NGUIText_TypeInfo;
          }
          if ( !v113->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v113);
            v113 = NGUIText_TypeInfo;
          }
          v116 = v116 - *(float *)&v58;
          v117 = v117 - *(float *)&v58;
          LODWORD(v58) = 0;
          v121 = v113->static_fields->finalLineHeight;
          v120 = v120 - v121;
          v118 = v118 - v121;
          v36 = v36 + v121;
        }
        v327.fields.z = 0.0;
        v327.fields.x = v116;
        v327.fields.y = v120;
        BetterList_Vector3___Add(verts, v327, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v328.fields.z = 0.0;
        v328.fields.x = v116;
        v328.fields.y = v118;
        BetterList_Vector3___Add(verts, v328, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v329.fields.z = 0.0;
        v329.fields.x = v117;
        v329.fields.y = v118;
        BetterList_Vector3___Add(verts, v329, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v330.fields.z = 0.0;
        v330.fields.x = v117;
        v330.fields.y = v120;
        BetterList_Vector3___Add(verts, v330, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v122 = NGUIText_TypeInfo;
        v306 = v36;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v122 = NGUIText_TypeInfo;
        }
        v123 = v122->static_fields;
        v124 = v50->fields.mAdvance;
        v125 = index;
        v126 = v123->finalSpacingX;
        v127 = v123->fontScale;
        index = v125 + BMSymbol__get_length(v50, 0) - 1;
        if ( uvs )
        {
          v132 = v50->fields.mUV.fields.m_XMin;
          v133 = v50->fields.mUV.fields.m_YMin;
          v134 = v133 + v50->fields.mUV.fields.m_Height;
          v135 = v132 + v50->fields.mUV.fields.m_Width;
          v319.fields.x = v132;
          v319.fields.y = v133;
          BetterList_Vector2___Add(uvs, v319, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
          v320.fields.x = v132;
          v320.fields.y = v134;
          BetterList_Vector2___Add(uvs, v320, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
          v321.fields.x = v135;
          v321.fields.y = v134;
          BetterList_Vector2___Add(uvs, v321, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
          v322.fields.x = v135;
          v322.fields.y = v133;
          BetterList_Vector2___Add(uvs, v322, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        }
        v136 = v126 + (float)(v127 * (float)v124);
        v6 = v58;
        *(float *)&v6 = *(float *)&v58 + v136;
        if ( cols )
        {
          v137 = NGUIText_TypeInfo;
          v36 = v306;
          size = v47;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            v128 = j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v137 = NGUIText_TypeInfo;
          }
          if ( v137->static_fields->symbolStyle == 2 )
          {
            v138 = 4;
            do
            {
              v139 = (UnityEngine_Color32_o)(v293 & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v288 << 24));
              BetterList_Color32___Add(cols, v139, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
              --v138;
            }
            while ( v138 );
          }
          else
          {
            LODWORD(v128) = 1.0;
            LODWORD(v129) = 1.0;
            LODWORD(v130) = 1.0;
            LODWORD(v131) = 1.0;
            v140 = sub_2526688(0, v128, v129, v130, v131) & 0xFFFFFF | ((unsigned __int64)(unsigned __int8)v288 << 24);
            v141 = 4;
            do
            {
              v142 = (UnityEngine_Color32_o)v140;
              BetterList_Color32___Add(cols, v142, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
              --v141;
            }
            while ( v141 );
          }
          v34 = 0;
          goto LABEL_193;
        }
        size = v47;
        v36 = v306;
        v34 = 0;
LABEL_292:
        v35 = ++index;
        if ( index >= stringLength )
          goto LABEL_340;
      }
    }
    LODWORD(v6) = 0;
LABEL_340:
    v277 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v277 = NGUIText_TypeInfo;
    }
    v278 = v277->static_fields;
    if ( v278->alignment != 1 && size < verts->fields.size )
    {
      if ( !v277->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v277);
        v278 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(verts, size, *(float *)&v6 - v278->finalSpacingX, v28);
      v277 = NGUIText_TypeInfo;
    }
    if ( !v277->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v277);
      v277 = NGUIText_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v277->static_fields->mColors;
    if ( !IsNullOrEmpty
      || (BetterList_Color___Clear(
            (BetterList_Color__o *)IsNullOrEmpty,
            (const MethodInfo_33181D0 *)Method_BetterList_Color__Clear__),
          (IsNullOrEmpty = (__int64)NGUIText_TypeInfo->static_fields->mGradientColors) == 0) )
    {
LABEL_353:
      sub_1C372B4(IsNullOrEmpty);
    }
    BetterList_Color___Clear(
      (BetterList_Color__o *)IsNullOrEmpty,
      (const MethodInfo_33181D0 *)Method_BetterList_Color__Clear__);
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
  const MethodInfo *v10; // x2
  NGUIText_c *v11; // x0
  int32_t stringLength; // w23
  int32_t size; // w21
  struct NGUIText_StaticFields *static_fields; // x8
  float fontScale; // s0
  int fontSize; // s1
  int32_t v17; // w27
  int32_t v18; // w1
  float v19; // s8
  float v20; // s13
  float v21; // s15
  float v22; // s9
  int32_t v23; // w25
  const MethodInfo *v24; // x3
  NGUIText_c *v25; // x0
  struct NGUIText_StaticFields *v26; // x8
  NGUIText_c *v27; // x0
  int32_t v28; // w26
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v30; // x26
  NGUIText_c *v31; // x0
  int mAdvance; // w25
  struct NGUIText_StaticFields *v33; // x8
  float v34; // s11
  float v35; // s10
  float v36; // s10
  double v37; // d11
  const MethodInfo *v38; // x2
  double v39; // d0
  double v40; // d0
  double v41; // d1
  float GlyphWidth; // s0
  NGUIText_c *v43; // x0
  float v44; // s10
  float finalSpacingX; // s11
  float v46; // s12
  float v47; // s10
  double v48; // d11
  const MethodInfo *v49; // x2
  double v50; // d0
  double v51; // d0
  double v52; // d1
  double v53; // d1
  double v54; // d1
  NGUIText_c *v55; // x0
  int v56; // w10
  struct NGUIText_StaticFields *v57; // x8
  struct System_String_o *sequence; // x8
  NGUIText_c *v59; // x0
  int v60; // w10
  struct NGUIText_StaticFields *v61; // x8
  struct NGUIText_StaticFields *v62; // x8
  int32_t item; // [xsp+4h] [xbp-ACh] BYREF
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C476DB & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_int__Add__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    byte_4C476DB = 1;
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
    sub_1C372B4(v9);
  v11 = NGUIText_TypeInfo;
  stringLength = v8->fields._stringLength;
  size = verts->fields.size;
  static_fields = NGUIText_TypeInfo->static_fields;
  fontSize = static_fields->fontSize;
  fontScale = static_fields->fontScale;
  item = 0;
  if ( stringLength < 1 )
  {
    v19 = 0.0;
    goto LABEL_112;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0.0;
  v20 = (float)(fontScale * (float)fontSize) * 0.5;
  v21 = 0.0;
  do
  {
    v22 = (float)-v21 - v20;
    LOWORD(v23) = System_String__get_Chars(v8, v18, 0);
    v65.fields.z = 0.0;
    v65.fields.x = v19;
    v65.fields.y = v22;
    BetterList_Vector3___Add(verts, v65, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
    if ( !indices )
      goto LABEL_120;
    v23 = (unsigned __int16)v23;
    BetterList_int___Add(indices, item, (const MethodInfo_33196E0 *)Method_BetterList_int__Add__);
    if ( (unsigned __int16)v23 == 10 )
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
        NGUIText__Align(verts, size, v19 - v26->finalSpacingX, v10);
        size = verts->fields.size;
        v25 = NGUIText_TypeInfo;
      }
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = NGUIText_TypeInfo;
      }
      v23 = 0;
      v19 = 0.0;
      v21 = v21 + v25->static_fields->finalLineHeight;
      goto LABEL_109;
    }
    if ( (unsigned __int16)v23 < 0x20u )
    {
      v23 = 0;
      goto LABEL_109;
    }
    v27 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v27 = NGUIText_TypeInfo;
    }
    if ( v27->static_fields->encoding )
    {
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      if ( NGUIText__ParseSymbol(v8, &item, v10) )
      {
        --item;
LABEL_52:
        v23 = v17;
        goto LABEL_109;
      }
      v27 = NGUIText_TypeInfo;
    }
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = NGUIText_TypeInfo;
    }
    if ( !v27->static_fields->useSymbols )
      goto LABEL_49;
    v28 = item;
    if ( !v27->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v27);
    Symbol = NGUIText__GetSymbol(v8, v28, stringLength, v24);
    if ( !Symbol )
    {
      v27 = NGUIText_TypeInfo;
LABEL_49:
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      GlyphWidth = NGUIText__GetGlyphWidth((unsigned __int16)v23, v17, v10);
      if ( GlyphWidth == 0.0 )
        goto LABEL_52;
      v43 = NGUIText_TypeInfo;
      v44 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v43 = NGUIText_TypeInfo;
      }
      finalSpacingX = v43->static_fields->finalSpacingX;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v46 = v44 + finalSpacingX;
      v47 = v19 + (float)(v44 + finalSpacingX);
      v48 = v47;
      v50 = modf(v47, &iptr);
      if ( v47 >= 0.0 )
      {
        if ( v50 == 0.5 )
        {
          v51 = iptr;
          v52 = 1.0;
LABEL_69:
          v54 = v51 + v52;
          if ( ((__int64)v51 & 1) != 0 )
            v51 = v54;
          goto LABEL_93;
        }
        v51 = floor(v48 + 0.5);
      }
      else
      {
        if ( v50 == -0.5 )
        {
          v51 = iptr;
          v52 = -1.0;
          goto LABEL_69;
        }
        v51 = ceil(v48 + -0.5);
      }
LABEL_93:
      v59 = NGUIText_TypeInfo;
      v60 = (int)v51;
      v61 = NGUIText_TypeInfo->static_fields;
      if ( v51 == INFINITY )
        v60 = 0x80000000;
      if ( v60 <= v61->regionWidth )
      {
        v46 = v47;
      }
      else
      {
        if ( v19 == 0.0 )
          return;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v59 = NGUIText_TypeInfo;
          v61 = NGUIText_TypeInfo->static_fields;
        }
        if ( v61->alignment != 1 && size < verts->fields.size )
        {
          if ( !v59->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v59);
            v61 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(verts, size, v19 - v61->finalSpacingX, v49);
          size = verts->fields.size;
          v59 = NGUIText_TypeInfo;
        }
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = NGUIText_TypeInfo;
        }
        v21 = v21 + v59->static_fields->finalLineHeight;
        v22 = (float)-v21 - v20;
      }
      v67.fields.z = 0.0;
      v67.fields.x = v46;
      v67.fields.y = v22;
      BetterList_Vector3___Add(verts, v67, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      BetterList_int___Add(indices, item + 1, (const MethodInfo_33196E0 *)Method_BetterList_int__Add__);
      v19 = v46;
      goto LABEL_109;
    }
    v30 = Symbol;
    v31 = NGUIText_TypeInfo;
    mAdvance = v30->fields.mAdvance;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v31 = NGUIText_TypeInfo;
    }
    v33 = v31->static_fields;
    v34 = v33->fontScale;
    v35 = v33->finalSpacingX;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v36 = (float)(v34 * (float)mAdvance) + v35;
    v37 = (float)(v19 + v36);
    v39 = modf(v37, &iptr);
    if ( (float)(v19 + v36) >= 0.0 )
    {
      if ( v39 == 0.5 )
      {
        v40 = iptr;
        v41 = 1.0;
LABEL_64:
        v53 = v40 + v41;
        if ( ((__int64)v40 & 1) != 0 )
          v40 = v53;
        goto LABEL_74;
      }
      v40 = floor(v37 + 0.5);
    }
    else
    {
      if ( v39 == -0.5 )
      {
        v40 = iptr;
        v41 = -1.0;
        goto LABEL_64;
      }
      v40 = ceil(v37 + -0.5);
    }
LABEL_74:
    v55 = NGUIText_TypeInfo;
    v56 = (int)v40;
    v57 = NGUIText_TypeInfo->static_fields;
    if ( v40 == INFINITY )
      v56 = 0x80000000;
    if ( v56 <= v57->regionWidth )
    {
      v36 = v19 + v36;
    }
    else
    {
      if ( v19 == 0.0 )
        return;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v55 = NGUIText_TypeInfo;
        v57 = NGUIText_TypeInfo->static_fields;
      }
      if ( v57->alignment != 1 && size < verts->fields.size )
      {
        if ( !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          v57 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v19 - v57->finalSpacingX, v38);
        size = verts->fields.size;
        v55 = NGUIText_TypeInfo;
      }
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = NGUIText_TypeInfo;
      }
      v21 = v21 + v55->static_fields->finalLineHeight;
      v22 = (float)-v21 - v20;
    }
    v66.fields.z = 0.0;
    v66.fields.x = v36;
    v66.fields.y = v22;
    BetterList_Vector3___Add(verts, v66, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
    BetterList_int___Add(indices, item + 1, (const MethodInfo_33196E0 *)Method_BetterList_int__Add__);
    sequence = v30->fields.sequence;
    if ( !sequence )
      goto LABEL_120;
    v23 = 0;
    v19 = v36;
    item = item + sequence->fields._stringLength - 1;
LABEL_109:
    v17 = v23;
    v18 = ++item;
  }
  while ( item < stringLength );
  v11 = NGUIText_TypeInfo;
LABEL_112:
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = NGUIText_TypeInfo;
  }
  v62 = v11->static_fields;
  if ( v62->alignment != 1 && size < verts->fields.size )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v62 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(verts, size, v19 - v62->finalSpacingX, v10);
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
  const MethodInfo *v13; // x2
  NGUIText_c *v14; // x0
  int32_t v15; // w23
  int32_t v16; // w22
  bool v17; // w27
  int32_t v18; // w29
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t stringLength; // w20
  int fontSize; // s0
  float fontScale; // s8
  float v23; // s9
  float v24; // s10
  struct UnityEngine_Vector2_StaticFields *v25; // x8
  float x; // s15
  int v27; // w1
  float v28; // s8
  float y; // s9
  float v30; // s11
  const MethodInfo *v31; // x3
  unsigned int Chars; // w27
  NGUIText_c *v33; // x0
  struct NGUIText_StaticFields *v34; // x8
  float v35; // s13
  float v36; // s12
  NGUIText_c *v37; // x0
  NGUIText_c *v38; // x0
  struct NGUIText_StaticFields *v39; // x8
  NGUIText_c *v40; // x0
  BetterList_Vector3__o *v41; // x24
  int32_t v42; // w19
  int32_t v43; // w22
  int32_t v44; // w23
  int32_t v45; // w29
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v47; // x8
  NGUIText_c *v48; // x0
  int mAdvance; // w29
  float v50; // s1
  float GlyphWidth; // s12
  NGUIText_c *v52; // x0
  float finalSpacingX; // s13
  float v54; // s9
  float v55; // s14
  double v56; // d13
  double v57; // d0
  double v58; // d0
  double v59; // d1
  double v60; // d1
  NGUIText_c *v61; // x0
  int v62; // w10
  struct NGUIText_StaticFields *v63; // x8
  float v64; // s13
  float v65; // s14
  float v66; // s1 OVERLAPPED
  float v67; // s15
  int v68; // s2
  float v69; // s0
  NGUIText_c *v70; // x0
  struct NGUIText_StaticFields *v71; // x8
  float finalLineHeight; // s0
  NGUIText_c *v73; // x0
  struct NGUIText_StaticFields *v74; // x8
  const MethodInfo_331BD14 *v75; // x1
  float v76; // s1
  int v77; // s2
  BetterList_Vector3__o *v78; // x0
  float v79; // s0 OVERLAPPED
  float v80; // s11
  NGUIText_c *v81; // x0
  struct NGUIText_StaticFields *v82; // x8
  float v83; // [xsp+8h] [xbp-C8h]
  int32_t v84; // [xsp+Ch] [xbp-C4h]
  int32_t size; // [xsp+10h] [xbp-C0h]
  __int64 item; // [xsp+14h] [xbp-BCh]
  int32_t prev_4; // [xsp+1Ch] [xbp-B4h]
  float prev_4a; // [xsp+1Ch] [xbp-B4h]
  char v89; // [xsp+20h] [xbp-B0h]
  int32_t index; // [xsp+24h] [xbp-ACh] BYREF
  double iptr; // [xsp+28h] [xbp-A8h] BYREF
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
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C476DD & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    byte_4C476DD = 1;
  }
  if ( System_String__IsNullOrEmpty(text, 0) )
    v12 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v12 = text;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v12, v11);
  v14 = NGUIText_TypeInfo;
  if ( start <= end )
    v15 = end;
  else
    v15 = start;
  if ( start <= end )
    v16 = start;
  else
    v16 = end;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v14 = NGUIText_TypeInfo;
  }
  v17 = caret == 0;
  if ( caret )
  {
    size = caret->fields.size;
    if ( highlight )
      goto LABEL_18;
LABEL_143:
    v18 = 0;
    if ( v12 )
      goto LABEL_19;
LABEL_144:
    sub_1C372B4(v14);
  }
  size = 0;
  if ( !highlight )
    goto LABEL_143;
LABEL_18:
  v18 = highlight->fields.size;
  if ( !v12 )
    goto LABEL_144;
LABEL_19:
  static_fields = v14->static_fields;
  stringLength = v12->fields._stringLength;
  fontSize = static_fields->fontSize;
  fontScale = static_fields->fontScale;
  index = 0;
  v23 = (float)fontSize;
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  v24 = fontScale * v23;
  v25 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v25->zeroVector.fields.x;
  if ( stringLength < 1 )
  {
    if ( !caret )
    {
      v28 = 0.0;
      v30 = 0.0;
      if ( highlight )
        goto LABEL_158;
      return;
    }
    y = v25->zeroVector.fields.y;
    v30 = 0.0;
    v28 = 0.0;
    BYTE4(item) = 0;
    *(float *)&item = y;
LABEL_147:
    v109.fields.z = 0.0;
    v109.fields.x = v28 + -1.0;
    v109.fields.y = (float)-v30 - v24;
    BetterList_Vector3___Add(caret, v109, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
    v110.fields.z = 0.0;
    v110.fields.x = v28 + -1.0;
    v110.fields.y = -v30;
    BetterList_Vector3___Add(caret, v110, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
    v111.fields.z = 0.0;
    v111.fields.x = v28 + 1.0;
    v111.fields.y = -v30;
    BetterList_Vector3___Add(caret, v111, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
    v112.fields.z = 0.0;
    v112.fields.x = v28 + 1.0;
    v112.fields.y = (float)-v30 - v24;
    BetterList_Vector3___Add(caret, v112, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
    goto LABEL_148;
  }
  v27 = 0;
  v28 = 0.0;
  y = v25->zeroVector.fields.y;
  v30 = 0.0;
  prev_4 = 0;
  v89 = 0;
  item = LODWORD(y);
  v84 = end;
  do
  {
    if ( (v89 & 1) == 0 && !v17 && v27 >= end )
    {
      v92.fields.z = 0.0;
      v92.fields.x = v28 + -1.0;
      v92.fields.y = (float)-v30 - v24;
      BetterList_Vector3___Add(caret, v92, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v93.fields.z = 0.0;
      v93.fields.x = v28 + -1.0;
      v93.fields.y = -v30;
      BetterList_Vector3___Add(caret, v93, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v94.fields.z = 0.0;
      v94.fields.x = v28 + 1.0;
      v94.fields.y = -v30;
      BetterList_Vector3___Add(caret, v94, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v95.fields.z = 0.0;
      v95.fields.x = v28 + 1.0;
      v95.fields.y = (float)-v30 - v24;
      BetterList_Vector3___Add(caret, v95, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v27 = index;
      v89 = 1;
    }
    Chars = System_String__get_Chars(v12, v27, 0);
    if ( Chars == 10 )
    {
      if ( caret != 0 && (v89 & 1) != 0 )
      {
        v33 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v33 = NGUIText_TypeInfo;
        }
        v34 = v33->static_fields;
        if ( v34->alignment != 1 )
        {
          if ( !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            v34 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(caret, size, v28 - v34->finalSpacingX, v13);
        }
        caret = 0;
      }
      if ( !highlight )
        goto LABEL_60;
      if ( (item & 0x100000000LL) != 0 )
      {
        LODWORD(v96.fields.y) = item;
        v96.fields.z = 0.0;
        v96.fields.x = x;
        BetterList_Vector3___Add(highlight, v96, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v35 = x;
        v36 = y;
      }
      else
      {
        if ( v16 > index || v15 <= index )
          goto LABEL_52;
        v36 = (float)-v30 - v24;
        v97.fields.z = 0.0;
        v97.fields.x = v28;
        v97.fields.y = v36;
        BetterList_Vector3___Add(highlight, v97, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v98.fields.z = 0.0;
        v98.fields.x = v28;
        v98.fields.y = -v30;
        BetterList_Vector3___Add(highlight, v98, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v35 = v28 + 2.0;
        v99.fields.z = 0.0;
        v99.fields.x = v28 + 2.0;
        v99.fields.y = -v30;
        BetterList_Vector3___Add(highlight, v99, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      }
      v100.fields.z = 0.0;
      v100.fields.x = v35;
      v100.fields.y = v36;
      BetterList_Vector3___Add(highlight, v100, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
LABEL_52:
      v38 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v38 = NGUIText_TypeInfo;
      }
      v39 = v38->static_fields;
      if ( v39->alignment != 1 && v18 < highlight->fields.size )
      {
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v39 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(highlight, v18, v28 - v39->finalSpacingX, v13);
        v18 = highlight->fields.size;
      }
      BYTE4(item) = 0;
LABEL_60:
      v40 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v40 = NGUIText_TypeInfo;
      }
      prev_4 = 0;
      v28 = 0.0;
      v30 = v30 + v40->static_fields->finalLineHeight;
      goto LABEL_63;
    }
    if ( Chars < 0x20 )
    {
      prev_4 = 0;
      goto LABEL_63;
    }
    v37 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v37 = NGUIText_TypeInfo;
    }
    if ( v37->static_fields->encoding )
    {
      if ( !v37->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v37);
      if ( NGUIText__ParseSymbol(v12, &index, v13) )
      {
        --index;
        goto LABEL_63;
      }
      v37 = NGUIText_TypeInfo;
    }
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = NGUIText_TypeInfo;
    }
    if ( v37->static_fields->useSymbols )
    {
      v41 = highlight;
      v42 = v16;
      v43 = v15;
      v44 = v18;
      v45 = index;
      if ( !v37->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v37);
      Symbol = NGUIText__GetSymbol(v12, v45, stringLength, v31);
      if ( Symbol )
      {
        v47 = Symbol;
        v48 = NGUIText_TypeInfo;
        mAdvance = v47->fields.mAdvance;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v48 = NGUIText_TypeInfo;
        }
        v50 = (float)mAdvance;
        v18 = v44;
        v15 = v43;
        v16 = v42;
        highlight = v41;
        end = v84;
        GlyphWidth = v48->static_fields->fontScale * v50;
        goto LABEL_79;
      }
      v18 = v44;
      v15 = v43;
      v16 = v42;
      highlight = v41;
      v37 = NGUIText_TypeInfo;
      end = v84;
    }
    if ( !v37->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v37);
    GlyphWidth = NGUIText__GetGlyphWidth(Chars, prev_4, v13);
LABEL_79:
    if ( GlyphWidth == 0.0 )
      goto LABEL_63;
    v52 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v52 = NGUIText_TypeInfo;
    }
    finalSpacingX = v52->static_fields->finalSpacingX;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    prev_4a = y;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v54 = v28 + GlyphWidth;
    v55 = (float)(v28 + GlyphWidth) + finalSpacingX;
    v56 = v55;
    v57 = modf(v55, &iptr);
    if ( v55 >= 0.0 )
    {
      if ( v57 != 0.5 )
      {
        v58 = floor(v56 + 0.5);
        goto LABEL_96;
      }
      v58 = iptr;
      v59 = 1.0;
    }
    else
    {
      if ( v57 != -0.5 )
      {
        v58 = ceil(v56 + -0.5);
        goto LABEL_96;
      }
      v58 = iptr;
      v59 = -1.0;
    }
    v60 = v58 + v59;
    if ( ((__int64)v58 & 1) != 0 )
      v58 = v60;
LABEL_96:
    v61 = NGUIText_TypeInfo;
    v62 = (int)v58;
    v63 = NGUIText_TypeInfo->static_fields;
    v64 = -v30;
    if ( v58 == INFINITY )
      v62 = 0x80000000;
    v65 = v64 - v24;
    v83 = x;
    if ( v62 > v63->regionWidth )
    {
      if ( v28 == 0.0 )
        return;
      if ( caret != 0 && (v89 & 1) != 0 )
      {
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v61 = NGUIText_TypeInfo;
          v63 = NGUIText_TypeInfo->static_fields;
        }
        if ( v63->alignment != 1 )
        {
          if ( !v61->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v61);
            v63 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(caret, size, v28 - v63->finalSpacingX, v13);
        }
        caret = 0;
      }
      if ( !highlight )
        goto LABEL_124;
      if ( (item & 0x100000000LL) != 0 )
      {
        LODWORD(v101.fields.y) = item;
        v101.fields.z = 0.0;
        v101.fields.x = x;
        BetterList_Vector3___Add(highlight, v101, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v66 = prev_4a;
      }
      else
      {
        if ( v16 > index || v15 <= index )
          goto LABEL_116;
        v102.fields.z = 0.0;
        v102.fields.x = v28;
        v102.fields.y = v64 - v24;
        BetterList_Vector3___Add(highlight, v102, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v103.fields.z = 0.0;
        v103.fields.x = v28;
        v103.fields.y = -v30;
        BetterList_Vector3___Add(highlight, v103, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        x = v28 + 2.0;
        v104.fields.z = 0.0;
        v104.fields.x = v28 + 2.0;
        v104.fields.y = -v30;
        BetterList_Vector3___Add(highlight, v104, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v66 = v64 - v24;
      }
      v68 = 0;
      v69 = x;
      BetterList_Vector3___Add(
        highlight,
        *(UnityEngine_Vector3_o *)(&v66 - 1),
        (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
LABEL_116:
      v70 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v70 = NGUIText_TypeInfo;
      }
      v71 = v70->static_fields;
      if ( v71->alignment != 1 && v18 < highlight->fields.size )
      {
        if ( !v70->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v70);
          v71 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(highlight, v18, v28 - v71->finalSpacingX, v13);
        v18 = highlight->fields.size;
      }
      BYTE4(item) = 0;
LABEL_124:
      v61 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v61 = NGUIText_TypeInfo;
      }
      v67 = v28 - v28;
      v54 = v54 - v28;
      v28 = 0.0;
      finalLineHeight = v61->static_fields->finalLineHeight;
      v65 = v65 - finalLineHeight;
      v64 = v64 - finalLineHeight;
      v30 = v30 + finalLineHeight;
      goto LABEL_127;
    }
    v67 = v28;
LABEL_127:
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = NGUIText_TypeInfo;
    }
    v28 = v28 + (float)(GlyphWidth + v61->static_fields->finalSpacingX);
    if ( highlight )
    {
      if ( v16 > index || v15 <= index )
      {
        if ( (item & 0x100000000LL) != 0 )
        {
          LODWORD(v107.fields.y) = item;
          v107.fields.z = 0.0;
          v107.fields.x = v83;
          BetterList_Vector3___Add(highlight, v107, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
          v108.fields.y = prev_4a;
          v108.fields.z = 0.0;
          v108.fields.x = v83;
          BetterList_Vector3___Add(highlight, v108, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        }
        BYTE4(item) = 0;
      }
      else
      {
        if ( (item & 0x100000000LL) == 0 )
        {
          v105.fields.z = 0.0;
          v105.fields.x = v67;
          v105.fields.y = v65;
          BetterList_Vector3___Add(highlight, v105, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
          v106.fields.z = 0.0;
          v106.fields.x = v67;
          v106.fields.y = v64;
          BetterList_Vector3___Add(highlight, v106, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        }
        BYTE4(item) = 1;
      }
    }
    x = v54;
    y = v65;
    *(float *)&item = v64;
    prev_4 = Chars;
LABEL_63:
    v17 = caret == 0;
    v27 = index + 1;
    index = v27;
  }
  while ( v27 < stringLength );
  if ( !caret )
    goto LABEL_154;
  if ( (v89 & 1) == 0 )
    goto LABEL_147;
LABEL_148:
  v73 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v73 = NGUIText_TypeInfo;
  }
  v74 = v73->static_fields;
  if ( v74->alignment != 1 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v74 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(caret, size, v28 - v74->finalSpacingX, v13);
  }
LABEL_154:
  if ( highlight )
  {
    if ( (item & 0x100000000LL) != 0 )
    {
      v75 = (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__;
      v76 = *(float *)&item;
      v77 = 0;
      v78 = highlight;
      v79 = x;
      goto LABEL_161;
    }
LABEL_158:
    if ( v16 < index && v15 == index )
    {
      v80 = -v30;
      y = v80 - v24;
      v113.fields.z = 0.0;
      v113.fields.x = v28;
      v113.fields.y = v80 - v24;
      BetterList_Vector3___Add(highlight, v113, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v114.fields.z = 0.0;
      v114.fields.x = v28;
      v114.fields.y = v80;
      BetterList_Vector3___Add(highlight, v114, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v75 = (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__;
      x = v28 + 2.0;
      v77 = 0;
      v78 = highlight;
      v79 = v28 + 2.0;
      v76 = v80;
LABEL_161:
      BetterList_Vector3___Add(v78, *(UnityEngine_Vector3_o *)&v79, v75);
      v115.fields.z = 0.0;
      v115.fields.x = x;
      v115.fields.y = y;
      BetterList_Vector3___Add(highlight, v115, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
    }
    v81 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v81 = NGUIText_TypeInfo;
    }
    v82 = v81->static_fields;
    if ( v82->alignment != 1 && v18 < highlight->fields.size )
    {
      if ( !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v82 = NGUIText_TypeInfo->static_fields;
      }
      NGUIText__Align(highlight, v18, v28 - v82->finalSpacingX, v13);
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
  const MethodInfo *v10; // x2
  NGUIText_c *v11; // x0
  int32_t stringLength; // w23
  int32_t size; // w21
  struct NGUIText_StaticFields *static_fields; // x8
  float fontScale; // s0
  int fontSize; // s1
  int32_t v17; // w25
  int32_t v18; // w1
  float v19; // s8
  float v20; // s15
  float v21; // s12
  const MethodInfo *v22; // x3
  unsigned int Chars; // w26
  NGUIText_c *v24; // x0
  struct NGUIText_StaticFields *v25; // x8
  float finalLineHeight; // s0
  NGUIText_c *v27; // x0
  int32_t v28; // w27
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v30; // x27
  NGUIText_c *v31; // x0
  int mAdvance; // w25
  struct NGUIText_StaticFields *v33; // x8
  float v34; // s10
  float finalSpacingX; // s9
  float v36; // s9
  double v37; // d10
  double v38; // d0
  double v39; // d0
  __int64 v40; // x8
  double v41; // d1
  float GlyphWidth; // s0
  NGUIText_c *v43; // x0
  float v44; // s9
  float v45; // s10
  double v46; // d10
  double v47; // d0
  double v48; // d0
  __int64 v49; // x8
  double v50; // d1
  int v51; // w10
  struct NGUIText_StaticFields *v52; // x8
  struct System_String_o *sequence; // x8
  int v54; // w10
  struct NGUIText_StaticFields *v55; // x8
  int32_t index; // [xsp+4h] [xbp-ACh] BYREF
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C476DC & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_int__Add__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    byte_4C476DC = 1;
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
    sub_1C372B4(v9);
  v11 = NGUIText_TypeInfo;
  stringLength = v8->fields._stringLength;
  size = verts->fields.size;
  static_fields = NGUIText_TypeInfo->static_fields;
  fontSize = static_fields->fontSize;
  fontScale = static_fields->fontScale;
  index = 0;
  if ( stringLength < 1 )
  {
    v19 = 0.0;
    goto LABEL_101;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0.0;
  v20 = fontScale * (float)fontSize;
  v21 = 0.0;
  do
  {
    Chars = System_String__get_Chars(v8, v18, 0);
    if ( Chars == 10 )
    {
      v24 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v24 = NGUIText_TypeInfo;
      }
      v25 = v24->static_fields;
      if ( v25->alignment != 1 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v25 = NGUIText_TypeInfo->static_fields;
        }
        NGUIText__Align(verts, size, v19 - v25->finalSpacingX, v10);
        size = verts->fields.size;
        v24 = NGUIText_TypeInfo;
      }
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = NGUIText_TypeInfo;
      }
      v17 = 0;
      finalLineHeight = v24->static_fields->finalLineHeight;
LABEL_22:
      v21 = v21 + finalLineHeight;
      v19 = 0.0;
      goto LABEL_98;
    }
    if ( Chars < 0x20 )
    {
      v17 = 0;
      goto LABEL_98;
    }
    v27 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v27 = NGUIText_TypeInfo;
    }
    if ( v27->static_fields->encoding )
    {
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      if ( NGUIText__ParseSymbol(v8, &index, v10) )
      {
        --index;
        goto LABEL_98;
      }
      v27 = NGUIText_TypeInfo;
    }
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = NGUIText_TypeInfo;
    }
    if ( v27->static_fields->useSymbols )
    {
      v28 = index;
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      Symbol = NGUIText__GetSymbol(v8, v28, stringLength, v22);
      if ( Symbol )
      {
        v30 = Symbol;
        v31 = NGUIText_TypeInfo;
        mAdvance = v30->fields.mAdvance;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v31 = NGUIText_TypeInfo;
        }
        v33 = v31->static_fields;
        v34 = v33->fontScale;
        finalSpacingX = v33->finalSpacingX;
        if ( !byte_4C3E100 )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3E100 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v36 = v19 + (float)((float)(v34 * (float)mAdvance) + finalSpacingX);
        v37 = v36;
        v38 = modf(v36, &iptr);
        if ( v36 >= 0.0 )
        {
          if ( v38 == 0.5 )
          {
            v39 = iptr;
            v40 = (__int64)iptr;
            v41 = iptr + 1.0;
            goto LABEL_63;
          }
          v39 = floor(v37 + 0.5);
        }
        else if ( v38 == -0.5 )
        {
          v39 = iptr;
          v40 = (__int64)iptr;
          v41 = iptr + -1.0;
LABEL_63:
          if ( (v40 & 1) != 0 )
            v39 = v41;
        }
        else
        {
          v39 = ceil(v37 + -0.5);
        }
        v9 = NGUIText_TypeInfo;
        v51 = (int)v39;
        v52 = NGUIText_TypeInfo->static_fields;
        if ( v39 == INFINITY )
          v51 = 0x80000000;
        if ( v51 > v52->regionWidth )
          goto LABEL_84;
        if ( !indices )
          goto LABEL_109;
        BetterList_int___Add(indices, index, (const MethodInfo_33196E0 *)Method_BetterList_int__Add__);
        v58.fields.y = (float)-v21 - v20;
        v58.fields.z = 0.0;
        v58.fields.x = v19;
        BetterList_Vector3___Add(verts, v58, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        v59.fields.z = 0.0;
        v59.fields.x = v36;
        v59.fields.y = -v21;
        BetterList_Vector3___Add(verts, v59, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        sequence = v30->fields.sequence;
        if ( !sequence )
          goto LABEL_109;
        v17 = 0;
        index = index + sequence->fields._stringLength - 1;
LABEL_97:
        v19 = v36;
        goto LABEL_98;
      }
      v27 = NGUIText_TypeInfo;
    }
    if ( !v27->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v27);
    GlyphWidth = NGUIText__GetGlyphWidth(Chars, v17, v10);
    if ( GlyphWidth != 0.0 )
    {
      v43 = NGUIText_TypeInfo;
      v44 = GlyphWidth;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v43 = NGUIText_TypeInfo;
      }
      v45 = v43->static_fields->finalSpacingX;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v36 = v19 + (float)(v44 + v45);
      v46 = v36;
      v47 = modf(v36, &iptr);
      if ( v36 >= 0.0 )
      {
        if ( v47 == 0.5 )
        {
          v48 = iptr;
          v49 = (__int64)iptr;
          v50 = iptr + 1.0;
LABEL_68:
          if ( (v49 & 1) != 0 )
            v48 = v50;
          goto LABEL_81;
        }
        v48 = floor(v46 + 0.5);
      }
      else
      {
        if ( v47 == -0.5 )
        {
          v48 = iptr;
          v49 = (__int64)iptr;
          v50 = iptr + -1.0;
          goto LABEL_68;
        }
        v48 = ceil(v46 + -0.5);
      }
LABEL_81:
      v9 = NGUIText_TypeInfo;
      v54 = (int)v48;
      v52 = NGUIText_TypeInfo->static_fields;
      if ( v48 == INFINITY )
        v54 = 0x80000000;
      if ( v54 > v52->regionWidth )
      {
LABEL_84:
        if ( v19 == 0.0 )
          return;
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = NGUIText_TypeInfo;
          v52 = NGUIText_TypeInfo->static_fields;
        }
        if ( v52->alignment != 1 && size < verts->fields.size )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v52 = NGUIText_TypeInfo->static_fields;
          }
          NGUIText__Align(verts, size, v19 - v52->finalSpacingX, v10);
          size = verts->fields.size;
          v9 = NGUIText_TypeInfo;
        }
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = NGUIText_TypeInfo;
        }
        v17 = 0;
        finalLineHeight = v9->static_fields->finalLineHeight;
        --index;
        goto LABEL_22;
      }
      if ( !indices )
        goto LABEL_109;
      BetterList_int___Add(indices, index, (const MethodInfo_33196E0 *)Method_BetterList_int__Add__);
      v60.fields.y = (float)-v21 - v20;
      v60.fields.z = 0.0;
      v60.fields.x = v19;
      BetterList_Vector3___Add(verts, v60, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v61.fields.z = 0.0;
      v61.fields.x = v36;
      v61.fields.y = -v21;
      BetterList_Vector3___Add(verts, v61, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      v17 = Chars;
      goto LABEL_97;
    }
LABEL_98:
    v18 = ++index;
  }
  while ( index < stringLength );
  v11 = NGUIText_TypeInfo;
LABEL_101:
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = NGUIText_TypeInfo;
  }
  v55 = v11->static_fields;
  if ( v55->alignment != 1 && size < verts->fields.size )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v55 = NGUIText_TypeInfo->static_fields;
    }
    NGUIText__Align(verts, size, v19 - v55->finalSpacingX, v10);
  }
}


void NGUIText__ReplaceSpaceWithNewline(System_Text_StringBuilder_o **s, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x0
  int32_t v4; // w20
  uint16_t Chars; // w21

  if ( (byte_4C476D4 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476D4 = 1;
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
      sub_1C372B4(v3);
    }
  }
}


System_String_o *NGUIText__StripSymbols(System_String_o *text, const MethodInfo *method)
{
  int32_t stringLength; // w26
  int32_t v4; // w20
  System_String_o *v5; // x0
  const MethodInfo *v7; // [xsp+28h] [xbp-78h]
  int32_t index; // [xsp+34h] [xbp-6Ch] BYREF
  bool isOutline; // [xsp+38h] [xbp-68h] BYREF
  bool v10; // [xsp+3Ch] [xbp-64h] BYREF
  bool ignoreColor; // [xsp+40h] [xbp-60h] BYREF
  bool strike; // [xsp+44h] [xbp-5Ch] BYREF
  bool underline; // [xsp+48h] [xbp-58h] BYREF
  bool italic; // [xsp+4Ch] [xbp-54h] BYREF
  bool bold; // [xsp+58h] [xbp-48h] BYREF
  int32_t sub; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_4C476CF & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476CF = 1;
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
        v10 = 0;
        isOutline = 0;
        index = v4;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        if ( NGUIText__ParseSymbol_49315680(
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
               &v10,
               &isOutline,
               0,
               v7) )
        {
          v5 = System_String__Remove(text, v4, index - v4, 0);
          if ( !v5 )
            sub_1C372B4(0);
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

  if ( (byte_4C476C4 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476C4 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Update_49309860(1, v1);
}


void NGUIText__Update_49309860(bool request, const MethodInfo *method)
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
  NGUIText_c *v20; // x0
  UIFont_o *v21; // x0
  NGUIText_c *v22; // x0
  struct NGUIText_StaticFields *v23; // x8
  bool v24; // w20
  NGUIText_c *v25; // x0
  struct NGUIText_StaticFields *v26; // x8
  UnityEngine_Object_o *dynamicFont; // x20
  NGUIText_c *v28; // x0
  struct NGUIText_StaticFields *v29; // x8
  struct NGUIText_StaticFields *v30; // x8
  NGUIText_c *v31; // x0
  NGUIText_c *v32; // x0
  struct NGUIText_StaticFields *v33; // x8
  struct NGUIText_StaticFields *v34; // x8
  NGUIText_c *v35; // x0
  float maxY; // s8
  float v37; // s8
  double v38; // d0
  double v39; // d0
  float v40; // s1
  NGUIText_c *v41; // x0
  float v42; // s8
  __int64 v43; // x8
  float v44; // s0
  float v45; // s1
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C476C5 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_786/*")_-"*/);
    sub_1C37058(&StringLiteral_1783/*"A"*/);
    byte_4C476C5 = 1;
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
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
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
  v20 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v20 = NGUIText_TypeInfo;
  }
  v21 = v20->static_fields->bitmapFont;
  if ( !v21 )
    goto LABEL_71;
  if ( !UIFont__get_hasSymbols(v21, 0) )
    goto LABEL_34;
  v22 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v22 = NGUIText_TypeInfo;
  }
  v23 = v22->static_fields;
  if ( v23->encoding )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v23 = NGUIText_TypeInfo->static_fields;
    }
    v24 = v23->symbolStyle != 0;
  }
  else
  {
LABEL_34:
    v24 = 0;
  }
  v25 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v25 = NGUIText_TypeInfo;
  }
  v26 = v25->static_fields;
  v26->useSymbols = v24;
  dynamicFont = (UnityEngine_Object_o *)v26->dynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dynamicFont, 0, 0) && request )
  {
    v28 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v28 = NGUIText_TypeInfo;
    }
    v29 = v28->static_fields;
    v21 = (UIFont_o *)v29->dynamicFont;
    if ( v21 )
    {
      UnityEngine_Font__RequestCharactersInTexture(
        (UnityEngine_Font_o *)v21,
        (System_String_o *)StringLiteral_786/*")_-"*/,
        v29->finalSize,
        v29->fontStyle,
        0);
      v30 = NGUIText_TypeInfo->static_fields;
      v21 = (UIFont_o *)v30->dynamicFont;
      if ( v21 )
      {
        if ( UnityEngine_Font__GetCharacterInfo(
               (UnityEngine_Font_o *)v21,
               0x29u,
               &v30->mTempChar,
               v30->finalSize,
               v30->fontStyle,
               0) )
        {
          v31 = NGUIText_TypeInfo;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
            v31 = NGUIText_TypeInfo;
          }
          if ( UnityEngine_CharacterInfo__get_maxY(&v31->static_fields->mTempChar, 0) )
            goto LABEL_54;
        }
        v32 = NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          v32 = NGUIText_TypeInfo;
        }
        v33 = v32->static_fields;
        v21 = (UIFont_o *)v33->dynamicFont;
        if ( v21 )
        {
          UnityEngine_Font__RequestCharactersInTexture(
            (UnityEngine_Font_o *)v21,
            (System_String_o *)StringLiteral_1783/*"A"*/,
            v33->finalSize,
            v33->fontStyle,
            0);
          v34 = NGUIText_TypeInfo->static_fields;
          v21 = (UIFont_o *)v34->dynamicFont;
          if ( v21 )
          {
            if ( !UnityEngine_Font__GetCharacterInfo(
                    (UnityEngine_Font_o *)v21,
                    0x41u,
                    &v34->mTempChar,
                    v34->finalSize,
                    v34->fontStyle,
                    0) )
            {
              v41 = NGUIText_TypeInfo;
              v42 = 0.0;
              if ( NGUIText_TypeInfo->_2.cctor_finished )
              {
LABEL_69:
                v41->static_fields->baseline = v42;
                return;
              }
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              goto LABEL_68;
            }
LABEL_54:
            v35 = NGUIText_TypeInfo;
            if ( !NGUIText_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
              v35 = NGUIText_TypeInfo;
            }
            maxY = (float)UnityEngine_CharacterInfo__get_maxY(&v35->static_fields->mTempChar, 0);
            v37 = (float)((float)((float)((float)NGUIText_TypeInfo->static_fields->finalSize - maxY)
                                + (float)UnityEngine_CharacterInfo__get_minY(
                                           &NGUIText_TypeInfo->static_fields->mTempChar,
                                           0))
                        * 0.5)
                + maxY;
            v38 = modf(v37, &iptr);
            if ( v37 >= 0.0 )
            {
              if ( v38 == 0.5 )
              {
                v39 = iptr;
                v40 = 1.0;
LABEL_63:
                v43 = (__int64)v39;
                v44 = v39;
                v45 = v44 + v40;
                if ( (v43 & 1) != 0 )
                  v42 = v45;
                else
                  v42 = v44;
                goto LABEL_68;
              }
              v42 = floorf(v37 + 0.5);
            }
            else
            {
              if ( v38 == -0.5 )
              {
                v39 = iptr;
                v40 = -1.0;
                goto LABEL_63;
              }
              v42 = ceilf(v37 + -0.5);
            }
LABEL_68:
            v41 = NGUIText_TypeInfo;
            goto LABEL_69;
          }
        }
      }
    }
LABEL_71:
    sub_1C372B4(v21);
  }
}


bool NGUIText__WrapText(System_String_o *text, System_String_o **finalText, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C476D8 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C476D8 = 1;
  }
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__WrapText_49325012(text, finalText, 0, v3);
}


bool NGUIText__WrapText_49325012(
        System_String_o *text,
        System_String_o **finalText,
        bool keepCharCount,
        const MethodInfo *method)
{
  NGUIText_c *v7; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int regionHeight; // w9
  float finalLineHeight; // s1
  float v11; // s8
  int maxLines; // w20
  int32_t v13; // w8
  float v14; // s9
  float v15; // s8
  float v16; // s8
  unsigned int v17; // w9
  unsigned int v18; // w8
  const MethodInfo *v19; // x1
  System_String_o *v20; // x24
  System_Text_StringBuilder_o *v21; // x21
  System_String_o *Chars; // x0
  int32_t stringLength; // w22
  int32_t regionWidth; // w8
  int v25; // w25
  int32_t v26; // w28
  int v27; // w20
  int32_t v28; // w1
  float v29; // s13
  int v30; // w19
  int v31; // w29
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x3
  int32_t v34; // w26
  int v35; // s8
  NGUIText_c *v36; // x8
  int32_t v37; // w8
  int32_t v38; // w27
  BMSymbol_o *Symbol; // x0
  BMSymbol_o *v40; // x27
  NGUIText_c *v41; // x0
  float v42; // s14
  int32_t v43; // w28
  int32_t v44; // w22
  uint16_t v45; // w0
  uint16_t v46; // w29
  double v47; // d8
  const MethodInfo *v48; // x1
  double v49; // d0
  double v50; // d0
  __int64 v51; // x8
  double v52; // d1
  float GlyphWidth; // s0
  float v54; // s8
  int32_t v55; // w22
  const MethodInfo *v56; // x1
  int v57; // w22
  NGUIText_c *v59; // x0
  uint32_t cctor_finished; // w8
  int v61; // s8
  char v63; // w24
  CGThumbnailListItem_o *v64; // x20
  __int64 v65; // x0
  char v66; // w2
  const MethodInfo *v67; // x3
  NGUIText_c *v68; // x0
  int32_t v69; // w8
  char v70; // [xsp+Ch] [xbp-C4h]
  System_String_o **v71; // [xsp+10h] [xbp-C0h]
  bool v72; // [xsp+18h] [xbp-B8h]
  int32_t v73; // [xsp+1Ch] [xbp-B4h]
  signed int v74; // [xsp+20h] [xbp-B0h]
  int32_t index; // [xsp+24h] [xbp-ACh] BYREF
  System_Text_StringBuilder_o *s; // [xsp+28h] [xbp-A8h] BYREF
  double iptr; // [xsp+38h] [xbp-98h] BYREF

  if ( (byte_4C476D9 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C476D9 = 1;
  }
  v7 = NGUIText_TypeInfo;
  s = 0;
  index = 0;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v7 = NGUIText_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->regionWidth < 1 )
    goto LABEL_151;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->regionHeight < 1 )
    goto LABEL_151;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  if ( static_fields->finalLineHeight < 1.0 )
    goto LABEL_151;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
    maxLines = static_fields->maxLines;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v7 = NGUIText_TypeInfo;
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    regionHeight = static_fields->regionHeight;
    if ( maxLines > 0 )
      goto LABEL_14;
LABEL_20:
    v11 = (float)regionHeight;
    goto LABEL_21;
  }
  regionHeight = static_fields->regionHeight;
  if ( static_fields->maxLines <= 0 )
    goto LABEL_20;
LABEL_14:
  finalLineHeight = static_fields->finalLineHeight;
  if ( (float)(finalLineHeight * (float)static_fields->maxLines) <= (float)regionHeight )
    v11 = finalLineHeight * (float)static_fields->maxLines;
  else
    v11 = (float)regionHeight;
LABEL_21:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  v13 = static_fields->maxLines;
  if ( v13 < 1 )
  {
    v14 = 1000000.0;
  }
  else
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = NGUIText_TypeInfo;
      v13 = NGUIText_TypeInfo->static_fields->maxLines;
    }
    v14 = (float)v13;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = NGUIText_TypeInfo;
  }
  if ( v14 >= (float)(v11 / v7->static_fields->finalLineHeight) )
    v15 = v11 / v7->static_fields->finalLineHeight;
  else
    v15 = v14;
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  v16 = v15 + 0.01;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = vcvtms_s32_f32(v16);
  if ( floorf(v16) == INFINITY )
    v18 = 0x80000000;
  else
    v18 = v17;
  v74 = v18;
  if ( !v18 )
  {
LABEL_151:
    *finalText = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C36FFC((CGThumbnailListItem_o *)finalText, StringLiteral_1/*""*/, keepCharCount, method);
    return 0;
  }
  v71 = finalText;
  if ( System_String__IsNullOrEmpty(text, 0) )
    v20 = (System_String_o *)StringLiteral_113/*" "*/;
  else
    v20 = text;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__Prepare(v20, v19);
  v21 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v21, 0);
  s = v21;
  if ( !v20 )
    goto LABEL_170;
  stringLength = v20->fields._stringLength;
  regionWidth = NGUIText_TypeInfo->static_fields->regionWidth;
  index = 0;
  if ( stringLength < 1 )
  {
    v30 = 1;
    v63 = 1;
    goto LABEL_160;
  }
  v72 = keepCharCount;
  v73 = stringLength;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = (float)regionWidth;
  v30 = 1;
  v31 = 1;
  v70 = 1;
  while ( 1 )
  {
    Chars = (System_String_o *)System_String__get_Chars(v20, v28, 0);
    v34 = (unsigned __int16)Chars;
    v27 |= (unsigned __int16)((unsigned __int16)Chars >> 12) > 2u;
    if ( (unsigned __int16)Chars == 10 )
    {
      if ( v30 != v74 )
      {
        Chars = (System_String_o *)NGUIText_TypeInfo;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          Chars = (System_String_o *)NGUIText_TypeInfo;
        }
        v35 = *(_DWORD *)(*(_QWORD *)&Chars[7].fields + 68LL);
        if ( index <= v25 )
        {
          if ( !v21 )
            goto LABEL_170;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_63649048(v21, 0xAu, 0);
        }
        else
        {
          Chars = System_String__Substring_63607580(v20, v25, index - v25 + 1, 0);
          if ( !v21 )
            goto LABEL_170;
          Chars = (System_String_o *)System_Text_StringBuilder__Append_63646720(v21, Chars, 0);
        }
        v26 = 0;
        v29 = (float)v35;
        ++v30;
        v25 = index + 1;
        goto LABEL_66;
      }
      v30 = v74;
      v28 = index;
LABEL_155:
      if ( v28 > v25 )
      {
        Chars = System_String__Substring_63607580(v20, v25, v28 - v25, 0);
        if ( v21 )
        {
          System_Text_StringBuilder__Append_63646720(v21, Chars, 0);
          v64 = (CGThumbnailListItem_o *)v71;
          goto LABEL_158;
        }
        goto LABEL_170;
      }
      v63 = v70;
LABEL_160:
      v64 = (CGThumbnailListItem_o *)v71;
      if ( v21 )
        goto LABEL_161;
LABEL_170:
      sub_1C372B4(Chars);
    }
    v36 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v36 = NGUIText_TypeInfo;
    }
    if ( v36->static_fields->encoding )
    {
      if ( !v36->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v36);
      Chars = (System_String_o *)NGUIText__ParseSymbol(v20, &index, v32);
      if ( ((unsigned __int8)Chars & 1) != 0 )
      {
        v37 = index;
LABEL_118:
        index = v37 - 1;
        goto LABEL_149;
      }
      v36 = NGUIText_TypeInfo;
    }
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = NGUIText_TypeInfo;
    }
    if ( v36->static_fields->useSymbols )
    {
      v38 = index;
      if ( !v36->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v36);
      Symbol = NGUIText__GetSymbol(v20, v38, stringLength, v33);
      v36 = NGUIText_TypeInfo;
      v40 = Symbol;
    }
    else
    {
      v40 = 0;
    }
    if ( v36->_2.cctor_finished )
    {
      if ( v40 )
        goto LABEL_77;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v36);
      if ( v40 )
      {
LABEL_77:
        v41 = NGUIText_TypeInfo;
        v42 = NGUIText_TypeInfo->static_fields->finalSpacingX
            + (float)(NGUIText_TypeInfo->static_fields->fontScale * (float)v40->fields.mAdvance);
        goto LABEL_78;
      }
    }
    GlyphWidth = NGUIText__GetGlyphWidth(v34, v26, v32);
    if ( GlyphWidth == 0.0 )
      goto LABEL_149;
    v41 = NGUIText_TypeInfo;
    v54 = GlyphWidth;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v41 = NGUIText_TypeInfo;
    }
    v42 = v54 + v41->static_fields->finalSpacingX;
LABEL_78:
    if ( !v41->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v41);
    v29 = v29 - v42;
    if ( (unsigned int)(v34 - 8201) < 3 || v34 == 32 )
    {
      v43 = index - v25;
      if ( index > v25 && ((v27 ^ 1) & 1) != 0 )
      {
        v44 = v43 + 1;
        if ( v30 == v74 && v29 <= 0.0 && index < v73 )
        {
          v45 = System_String__get_Chars(v20, index, 0);
          if ( v45 < 0x20u )
            goto LABEL_92;
          v46 = v45;
          if ( !NGUIText_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
          if ( (unsigned int)v46 - 8201 < 3 || v46 == 32 )
LABEL_92:
            v44 = v43;
        }
        Chars = System_String__Substring_63607580(v20, v25, v44, 0);
        if ( !v21 )
          goto LABEL_170;
        System_Text_StringBuilder__Append_63646720(v21, Chars, 0);
        stringLength = v73;
        v31 = 0;
        v25 = index + 1;
      }
    }
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v47 = v29;
    v49 = modf(v29, &iptr);
    if ( v29 >= 0.0 )
    {
      if ( v49 != 0.5 )
      {
        v50 = floor(v47 + 0.5);
        goto LABEL_114;
      }
      v50 = iptr;
      v51 = (__int64)iptr;
      v52 = iptr + 1.0;
    }
    else
    {
      if ( v49 != -0.5 )
      {
        v50 = ceil(v47 + -0.5);
        goto LABEL_114;
      }
      v50 = iptr;
      v51 = (__int64)iptr;
      v52 = iptr + -1.0;
    }
    if ( (v51 & 1) != 0 )
      v50 = v52;
LABEL_114:
    if ( v50 != INFINITY && ((int)v50 & 0x80000000) == 0 )
    {
      if ( !v40 )
        goto LABEL_148;
LABEL_117:
      v55 = index;
      Chars = (System_String_o *)BMSymbol__get_length(v40, 0);
      v37 = v55 + (_DWORD)Chars;
      stringLength = v73;
      v26 = 0;
      goto LABEL_118;
    }
    if ( ((v30 != v74) & (v31 ^ 1)) == 0 )
      break;
    v59 = NGUIText_TypeInfo;
    cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v59 = NGUIText_TypeInfo;
      cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
    }
    v61 = v59->static_fields->regionWidth;
    index = v25 - 1;
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(v59);
    v29 = (float)v61;
    ++v30;
    if ( v72 )
      NGUIText__ReplaceSpaceWithNewline(&s, v48);
    else
      NGUIText__EndLine(&s, v48);
    stringLength = v73;
    v26 = 0;
LABEL_66:
    v31 = 1;
LABEL_149:
    v28 = ++index;
    if ( index >= stringLength )
      goto LABEL_155;
  }
  Chars = System_String__Substring_63607580(v20, v25, (index - v25) & (unsigned int)~((index - v25) >> 31), 0);
  if ( !v21 )
    goto LABEL_170;
  System_Text_StringBuilder__Append_63646720(v21, Chars, 0);
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v57 = 1;
  if ( (unsigned int)(v34 - 8201) >= 3 && v34 != 32 )
  {
    v57 = 0;
    v70 &= v27;
  }
  if ( v30++ != v74 )
  {
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    if ( v72 )
      NGUIText__ReplaceSpaceWithNewline(&s, v56);
    else
      NGUIText__EndLine(&s, v56);
    v25 = index;
    if ( v57 )
    {
      Chars = (System_String_o *)NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        Chars = (System_String_o *)NGUIText_TypeInfo;
      }
      stringLength = v73;
      v34 = 0;
      ++v25;
      v29 = (float)*(int *)(*(_QWORD *)&Chars[7].fields + 68LL);
    }
    else
    {
      Chars = (System_String_o *)NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        Chars = (System_String_o *)NGUIText_TypeInfo;
      }
      stringLength = v73;
      v34 = 0;
      v29 = (float)*(int *)(*(_QWORD *)&Chars[7].fields + 68LL) - v42;
    }
    v31 = 1;
    if ( !v40 )
    {
LABEL_148:
      v26 = v34;
      goto LABEL_149;
    }
    goto LABEL_117;
  }
  v64 = (CGThumbnailListItem_o *)v71;
  stringLength = v73;
LABEL_158:
  v63 = v70;
LABEL_161:
  v65 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v21->klass->vtable._3_ToString.methodPtr)(
          v21,
          v21->klass->vtable._3_ToString.method);
  v64->klass = (CGThumbnailListItem_c *)v65;
  sub_1C36FFC(v64, v65, v66, v67);
  if ( (v63 & 1) == 0 )
    return 0;
  if ( index == stringLength )
    return 1;
  v68 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v68 = NGUIText_TypeInfo;
  }
  v69 = v68->static_fields->maxLines;
  if ( v69 >= v74 )
    v69 = v74;
  return v30 <= v69;
}


void NGUIText_GlyphInfo___ctor(NGUIText_GlyphInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}