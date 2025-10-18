void UILabel___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Generic_Dictionary_object__int__o *v4; // x19
  struct UILabel_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BetterList_Vector3__o *v8; // x19
  struct UILabel_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BetterList_int__o *v12; // x19
  struct UILabel_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C47874 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3___ctor__);
    sub_1C37058(&Method_BetterList_int___ctor__);
    sub_1C37058(&Method_BetterList_UILabel___ctor__);
    sub_1C37058(&BetterList_Vector3__TypeInfo);
    sub_1C37058(&BetterList_int__TypeInfo);
    sub_1C37058(&BetterList_UILabel__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Font__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_Font__int__TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C47874 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C372A4(BetterList_UILabel__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_331A714 *)Method_BetterList_UILabel___ctor__);
  UILabel_TypeInfo->static_fields->mList = (struct BetterList_UILabel__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UILabel_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_Font__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_Font__int___ctor__);
  static_fields = UILabel_TypeInfo->static_fields;
  static_fields->mFontUsage = (struct System_Collections_Generic_Dictionary_Font__int__o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mFontUsage, (int32_t)v4, v6, v7);
  UILabel_TypeInfo->static_fields->mTexRebuildAdded = 0;
  v8 = (BetterList_Vector3__o *)sub_1C372A4(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v8, (const MethodInfo_331C5EC *)Method_BetterList_Vector3___ctor__);
  v9 = UILabel_TypeInfo->static_fields;
  v9->mTempVerts = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->mTempVerts, (int32_t)v8, v10, v11);
  v12 = (BetterList_int__o *)sub_1C372A4(BetterList_int__TypeInfo);
  BetterList_int____ctor(v12, (const MethodInfo_3319D40 *)Method_BetterList_int___ctor__);
  v13 = UILabel_TypeInfo->static_fields;
  v13->mTempIndices = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->mTempIndices, (int32_t)v12, v14, v15);
}


void UILabel___ctor(UILabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  struct UnityEngine_Color_o v6; // q2
  UnityEngine_Vector2_c *v7; // x8
  struct UnityEngine_Vector2_o oneVector; // d1

  if ( (byte_4C47873 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C47873 = 1;
  }
  this->fields.keepCrispWhenShrunk = 1;
  v5 = StringLiteral_1/*""*/;
  this->fields.mText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mText, v5, v2, v3);
  v6 = (struct UnityEngine_Color_o)xmmword_C0FC60;
  this->fields.mEncoding = 1;
  this->fields.mSymbols = 1;
  this->fields.mFontSize = 16;
  this->fields.mEffectColor = (struct UnityEngine_Color_o)xmmword_C0FC60;
  if ( !byte_4C433CF )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    v6 = (struct UnityEngine_Color_o)xmmword_C0FC60;
    byte_4C433CF = 1;
  }
  v7 = UnityEngine_Vector2_TypeInfo;
  oneVector = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  this->fields.mGradientBottom = (struct UnityEngine_Color_o)xmmword_C0F390;
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.mGradientTop = _Q0;
  this->fields.mEffectDistance = oneVector;
  this->fields.mMultiline = 1;
  this->fields.specificGradientTop = _Q0;
  this->fields.specificGradientBottom = _Q0;
  this->fields.specificOutline = v6;
  this->fields.mDensity = 1.0;
  this->fields.mShouldBeProcessed = 1;
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    v7 = UnityEngine_Vector2_TypeInfo;
    byte_4C3C81A = 1;
  }
  this->fields.mCalculatedSize = v7->static_fields->zeroVector;
  this->fields.mScale = 1.0;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


void UILabel__AddToDynamicFontList(UILabel_o *this, const MethodInfo *method)
{
  UILabel_c *v3; // x0
  BetterList_T__o *mList; // x0
  UILabel_c *v5; // x0

  if ( (byte_4C47858 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UILabel__Add__);
    sub_1C37058(&Method_BetterList_UILabel__Contains__);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C47858 = 1;
  }
  v3 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v3 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v3->static_fields->mList;
  if ( !mList )
    goto LABEL_11;
  if ( BetterList_object___Contains(
         mList,
         (Il2CppObject *)this,
         (const MethodInfo_331A190 *)Method_BetterList_UILabel__Contains__) )
  {
    return;
  }
  v5 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v5 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v5->static_fields->mList;
  if ( !mList )
LABEL_11:
    sub_1C372B4(mList);
  BetterList_object___Add(mList, (Il2CppObject *)this, (const MethodInfo_3319FE8 *)Method_BetterList_UILabel__Add__);
}


UnityEngine_Vector2_o UILabel__ApplyOffset(
        UILabel_o *this,
        BetterList_Vector3__o *verts,
        int32_t start,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  float v8; // s0
  float v9; // s2
  float v10; // s1
  float v11; // s9
  float v12; // s8
  double v13; // d0
  double v14; // d0
  float v15; // s1
  __int64 v16; // x8
  float v17; // s0
  float v18; // s1
  __int64 v19; // x0
  double v20; // d0
  double v21; // d0
  float v22; // s1
  __int64 v23; // x8
  float v24; // s0
  float v25; // s1
  float v26; // s0
  int32_t size; // w8
  struct UnityEngine_Vector3_array *buffer; // x9
  float32x2_t *v29; // x11
  float v30; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  v8 = fminf(pivotOffset.fields.x, 1.0);
  v9 = fminf(pivotOffset.fields.y, 1.0);
  if ( pivotOffset.fields.x < 0.0 )
    v8 = 0.0;
  if ( pivotOffset.fields.y < 0.0 )
    v10 = 0.0;
  else
    v10 = v9;
  v11 = (float)(v8 * (float)-this->fields.mWidth) + 0.0;
  v12 = (float)((float)((float)(0.0 - (float)this->fields.mHeight) * v10) + (float)this->fields.mHeight)
      + (float)((float)(this->fields.mCalculatedSize.fields.y - (float)this->fields.mHeight)
              + (float)(v10 * (float)(0.0 - (float)(this->fields.mCalculatedSize.fields.y - (float)this->fields.mHeight))));
  v13 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v17 = floorf(v11 + 0.5);
      goto LABEL_16;
    }
    v14 = iptr;
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v17 = ceilf(v11 + -0.5);
      goto LABEL_16;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  v16 = (__int64)v14;
  v17 = v14;
  v18 = v17 + v15;
  if ( (v16 & 1) != 0 )
    v17 = v18;
LABEL_16:
  v30 = v17;
  v20 = modf(v12, &iptr);
  if ( v12 >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v25 = floorf(v12 + 0.5);
      goto LABEL_26;
    }
    v21 = iptr;
    v22 = 1.0;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v25 = ceilf(v12 + -0.5);
      goto LABEL_26;
    }
    v21 = iptr;
    v22 = -1.0;
  }
  v23 = (__int64)v21;
  v24 = v21;
  v25 = v24 + v22;
  if ( (v23 & 1) == 0 )
    v25 = v24;
LABEL_26:
  v26 = v30;
  if ( !verts )
    goto LABEL_33;
  size = verts->fields.size;
  if ( size > start )
  {
    buffer = verts->fields.buffer;
    while ( buffer )
    {
      if ( (unsigned int)start >= LODWORD(buffer->max_length) )
        sub_1C372BC(v19);
      v29 = (float32x2_t *)((char *)buffer + 12 * start++);
      v29[4].n64_u64[0] = vadd_f32((float32x2_t)__PAIR64__(LODWORD(v25), LODWORD(v30)), v29[4]).n64_u64[0];
      if ( size == start )
        goto LABEL_35;
    }
LABEL_33:
    sub_1C372B4(v19);
  }
LABEL_35:
  result.fields.y = v25;
  result.fields.x = v26;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void UILabel__ApplyShadow(
        UILabel_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        int32_t start,
        int32_t end,
        float x,
        float y,
        const MethodInfo *method)
{
  long double v9; // q8
  UnityEngine_Color_o v10; // q9
  UnityEngine_Color_o v11; // q10
  long double v12; // q11
  long double v13; // q12
  __int64 v15; // x19
  float finalAlpha; // s12
  UnityEngine_Object_o *mFont; // x24
  bool v21; // w0
  const MethodInfo *v22; // x1
  long double v23; // q3
  long double v24; // q2
  long double v25; // q1
  long double v26; // q0 OVERLAPPED
  UIFont_o *v27; // x0
  bool premultipliedAlphaShader; // w0
  __int64 v29; // x25
  __int64 v30; // x27
  __int64 v31; // x28
  __int64 v32; // x26
  __int64 v33; // x24
  struct UnityEngine_Vector3_array *buffer; // x8
  struct UnityEngine_Vector2_array *v35; // x8
  struct UnityEngine_Color32_array *v36; // x8
  UnityEngine_Color32_o v37; // x1
  struct UnityEngine_Vector3_array *v38; // x8
  struct UnityEngine_Color32_array *v39; // x23
  unsigned __int64 v40; // x29
  BetterList_Vector3__o *v41; // x20
  BetterList_Vector2__o *v42; // x22
  __int64 v43; // x21
  UnityEngine_Object_o *v44; // x25
  const MethodInfo *v45; // x1
  BetterList_Color32__o *v47; // [xsp+10h] [xbp-B0h]
  int v48; // [xsp+18h] [xbp-A8h]
  float32x2_t v50; // [xsp+20h] [xbp-A0h]
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  long double v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  v15 = (unsigned int)start;
  if ( (byte_4C47868 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47868 = 1;
  }
  *(float *)&v9 = this->fields.mEffectColor.fields.r;
  v10.fields.r = this->fields.mEffectColor.fields.g;
  v11.fields.r = this->fields.mEffectColor.fields.b;
  *(float *)&v12 = this->fields.mEffectColor.fields.a;
  finalAlpha = this->fields.finalAlpha;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  *(float *)&v12 = *(float *)&v12 * finalAlpha;
  v21 = UnityEngine_Object__op_Inequality(mFont, 0, 0);
  v23 = v12;
  v24 = *(long double *)&v11;
  v25 = *(long double *)&v10;
  v26 = v9;
  if ( v21 )
  {
    v27 = this->fields.mFont;
    if ( !v27 )
      goto LABEL_43;
    premultipliedAlphaShader = UIFont__get_premultipliedAlphaShader(v27, v22);
    v23 = v12;
    v24 = *(long double *)&v11;
    v25 = *(long double *)&v10;
    v26 = v9;
    if ( premultipliedAlphaShader )
    {
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v52.fields.r = *(float *)&v9;
      v52.fields.g = v10.fields.r;
      v52.fields.b = v11.fields.r;
      v52.fields.a = *(float *)&v12;
      *(UnityEngine_Color_o *)&v26 = NGUITools__ApplyPMA(v52, 0);
    }
  }
  v27 = (UIFont_o *)sub_2526688(0, v26, v25, v24, v23);
  v48 = (int)v27;
  if ( (int)v15 < end )
  {
    if ( verts )
    {
      v29 = -(__int64)end;
      v30 = v15 << 32;
      v31 = (int)v15;
      v32 = (int)v15 + 8LL;
      v33 = 12LL * (int)v15 + 32;
      v50.n64_u64[0] = __PAIR64__(LODWORD(y), LODWORD(x));
      v47 = cols;
      while ( 1 )
      {
        buffer = verts->fields.buffer;
        if ( !buffer )
          goto LABEL_43;
        if ( (unsigned int)v15 >= LODWORD(buffer->max_length) )
          goto LABEL_44;
        BetterList_Vector3___Add(
          verts,
          *(UnityEngine_Vector3_o *)((char *)&buffer->obj.klass + v33),
          (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          goto LABEL_43;
        v35 = uvs->fields.buffer;
        if ( !v35 )
          goto LABEL_43;
        if ( (unsigned int)v15 >= LODWORD(v35->max_length) )
          goto LABEL_44;
        BetterList_Vector2___Add(uvs, v35->m_Items[v31], (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          goto LABEL_43;
        v36 = cols->fields.buffer;
        if ( !v36 )
          goto LABEL_43;
        if ( (unsigned int)v15 >= LODWORD(v36->max_length) )
          goto LABEL_44;
        v37 = (UnityEngine_Color32_o)*((unsigned int *)&v36->obj.klass + v32);
        BetterList_Color32___Add(cols, v37, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v38 = verts->fields.buffer;
        if ( !v38 )
          goto LABEL_43;
        if ( (unsigned int)v15 >= LODWORD(v38->max_length) )
          goto LABEL_44;
        *(float32x2_t *)((char *)&v38->obj.klass + v33) = vadd_f32(*(float32x2_t *)((char *)&v38->obj.klass + v33), v50);
        v39 = cols->fields.buffer;
        if ( !v39 )
          goto LABEL_43;
        if ( (unsigned int)v15 >= LODWORD(v39->max_length) )
          goto LABEL_44;
        v40 = *((unsigned int *)&v39->obj.klass + v32);
        if ( (~(_DWORD)v40 & 0xFF000000) != 0 )
          break;
        *((_DWORD *)&v39->obj.klass + v32) = v48;
LABEL_41:
        ++v32;
        v30 += 0x100000000LL;
        v33 += 12;
        ++v31;
        LODWORD(v15) = v15 + 1;
        if ( v29 + v32 == 8 )
          return;
      }
      v41 = verts;
      v42 = uvs;
      v43 = v29;
      v44 = (UnityEngine_Object_o *)this->fields.mFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      *(float *)&v13 = *(float *)&v12 * (float)((float)(unsigned int)(v40 >> 24) / 255.0);
      if ( UnityEngine_Object__op_Inequality(v44, 0, 0) )
      {
        v27 = this->fields.mFont;
        if ( !v27 )
          goto LABEL_43;
        v29 = v43;
        uvs = v42;
        if ( UIFont__get_premultipliedAlphaShader(v27, v45) )
        {
          verts = v41;
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          v53.fields.r = *(float *)&v9;
          v53.fields.g = v10.fields.r;
          v53.fields.b = v11.fields.r;
          v53.fields.a = *(float *)&v12 * (float)((float)(unsigned int)(v40 >> 24) / 255.0);
          *(UnityEngine_Color_o *)&v54 = NGUITools__ApplyPMA(v53, 0);
          v13 = *(long double *)((char *)&v54 + 12);
          goto LABEL_39;
        }
        v54 = v9;
        *(UnityEngine_Color_o *)((char *)&v54 + 4) = v10;
        *(UnityEngine_Color_o *)((char *)&v54 + 8) = v11;
      }
      else
      {
        v54 = v9;
        *(UnityEngine_Color_o *)((char *)&v54 + 4) = v10;
        *(UnityEngine_Color_o *)((char *)&v54 + 8) = v11;
        v29 = v43;
        uvs = v42;
      }
      verts = v41;
LABEL_39:
      cols = v47;
      v27 = (UIFont_o *)sub_2526688(0, v54, *(long double *)((char *)&v54 + 4), *(long double *)((char *)&v54 + 8), v13);
      if ( (unsigned int)v15 >= LODWORD(v39->max_length) )
LABEL_44:
        sub_1C372BC(v27);
      *(int32_t *)((char *)&v39->m_Items[0].fields.rgba + (v30 >> 30)) = (int)v27;
      goto LABEL_41;
    }
LABEL_43:
    sub_1C372B4(v27);
  }
}


void UILabel__AssumeNaturalSize(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *ambigiousFont; // x20
  const MethodInfo *v4; // x3
  float x; // s9
  double v6; // d8
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  int32_t v11; // w8
  float y; // s9
  double v13; // d8
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  int32_t mWidth; // w9
  int32_t v19; // w8
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C47861 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47861 = 1;
  }
  ambigiousFont = UILabel__get_ambigiousFont(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ambigiousFont, 0, 0) )
  {
    *(int32x2_t *)&this->fields.mWidth = vdup_n_s32(0x186A0u);
    UILabel__ProcessText_49508816(this, 0, 1, v4);
    x = this->fields.mCalculatedSize.fields.x;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v6 = x;
    v7 = modf(x, &iptr);
    if ( x >= 0.0 )
    {
      if ( v7 != 0.5 )
      {
        v8 = floor(v6 + 0.5);
        goto LABEL_21;
      }
      v8 = iptr;
      v9 = 1.0;
    }
    else
    {
      if ( v7 != -0.5 )
      {
        v8 = ceil(v6 + -0.5);
        goto LABEL_21;
      }
      v8 = iptr;
      v9 = -1.0;
    }
    v10 = v8 + v9;
    if ( ((__int64)v8 & 1) != 0 )
      v8 = v10;
LABEL_21:
    if ( v8 == INFINITY )
      v11 = 0x80000000;
    else
      v11 = (int)v8;
    this->fields.mWidth = v11;
    y = this->fields.mCalculatedSize.fields.y;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v13 = y;
    v14 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v14 == 0.5 )
      {
        v15 = iptr;
        v16 = 1.0;
LABEL_33:
        v17 = v15 + v16;
        if ( ((__int64)v15 & 1) != 0 )
          v15 = v17;
        goto LABEL_38;
      }
      v15 = floor(v13 + 0.5);
    }
    else
    {
      if ( v14 == -0.5 )
      {
        v15 = iptr;
        v16 = -1.0;
        goto LABEL_33;
      }
      v15 = ceil(v13 + -0.5);
    }
LABEL_38:
    mWidth = this->fields.mWidth;
    v19 = (int)v15;
    if ( v15 == INFINITY )
      v19 = 0x80000000;
    this->fields.mHeight = v19;
    if ( (mWidth & 1) != 0 )
      this->fields.mWidth = mWidth + 1;
    if ( (v19 & 1) != 0 )
      this->fields.mHeight = v19 + 1;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__Awake(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o *mFont; // x20
  UILabel_c *v6; // x0
  UnityEngine_Object_o *defaultFont; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Font_c *v11; // x1
  struct UILabel_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p_defaultFont; // x0
  struct UILabel_StaticFields *v14; // x0
  UILabel_c *v15; // x0
  UnityEngine_Object_o *v16; // x20
  const MethodInfo *v17; // x2
  UILabel_c *v18; // x0
  System_String_o *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4C4786F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Font_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    sub_1C37058(&StringLiteral_6804/*"Fonts/FGO-Main-Font"*/);
    byte_4C4786F = 1;
  }
  UIWidget__Awake((UIWidget_o *)this, 0);
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
  {
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mFont, 0, 0) )
    {
      v6 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v6 = UILabel_TypeInfo;
      }
      defaultFont = (UnityEngine_Object_o *)v6->static_fields->defaultFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(defaultFont, 0, 0) )
        goto LABEL_22;
      v10 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_6804/*"Fonts/FGO-Main-Font"*/, 0);
      if ( !UILabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
      if ( v10 )
      {
        v11 = UnityEngine_Font_TypeInfo;
        if ( (UnityEngine_Font_c *)v10->klass == UnityEngine_Font_TypeInfo )
        {
          static_fields = UILabel_TypeInfo->static_fields;
          static_fields->defaultFont = (struct UnityEngine_Font_o *)v10;
          p_defaultFont = (CGThumbnailListItem_o *)&static_fields->defaultFont;
          if ( (UnityEngine_Font_c *)v10->klass == v11 )
            goto LABEL_21;
        }
        sub_1C37574(v10);
      }
      v14 = UILabel_TypeInfo->static_fields;
      v14->defaultFont = (struct UnityEngine_Font_o *)v10;
      p_defaultFont = (CGThumbnailListItem_o *)&v14->defaultFont;
LABEL_21:
      sub_1C36FFC(p_defaultFont, (int32_t)v10, v8, v9);
LABEL_22:
      v15 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v15 = UILabel_TypeInfo;
      }
      v16 = (UnityEngine_Object_o *)v15->static_fields->defaultFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
      {
        v18 = UILabel_TypeInfo;
        if ( !UILabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
          v18 = UILabel_TypeInfo;
        }
        UILabel__set_trueTypeFont(this, v18->static_fields->defaultFont, v17);
      }
    }
  }
  if ( !System_String__IsNullOrEmpty(this->fields.localKey, 0) )
  {
    v19 = NguiLocalizationManager__Get(this->fields.localKey, 0);
    UILabel__set_text(this, v19, v20);
  }
}


int32_t UILabel__CalculateOffsetToFit(UILabel_o *this, System_String_o *text, const MethodInfo *method)
{
  NGUIText_c *v5; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t v7; // w19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct NGUIText_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C47869 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C47869 = 1;
  }
  UILabel__UpdateNGUIText(this, (const MethodInfo *)text);
  v5 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v5 = NGUIText_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->encoding = 0;
  static_fields->symbolStyle = 0;
  v7 = NGUIText__CalculateOffsetToFit(text, 0);
  NGUIText_TypeInfo->static_fields->bitmapFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v8, v9);
  v10 = NGUIText_TypeInfo->static_fields;
  v10->dynamicFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->dynamicFont, 0, v11, v12);
  return v7;
}


int32_t UILabel__GetCharacterIndex(UILabel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  return UILabel__GetCharacterIndexAtPosition(this, worldPos, 0, v3);
}


int32_t UILabel__GetCharacterIndexAtPosition(
        UILabel_o *this,
        UnityEngine_Vector3_o worldPos,
        bool precise,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *cachedTransform; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    sub_1C372B4(0);
  v12.fields.x = x;
  v12.fields.y = y;
  v12.fields.z = z;
  v13 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v12, 0);
  return UILabel__GetCharacterIndexAtPosition_49518528(this, *(UnityEngine_Vector2_o *)&v13.fields.x, precise, v10);
}


// local variable allocation has failed, the output may be wrong!
int32_t UILabel__GetCharacterIndexAtPosition_49518528(
        UILabel_o *this,
        UnityEngine_Vector2_o localPos,
        bool precise,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  const MethodInfo *v8; // x1
  System_String_o *processedText; // x21
  const MethodInfo *v10; // x1
  UILabel_c *v11; // x0
  struct UILabel_StaticFields *static_fields; // x9
  BetterList_int__o *mTempIndices; // x22
  BetterList_Vector3__o *mTempVerts; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BetterList_Vector3__o *v17; // x0
  struct BetterList_Vector3__o *v18; // x1
  UILabel_c *v19; // x0
  struct UILabel_StaticFields *v20; // x9
  BetterList_int__o *v21; // x20
  BetterList_Vector3__o *v22; // x21
  float v23; // s0 OVERLAPPED
  float v24; // s1
  int32_t ExactCharacterIndex; // w0
  NGUIText_c *v26; // x0
  struct NGUIText_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w19
  UILabel_c *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  NGUIText_c *v35; // x0
  struct NGUIText_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  y = localPos.fields.y;
  x = localPos.fields.x;
  if ( (byte_4C47862 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Clear__);
    sub_1C37058(&Method_BetterList_int__Clear__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C47862 = 1;
  }
  if ( !UILabel__get_isValid(this, (const MethodInfo *)precise) )
    return 0;
  processedText = UILabel__get_processedText(this, v8);
  if ( System_String__IsNullOrEmpty(processedText, 0) )
    return 0;
  UILabel__UpdateNGUIText(this, v10);
  v11 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v11 = UILabel_TypeInfo;
  }
  static_fields = v11->static_fields;
  mTempVerts = static_fields->mTempVerts;
  mTempIndices = static_fields->mTempIndices;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  if ( precise )
    NGUIText__PrintExactCharacterPositions(processedText, mTempVerts, mTempIndices, 0);
  else
    NGUIText__PrintApproximateCharacterPositions(processedText, mTempVerts, mTempIndices, 0);
  v17 = (BetterList_Vector3__o *)UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v17 = (BetterList_Vector3__o *)UILabel_TypeInfo;
  }
  v18 = *(struct BetterList_Vector3__o **)(*(_QWORD *)&v17[5].fields.size + 24LL);
  if ( !v18 )
LABEL_37:
    sub_1C372B4(v17);
  if ( v18->fields.size < 1 )
  {
    v26 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v26 = NGUIText_TypeInfo;
    }
    v26->static_fields->bitmapFont = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v15, v16);
    v27 = NGUIText_TypeInfo->static_fields;
    v27->dynamicFont = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v27->dynamicFont, 0, v28, v29);
    return 0;
  }
  if ( !LODWORD(v17[7].klass) )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v18 = UILabel_TypeInfo->static_fields->mTempVerts;
  }
  UILabel__ApplyOffset(this, v18, 0, v16);
  v19 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v19 = UILabel_TypeInfo;
  }
  v20 = v19->static_fields;
  v22 = v20->mTempVerts;
  v21 = v20->mTempIndices;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  v23 = x;
  v24 = y;
  if ( precise )
    ExactCharacterIndex = NGUIText__GetExactCharacterIndex(v22, v21, *(UnityEngine_Vector2_o *)&v23, 0);
  else
    ExactCharacterIndex = NGUIText__GetApproximateCharacterIndex(v22, v21, *(UnityEngine_Vector2_o *)&v23, 0);
  v30 = ExactCharacterIndex;
  v32 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v32 = UILabel_TypeInfo;
  }
  v17 = v32->static_fields->mTempVerts;
  if ( !v17 )
    goto LABEL_37;
  BetterList_Vector3___Clear(v17, (const MethodInfo_331BCFC *)Method_BetterList_Vector3__Clear__);
  v17 = (BetterList_Vector3__o *)UILabel_TypeInfo->static_fields->mTempIndices;
  if ( !v17 )
    goto LABEL_37;
  BetterList_int___Clear((BetterList_int__o *)v17, (const MethodInfo_33196C8 *)Method_BetterList_int__Clear__);
  v35 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v35 = NGUIText_TypeInfo;
  }
  v35->static_fields->bitmapFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v33, v34);
  v36 = NGUIText_TypeInfo->static_fields;
  v36->dynamicFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v36->dynamicFont, 0, v37, v38);
  return v30;
}


int32_t UILabel__GetCharacterIndex_49518520(UILabel_o *this, UnityEngine_Vector2_o localPos, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  return UILabel__GetCharacterIndexAtPosition_49518528(this, localPos, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t UILabel__GetCharacterIndex_49520652(
        UILabel_o *this,
        int32_t currentIndex,
        int32_t key,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_String_o *processedText; // x21
  const MethodInfo *v9; // x1
  int32_t stringLength; // w22
  int32_t defaultFontSize; // w23
  const MethodInfo *v12; // x1
  UILabel_c *v13; // x0
  struct UILabel_StaticFields *static_fields; // x9
  BetterList_int__o *mTempIndices; // x24
  BetterList_Vector3__o *mTempVerts; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BetterList_int__o *v19; // x0
  struct BetterList_Vector3__o *v20; // x1
  int32_t i; // w24
  UILabel_c *v22; // x8
  UILabel_c *v23; // x0
  float x; // s8
  float y; // s9
  float mFloatSpacingY; // s0
  float mSpacingY; // s0
  float v28; // w8
  UILabel_c *v29; // x0
  struct UILabel_StaticFields *v30; // x9
  BetterList_int__o *v31; // x22
  BetterList_Vector3__o *v32; // x23
  int32_t ApproximateCharacterIndex; // w0
  NGUIText_c *v34; // x0
  struct NGUIText_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47865 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Clear__);
    sub_1C37058(&Method_BetterList_int__Clear__);
    sub_1C37058(&Method_BetterList_int__get_Item__);
    sub_1C37058(&Method_BetterList_Vector3__get_Item__);
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C47865 = 1;
  }
  if ( !UILabel__get_isValid(this, *(const MethodInfo **)&currentIndex) )
    return currentIndex;
  processedText = UILabel__get_processedText(this, v7);
  if ( System_String__IsNullOrEmpty(processedText, 0) )
    return 0;
  defaultFontSize = UILabel__get_defaultFontSize(this, v9);
  UILabel__UpdateNGUIText(this, v12);
  v13 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v13 = UILabel_TypeInfo;
  }
  static_fields = v13->static_fields;
  mTempVerts = static_fields->mTempVerts;
  mTempIndices = static_fields->mTempIndices;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__PrintApproximateCharacterPositions(processedText, mTempVerts, mTempIndices, 0);
  v19 = (BetterList_int__o *)UILabel_TypeInfo;
  v20 = UILabel_TypeInfo->static_fields->mTempVerts;
  if ( !v20 )
    goto LABEL_60;
  if ( v20->fields.size >= 1 )
  {
    if ( !UILabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
      v20 = UILabel_TypeInfo->static_fields->mTempVerts;
    }
    UILabel__ApplyOffset(this, v20, 0, v18);
    for ( i = 0; ; ++i )
    {
      v22 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v22 = UILabel_TypeInfo;
      }
      v19 = v22->static_fields->mTempIndices;
      if ( !v19 )
        goto LABEL_60;
      if ( i >= v19->fields.size )
        goto LABEL_43;
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v19 = UILabel_TypeInfo->static_fields->mTempIndices;
        if ( !v19 )
          goto LABEL_60;
      }
      if ( BetterList_int___get_Item(v19, i, (const MethodInfo_33194DC *)Method_BetterList_int__get_Item__) == currentIndex )
        break;
    }
    v23 = UILabel_TypeInfo;
    if ( !UILabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
      v23 = UILabel_TypeInfo;
    }
    v19 = (BetterList_int__o *)v23->static_fields->mTempVerts;
    if ( v19 )
    {
      Item = BetterList_Vector3___get_Item(
               (BetterList_Vector3__o *)v19,
               i,
               (const MethodInfo_331BAE8 *)Method_BetterList_Vector3__get_Item__);
      x = Item.fields.x;
      y = Item.fields.y;
      switch ( key )
      {
        case 273:
          if ( this->fields.mUseFloatSpacing )
            mFloatSpacingY = this->fields.mFloatSpacingY;
          else
            mFloatSpacingY = (float)this->fields.mSpacingY;
          y = Item.fields.y + (float)(mFloatSpacingY + (float)defaultFontSize);
          break;
        case 274:
          if ( this->fields.mUseFloatSpacing )
            mSpacingY = this->fields.mFloatSpacingY;
          else
            mSpacingY = (float)this->fields.mSpacingY;
          y = Item.fields.y - (float)(mSpacingY + (float)defaultFontSize);
          break;
        case 278:
          v28 = -1000.0;
          goto LABEL_33;
        case 279:
          v28 = 1000.0;
LABEL_33:
          x = Item.fields.x + v28;
          break;
        default:
          break;
      }
      v29 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v29 = UILabel_TypeInfo;
      }
      v30 = v29->static_fields;
      v32 = v30->mTempVerts;
      v31 = v30->mTempIndices;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v39.fields.x = x;
      v39.fields.y = y;
      ApproximateCharacterIndex = NGUIText__GetApproximateCharacterIndex(v32, v31, v39, 0);
      v22 = UILabel_TypeInfo;
      if ( ApproximateCharacterIndex == currentIndex )
      {
LABEL_43:
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = UILabel_TypeInfo;
        }
        v19 = (BetterList_int__o *)v22->static_fields->mTempVerts;
        if ( v19 )
        {
          BetterList_Vector3___Clear(
            (BetterList_Vector3__o *)v19,
            (const MethodInfo_331BCFC *)Method_BetterList_Vector3__Clear__);
          v19 = UILabel_TypeInfo->static_fields->mTempIndices;
          if ( v19 )
          {
            BetterList_int___Clear(v19, (const MethodInfo_33196C8 *)Method_BetterList_int__Clear__);
            goto LABEL_48;
          }
        }
      }
      else
      {
        stringLength = ApproximateCharacterIndex;
        if ( !UILabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
          v22 = UILabel_TypeInfo;
        }
        v19 = (BetterList_int__o *)v22->static_fields->mTempVerts;
        if ( v19 )
        {
          BetterList_Vector3___Clear(
            (BetterList_Vector3__o *)v19,
            (const MethodInfo_331BCFC *)Method_BetterList_Vector3__Clear__);
          v19 = UILabel_TypeInfo->static_fields->mTempIndices;
          if ( v19 )
          {
            BetterList_int___Clear(v19, (const MethodInfo_33196C8 *)Method_BetterList_int__Clear__);
            return stringLength;
          }
        }
      }
    }
LABEL_60:
    sub_1C372B4(v19);
  }
LABEL_48:
  v34 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v34 = NGUIText_TypeInfo;
  }
  v34->static_fields->bitmapFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v17, v18);
  v35 = NGUIText_TypeInfo->static_fields;
  v35->dynamicFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->dynamicFont, 0, v36, v37);
  stringLength = 0;
  switch ( key )
  {
    case 273:
    case 278:
      return stringLength;
    case 274:
    case 279:
      if ( !processedText )
        goto LABEL_60;
      stringLength = processedText->fields._stringLength;
      break;
    default:
      return currentIndex;
  }
  return stringLength;
}


UnityEngine_Vector3_array *UILabel__GetSides(
        UILabel_o *this,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_49508816(this, 0, 1, v3);
  return UIWidget__GetSides((UIWidget_o *)this, relativeTo, 0);
}


System_String_o *UILabel__GetUrlAtCharacterIndex(UILabel_o *this, int32_t characterIndex, const MethodInfo *method)
{
  System_String_o *mText; // x0
  int Chars; // w8
  int32_t v7; // w21
  int32_t v8; // w0
  int32_t v9; // w22
  int32_t v10; // w0

  if ( (byte_4C47864 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15837/*"[/url]"*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    sub_1C37058(&StringLiteral_16007/*"[url="*/);
    byte_4C47864 = 1;
  }
  if ( characterIndex == -1 )
    return 0;
  mText = this->fields.mText;
  if ( !mText )
    goto LABEL_25;
  if ( mText->fields._stringLength - 6 <= characterIndex )
    return 0;
  if ( System_String__get_Chars(mText, characterIndex, 0) != 91 )
    goto LABEL_28;
  mText = this->fields.mText;
  if ( !mText )
    goto LABEL_25;
  if ( System_String__get_Chars(mText, characterIndex + 1, 0) != 117 )
    goto LABEL_28;
  mText = this->fields.mText;
  if ( !mText )
    goto LABEL_25;
  if ( System_String__get_Chars(mText, characterIndex + 2, 0) != 114 )
    goto LABEL_28;
  mText = this->fields.mText;
  if ( !mText )
    goto LABEL_25;
  if ( System_String__get_Chars(mText, characterIndex + 3, 0) != 108 )
    goto LABEL_28;
  mText = this->fields.mText;
  if ( !mText )
    goto LABEL_25;
  Chars = System_String__get_Chars(mText, characterIndex + 4, 0);
  mText = (System_String_o *)(unsigned int)characterIndex;
  if ( Chars != 61 )
  {
LABEL_28:
    mText = this->fields.mText;
    if ( !mText )
      goto LABEL_25;
    mText = (System_String_o *)System_String__LastIndexOf_63622748(
                                 mText,
                                 (System_String_o *)StringLiteral_16007/*"[url="*/,
                                 characterIndex,
                                 0);
    if ( (_DWORD)mText == -1 )
      return 0;
  }
  if ( !this->fields.mText )
    goto LABEL_25;
  v7 = (_DWORD)mText + 5;
  v8 = System_String__IndexOf_63620048(this->fields.mText, (System_String_o *)StringLiteral_16058/*"]"*/, (_DWORD)mText + 5, 0);
  if ( v8 == -1 )
    return 0;
  v9 = v8;
  mText = this->fields.mText;
  if ( !mText )
    goto LABEL_25;
  v10 = System_String__IndexOf_63620048(mText, (System_String_o *)StringLiteral_15837/*"[/url]"*/, v9, 0);
  if ( v10 != -1 && v10 < characterIndex )
    return 0;
  mText = this->fields.mText;
  if ( !mText )
LABEL_25:
    sub_1C372B4(mText);
  return System_String__Substring_63607580(mText, v7, v9 - v7, 0);
}


System_String_o *UILabel__GetUrlAtPosition(UILabel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition = UILabel__GetCharacterIndexAtPosition(this, worldPos, 1, v3);
  return UILabel__GetUrlAtCharacterIndex(this, CharacterIndexAtPosition, v6);
}


System_String_o *UILabel__GetUrlAtPosition_49520620(
        UILabel_o *this,
        UnityEngine_Vector2_o localPos,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition_49518528; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition_49518528 = UILabel__GetCharacterIndexAtPosition_49518528(this, localPos, 1, v3);
  return UILabel__GetUrlAtCharacterIndex(this, CharacterIndexAtPosition_49518528, v6);
}


System_String_o *UILabel__GetWordAtCharacterIndex(UILabel_o *this, int32_t characterIndex, const MethodInfo *method)
{
  UILabel_o *v4; // x19
  System_String_o *mText; // x21
  int m_CancellationTokenSource; // w8
  int32_t IndexOfAny_63621484; // w0
  System_String_o *v8; // x22
  int32_t v9; // w21
  System_Array_o *v10; // x23
  System_RuntimeFieldHandle_o v11; // x1
  struct System_String_o *v12; // x8
  int32_t v13; // w2
  System_String_o *v14; // x19

  v4 = this;
  if ( (byte_4C47863 & 1) == 0 )
  {
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&NGUIText_TypeInfo);
    this = (UILabel_o *)sub_1C37058(&Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5);
    byte_4C47863 = 1;
  }
  if ( characterIndex == -1 )
    return 0;
  mText = v4->fields.mText;
  if ( !mText )
    goto LABEL_20;
  if ( mText->fields._stringLength <= characterIndex )
    return 0;
  this = (UILabel_o *)sub_1C37100(char___TypeInfo, 2);
  if ( !this )
    goto LABEL_20;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LOWORD(this->fields.leftAnchor) = 32, m_CancellationTokenSource == 1) )
    sub_1C372BC(this);
  WORD1(this->fields.leftAnchor) = 10;
  IndexOfAny_63621484 = System_String__LastIndexOfAny_63621484(mText, (System_Char_array *)this, characterIndex, 0);
  v8 = v4->fields.mText;
  v9 = IndexOfAny_63621484;
  v10 = (System_Array_o *)sub_1C37100(char___TypeInfo, 4);
  v11.fields.value = Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v10, v11, 0);
  if ( !v8 )
LABEL_20:
    sub_1C372B4(this);
  this = (UILabel_o *)System_String__IndexOfAny_63619364(v8, (System_Char_array *)v10, characterIndex, 0);
  if ( (_DWORD)this == -1 )
  {
    v12 = v4->fields.mText;
    if ( !v12 )
      goto LABEL_20;
    LODWORD(this) = v12->fields._stringLength;
  }
  v13 = (_DWORD)this - (v9 + 1);
  if ( (_DWORD)this == v9 + 1 || v13 < 1 )
    return 0;
  this = (UILabel_o *)v4->fields.mText;
  if ( !this )
    goto LABEL_20;
  v14 = System_String__Substring_63607580((System_String_o *)this, v9 + 1, v13, 0);
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  return NGUIText__StripSymbols(v14, 0);
}


System_String_o *UILabel__GetWordAtPosition(UILabel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition = UILabel__GetCharacterIndexAtPosition(this, worldPos, 1, v3);
  return UILabel__GetWordAtCharacterIndex(this, CharacterIndexAtPosition, v6);
}


System_String_o *UILabel__GetWordAtPosition_49520092(
        UILabel_o *this,
        UnityEngine_Vector2_o localPos,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition_49518528; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition_49518528 = UILabel__GetCharacterIndexAtPosition_49518528(this, localPos, 1, v3);
  return UILabel__GetWordAtCharacterIndex(this, CharacterIndexAtPosition_49518528, v6);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__MakePixelPerfect(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *ambigiousFont; // x20
  UnityEngine_Transform_o *cachedTransform; // x0
  float x; // s9
  float y; // s10
  float z; // s8
  double v8; // d11
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  float v13; // s9
  double v14; // d11
  double v15; // d0
  double v16; // d0
  double v17; // d1
  double v18; // d1
  float v19; // s10
  double v20; // d11
  double v21; // d0
  double v22; // d0
  double v23; // d1
  double v24; // d1
  double v25; // d8
  float v26; // s2 OVERLAPPED
  float v27; // s0
  float v28; // s1
  UnityEngine_Transform_o *v29; // x20
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x3
  int32_t mOverflow; // w20
  int32x2_t v33; // d9
  float v34; // s10
  double v35; // d8
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  float v40; // s10
  int v41; // w23
  double v42; // d8
  double v43; // d0
  double v44; // d0
  double v45; // d1
  double v46; // d1
  int v47; // w21
  int32_t minWidth; // w20
  int32_t minHeight; // w0
  UILabel_c *klass; // x8
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47860 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47860 = 1;
  }
  ambigiousFont = UILabel__get_ambigiousFont(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(ambigiousFont, 0, 0) )
  {
    UIWidget__MakePixelPerfect((UIWidget_o *)this, 0);
    return;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
LABEL_102:
    sub_1C372B4(cachedTransform);
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = x;
  v9 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      goto LABEL_22;
    }
    v10 = iptr;
    v11 = 1.0;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
      goto LABEL_22;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_22:
  if ( v10 == INFINITY )
    v13 = -2147500000.0;
  else
    v13 = (float)(int)v10;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = y;
  v15 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v16 = floor(v14 + 0.5);
      goto LABEL_39;
    }
    v16 = iptr;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v16 = ceil(v14 + -0.5);
      goto LABEL_39;
    }
    v16 = iptr;
    v17 = -1.0;
  }
  v18 = v16 + v17;
  if ( ((__int64)v16 & 1) != 0 )
    v16 = v18;
LABEL_39:
  if ( v16 == INFINITY )
    v19 = -2147500000.0;
  else
    v19 = (float)(int)v16;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = z;
  v21 = modf(z, &iptr);
  if ( z >= 0.0 )
  {
    if ( v21 == 0.5 )
    {
      v22 = iptr;
      v23 = 1.0;
LABEL_51:
      v24 = v22 + v23;
      if ( ((__int64)v22 & 1) != 0 )
        v25 = v24;
      else
        v25 = v22;
      goto LABEL_56;
    }
    v25 = floor(v20 + 0.5);
  }
  else
  {
    if ( v21 == -0.5 )
    {
      v22 = iptr;
      v23 = -1.0;
      goto LABEL_51;
    }
    v25 = ceil(v20 + -0.5);
  }
LABEL_56:
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_102;
  if ( v25 == INFINITY )
    v26 = -2147500000.0;
  else
    v26 = (float)(int)v25;
  v27 = v13;
  v28 = v19;
  UnityEngine_Transform__set_localPosition(cachedTransform, *(UnityEngine_Vector3_o *)(&v26 - 2), 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  v29 = cachedTransform;
  if ( !byte_4C3C926 )
  {
    cachedTransform = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v29 )
    goto LABEL_102;
  UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  mOverflow = this->fields.mOverflow;
  if ( mOverflow == 2 )
  {
    UILabel__AssumeNaturalSize(this, v30);
    return;
  }
  v33.n64_u64[0] = *(unsigned __int64 *)&this->fields.mWidth;
  if ( mOverflow != 3 )
    this->fields.mWidth = 100000;
  this->fields.mHeight = 100000;
  this->fields.mOverflow = 0;
  UILabel__ProcessText_49508816(this, 0, 1, v31);
  this->fields.mOverflow = mOverflow;
  v34 = this->fields.mCalculatedSize.fields.x;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v35 = v34;
  v36 = modf(v34, &iptr);
  if ( v34 >= 0.0 )
  {
    if ( v36 != 0.5 )
    {
      v37 = floor(v35 + 0.5);
      goto LABEL_81;
    }
    v37 = iptr;
    v38 = 1.0;
  }
  else
  {
    if ( v36 != -0.5 )
    {
      v37 = ceil(v35 + -0.5);
      goto LABEL_81;
    }
    v37 = iptr;
    v38 = -1.0;
  }
  v39 = v37 + v38;
  if ( ((__int64)v37 & 1) != 0 )
    v37 = v39;
LABEL_81:
  v40 = this->fields.mCalculatedSize.fields.y;
  if ( v37 == INFINITY )
    v41 = 0x80000000;
  else
    v41 = (int)v37;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v42 = v40;
  v43 = modf(v40, &iptr);
  if ( v40 >= 0.0 )
  {
    if ( v43 == 0.5 )
    {
      v44 = iptr;
      v45 = 1.0;
LABEL_93:
      v46 = v44 + v45;
      if ( ((__int64)v44 & 1) != 0 )
        v44 = v46;
      goto LABEL_98;
    }
    v44 = floor(v42 + 0.5);
  }
  else
  {
    if ( v43 == -0.5 )
    {
      v44 = iptr;
      v45 = -1.0;
      goto LABEL_93;
    }
    v44 = ceil(v42 + -0.5);
  }
LABEL_98:
  if ( v44 == INFINITY )
    v47 = 0x80000000;
  else
    v47 = (int)v44;
  minWidth = UIWidget__get_minWidth((UIWidget_o *)this, 0);
  minHeight = UIWidget__get_minHeight((UIWidget_o *)this, 0);
  klass = this->klass;
  *(int32x2_t *)&this->fields.mWidth = vmax_s32(
                                         v33,
                                         vmax_s32(
                                           (int32x2_t)__PAIR64__(v47, v41),
                                           (int32x2_t)__PAIR64__(minHeight, minWidth)));
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
    this,
    klass->vtable._30_MarkAsChanged.method);
}


void UILabel__MarkAsChanged(UILabel_o *this, const MethodInfo *method)
{
  this->fields.mChanged = 1;
  this->fields.mShouldBeProcessed = 1;
  UIWidget__MarkAsChanged((UIWidget_o *)this, 0);
}


void UILabel__OnAnchor(UILabel_o *this, const MethodInfo *method)
{
  UILabel_o *v2; // x19
  int32_t mOverflow; // w8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *target; // x20
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v7; // x20

  v2 = this;
  if ( (byte_4C4785B & 1) == 0 )
  {
    this = (UILabel_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4785B = 1;
  }
  mOverflow = v2->fields.mOverflow;
  if ( mOverflow != 3 )
  {
    if ( mOverflow != 2 || !UIRect__get_isFullyAnchored((UIRect_o *)v2, 0) )
      goto LABEL_16;
LABEL_15:
    v2->fields.mOverflow = 0;
    goto LABEL_16;
  }
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_17;
  target = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UILabel_o *)UnityEngine_Object__op_Inequality(target, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_16;
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
LABEL_17:
    sub_1C372B4(this);
  v7 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    goto LABEL_15;
LABEL_16:
  UIWidget__OnAnchor((UIWidget_o *)v2, 0);
}


void UILabel__OnDisable(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UILabel_c *v4; // x0
  BetterList_T__o *mList; // x0

  if ( (byte_4C47855 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UILabel__Remove__);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C47855 = 1;
  }
  UILabel__SetActiveFont(this, 0, v2);
  v4 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v4 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v4->static_fields->mList;
  if ( !mList )
    sub_1C372B4(0);
  BetterList_object___Remove(
    mList,
    (Il2CppObject *)this,
    (const MethodInfo_331A2A0 *)Method_BetterList_UILabel__Remove__);
  UIWidget__OnDisable((UIWidget_o *)this, 0);
}


void UILabel__OnEnable(UILabel_o *this, const MethodInfo *method)
{
  UILabel_c *v3; // x0
  struct UILabel_StaticFields *static_fields; // x8
  System_Action_object__o *v5; // x19

  if ( (byte_4C4785D & 1) == 0 )
  {
    sub_1C37058(&System_Action_Font__TypeInfo);
    sub_1C37058(&Method_UILabel_OnFontChanged__);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C4785D = 1;
  }
  UIRect__OnEnable((UIRect_o *)this, 0);
  v3 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v3 = UILabel_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( !static_fields->mTexRebuildAdded )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = UILabel_TypeInfo->static_fields;
    }
    static_fields->mTexRebuildAdded = 1;
    v5 = (System_Action_object__o *)sub_1C372A4(System_Action_Font__TypeInfo);
    System_Action_object____ctor(v5, 0, Method_UILabel_OnFontChanged__, 0);
    UnityEngine_Font__add_textureRebuilt((System_Action_Font__o *)v5, 0);
  }
}


void UILabel__OnFill(
        UILabel_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UIFont_o *isValid; // x0
  unsigned int size; // w23
  float b; // s9
  float g; // s10
  float finalAlpha; // s8
  float r; // s11
  UnityEngine_Object_o *mFont; // x24
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  System_String_o *processedText; // x0
  int32_t v19; // w24
  System_String_o *v20; // x25
  const MethodInfo *v21; // x1
  NGUIText_c *v22; // x0
  float *static_fields; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct NGUIText_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *v30; // x24
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x6
  int32_t mEffectStyle; // w8
  float x; // s9
  float y; // s8
  int32_t v36; // w24
  unsigned int v37; // w8
  float v38; // s11
  float v39; // s12
  const MethodInfo *v40; // x6
  int32_t v41; // w25
  const MethodInfo *v42; // x6
  int32_t v43; // w24
  const MethodInfo *v44; // x6
  const MethodInfo *v45; // x6
  int32_t v46; // w23
  int32_t v47; // w24
  const MethodInfo *v48; // x6
  const MethodInfo *v49; // x6
  const MethodInfo *v50; // x6
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C47867 & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47867 = 1;
  }
  isValid = (UIFont_o *)UILabel__get_isValid(this, (const MethodInfo *)verts);
  if ( ((unsigned __int8)isValid & 1) != 0 )
  {
    if ( !verts )
      goto LABEL_35;
    size = verts->fields.size;
    g = this->fields.mColor.fields.g;
    b = this->fields.mColor.fields.b;
    finalAlpha = this->fields.finalAlpha;
    r = this->fields.mColor.fields.r;
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
    {
      isValid = this->fields.mFont;
      if ( !isValid )
        goto LABEL_35;
      if ( UIFont__get_premultipliedAlphaShader(isValid, v16) )
      {
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        v52.fields.r = r;
        v52.fields.g = g;
        v52.fields.b = b;
        v52.fields.a = finalAlpha;
        v53 = NGUITools__ApplyPMA(v52, 0);
        r = v53.fields.r;
        g = v53.fields.g;
        b = v53.fields.b;
        finalAlpha = v53.fields.a;
      }
    }
    if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
    {
      r = powf(r, 2.2);
      g = powf(g, 2.2);
      b = powf(b, 2.2);
    }
    processedText = UILabel__get_processedText(this, v17);
    v19 = verts->fields.size;
    v20 = processedText;
    UILabel__UpdateNGUIText(this, v21);
    v22 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v22 = NGUIText_TypeInfo;
    }
    static_fields = (float *)v22->static_fields;
    static_fields[11] = r;
    static_fields[12] = g;
    static_fields[13] = b;
    static_fields[14] = finalAlpha;
    NGUIText__Print(v20, verts, uvs, cols, 0);
    NGUIText_TypeInfo->static_fields->bitmapFont = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v24, v25);
    v26 = NGUIText_TypeInfo->static_fields;
    v26->dynamicFont = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v26->dynamicFont, 0, v27, v28);
    UILabel__ApplyOffset(this, verts, v19, v29);
    v30 = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v30, 0, 0) )
    {
LABEL_22:
      mEffectStyle = this->fields.mEffectStyle;
      if ( mEffectStyle )
      {
        x = this->fields.mEffectDistance.fields.x;
        y = this->fields.mEffectDistance.fields.y;
        v36 = verts->fields.size;
        v37 = mEffectStyle & 0xFFFFFFFE;
        if ( v37 == 2 )
          v38 = y * 0.5;
        else
          v38 = this->fields.mEffectDistance.fields.y;
        if ( v37 == 2 )
          v39 = x * 0.5;
        else
          v39 = this->fields.mEffectDistance.fields.x;
        UILabel__ApplyShadow(this, verts, uvs, cols, size, v36, v39, -v38, v32);
        if ( (unsigned int)(this->fields.mEffectStyle - 2) <= 2 )
        {
          v41 = verts->fields.size;
          UILabel__ApplyShadow(this, verts, uvs, cols, v36, v41, -v39, v38, v40);
          size = verts->fields.size;
          UILabel__ApplyShadow(this, verts, uvs, cols, v41, size, v39, v38, v42);
          v43 = verts->fields.size;
          UILabel__ApplyShadow(this, verts, uvs, cols, size, v43, -v39, -v38, v44);
          if ( (this->fields.mEffectStyle & 0xFFFFFFFE) == 2 )
          {
            v46 = verts->fields.size;
            UILabel__ApplyShadow(this, verts, uvs, cols, v43, v46, -x, 0.0, v45);
            v47 = verts->fields.size;
            UILabel__ApplyShadow(this, verts, uvs, cols, v46, v47, x, 0.0, v48);
            size = verts->fields.size;
            UILabel__ApplyShadow(this, verts, uvs, cols, v47, size, 0.0, y, v49);
            UILabel__ApplyShadow(this, verts, uvs, cols, size, verts->fields.size, 0.0, -y, v50);
          }
        }
      }
      onPostFill = this->fields.onPostFill;
      if ( onPostFill )
        ((void (__fastcall *)(intptr_t, UILabel_o *, _QWORD, BetterList_Vector3__o *, BetterList_Vector2__o *, BetterList_Color32__o *, intptr_t))onPostFill->fields.invoke_impl)(
          onPostFill->fields.method_code,
          this,
          size,
          verts,
          uvs,
          cols,
          onPostFill->fields.method);
      return;
    }
    isValid = this->fields.mFont;
    if ( isValid )
    {
      if ( UIFont__get_packedFontShader(isValid, v31) )
        return;
      goto LABEL_22;
    }
LABEL_35:
    sub_1C372B4(isValid);
  }
}


void UILabel__OnFontChanged(UnityEngine_Font_o *font, const MethodInfo *method)
{
  int32_t i; // w20
  System_Collections_Generic_HashSet_T__o *updateAgainPanels; // x0
  BetterList_T__o *mList; // x8
  Il2CppObject *Item; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *trueTypeFont; // x22
  int32_t j; // w20
  BetterList_T__o *v10; // x8
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *v13; // x22
  UIPanel_o *Panel; // x0
  UIPanel_c *v15; // x8
  UnityEngine_Object_o *v16; // x21
  UIPanel_c *v17; // x0

  if ( (byte_4C47857 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UILabel__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_UIPanel__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    sub_1C37058(&UIPanel_TypeInfo);
    byte_4C47857 = 1;
  }
  for ( i = 0; ; ++i )
  {
    updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UILabel_TypeInfo;
    if ( !UILabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
      updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UILabel_TypeInfo;
    }
    mList = **(BetterList_T__o ***)&updateAgainPanels[2].fields._freeList;
    if ( !mList )
LABEL_48:
      sub_1C372B4(updateAgainPanels);
    if ( i >= mList->fields.size )
      break;
    if ( !LODWORD(updateAgainPanels[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(updateAgainPanels);
      mList = (BetterList_T__o *)UILabel_TypeInfo->static_fields->mList;
      if ( !mList )
        goto LABEL_48;
    }
    Item = BetterList_object___get_Item(mList, i, (const MethodInfo_3319DC0 *)Method_BetterList_UILabel__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)Item,
                                                                     0,
                                                                     0);
    if ( ((unsigned __int8)updateAgainPanels & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_48;
      trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)Item, v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UnityEngine_Object__op_Equality(
                                                                       trueTypeFont,
                                                                       (UnityEngine_Object_o *)font,
                                                                       0);
      if ( ((unsigned __int8)updateAgainPanels & 1) != 0 )
      {
        if ( !trueTypeFont )
          goto LABEL_48;
        UnityEngine_Font__RequestCharactersInTexture(
          (UnityEngine_Font_o *)trueTypeFont,
          (System_String_o *)Item[26].klass,
          (int32_t)Item[41].monitor,
          HIDWORD(Item[26].monitor),
          0);
      }
    }
  }
  for ( j = 0; ; ++j )
  {
    if ( !LODWORD(updateAgainPanels[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(updateAgainPanels);
      updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UILabel_TypeInfo;
    }
    v10 = **(BetterList_T__o ***)&updateAgainPanels[2].fields._freeList;
    if ( !v10 )
      goto LABEL_48;
    if ( j >= v10->fields.size )
      break;
    if ( !LODWORD(updateAgainPanels[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(updateAgainPanels);
      v10 = (BetterList_T__o *)UILabel_TypeInfo->static_fields->mList;
      if ( !v10 )
        goto LABEL_48;
    }
    v11 = BetterList_object___get_Item(v10, j, (const MethodInfo_3319DC0 *)Method_BetterList_UILabel__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)v11,
                                                                     0,
                                                                     0);
    if ( ((unsigned __int8)updateAgainPanels & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_48;
      v13 = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)v11, v12);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v13, (UnityEngine_Object_o *)font, 0) )
      {
        UIWidget__RemoveFromPanel((UIWidget_o *)v11, 0);
        Panel = UIWidget__CreatePanel((UIWidget_o *)v11, 0);
        v15 = UIPanel_TypeInfo;
        v16 = (UnityEngine_Object_o *)Panel;
        if ( !UIPanel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
          v15 = UIPanel_TypeInfo;
        }
        if ( v15->static_fields->mUpdating )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
          if ( ((unsigned __int8)updateAgainPanels & 1) != 0 )
          {
            if ( !v16 )
              goto LABEL_48;
            if ( UIPanel__get_IsUpdated((UIPanel_o *)v16, 0) )
            {
              v17 = UIPanel_TypeInfo;
              if ( !UIPanel_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
                v17 = UIPanel_TypeInfo;
              }
              updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)v17->static_fields->updateAgainPanels;
              if ( !updateAgainPanels )
                goto LABEL_48;
              System_Collections_Generic_HashSet_object___Add(
                updateAgainPanels,
                (Il2CppObject *)v16,
                (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_UIPanel__Add__);
            }
          }
        }
      }
    }
    updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)UILabel_TypeInfo;
  }
}


void UILabel__OnInit(UILabel_o *this, const MethodInfo *method)
{
  UILabel_c *v3; // x0
  BetterList_T__o *mList; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Font_o *trueTypeFont; // x0
  const MethodInfo *v7; // x2
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0

  if ( (byte_4C47854 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UILabel__Add__);
    sub_1C37058(&UILabel_TypeInfo);
    sub_1C37058(&StringLiteral_10954/*"RANKUP_GRADIENT_BOTTOM"*/);
    sub_1C37058(&StringLiteral_10955/*"RANKUP_GRADIENT_TOP"*/);
    sub_1C37058(&StringLiteral_10956/*"RANKUP_OUTLINE"*/);
    byte_4C47854 = 1;
  }
  UIWidget__OnInit((UIWidget_o *)this, 0);
  v3 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v3 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v3->static_fields->mList;
  if ( !mList )
    sub_1C372B4(0);
  BetterList_object___Add(mList, (Il2CppObject *)this, (const MethodInfo_3319FE8 *)Method_BetterList_UILabel__Add__);
  trueTypeFont = UILabel__get_trueTypeFont(this, v5);
  UILabel__SetActiveFont(this, trueTypeFont, v7);
  v8 = NguiLocalizationManager__Get((System_String_o *)StringLiteral_10955/*"RANKUP_GRADIENT_TOP"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v8, &this->fields.specificGradientTop, 0);
  v9 = NguiLocalizationManager__Get((System_String_o *)StringLiteral_10954/*"RANKUP_GRADIENT_BOTTOM"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v9, &this->fields.specificGradientBottom, 0);
  v10 = NguiLocalizationManager__Get((System_String_o *)StringLiteral_10956/*"RANKUP_OUTLINE"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v10, &this->fields.specificOutline, 0);
}


void UILabel__OnStart(UILabel_o *this, const MethodInfo *method)
{
  float mLineWidth; // s9
  double v4; // d8
  double v5; // d0
  double v6; // d0
  double v7; // d1
  double v8; // d1
  int32_t v9; // w8
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x1
  UnityEngine_Material_o *name; // x0
  UnityEngine_Object_o *shader; // x20
  bool v14; // w0
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4785E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_10725/*"Premultiplied"*/);
    byte_4C4785E = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0);
  mLineWidth = this->fields.mLineWidth;
  if ( mLineWidth <= 0.0 )
    goto LABEL_21;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = mLineWidth;
  v5 = modf(mLineWidth, &iptr);
  if ( mLineWidth >= 0.0 )
  {
    if ( v5 == 0.5 )
    {
      v6 = iptr;
      v7 = 1.0;
LABEL_13:
      v8 = v6 + v7;
      if ( ((__int64)v6 & 1) != 0 )
        v6 = v8;
      goto LABEL_18;
    }
    v6 = floor(v4 + 0.5);
  }
  else
  {
    if ( v5 == -0.5 )
    {
      v6 = iptr;
      v7 = -1.0;
      goto LABEL_13;
    }
    v6 = ceil(v4 + -0.5);
  }
LABEL_18:
  v9 = (int)v6;
  if ( v6 == INFINITY )
    v9 = 0x80000000;
  this->fields.mMaxLineWidth = v9;
  this->fields.mLineWidth = 0.0;
LABEL_21:
  if ( !this->fields.mMultiline )
  {
    this->fields.mMaxLineCount = 1;
    this->fields.mMultiline = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                  this,
                                  this->klass->vtable._24_get_material.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
    goto LABEL_34;
  name = (UnityEngine_Material_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                     this,
                                     this->klass->vtable._24_get_material.method);
  if ( !name )
    goto LABEL_36;
  shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(name, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(shader, 0, 0) )
  {
LABEL_34:
    v14 = 0;
    goto LABEL_35;
  }
  name = (UnityEngine_Material_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                     this,
                                     this->klass->vtable._24_get_material.method);
  if ( !name
    || (name = (UnityEngine_Material_o *)UnityEngine_Material__get_shader(name, 0)) == 0
    || (name = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0)) == 0 )
  {
LABEL_36:
    sub_1C372B4(name);
  }
  v14 = System_String__Contains((System_String_o *)name, (System_String_o *)StringLiteral_10725/*"Premultiplied"*/, 0);
LABEL_35:
  this->fields.mPremultiply = v14;
  UILabel__ProcessAndRequest(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__PrintOverlay(
        UILabel_o *this,
        int32_t start,
        int32_t end,
        UIGeometry_o *caret,
        UIGeometry_o *highlight,
        UnityEngine_Color_o caretColor,
        UnityEngine_Color_o highlightColor,
        const MethodInfo *method)
{
  float a; // s15
  long double v9; // q12
  long double v10; // q13
  float v12; // s11
  float b; // s8
  long double v14; // q9
  const MethodInfo *v21; // x1
  System_String_o *processedText; // x25
  const MethodInfo *v23; // x1
  BetterList_Vector2__o *uvs; // x0
  struct BetterList_Vector3__o *verts; // x27
  int32_t size; // w22
  float finalAlpha; // s8
  struct BetterList_Vector3__o *v28; // x28
  int32_t v29; // w26
  const MethodInfo *v30; // x3
  struct BetterList_Vector3__o *v31; // x1
  long double v32; // q3
  struct BetterList_Vector3__o *v33; // x8
  int v34; // w24
  UnityEngine_Color32_o v35; // x23
  UnityEngine_Color32_o v36; // x1
  long double v37; // q2
  long double v38; // q3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct BetterList_Vector3__o *v41; // x8
  int v42; // w21
  UnityEngine_Color32_o v43; // x20
  UnityEngine_Color32_o v44; // x1
  NGUIText_c *v45; // x0
  struct NGUIText_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  float v49; // [xsp+4Ch] [xbp-54h]
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v51; // 0:s0.4,4:s1.4

  a = highlightColor.fields.a;
  v9 = *(long double *)&highlightColor.fields.b;
  v10 = *(long double *)&highlightColor.fields.g;
  v12 = caretColor.fields.a;
  b = caretColor.fields.b;
  v14 = *(long double *)&caretColor.fields.g;
  if ( (byte_4C47866 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C47866 = 1;
  }
  if ( caret )
    UIGeometry__Clear(caret, 0);
  if ( highlight )
    UIGeometry__Clear(highlight, 0);
  if ( !UILabel__get_isValid(this, *(const MethodInfo **)&start) )
    return;
  processedText = UILabel__get_processedText(this, v21);
  UILabel__UpdateNGUIText(this, v23);
  if ( !caret )
    goto LABEL_34;
  verts = caret->fields.verts;
  v49 = b;
  if ( !verts )
    goto LABEL_34;
  size = verts->fields.size;
  finalAlpha = this->fields.finalAlpha;
  if ( start == end || !highlight )
  {
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    NGUIText__PrintCaretAndSelection(processedText, start, end, verts, 0, 0);
    goto LABEL_28;
  }
  v28 = highlight->fields.verts;
  if ( !v28 )
    goto LABEL_34;
  v29 = v28->fields.size;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  NGUIText__PrintCaretAndSelection(processedText, start, end, verts, v28, 0);
  v31 = highlight->fields.verts;
  if ( !v31 )
LABEL_34:
    sub_1C372B4(uvs);
  if ( v31->fields.size > v29 )
  {
    UILabel__ApplyOffset(this, v31, v29, v30);
    *(float *)&v32 = a * finalAlpha;
    uvs = (BetterList_Vector2__o *)sub_2526688(0, *(long double *)&highlightColor, v10, v9, v32);
    v33 = highlight->fields.verts;
    if ( !v33 )
      goto LABEL_34;
    v34 = v29 - 1;
    v35 = (UnityEngine_Color32_o)(unsigned int)uvs;
    while ( ++v34 < v33->fields.size )
    {
      uvs = highlight->fields.uvs;
      if ( uvs )
      {
        v50.fields.x = 0.5;
        v50.fields.y = 0.5;
        BetterList_Vector2___Add(uvs, v50, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
        uvs = (BetterList_Vector2__o *)highlight->fields.cols;
        if ( uvs )
        {
          v36 = v35;
          BetterList_Color32___Add(
            (BetterList_Color32__o *)uvs,
            v36,
            (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
          v33 = highlight->fields.verts;
          if ( v33 )
            continue;
        }
      }
      goto LABEL_34;
    }
  }
LABEL_28:
  UILabel__ApplyOffset(this, caret->fields.verts, size, v30);
  *(float *)&v37 = v49;
  *(float *)&v38 = v12 * finalAlpha;
  uvs = (BetterList_Vector2__o *)sub_2526688(0, *(long double *)&caretColor, v14, v37, v38);
  v41 = caret->fields.verts;
  if ( !v41 )
    goto LABEL_34;
  v42 = size - 1;
  v43 = (UnityEngine_Color32_o)(unsigned int)uvs;
  while ( ++v42 < v41->fields.size )
  {
    uvs = caret->fields.uvs;
    if ( uvs )
    {
      v51.fields.x = 0.5;
      v51.fields.y = 0.5;
      BetterList_Vector2___Add(uvs, v51, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
      uvs = (BetterList_Vector2__o *)caret->fields.cols;
      if ( uvs )
      {
        v44 = v43;
        BetterList_Color32___Add(
          (BetterList_Color32__o *)uvs,
          v44,
          (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
        v41 = caret->fields.verts;
        if ( v41 )
          continue;
      }
    }
    goto LABEL_34;
  }
  v45 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v45 = NGUIText_TypeInfo;
  }
  v45->static_fields->bitmapFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v39, v40);
  static_fields = NGUIText_TypeInfo->static_fields;
  static_fields->dynamicFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->dynamicFont, 0, v47, v48);
}


void UILabel__ProcessAndRequest(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *ambigiousFont; // x20
  const MethodInfo *v4; // x3

  if ( (byte_4C4785C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4785C = 1;
  }
  ambigiousFont = UILabel__get_ambigiousFont(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ambigiousFont, 0, 0) )
    UILabel__ProcessText_49508816(this, 0, 1, v4);
}


void UILabel__ProcessText(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  UILabel__ProcessText_49508816(this, 0, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__ProcessText_49508816(UILabel_o *this, bool legacyMode, bool full, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  int32_t mMaxLineWidth; // w22
  float z; // s8
  float w; // s9
  float y; // s10
  float x; // s11
  NGUIText_c *v13; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t mMaxLineHeight; // w23
  float v16; // s11
  int rectWidth; // w22
  char v18; // w29
  struct NGUIText_StaticFields *v19; // x8
  uint32_t cctor_finished; // w9
  float v21; // s12
  double v22; // d8
  double v23; // d0
  double v24; // d0
  double v25; // d1
  double v26; // d1
  float v27; // s10
  struct NGUIText_StaticFields *v28; // x8
  int rectHeight; // w23
  char v30; // w27
  uint32_t v31; // w9
  struct NGUIText_StaticFields *v32; // x8
  float v33; // s9
  double v34; // d8
  double v35; // d0
  double v36; // d0
  double v37; // d1
  double v38; // d1
  UnityEngine_Transform_o *cachedTransform; // x0
  float v40; // s8
  double v41; // d9
  const MethodInfo *v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  double v45; // d0
  double v46; // d0
  double v47; // d1
  int32_t defaultFontSize; // w22
  double v49; // d1
  int32_t v50; // w9
  NGUIText_c *v51; // x0
  struct NGUIText_StaticFields *v52; // x8
  UnityEngine_Object_o *trueTypeFont; // x22
  const MethodInfo *v54; // x1
  _BOOL4 v55; // w22
  float pixelSizeAdjustment; // s8
  UnityEngine_Object_o *root; // x23
  int32_t mOverflow; // w8
  NGUIText_c *v59; // x0
  struct System_String_o **p_mProcessedText; // x0
  int32_t v61; // w1
  struct NGUIText_StaticFields *v62; // x9
  struct NGUIText_StaticFields *v63; // x8
  char v64; // w29
  bool keepCrisp; // w0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int mPrintedSize; // w27
  bool v69; // w24
  struct System_String_o **v70; // x23
  NGUIText_c *v71; // x0
  UnityEngine_Object_o *mFont; // x25
  const MethodInfo *v73; // x1
  float mScale; // s8
  int32_t mFontSize; // s8
  bool v76; // w0
  int32_t v77; // w25
  bool v78; // cc
  UnityEngine_Transform_o *v79; // x21
  int32_t v80; // w1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_String_o *v83; // x22
  UnityEngine_Vector2_o v84; // kr00_8
  UILabel_c *klass; // x8
  int32_t v86; // w0
  float v87; // s9
  int32_t v88; // w22
  double v89; // d8
  double v90; // d0
  double v91; // d0
  double v92; // d1
  System_String_o *v93; // x22
  int32_t v94; // w0
  float v95; // s9
  int32_t v96; // w22
  double v97; // d8
  double v98; // d0
  double v99; // d0
  double v100; // d1
  double v101; // d1
  double v102; // d1
  int32_t v103; // w8
  float v104; // s8
  float v105; // s9
  double v106; // d8
  double v107; // d0
  double v108; // d0
  double v109; // d1
  double v110; // d1
  int32_t v111; // w8
  float v112; // s8
  float v113; // s9
  double v114; // d8
  double v115; // d0
  double v116; // d0
  double v117; // d1
  double v118; // d1
  int32_t v119; // w8
  int32_t v120; // w0
  float v121; // s9
  int32_t v122; // w22
  double v123; // d8
  double v124; // d0
  double v125; // d0
  double v126; // d1
  double v127; // d1
  float v128; // s8
  float v129; // s9
  double v130; // d8
  double v131; // d0
  double v132; // d0
  double v133; // d1
  double v134; // d1
  int32_t mWidth; // w9
  float v136; // s9
  double v137; // d8
  double v138; // d0
  double v139; // d0
  double v140; // d1
  double v141; // d1
  int32_t v142; // w1
  float v143; // s9
  double v144; // d8
  double v145; // d0
  double v146; // d0
  double v147; // d1
  double v148; // d1
  int32_t v149; // w1
  UnityEngine_Transform_o *v150; // x20
  NGUIText_c *v151; // x0
  struct NGUIText_StaticFields *v152; // x0
  char v153; // [xsp+Ch] [xbp-94h]
  double iptr; // [xsp+18h] [xbp-88h] BYREF

  if ( (byte_4C4785F & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4785F = 1;
  }
  if ( !UILabel__get_isValid(this, (const MethodInfo *)legacyMode) )
    return;
  this->fields.mChanged = 1;
  this->fields.mShouldBeProcessed = 0;
  if ( legacyMode )
  {
    if ( this->fields.mMaxLineWidth )
      mMaxLineWidth = this->fields.mMaxLineWidth;
    else
      mMaxLineWidth = 1000000;
  }
  else
  {
    mMaxLineWidth = this->fields.mWidth;
  }
  z = this->fields.mDrawRegion.fields.z;
  w = this->fields.mDrawRegion.fields.w;
  x = this->fields.mDrawRegion.fields.x;
  y = this->fields.mDrawRegion.fields.y;
  v13 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v13 = NGUIText_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->rectWidth = mMaxLineWidth;
  if ( legacyMode )
  {
    if ( this->fields.mMaxLineHeight )
      mMaxLineHeight = this->fields.mMaxLineHeight;
    else
      mMaxLineHeight = 1000000;
  }
  else
  {
    mMaxLineHeight = this->fields.mHeight;
  }
  v16 = z - x;
  if ( v13->_2.cctor_finished )
  {
    rectWidth = static_fields->rectWidth;
    static_fields->rectHeight = mMaxLineHeight;
    if ( v16 == 1.0 )
    {
LABEL_18:
      v18 = 1;
      goto LABEL_39;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = NGUIText_TypeInfo;
    v19 = NGUIText_TypeInfo->static_fields;
    cctor_finished = NGUIText_TypeInfo->_2.cctor_finished;
    v19->rectHeight = mMaxLineHeight;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = NGUIText_TypeInfo;
      v19 = NGUIText_TypeInfo->static_fields;
    }
    rectWidth = v19->rectWidth;
    if ( v16 == 1.0 )
      goto LABEL_18;
  }
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  v21 = v16 * (float)rectWidth;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = v21;
  v23 = modf(v21, &iptr);
  if ( v21 >= 0.0 )
  {
    if ( v23 == 0.5 )
    {
      v24 = iptr;
      v25 = 1.0;
LABEL_31:
      v26 = v24 + v25;
      if ( ((__int64)v24 & 1) != 0 )
        v24 = v26;
      goto LABEL_36;
    }
    v24 = floor(v22 + 0.5);
  }
  else
  {
    if ( v23 == -0.5 )
    {
      v24 = iptr;
      v25 = -1.0;
      goto LABEL_31;
    }
    v24 = ceil(v22 + -0.5);
  }
LABEL_36:
  v13 = NGUIText_TypeInfo;
  v18 = 0;
  if ( v24 == INFINITY )
    rectWidth = 0x80000000;
  else
    rectWidth = (int)v24;
LABEL_39:
  v27 = w - y;
  if ( v13->_2.cctor_finished )
  {
    v28 = v13->static_fields;
    rectHeight = v28->rectHeight;
    v28->regionWidth = rectWidth;
    if ( v27 == 1.0 )
    {
LABEL_41:
      v30 = 1;
      goto LABEL_62;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = NGUIText_TypeInfo;
    v31 = NGUIText_TypeInfo->_2.cctor_finished;
    v32 = NGUIText_TypeInfo->static_fields;
    v32->regionWidth = rectWidth;
    if ( !v31 )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = NGUIText_TypeInfo;
      v32 = NGUIText_TypeInfo->static_fields;
    }
    rectHeight = v32->rectHeight;
    if ( v27 == 1.0 )
      goto LABEL_41;
  }
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  v33 = v27 * (float)rectHeight;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = v33;
  v35 = modf(v33, &iptr);
  if ( v33 >= 0.0 )
  {
    if ( v35 == 0.5 )
    {
      v36 = iptr;
      v37 = 1.0;
LABEL_54:
      v38 = v36 + v37;
      if ( ((__int64)v36 & 1) != 0 )
        v36 = v38;
      goto LABEL_59;
    }
    v36 = floor(v34 + 0.5);
  }
  else
  {
    if ( v35 == -0.5 )
    {
      v36 = iptr;
      v37 = -1.0;
      goto LABEL_54;
    }
    v36 = ceil(v34 + -0.5);
  }
LABEL_59:
  v13 = NGUIText_TypeInfo;
  v30 = 0;
  if ( v36 == INFINITY )
    rectHeight = 0x80000000;
  else
    rectHeight = (int)v36;
LABEL_62:
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = NGUIText_TypeInfo;
  }
  v13->static_fields->regionHeight = rectHeight;
  if ( !legacyMode )
  {
    defaultFontSize = UILabel__get_defaultFontSize(this, v7);
    goto LABEL_84;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_319;
  LODWORD(v40) = (unsigned int)UnityEngine_Transform__get_localScale(cachedTransform, 0);
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v41 = v40;
  v45 = modf(v40, &iptr);
  if ( v40 >= 0.0 )
  {
    if ( v45 == 0.5 )
    {
      v46 = iptr;
      v47 = 1.0;
LABEL_76:
      v49 = v46 + v47;
      if ( ((__int64)v46 & 1) != 0 )
        v46 = v49;
      goto LABEL_81;
    }
    v46 = floor(v41 + 0.5);
  }
  else
  {
    if ( v45 == -0.5 )
    {
      v46 = iptr;
      v47 = -1.0;
      goto LABEL_76;
    }
    v46 = ceil(v41 + -0.5);
  }
LABEL_81:
  if ( v46 == INFINITY )
    defaultFontSize = 0x80000000;
  else
    defaultFontSize = (int)v46;
LABEL_84:
  if ( !byte_4C3D918 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3D918 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( defaultFontSize >= 0 )
    v50 = defaultFontSize;
  else
    v50 = -defaultFontSize;
  this->fields.mPrintedSize = v50;
  this->fields.mScale = 1.0;
  v51 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v51 = NGUIText_TypeInfo;
  }
  v52 = v51->static_fields;
  if ( v52->regionWidth < 1 )
    goto LABEL_115;
  if ( !v51->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v51);
    v52 = NGUIText_TypeInfo->static_fields;
  }
  if ( v52->regionHeight < 0 )
  {
LABEL_115:
    p_mProcessedText = &this->fields.mProcessedText;
    v61 = StringLiteral_1/*""*/;
    this->fields.mProcessedText = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_317:
    sub_1C36FFC((CGThumbnailListItem_o *)p_mProcessedText, v61, v43, v44);
    return;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, v42);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v55 = UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0);
  pixelSizeAdjustment = 1.0;
  if ( !v55 || !UILabel__get_keepCrisp(this, v54) )
  {
LABEL_109:
    this->fields.mDensity = pixelSizeAdjustment;
    goto LABEL_110;
  }
  root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(root, 0, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      if ( !root )
        goto LABEL_319;
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)root, v54);
    }
    goto LABEL_109;
  }
LABEL_110:
  if ( full )
    UILabel__UpdateNGUIText(this, v54);
  mOverflow = this->fields.mOverflow;
  if ( mOverflow != 2
    || ((v59 = NGUIText_TypeInfo, !NGUIText_TypeInfo->_2.cctor_finished)
      ? (j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo), v59 = NGUIText_TypeInfo, mOverflow = this->fields.mOverflow)
      : (mOverflow = 2),
        v62 = v59->static_fields,
        v62->rectWidth = 1000000,
        v62->regionWidth = 1000000,
        mOverflow != 2) )
  {
    if ( mOverflow != 3 )
      goto LABEL_123;
    v59 = NGUIText_TypeInfo;
  }
  if ( !v59->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v59);
    v59 = NGUIText_TypeInfo;
  }
  v63 = v59->static_fields;
  v63->rectHeight = 1000000;
  v63->regionHeight = 1000000;
LABEL_123:
  if ( this->fields.mPrintedSize < 1 )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    v79 = cachedTransform;
    if ( !byte_4C3C926 )
    {
      cachedTransform = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( v79 )
    {
      UnityEngine_Transform__set_localScale(v79, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v80 = StringLiteral_1/*""*/;
      this->fields.mProcessedText = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mProcessedText, v80, v81, v82);
      this->fields.mScale = 1.0;
      goto LABEL_313;
    }
LABEL_319:
    sub_1C372B4(cachedTransform);
  }
  v153 = v18;
  v64 = v30;
  keepCrisp = UILabel__get_keepCrisp(this, v54);
  mPrintedSize = this->fields.mPrintedSize;
  if ( mPrintedSize < 1 )
    goto LABEL_313;
  v69 = keepCrisp;
  v70 = &this->fields.mProcessedText;
  while ( 1 )
  {
    if ( v69 )
    {
      this->fields.mPrintedSize = mPrintedSize;
      v71 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v71 = NGUIText_TypeInfo;
      }
      v71->static_fields->fontSize = mPrintedSize;
    }
    else
    {
      mFont = (UnityEngine_Object_o *)this->fields.mFont;
      this->fields.mScale = (float)mPrintedSize / (float)this->fields.mPrintedSize;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( ((v55 | UnityEngine_Object__op_Equality(mFont, 0, 0)) & 1) != 0 )
      {
        mScale = this->fields.mScale;
      }
      else
      {
        cachedTransform = (UnityEngine_Transform_o *)this->fields.mFont;
        if ( !cachedTransform )
          goto LABEL_319;
        mFontSize = this->fields.mFontSize;
        mScale = this->fields.mScale
               * (float)((float)mFontSize / (float)UIFont__get_defaultSize((UIFont_o *)cachedTransform, v73));
      }
      v71 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v71 = NGUIText_TypeInfo;
      }
      v71->static_fields->fontScale = mScale;
    }
    if ( !v71->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v71);
    NGUIText__Update_49309860(0, 0);
    v76 = NGUIText__WrapText_49325012(this->fields.mText, &this->fields.mProcessedText, 1, 0);
    v77 = this->fields.mOverflow;
    if ( v76 || v77 )
      break;
    v78 = mPrintedSize < 3;
    mPrintedSize -= 2;
    if ( v78 )
      goto LABEL_313;
  }
  if ( v77 == 2 )
  {
    v83 = *v70;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v84 = NGUIText__CalculatePrintedSize(v83, 0);
    klass = this->klass;
    this->fields.mCalculatedSize = v84;
    v86 = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._34_get_minWidth.methodPtr)(
            this,
            klass->vtable._34_get_minWidth.method);
    v87 = this->fields.mCalculatedSize.fields.x;
    v88 = v86;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v89 = v87;
    v90 = modf(v87, &iptr);
    if ( v87 >= 0.0 )
    {
      if ( v90 != 0.5 )
      {
        v91 = floor(v89 + 0.5);
        goto LABEL_182;
      }
      v91 = iptr;
      v92 = 1.0;
    }
    else
    {
      if ( v90 != -0.5 )
      {
        v91 = ceil(v89 + -0.5);
        goto LABEL_182;
      }
      v91 = iptr;
      v92 = -1.0;
    }
    v101 = v91 + v92;
    if ( ((__int64)v91 & 1) != 0 )
      v91 = v101;
LABEL_182:
    if ( v91 == INFINITY )
      v103 = 0x80000000;
    else
      v103 = (int)v91;
    if ( v88 > v103 )
      v103 = v88;
    this->fields.mWidth = v103;
    if ( (v153 & 1) != 0 )
    {
LABEL_226:
      v120 = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
               this,
               this->klass->vtable._35_get_minHeight.method);
      v121 = this->fields.mCalculatedSize.fields.y;
      v122 = v120;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v123 = v121;
      v124 = modf(v121, &iptr);
      if ( v121 >= 0.0 )
      {
        if ( v124 != 0.5 )
        {
          v125 = floor(v123 + 0.5);
          goto LABEL_240;
        }
        v125 = iptr;
        v126 = 1.0;
      }
      else
      {
        if ( v124 != -0.5 )
        {
          v125 = ceil(v123 + -0.5);
          goto LABEL_240;
        }
        v125 = iptr;
        v126 = -1.0;
      }
      v127 = v125 + v126;
      if ( ((__int64)v125 & 1) != 0 )
        v125 = v127;
LABEL_240:
      if ( v125 == INFINITY )
        v111 = 0x80000000;
      else
        v111 = (int)v125;
      if ( v122 > v111 )
        v111 = v122;
      this->fields.mHeight = v111;
      if ( (v64 & 1) != 0 )
        goto LABEL_264;
      v128 = (float)v111;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      v129 = v128 / v27;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v130 = v129;
      v131 = modf(v129, &iptr);
      if ( v129 >= 0.0 )
      {
        if ( v131 == 0.5 )
        {
          v132 = iptr;
          v133 = 1.0;
LABEL_255:
          v134 = v132 + v133;
          if ( ((__int64)v132 & 1) != 0 )
            v132 = v134;
          goto LABEL_260;
        }
        v132 = floor(v130 + 0.5);
      }
      else
      {
        if ( v131 == -0.5 )
        {
          v132 = iptr;
          v133 = -1.0;
          goto LABEL_255;
        }
        v132 = ceil(v130 + -0.5);
      }
LABEL_260:
      if ( v132 == INFINITY )
        v111 = 0x80000000;
      else
        v111 = (int)v132;
      this->fields.mHeight = v111;
LABEL_264:
      mWidth = this->fields.mWidth;
      if ( (mWidth & 1) != 0 )
        this->fields.mWidth = mWidth + 1;
      goto LABEL_272;
    }
    v104 = (float)v103;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v105 = v104 / v16;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v106 = v105;
    v107 = modf(v105, &iptr);
    if ( v105 >= 0.0 )
    {
      if ( v107 == 0.5 )
      {
        v108 = iptr;
        v109 = 1.0;
LABEL_197:
        v110 = v108 + v109;
        if ( ((__int64)v108 & 1) != 0 )
          v108 = v110;
        goto LABEL_222;
      }
      v108 = floor(v106 + 0.5);
    }
    else
    {
      if ( v107 == -0.5 )
      {
        v108 = iptr;
        v109 = -1.0;
        goto LABEL_197;
      }
      v108 = ceil(v106 + -0.5);
    }
LABEL_222:
    if ( v108 == INFINITY )
      v119 = 0x80000000;
    else
      v119 = (int)v108;
    this->fields.mWidth = v119;
    goto LABEL_226;
  }
  v93 = *v70;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
  this->fields.mCalculatedSize = NGUIText__CalculatePrintedSize(v93, 0);
  if ( v77 == 3 )
  {
    v94 = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
            this,
            this->klass->vtable._35_get_minHeight.method);
    v95 = this->fields.mCalculatedSize.fields.y;
    v96 = v94;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v97 = v95;
    v98 = modf(v95, &iptr);
    if ( v95 >= 0.0 )
    {
      if ( v98 != 0.5 )
      {
        v99 = floor(v97 + 0.5);
        goto LABEL_202;
      }
      v99 = iptr;
      v100 = 1.0;
    }
    else
    {
      if ( v98 != -0.5 )
      {
        v99 = ceil(v97 + -0.5);
        goto LABEL_202;
      }
      v99 = iptr;
      v100 = -1.0;
    }
    v102 = v99 + v100;
    if ( ((__int64)v99 & 1) != 0 )
      v99 = v102;
LABEL_202:
    if ( v99 == INFINITY )
      v111 = 0x80000000;
    else
      v111 = (int)v99;
    if ( v96 > v111 )
      v111 = v96;
    this->fields.mHeight = v111;
    if ( (v64 & 1) != 0 )
      goto LABEL_272;
    v112 = (float)v111;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v113 = v112 / v27;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v114 = v113;
    v115 = modf(v113, &iptr);
    if ( v113 >= 0.0 )
    {
      if ( v115 == 0.5 )
      {
        v116 = iptr;
        v117 = 1.0;
LABEL_217:
        v118 = v116 + v117;
        if ( ((__int64)v116 & 1) != 0 )
          v116 = v118;
        goto LABEL_268;
      }
      v116 = floor(v114 + 0.5);
    }
    else
    {
      if ( v115 == -0.5 )
      {
        v116 = iptr;
        v117 = -1.0;
        goto LABEL_217;
      }
      v116 = ceil(v114 + -0.5);
    }
LABEL_268:
    if ( v116 == INFINITY )
      v111 = 0x80000000;
    else
      v111 = (int)v116;
    this->fields.mHeight = v111;
LABEL_272:
    if ( (v111 & 1) != 0 )
      this->fields.mHeight = v111 + 1;
  }
  if ( !legacyMode )
    goto LABEL_313;
  v136 = this->fields.mCalculatedSize.fields.x;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v137 = v136;
  v138 = modf(v136, &iptr);
  if ( v136 >= 0.0 )
  {
    if ( v138 != 0.5 )
    {
      v139 = floor(v137 + 0.5);
      goto LABEL_289;
    }
    v139 = iptr;
    v140 = 1.0;
  }
  else
  {
    if ( v138 != -0.5 )
    {
      v139 = ceil(v137 + -0.5);
      goto LABEL_289;
    }
    v139 = iptr;
    v140 = -1.0;
  }
  v141 = v139 + v140;
  if ( ((__int64)v139 & 1) != 0 )
    v139 = v141;
LABEL_289:
  if ( v139 == INFINITY )
    v142 = 0x80000000;
  else
    v142 = (int)v139;
  UIWidget__set_width((UIWidget_o *)this, v142, 0);
  v143 = this->fields.mCalculatedSize.fields.y;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v144 = v143;
  v145 = modf(v143, &iptr);
  if ( v143 >= 0.0 )
  {
    if ( v145 != 0.5 )
    {
      v146 = floor(v144 + 0.5);
      goto LABEL_306;
    }
    v146 = iptr;
    v147 = 1.0;
  }
  else
  {
    if ( v145 != -0.5 )
    {
      v146 = ceil(v144 + -0.5);
      goto LABEL_306;
    }
    v146 = iptr;
    v147 = -1.0;
  }
  v148 = v146 + v147;
  if ( ((__int64)v146 & 1) != 0 )
    v146 = v148;
LABEL_306:
  if ( v146 == INFINITY )
    v149 = 0x80000000;
  else
    v149 = (int)v146;
  UIWidget__set_height((UIWidget_o *)this, v149, 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  v150 = cachedTransform;
  if ( !byte_4C3C926 )
  {
    cachedTransform = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v150 )
    goto LABEL_319;
  UnityEngine_Transform__set_localScale(v150, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
LABEL_313:
  if ( full )
  {
    v151 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v151 = NGUIText_TypeInfo;
    }
    v151->static_fields->bitmapFont = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v66, v67);
    v61 = 0;
    v152 = NGUIText_TypeInfo->static_fields;
    v152->dynamicFont = 0;
    p_mProcessedText = (struct System_String_o **)&v152->dynamicFont;
    goto LABEL_317;
  }
}


void UILabel__RemoveFromDynamicFontList(UILabel_o *this, const MethodInfo *method)
{
  UILabel_c *v3; // x0
  BetterList_T__o *mList; // x0

  if ( (byte_4C47859 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UILabel__Remove__);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C47859 = 1;
  }
  v3 = UILabel_TypeInfo;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
    v3 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v3->static_fields->mList;
  if ( !mList )
    sub_1C372B4(0);
  BetterList_object___Remove(
    mList,
    (Il2CppObject *)this,
    (const MethodInfo_331A2A0 *)Method_BetterList_UILabel__Remove__);
}


void UILabel__SetActiveFont(UILabel_o *this, UnityEngine_Font_o *fnt, const MethodInfo *method)
{
  UnityEngine_Object_o *mActiveTTF; // x21
  Il2CppObject **p_mActiveTTF; // x20
  Il2CppObject *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UILabel_c *v10; // x0
  System_Collections_Generic_Dictionary_object__int__o *mFontUsage; // x0
  UILabel_c *v12; // x0
  int v13; // w23
  Il2CppObject *v14; // x1
  Il2CppObject *v15; // x19
  UILabel_c *v16; // x0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C47856 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Font__int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Font__int__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Font__int__set_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    byte_4C47856 = 1;
  }
  value = 0;
  mActiveTTF = (UnityEngine_Object_o *)this->fields.mActiveTTF;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mActiveTTF, (UnityEngine_Object_o *)fnt, 0) )
  {
    p_mActiveTTF = (Il2CppObject **)&this->fields.mActiveTTF;
    v7 = *p_mActiveTTF;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
    {
      v10 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v10 = UILabel_TypeInfo;
      }
      mFontUsage = (System_Collections_Generic_Dictionary_object__int__o *)v10->static_fields->mFontUsage;
      if ( !mFontUsage )
        goto LABEL_28;
      if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
             mFontUsage,
             *p_mActiveTTF,
             &value,
             (const MethodInfo_345C0BC *)Method_System_Collections_Generic_Dictionary_Font__int__TryGetValue__) )
      {
        v12 = UILabel_TypeInfo;
        v13 = value - 1;
        value = v13 & ~(v13 >> 31);
        if ( !UILabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
          v12 = UILabel_TypeInfo;
        }
        v14 = *p_mActiveTTF;
        mFontUsage = (System_Collections_Generic_Dictionary_object__int__o *)v12->static_fields->mFontUsage;
        if ( v13 <= 0 )
        {
          if ( !mFontUsage )
            goto LABEL_28;
          System_Collections_Generic_Dictionary_object__int___Remove(
            mFontUsage,
            v14,
            (const MethodInfo_345BDAC *)Method_System_Collections_Generic_Dictionary_Font__int__Remove__);
        }
        else
        {
          if ( !mFontUsage )
            goto LABEL_28;
          System_Collections_Generic_Dictionary_object__int___set_Item(
            mFontUsage,
            v14,
            value,
            (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_Font__int__set_Item__);
        }
      }
    }
    *p_mActiveTTF = (Il2CppObject *)fnt;
    sub_1C36FFC((CGThumbnailListItem_o *)p_mActiveTTF, (int32_t)fnt, v8, v9);
    v15 = *p_mActiveTTF;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
    {
      v16 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v16 = UILabel_TypeInfo;
      }
      mFontUsage = (System_Collections_Generic_Dictionary_object__int__o *)v16->static_fields->mFontUsage;
      if ( mFontUsage )
      {
        System_Collections_Generic_Dictionary_object__int___set_Item(
          mFontUsage,
          *p_mActiveTTF,
          1,
          (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_Font__int__set_Item__);
        return;
      }
LABEL_28:
      sub_1C372B4(mFontUsage);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UILabel__SetCondensedScale(UILabel_o *this, int32_t maxWidth, int32_t correctWidth, const MethodInfo *method)
{
  UILabel__SetCondensedScale_49525996(this, (float)maxWidth, (float)correctWidth, *(const MethodInfo **)&maxWidth);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__SetCondensedScale_49525996(UILabel_o *this, float maxWidth, float correctWidth, const MethodInfo *method)
{
  float v5; // s9
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v7; // x19
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8

  v5 = (float)this->fields.mWidth + correctWidth;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v7 = transform;
  if ( v5 <= maxWidth )
  {
    if ( !byte_4C3C926 )
    {
      transform = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( v7 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_8;
    }
LABEL_9:
    sub_1C372B4(transform);
  }
  if ( !transform )
    goto LABEL_9;
  x = maxWidth / v5;
  y = 1.0;
  z = 1.0;
LABEL_8:
  UnityEngine_Transform__set_localScale(v7, *(UnityEngine_Vector3_o *)&x, 0);
}


void UILabel__SetCurrentPercent(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  UIProgressBar_o *v4; // x0
  float value; // s8
  float v6; // s9
  double v7; // d8
  double v8; // d0
  double v9; // d0
  double v10; // d1
  double v11; // d1
  int v12; // w8
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  int v16; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C4786B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIProgressBar_TypeInfo);
    sub_1C37058(&StringLiteral_479/*"%"*/);
    byte_4C4786B = 1;
  }
  v16 = 0;
  current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    v4 = UIProgressBar_TypeInfo->static_fields->current;
    if ( !v4 )
      sub_1C372B4(0);
    value = UIProgressBar__get_value(v4, 0);
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v6 = value * 100.0;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = v6;
    v8 = modf(v6, &iptr);
    if ( v6 >= 0.0 )
    {
      if ( v8 == 0.5 )
      {
        v9 = iptr;
        v10 = 1.0;
LABEL_16:
        v11 = v9 + v10;
        if ( ((__int64)v9 & 1) != 0 )
          v9 = v11;
        goto LABEL_21;
      }
      v9 = floor(v7 + 0.5);
    }
    else
    {
      if ( v8 == -0.5 )
      {
        v9 = iptr;
        v10 = -1.0;
        goto LABEL_16;
      }
      v9 = ceil(v7 + -0.5);
    }
LABEL_21:
    if ( v9 == INFINITY )
      v12 = 0x80000000;
    else
      v12 = (int)v9;
    v16 = v12;
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    v14 = System_String__Concat_63561656(v13, (System_String_o *)StringLiteral_479/*"%"*/, 0);
    UILabel__set_text(this, v14, v15);
  }
}


void UILabel__SetCurrentPercentFloat(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  UIProgressBar_o *v4; // x0
  float value; // s8
  float v6; // s9
  double v7; // d8
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  bool v18; // zf
  float v19; // s0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  float v23; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C47871 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&UIProgressBar_TypeInfo);
    sub_1C37058(&StringLiteral_25058/*"{0:0.0}%"*/);
    byte_4C47871 = 1;
  }
  current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    v4 = UIProgressBar_TypeInfo->static_fields->current;
    if ( !v4 )
      sub_1C372B4(0);
    value = UIProgressBar__get_value(v4, 0);
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v6 = value * 1000.0;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = v6;
    v14 = modf(v6, &iptr);
    if ( v6 >= 0.0 )
    {
      if ( v14 == 0.5 )
      {
        v15 = iptr;
        v16 = 1.0;
LABEL_16:
        v17 = v15 + v16;
        if ( ((__int64)v15 & 1) != 0 )
          v15 = v17;
        goto LABEL_21;
      }
      v15 = floor(v7 + 0.5);
    }
    else
    {
      if ( v14 == -0.5 )
      {
        v15 = iptr;
        v16 = -1.0;
        goto LABEL_16;
      }
      v15 = ceil(v7 + -0.5);
    }
LABEL_21:
    v18 = v15 == INFINITY;
    v19 = (float)(int)v15 / 10.0;
    if ( v18 )
      v19 = -214750000.0;
    v23 = fminf(v19, 100.0);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v23, v8, v9, v10, v11, v12, v13);
    v21 = System_String__Format((System_String_o *)StringLiteral_25058/*"{0:0.0}%"*/, v20, 0);
    UILabel__set_text(this, v21, v22);
  }
}


void UILabel__SetCurrentProgress(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  UIProgressBar_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x2
  System_String_o format; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4786A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIProgressBar_TypeInfo);
    sub_1C37058(&StringLiteral_6386/*"F"*/);
    byte_4C4786A = 1;
  }
  current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    v4 = UIProgressBar_TypeInfo->static_fields->current;
    if ( !v4 )
      sub_1C372B4(0);
    LODWORD(format.klass) = UIProgressBar__get_value(v4, 0);
    v5 = System_Single__ToString_65156916(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6386/*"F"*/);
    UILabel__set_text(this, v5, v6);
  }
}


void UILabel__SetCurrentSelection(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x0
  const MethodInfo *v5; // x2
  struct UIPopupList_o *v6; // x8
  System_String_o *mSelectedItem; // x20

  if ( (byte_4C4786C & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIPopupList_TypeInfo);
    byte_4C4786C = 1;
  }
  current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (System_String_o *)UnityEngine_Object__op_Inequality(current, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = UIPopupList_TypeInfo->static_fields->current;
    if ( !v6 )
      goto LABEL_14;
    mSelectedItem = v6->fields.mSelectedItem;
    if ( v6->fields.isLocalized )
    {
      if ( !Localization_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v4 = Localization__Get(mSelectedItem, 0);
      mSelectedItem = v4;
    }
    if ( !this )
LABEL_14:
      sub_1C372B4(v4);
    UILabel__set_text(this, mSelectedItem, v5);
  }
}


void UILabel__SetDefaultFont(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o *mFont; // x20
  UILabel_c *v5; // x0
  UnityEngine_Object_o *defaultFont; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Font_c *v10; // x1
  struct UILabel_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p_defaultFont; // x0
  struct UILabel_StaticFields *v13; // x0
  UILabel_c *v14; // x0
  UnityEngine_Object_o *v15; // x20
  const MethodInfo *v16; // x2
  UILabel_c *v17; // x0

  if ( (byte_4C47870 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Font_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    sub_1C37058(&StringLiteral_6804/*"Fonts/FGO-Main-Font"*/);
    byte_4C47870 = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
  {
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mFont, 0, 0) )
    {
      v5 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v5 = UILabel_TypeInfo;
      }
      defaultFont = (UnityEngine_Object_o *)v5->static_fields->defaultFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(defaultFont, 0, 0) )
        goto LABEL_22;
      v9 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_6804/*"Fonts/FGO-Main-Font"*/, 0);
      if ( !UILabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
      if ( v9 )
      {
        v10 = UnityEngine_Font_TypeInfo;
        if ( (UnityEngine_Font_c *)v9->klass == UnityEngine_Font_TypeInfo )
        {
          static_fields = UILabel_TypeInfo->static_fields;
          static_fields->defaultFont = (struct UnityEngine_Font_o *)v9;
          p_defaultFont = (CGThumbnailListItem_o *)&static_fields->defaultFont;
          if ( (UnityEngine_Font_c *)v9->klass == v10 )
            goto LABEL_21;
        }
        sub_1C37574(v9);
      }
      v13 = UILabel_TypeInfo->static_fields;
      v13->defaultFont = (struct UnityEngine_Font_o *)v9;
      p_defaultFont = (CGThumbnailListItem_o *)&v13->defaultFont;
LABEL_21:
      sub_1C36FFC(p_defaultFont, (int32_t)v9, v7, v8);
LABEL_22:
      v14 = UILabel_TypeInfo;
      if ( !UILabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
        v14 = UILabel_TypeInfo;
      }
      v15 = (UnityEngine_Object_o *)v14->static_fields->defaultFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
      {
        v17 = UILabel_TypeInfo;
        if ( !UILabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
          v17 = UILabel_TypeInfo;
        }
        UILabel__set_trueTypeFont(this, v17->static_fields->defaultFont, v16);
      }
    }
  }
}


void UILabel__UpdateCondensedScaleComponent(UILabel_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C47872 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47872 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C372B4(v4);
    UILabel__SetCondensedScale_49525996(this, (float)SLODWORD(Component_object[3].monitor), 0.0, v5);
  }
}


void UILabel__UpdateNGUIText(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x21
  _BOOL4 v4; // w0
  NGUIText_c *v5; // x8
  int32_t mPrintedSize; // w22
  _BOOL4 v7; // w20
  struct NGUIText_StaticFields *static_fields; // x8
  __int64 v9; // d0
  float v10; // s8
  float v11; // s9
  float v12; // s9
  double v13; // d8
  double v14; // d0
  double v15; // d0
  double v16; // d1
  double v17; // d1
  int32_t v18; // w9
  float v19; // s9
  float mHeight; // s8
  float v21; // s9
  double v22; // d8
  double v23; // d0
  double v24; // d0
  double v25; // d1
  double v26; // d1
  int32_t v27; // w9
  UnityEngine_Object_o *mFont; // x22
  const MethodInfo *v29; // x1
  bool v30; // w22
  UIFont_o *bitmapFont; // x0
  NGUIText_c *v32; // x0
  struct NGUIText_StaticFields *v33; // x8
  struct NGUIText_StaticFields *v34; // x8
  float mFloatSpacingY; // s0
  UnityEngine_Object_o *v36; // x22
  const MethodInfo *v37; // x1
  float mScale; // s8
  int32_t mFontSize; // s8
  NGUIText_c *v40; // x0
  struct NGUIText_StaticFields *v41; // x8
  UnityEngine_Object_o *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  NGUIText_c *v45; // x0
  UnityEngine_Object_o *castClass; // x21
  UIFont_o **p_bitmapFont; // x8
  UIAtlas_c *klass; // x8
  bool v49; // w0
  const MethodInfo *v50; // x1
  NGUIText_c *v51; // x8
  bool v52; // w22
  bool isDynamic; // w0
  const MethodInfo *v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  NGUIText_c *v57; // x8
  bool v58; // w21
  struct NGUIText_StaticFields *v59; // x0
  UnityEngine_Font_o *dynamicFont; // x0
  int32_t v61; // w1
  struct NGUIText_StaticFields *v62; // x8
  CGThumbnailListItem_o *v63; // x0
  NGUIText_c *v64; // x0
  struct NGUIText_StaticFields *v65; // x0
  CGThumbnailListItem_o *p_dynamicFont; // x0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x3
  UnityEngine_Object_o *root; // x20
  const MethodInfo *v70; // x1
  float pixelSizeAdjustment; // s8
  NGUIText_c *v72; // x0
  float mDensity; // s8
  NGUIText_c *v74; // x0
  int32_t mWidth; // w20
  struct NGUIText_StaticFields *v76; // x9
  float v77; // s8
  float v78; // s9
  float v79; // s9
  double v80; // d8
  double v81; // d0
  double v82; // d0
  double v83; // d1
  double v84; // d1
  int32_t v85; // w9
  float v86; // s9
  float v87; // s8
  float v88; // s9
  double v89; // d8
  double v90; // d0
  double v91; // d0
  double v92; // d1
  double v93; // d1
  int32_t v94; // w9
  int32_t mAlignment; // w20
  unsigned int mPivot; // w8
  int v97; // w8
  struct UnityEngine_Color_o iptr; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_4C4786E & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4786E = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0);
  v5 = NGUIText_TypeInfo;
  mPrintedSize = this->fields.mPrintedSize;
  v7 = v4;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v5 = NGUIText_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->fontSize = mPrintedSize;
  static_fields->fontStyle = this->fields.mFontStyle;
  v9 = *(_QWORD *)&this->fields.mWidth;
  *(_QWORD *)&static_fields->rectWidth = v9;
  v10 = (float)(int)v9;
  v11 = this->fields.mDrawRegion.fields.z - this->fields.mDrawRegion.fields.x;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  v12 = v11 * v10;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = v12;
  v14 = modf(v12, (double *)&iptr.fields.r);
  if ( v12 >= 0.0 )
  {
    if ( v14 != 0.5 )
    {
      v15 = floor(v13 + 0.5);
      goto LABEL_21;
    }
    v15 = *(double *)&iptr.fields.r;
    v16 = 1.0;
  }
  else
  {
    if ( v14 != -0.5 )
    {
      v15 = ceil(v13 + -0.5);
      goto LABEL_21;
    }
    v15 = *(double *)&iptr.fields.r;
    v16 = -1.0;
  }
  v17 = v15 + v16;
  if ( ((__int64)v15 & 1) != 0 )
    v15 = v17;
LABEL_21:
  v18 = (int)v15;
  if ( v15 == INFINITY )
    v18 = 0x80000000;
  NGUIText_TypeInfo->static_fields->regionWidth = v18;
  v19 = this->fields.mDrawRegion.fields.w - this->fields.mDrawRegion.fields.y;
  mHeight = (float)this->fields.mHeight;
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  v21 = v19 * mHeight;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = v21;
  v23 = modf(v21, (double *)&iptr.fields.r);
  if ( v21 >= 0.0 )
  {
    if ( v23 != 0.5 )
    {
      v24 = floor(v22 + 0.5);
      goto LABEL_37;
    }
    v24 = *(double *)&iptr.fields.r;
    v25 = 1.0;
  }
  else
  {
    if ( v23 != -0.5 )
    {
      v24 = ceil(v22 + -0.5);
      goto LABEL_37;
    }
    v24 = *(double *)&iptr.fields.r;
    v25 = -1.0;
  }
  v26 = v24 + v25;
  if ( ((__int64)v24 & 1) != 0 )
    v24 = v26;
LABEL_37:
  if ( v24 == INFINITY )
    v27 = 0x80000000;
  else
    v27 = (int)v24;
  NGUIText_TypeInfo->static_fields->regionHeight = v27;
  if ( this->fields.mApplyGradient )
  {
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mFont, 0, 0) )
    {
      v30 = 1;
    }
    else
    {
      bitmapFont = this->fields.mFont;
      if ( !bitmapFont )
        goto LABEL_159;
      v30 = !UIFont__get_packedFontShader(bitmapFont, v29);
    }
  }
  else
  {
    v30 = 0;
  }
  v32 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v32 = NGUIText_TypeInfo;
  }
  v33 = v32->static_fields;
  v33->gradient = v30;
  v33->gradientTop = this->fields.mGradientTop;
  iptr = this->fields.mGradientBottom;
  v32->static_fields->gradientBottom = iptr;
  v34 = v32->static_fields;
  v34->encoding = this->fields.mEncoding;
  v34->premultiply = this->fields.mPremultiply;
  v34->symbolStyle = this->fields.mSymbols;
  v34->maxLines = this->fields.mMaxLineCount;
  if ( this->fields.mUseFloatSpacing )
  {
    v34->spacingX = this->fields.mFloatSpacingX;
    mFloatSpacingY = this->fields.mFloatSpacingY;
  }
  else
  {
    v34->spacingX = (float)this->fields.mSpacingX;
    mFloatSpacingY = (float)this->fields.mSpacingY;
  }
  v34->spacingY = mFloatSpacingY;
  v36 = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( ((v7 | UnityEngine_Object__op_Equality(v36, 0, 0)) & 1) != 0 )
  {
    mScale = this->fields.mScale;
  }
  else
  {
    bitmapFont = this->fields.mFont;
    if ( !bitmapFont )
      goto LABEL_159;
    mFontSize = this->fields.mFontSize;
    mScale = this->fields.mScale * (float)((float)mFontSize / (float)UIFont__get_defaultSize(bitmapFont, v37));
  }
  v40 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v40 = NGUIText_TypeInfo;
  }
  v41 = v40->static_fields;
  v41->fontScale = mScale;
  v41->specificGradientTop = this->fields.specificGradientTop;
  iptr = this->fields.specificGradientBottom;
  v40->static_fields->specificGradientBottom = iptr;
  v40->static_fields->outlineEffect = this->fields.specificOutline;
  v40->static_fields->outlineDistance = this->fields.mEffectDistance;
  v42 = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
  {
    v45 = NGUIText_TypeInfo;
    castClass = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v45 = NGUIText_TypeInfo;
    }
    p_bitmapFont = &v45->static_fields->bitmapFont;
    do
    {
      *p_bitmapFont = (UIFont_o *)castClass;
      sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, (int32_t)castClass, v43, v44);
      bitmapFont = (UIFont_o *)NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        bitmapFont = (UIFont_o *)NGUIText_TypeInfo;
      }
      klass = bitmapFont[1].fields.mAtlas->klass;
      if ( !klass )
        goto LABEL_159;
      castClass = (UnityEngine_Object_o *)klass->_1.castClass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v49 = UnityEngine_Object__op_Equality(castClass, 0, 0);
      v51 = NGUIText_TypeInfo;
      v52 = v49;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v51 = NGUIText_TypeInfo;
      }
      p_bitmapFont = &v51->static_fields->bitmapFont;
    }
    while ( !v52 );
    bitmapFont = *p_bitmapFont;
    if ( !*p_bitmapFont )
      goto LABEL_159;
    isDynamic = UIFont__get_isDynamic(bitmapFont, v50);
    v57 = NGUIText_TypeInfo;
    v58 = isDynamic;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v57 = NGUIText_TypeInfo;
    }
    v59 = v57->static_fields;
    if ( !v58 )
    {
      v59->dynamicFont = 0;
      p_dynamicFont = (CGThumbnailListItem_o *)&v59->dynamicFont;
      goto LABEL_86;
    }
    bitmapFont = v59->bitmapFont;
    if ( !bitmapFont )
      goto LABEL_159;
    dynamicFont = UIFont__get_dynamicFont(bitmapFont, v54);
    v61 = (int)dynamicFont;
    v62 = NGUIText_TypeInfo->static_fields;
    v62->dynamicFont = dynamicFont;
    v63 = (CGThumbnailListItem_o *)&v62->dynamicFont;
  }
  else
  {
    v64 = NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v64 = NGUIText_TypeInfo;
    }
    v65 = v64->static_fields;
    v61 = (int)trueTypeFont;
    v65->dynamicFont = (struct UnityEngine_Font_o *)trueTypeFont;
    v63 = (CGThumbnailListItem_o *)&v65->dynamicFont;
  }
  sub_1C36FFC(v63, v61, v43, v44);
  NGUIText_TypeInfo->static_fields->bitmapFont = 0;
  p_dynamicFont = (CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields;
LABEL_86:
  sub_1C36FFC(p_dynamicFont, 0, v55, v56);
  if ( v7 && UILabel__get_keepCrisp(this, v67) )
  {
    root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(root, 0, 0) )
    {
      v72 = NGUIText_TypeInfo;
      goto LABEL_102;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bitmapFont = (UIFont_o *)UnityEngine_Object__op_Inequality(root, 0, 0);
    pixelSizeAdjustment = 1.0;
    if ( ((unsigned __int8)bitmapFont & 1) == 0 )
      goto LABEL_96;
    if ( root )
    {
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)root, v70);
LABEL_96:
      v72 = NGUIText_TypeInfo;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v72 = NGUIText_TypeInfo;
      }
      v72->static_fields->pixelDensity = pixelSizeAdjustment;
      goto LABEL_102;
    }
LABEL_159:
    sub_1C372B4(bitmapFont);
  }
  v72 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v72 = NGUIText_TypeInfo;
  }
  v72->static_fields->pixelDensity = 1.0;
LABEL_102:
  mDensity = this->fields.mDensity;
  if ( !v72->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v72);
    v72 = NGUIText_TypeInfo;
  }
  if ( mDensity != v72->static_fields->pixelDensity )
  {
    UILabel__ProcessText_49508816(this, 0, 0, v68);
    v74 = NGUIText_TypeInfo;
    mWidth = this->fields.mWidth;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      v74 = NGUIText_TypeInfo;
    }
    v76 = v74->static_fields;
    v77 = (float)this->fields.mWidth;
    v76->rectWidth = mWidth;
    v76->rectHeight = this->fields.mHeight;
    v78 = this->fields.mDrawRegion.fields.z - this->fields.mDrawRegion.fields.x;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v79 = v78 * v77;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v80 = v79;
    v81 = modf(v79, (double *)&iptr.fields.r);
    if ( v79 >= 0.0 )
    {
      if ( v81 != 0.5 )
      {
        v82 = floor(v80 + 0.5);
        goto LABEL_122;
      }
      v82 = *(double *)&iptr.fields.r;
      v83 = 1.0;
    }
    else
    {
      if ( v81 != -0.5 )
      {
        v82 = ceil(v80 + -0.5);
        goto LABEL_122;
      }
      v82 = *(double *)&iptr.fields.r;
      v83 = -1.0;
    }
    v84 = v82 + v83;
    if ( ((__int64)v82 & 1) != 0 )
      v82 = v84;
LABEL_122:
    v85 = (int)v82;
    if ( v82 == INFINITY )
      v85 = 0x80000000;
    NGUIText_TypeInfo->static_fields->regionWidth = v85;
    v86 = this->fields.mDrawRegion.fields.w - this->fields.mDrawRegion.fields.y;
    v87 = (float)this->fields.mHeight;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v88 = v86 * v87;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v89 = v88;
    v90 = modf(v88, (double *)&iptr.fields.r);
    if ( v88 >= 0.0 )
    {
      if ( v90 == 0.5 )
      {
        v91 = *(double *)&iptr.fields.r;
        v92 = 1.0;
LABEL_133:
        v93 = v91 + v92;
        if ( ((__int64)v91 & 1) != 0 )
          v91 = v93;
        goto LABEL_138;
      }
      v91 = floor(v89 + 0.5);
    }
    else
    {
      if ( v90 == -0.5 )
      {
        v91 = *(double *)&iptr.fields.r;
        v92 = -1.0;
        goto LABEL_133;
      }
      v91 = ceil(v89 + -0.5);
    }
LABEL_138:
    v72 = NGUIText_TypeInfo;
    v94 = (int)v91;
    if ( v91 == INFINITY )
      v94 = 0x80000000;
    NGUIText_TypeInfo->static_fields->regionHeight = v94;
  }
  mAlignment = this->fields.mAlignment;
  if ( mAlignment )
  {
    if ( !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = NGUIText_TypeInfo;
    }
    goto LABEL_156;
  }
  mPivot = this->fields.mPivot;
  if ( mPivot > 8 )
  {
LABEL_153:
    if ( !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = NGUIText_TypeInfo;
    }
    mAlignment = 2;
    goto LABEL_156;
  }
  v97 = 1 << mPivot;
  if ( (v97 & 0x49) == 0 )
  {
    if ( (v97 & 0x124) != 0 )
    {
      if ( !v72->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v72);
        v72 = NGUIText_TypeInfo;
      }
      mAlignment = 3;
      goto LABEL_156;
    }
    goto LABEL_153;
  }
  if ( !v72->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v72);
    v72 = NGUIText_TypeInfo;
  }
  mAlignment = 1;
LABEL_156:
  v72->static_fields->alignment = mAlignment;
  if ( !v72->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v72);
  NGUIText__Update(0);
}


void UILabel__UpgradeFrom265(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t mMaxLineWidth; // w1
  int32_t v5; // w8
  int32_t mMaxLineHeight; // w1
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v8; // x1
  UIFont_o *v9; // x0
  const MethodInfo *v10; // x1
  int defaultSize; // w20
  int v12; // w8
  int32_t v13; // w8
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C4785A & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4785A = 1;
  }
  UILabel__ProcessText_49508816(this, 1, 1, v2);
  if ( this->fields.mShrinkToFit )
  {
    if ( this->fields.mOverflow )
    {
      this->fields.mOverflow = 0;
      this->fields.mChanged = 1;
      this->fields.mShouldBeProcessed = 1;
    }
    this->fields.mMaxLineCount = 0;
  }
  mMaxLineWidth = this->fields.mMaxLineWidth;
  if ( mMaxLineWidth )
  {
    UIWidget__set_width((UIWidget_o *)this, mMaxLineWidth, 0);
    if ( this->fields.mMaxLineCount <= 0 )
      v5 = 0;
    else
      v5 = 3;
    if ( this->fields.mOverflow != v5 )
    {
      this->fields.mOverflow = v5;
      this->fields.mChanged = 1;
      this->fields.mShouldBeProcessed = 1;
    }
  }
  else if ( this->fields.mOverflow != 2 )
  {
    this->fields.mOverflow = 2;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
  mMaxLineHeight = this->fields.mMaxLineHeight;
  if ( mMaxLineHeight )
    UIWidget__set_height((UIWidget_o *)this, mMaxLineHeight, 0);
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
  {
    v9 = this->fields.mFont;
    if ( !v9 )
      sub_1C372B4(0);
    defaultSize = UIFont__get_defaultSize(v9, v8);
    if ( this->fields.mHeight < defaultSize )
      UIWidget__set_height((UIWidget_o *)this, defaultSize, 0);
    if ( defaultSize >= 256 )
      v12 = 256;
    else
      v12 = defaultSize;
    v13 = v12 & ~(v12 >> 31);
    if ( this->fields.mFontSize != v13 )
    {
      this->fields.mFontSize = v13;
      this->fields.mChanged = 1;
      this->fields.mShouldBeProcessed = 1;
      UILabel__ProcessAndRequest(this, v10);
    }
  }
  *(_QWORD *)&this->fields.mMaxLineWidth = 0;
  this->fields.mShrinkToFit = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_49348336(gameObject, 1, 0);
}


bool UILabel__Wrap(UILabel_o *this, System_String_o *text, System_String_o **final, const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return UILabel__Wrap_49524692(this, text, final, 1000000, v4);
}


bool UILabel__Wrap_49524692(
        UILabel_o *this,
        System_String_o *text,
        System_String_o **final,
        int32_t height,
        const MethodInfo *method)
{
  NGUIText_c *v9; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  bool v11; // w19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct NGUIText_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C4786D & 1) == 0 )
  {
    sub_1C37058(&NGUIText_TypeInfo);
    byte_4C4786D = 1;
  }
  UILabel__UpdateNGUIText(this, (const MethodInfo *)text);
  v9 = NGUIText_TypeInfo;
  if ( !NGUIText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    v9 = NGUIText_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->rectHeight = height;
  static_fields->regionHeight = height;
  v11 = NGUIText__WrapText(text, final, 0);
  NGUIText_TypeInfo->static_fields->bitmapFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)NGUIText_TypeInfo->static_fields, 0, v12, v13);
  v14 = NGUIText_TypeInfo->static_fields;
  v14->dynamicFont = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->dynamicFont, 0, v15, v16);
  return v11;
}


int32_t UILabel__get_alignment(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mAlignment;
}


UnityEngine_Object_o *UILabel__get_ambigiousFont(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFont; // x20
  bool v4; // w0
  __int64 v5; // x8

  if ( (byte_4C4784E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4784E = 1;
  }
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mFont, 0, 0);
  v5 = 400;
  if ( v4 )
    v5 = 408;
  return *(UnityEngine_Object_o **)((char *)&this->klass + v5);
}


bool UILabel__get_applyGradient(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mApplyGradient;
}


UIFont_o *UILabel__get_bitmapFont(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mFont;
}


int32_t UILabel__get_defaultFontSize(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v6; // x1
  UIFont_o *v7; // x0

  if ( (byte_4C47851 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47851 = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
    return this->fields.mFontSize;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mFont, 0, 0) )
    return 16;
  v7 = this->fields.mFont;
  if ( !v7 )
    sub_1C372B4(0);
  return UIFont__get_defaultSize(v7, v6);
}


UnityEngine_Vector4_o UILabel__get_drawingDimensions(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_49508816(this, 0, 1, v2);
  return UIWidget__get_drawingDimensions((UIWidget_o *)this, 0);
}


UnityEngine_Color_o UILabel__get_effectColor(UILabel_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mEffectColor.fields.r;
  g = this->fields.mEffectColor.fields.g;
  b = this->fields.mEffectColor.fields.b;
  a = this->fields.mEffectColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Vector2_o UILabel__get_effectDistance(UILabel_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.mEffectDistance.fields.x;
  y = this->fields.mEffectDistance.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t UILabel__get_effectStyle(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mEffectStyle;
}


float UILabel__get_effectiveSpacingX(UILabel_o *this, const MethodInfo *method)
{
  if ( this->fields.mUseFloatSpacing )
    return this->fields.mFloatSpacingX;
  else
    return (float)this->fields.mSpacingX;
}


float UILabel__get_effectiveSpacingY(UILabel_o *this, const MethodInfo *method)
{
  if ( this->fields.mUseFloatSpacing )
    return this->fields.mFloatSpacingY;
  else
    return (float)this->fields.mSpacingY;
}


float UILabel__get_floatSpacingX(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mFloatSpacingX;
}


float UILabel__get_floatSpacingY(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mFloatSpacingY;
}


UIFont_o *UILabel__get_font(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mFont;
}


int32_t UILabel__get_fontSize(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mFontSize;
}


int32_t UILabel__get_fontStyle(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mFontStyle;
}


UnityEngine_Color_o UILabel__get_gradientBottom(UILabel_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mGradientBottom.fields.r;
  g = this->fields.mGradientBottom.fields.g;
  b = this->fields.mGradientBottom.fields.b;
  a = this->fields.mGradientBottom.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Color_o UILabel__get_gradientTop(UILabel_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mGradientTop.fields.r;
  g = this->fields.mGradientTop.fields.g;
  b = this->fields.mGradientTop.fields.b;
  a = this->fields.mGradientTop.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


bool UILabel__get_isAnchoredHorizontally(UILabel_o *this, const MethodInfo *method)
{
  return UIRect__get_isAnchoredHorizontally((UIRect_o *)this, 0) || this->fields.mOverflow == 2;
}


bool UILabel__get_isAnchoredVertically(UILabel_o *this, const MethodInfo *method)
{
  return UIRect__get_isAnchoredVertically((UIRect_o *)this, 0) || (this->fields.mOverflow & 0xFFFFFFFE) == 2;
}


bool UILabel__get_isValid(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFont; // x20
  UnityEngine_Object_o *mTrueTypeFont; // x19

  if ( (byte_4C47853 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47853 = 1;
  }
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
    return 1;
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(mTrueTypeFont, 0, 0);
}


bool UILabel__get_keepCrisp(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *trueTypeFont; // x20

  if ( (byte_4C47852 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47852 = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) && this->fields.keepCrispWhenShrunk == 2;
}


int32_t UILabel__get_lineHeight(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mHeight;
}


int32_t UILabel__get_lineWidth(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mWidth;
}


UnityEngine_Vector3_array *UILabel__get_localCorners(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_49508816(this, 0, 1, v2);
  return UIWidget__get_localCorners((UIWidget_o *)this, 0);
}


UnityEngine_Vector2_o UILabel__get_localSize(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o localSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_49508816(this, 0, 1, v2);
  localSize = UIWidget__get_localSize((UIWidget_o *)this, 0);
  y = localSize.fields.y;
  x = localSize.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Material_o *UILabel__get_material(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMaterial; // x20
  UnityEngine_Material_o *result; // x0
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v6; // x1
  UIFont_o *v7; // x0
  UnityEngine_Object_o *mTrueTypeFont; // x20
  bool v9; // w8

  if ( (byte_4C47849 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47849 = 1;
  }
  mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMaterial, 0, 0) )
    return this->fields.mMaterial;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
  {
    v7 = this->fields.mFont;
    if ( v7 )
      return UIFont__get_material(v7, v6);
    goto LABEL_18;
  }
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(mTrueTypeFont, 0, 0);
  result = 0;
  if ( v9 )
  {
    v7 = (UIFont_o *)this->fields.mTrueTypeFont;
    if ( v7 )
      return UnityEngine_Font__get_material((UnityEngine_Font_o *)v7, 0);
LABEL_18:
    sub_1C372B4(v7);
  }
  return result;
}


int32_t UILabel__get_maxLineCount(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mMaxLineCount;
}


bool UILabel__get_multiLine(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mMaxLineCount != 1;
}


int32_t UILabel__get_overflowMethod(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mOverflow;
}


UnityEngine_Vector2_o UILabel__get_printedSize(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_49508816(this, 0, 1, v2);
  x = this->fields.mCalculatedSize.fields.x;
  y = this->fields.mCalculatedSize.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_String_o *UILabel__get_processedText(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t mWidth; // w8
  int32_t mHeight; // w9

  mWidth = this->fields.mWidth;
  if ( this->fields.mLastWidth == mWidth )
  {
    mHeight = this->fields.mHeight;
    if ( this->fields.mLastHeight == mHeight )
    {
      if ( !this->fields.mShouldBeProcessed )
        return this->fields.mProcessedText;
      goto LABEL_7;
    }
  }
  else
  {
    mHeight = this->fields.mHeight;
  }
  this->fields.mLastWidth = mWidth;
  this->fields.mLastHeight = mHeight;
  this->fields.mShouldBeProcessed = 1;
LABEL_7:
  UILabel__ProcessText_49508816(this, 0, 1, v2);
  return this->fields.mProcessedText;
}


bool UILabel__get_shouldBeProcessed(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mShouldBeProcessed;
}


bool UILabel__get_shrinkToFit(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mOverflow == 0;
}


int32_t UILabel__get_spacingX(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mSpacingX;
}


int32_t UILabel__get_spacingY(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mSpacingY;
}


bool UILabel__get_supportEncoding(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mEncoding;
}


int32_t UILabel__get_symbolStyle(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mSymbols;
}


System_String_o *UILabel__get_text(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mText;
}


UnityEngine_Font_o *UILabel__get_trueTypeFont(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrueTypeFont; // x20
  UnityEngine_Font_o *result; // x0
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v6; // x1
  bool v7; // w8
  UIFont_o *v8; // x0

  if ( (byte_4C4784C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4784C = 1;
  }
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTrueTypeFont, 0, 0) )
    return this->fields.mTrueTypeFont;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(mFont, 0, 0);
  result = 0;
  if ( v7 )
  {
    v8 = this->fields.mFont;
    if ( !v8 )
      sub_1C372B4(0);
    return UIFont__get_dynamicFont(v8, v6);
  }
  return result;
}


bool UILabel__get_useFloatSpacing(UILabel_o *this, const MethodInfo *method)
{
  return this->fields.mUseFloatSpacing;
}


UnityEngine_Vector3_array *UILabel__get_worldCorners(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_49508816(this, 0, 1, v2);
  return UIWidget__get_worldCorners((UIWidget_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__set_alignment(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mAlignment != value )
  {
    this->fields.mAlignment = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
    UILabel__ProcessAndRequest(this, *(const MethodInfo **)&value);
  }
}


void UILabel__set_ambigiousFont(UILabel_o *this, UnityEngine_Object_o *value, const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v6; // x21
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *v8; // x1

  if ( (byte_4C4784F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Font_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIFont_TypeInfo);
    byte_4C4784F = 1;
  }
  if ( value
    && (naturalAligment = UIFont_TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UIFont_c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == UIFont_TypeInfo )
      v6 = value;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    UILabel__set_bitmapFont(this, (UIFont_o *)v6, v7);
  }
  else
  {
    if ( value )
    {
      if ( (UnityEngine_Font_c *)value->klass == UnityEngine_Font_TypeInfo )
        v8 = value;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    UILabel__set_trueTypeFont(this, (UnityEngine_Font_o *)v8, v7);
  }
}


void UILabel__set_applyGradient(UILabel_o *this, bool value, const MethodInfo *method)
{
  UILabel_c *klass; // x9

  if ( this->fields.mApplyGradient != value )
  {
    klass = this->klass;
    this->fields.mApplyGradient = value;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_bitmapFont(UILabel_o *this, UIFont_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mFont; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C4784B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4784B = 1;
  }
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFont, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mFont = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFont, (int32_t)value, v6, v7);
    this->fields.mTrueTypeFont = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrueTypeFont, 0, v8, v9);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_effectColor(UILabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  int32_t mEffectStyle; // w8

  if ( (float)((float)((float)(this->fields.mEffectColor.fields.a - value.fields.a)
                     * (float)(this->fields.mEffectColor.fields.a - value.fields.a))
             + (float)((float)((float)(this->fields.mEffectColor.fields.b - value.fields.b)
                             * (float)(this->fields.mEffectColor.fields.b - value.fields.b))
                     + (float)((float)((float)(this->fields.mEffectColor.fields.r - value.fields.r)
                                     * (float)(this->fields.mEffectColor.fields.r - value.fields.r))
                             + (float)((float)(this->fields.mEffectColor.fields.g - value.fields.g)
                                     * (float)(this->fields.mEffectColor.fields.g - value.fields.g))))) >= 1.0e-10 )
  {
    mEffectStyle = this->fields.mEffectStyle;
    this->fields.mEffectColor = value;
    if ( mEffectStyle )
    {
      this->fields.mChanged = 1;
      this->fields.mShouldBeProcessed = 1;
    }
  }
}


void UILabel__set_effectDistance(UILabel_o *this, UnityEngine_Vector2_o value, const MethodInfo *method)
{
  if ( (float)((float)((float)(this->fields.mEffectDistance.fields.x - value.fields.x)
                     * (float)(this->fields.mEffectDistance.fields.x - value.fields.x))
             + (float)((float)(this->fields.mEffectDistance.fields.y - value.fields.y)
                     * (float)(this->fields.mEffectDistance.fields.y - value.fields.y))) >= 1.0e-10 )
  {
    this->fields.mEffectDistance = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
}


void UILabel__set_effectStyle(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mEffectStyle != value )
  {
    this->fields.mEffectStyle = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
}


void UILabel__set_floatSpacingX(UILabel_o *this, float value, const MethodInfo *method)
{
  float mFloatSpacingX; // s9
  float v6; // s1
  float v7; // s2
  float v8; // s0
  float Epsilon; // s3
  UILabel_c *klass; // x8

  mFloatSpacingX = this->fields.mFloatSpacingX;
  if ( !byte_4C3C925 )
  {
    sub_1C37058(&UnityEngine_Mathf_TypeInfo);
    byte_4C3C925 = 1;
  }
  v6 = fabsf(mFloatSpacingX);
  v7 = fabsf(value);
  if ( v6 <= v7 )
    v6 = v7;
  v8 = v6 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v6 * 0.000001) <= (float)(Epsilon * 8.0) )
    v8 = Epsilon * 8.0;
  if ( vabds_f32(value, mFloatSpacingX) >= v8 )
  {
    klass = this->klass;
    this->fields.mFloatSpacingX = value;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_floatSpacingY(UILabel_o *this, float value, const MethodInfo *method)
{
  float mFloatSpacingY; // s9
  float v6; // s1
  float v7; // s2
  float v8; // s0
  float Epsilon; // s3
  UILabel_c *klass; // x8

  mFloatSpacingY = this->fields.mFloatSpacingY;
  if ( !byte_4C3C925 )
  {
    sub_1C37058(&UnityEngine_Mathf_TypeInfo);
    byte_4C3C925 = 1;
  }
  v6 = fabsf(mFloatSpacingY);
  v7 = fabsf(value);
  if ( v6 <= v7 )
    v6 = v7;
  v8 = v6 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v6 * 0.000001) <= (float)(Epsilon * 8.0) )
    v8 = Epsilon * 8.0;
  if ( vabds_f32(value, mFloatSpacingY) >= v8 )
  {
    klass = this->klass;
    this->fields.mFloatSpacingY = value;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UILabel__set_fontSize(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  int32_t v3; // w8
  int32_t v4; // w8

  if ( value >= 256 )
    v3 = 256;
  else
    v3 = value;
  v4 = v3 & ~(v3 >> 31);
  if ( this->fields.mFontSize != v4 )
  {
    this->fields.mFontSize = v4;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
    UILabel__ProcessAndRequest(this, *(const MethodInfo **)&value);
  }
}


// local variable allocation has failed, the output may be wrong!
void UILabel__set_fontStyle(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mFontStyle != value )
  {
    this->fields.mFontStyle = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
    UILabel__ProcessAndRequest(this, *(const MethodInfo **)&value);
  }
}


void UILabel__set_gradientBottom(UILabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  _BOOL4 mApplyGradient; // w8

  if ( (float)((float)((float)(this->fields.mGradientBottom.fields.a - value.fields.a)
                     * (float)(this->fields.mGradientBottom.fields.a - value.fields.a))
             + (float)((float)((float)(this->fields.mGradientBottom.fields.b - value.fields.b)
                             * (float)(this->fields.mGradientBottom.fields.b - value.fields.b))
                     + (float)((float)((float)(this->fields.mGradientBottom.fields.r - value.fields.r)
                                     * (float)(this->fields.mGradientBottom.fields.r - value.fields.r))
                             + (float)((float)(this->fields.mGradientBottom.fields.g - value.fields.g)
                                     * (float)(this->fields.mGradientBottom.fields.g - value.fields.g))))) >= 1.0e-10 )
  {
    mApplyGradient = this->fields.mApplyGradient;
    this->fields.mGradientBottom = value;
    if ( mApplyGradient )
      ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
        this,
        this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_gradientTop(UILabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  _BOOL4 mApplyGradient; // w8

  if ( (float)((float)((float)(this->fields.mGradientTop.fields.a - value.fields.a)
                     * (float)(this->fields.mGradientTop.fields.a - value.fields.a))
             + (float)((float)((float)(this->fields.mGradientTop.fields.b - value.fields.b)
                             * (float)(this->fields.mGradientTop.fields.b - value.fields.b))
                     + (float)((float)((float)(this->fields.mGradientTop.fields.r - value.fields.r)
                                     * (float)(this->fields.mGradientTop.fields.r - value.fields.r))
                             + (float)((float)(this->fields.mGradientTop.fields.g - value.fields.g)
                                     * (float)(this->fields.mGradientTop.fields.g - value.fields.g))))) >= 1.0e-10 )
  {
    mApplyGradient = this->fields.mApplyGradient;
    this->fields.mGradientTop = value;
    if ( mApplyGradient )
      ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
        this,
        this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_lineHeight(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget__set_height((UIWidget_o *)this, value, 0);
}


void UILabel__set_lineWidth(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget__set_width((UIWidget_o *)this, value, 0);
}


void UILabel__set_material(UILabel_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mMaterial; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4784A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4784A = 1;
  }
  mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMaterial, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mMaterial = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMaterial, (int32_t)value, v6, v7);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_maxLineCount(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  int32_t mOverflow; // w9

  if ( this->fields.mMaxLineCount != value )
  {
    mOverflow = this->fields.mOverflow;
    this->fields.mMaxLineCount = value & ~(value >> 31);
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
    if ( !mOverflow )
      ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._33_MakePixelPerfect.methodPtr)(
        this,
        this->klass->vtable._33_MakePixelPerfect.method);
  }
}


void UILabel__set_multiLine(UILabel_o *this, bool value, const MethodInfo *method)
{
  if ( (this->fields.mMaxLineCount != 1) != value )
  {
    this->fields.mChanged = 1;
    this->fields.mMaxLineCount = !value;
    this->fields.mShouldBeProcessed = 1;
  }
}


void UILabel__set_overflowMethod(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mOverflow != value )
  {
    this->fields.mOverflow = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
}


void UILabel__set_shouldBeProcessed(UILabel_o *this, bool value, const MethodInfo *method)
{
  bool v3; // w8

  if ( value )
  {
    v3 = 1;
    this->fields.mChanged = 1;
  }
  else
  {
    v3 = 0;
  }
  this->fields.mShouldBeProcessed = v3;
}


void UILabel__set_shrinkToFit(UILabel_o *this, bool value, const MethodInfo *method)
{
  if ( value )
  {
    if ( this->fields.mOverflow )
    {
      this->fields.mOverflow = 0;
      this->fields.mChanged = 1;
      this->fields.mShouldBeProcessed = 1;
    }
  }
}


void UILabel__set_spacingX(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  UILabel_c *klass; // x8

  if ( this->fields.mSpacingX != value )
  {
    klass = this->klass;
    this->fields.mSpacingX = value;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_spacingY(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  UILabel_c *klass; // x8

  if ( this->fields.mSpacingY != value )
  {
    klass = this->klass;
    this->fields.mSpacingY = value;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_supportEncoding(UILabel_o *this, bool value, const MethodInfo *method)
{
  if ( this->fields.mEncoding != value )
  {
    this->fields.mEncoding = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
}


void UILabel__set_symbolStyle(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mSymbols != value )
  {
    this->fields.mSymbols = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
}


void UILabel__set_text(UILabel_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o **p_mText; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_o **v8; // x0
  int32_t v9; // w1
  const MethodInfo *v10; // x1

  if ( (byte_4C47850 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C47850 = 1;
  }
  if ( !System_String__op_Equality(this->fields.mText, value, 0) )
  {
    p_mText = &this->fields.mText;
    if ( System_String__IsNullOrEmpty(value, 0) )
    {
      if ( System_String__IsNullOrEmpty(*p_mText, 0) )
        goto LABEL_10;
      v8 = &this->fields.mText;
      v9 = StringLiteral_1/*""*/;
      this->fields.mText = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      if ( !System_String__op_Inequality(*p_mText, value, 0) )
        goto LABEL_10;
      v8 = &this->fields.mText;
      v9 = (int)value;
      this->fields.mText = value;
    }
    sub_1C36FFC((CGThumbnailListItem_o *)v8, v9, v6, v7);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
    UILabel__ProcessAndRequest(this, v10);
LABEL_10:
    if ( this->fields.autoResizeBoxCollider )
      UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  }
}


void UILabel__set_trueTypeFont(UILabel_o *this, UnityEngine_Font_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrueTypeFont; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *mActiveTTF; // x20

  if ( (byte_4C4784D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4784D = 1;
  }
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTrueTypeFont, (UnityEngine_Object_o *)value, 0) )
  {
    UILabel__SetActiveFont(this, 0, v6);
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mTrueTypeFont = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrueTypeFont, (int32_t)value, v7, v8);
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
    this->fields.mFont = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFont, 0, v9, v10);
    UILabel__SetActiveFont(this, value, v11);
    UILabel__ProcessAndRequest(this, v12);
    mActiveTTF = (UnityEngine_Object_o *)this->fields.mActiveTTF;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mActiveTTF, 0, 0) )
      UIWidget__MarkAsChanged((UIWidget_o *)this, 0);
  }
}


void UILabel__set_useFloatSpacing(UILabel_o *this, bool value, const MethodInfo *method)
{
  if ( this->fields.mUseFloatSpacing != value )
  {
    this->fields.mUseFloatSpacing = value;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
}