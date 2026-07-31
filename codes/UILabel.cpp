void UILabel___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_Dictionary_object__int__o *v8; // x19
  struct UILabel_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  BetterList_Vector3__c *v16; // x0
  BetterList_Vector3__o *v17; // x19
  struct UILabel_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  BetterList_int__o *v25; // x19
  struct UILabel_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_593CFCF & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3___ctor__);
    sub_21FFC50(&Method_BetterList_int___ctor__);
    sub_21FFC50(&Method_BetterList_UILabel___ctor__);
    sub_21FFC50(&BetterList_Vector3__TypeInfo);
    sub_21FFC50(&BetterList_int__TypeInfo);
    sub_21FFC50(&BetterList_UILabel__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Font__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_Font__int__TypeInfo);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFCF = 1;
  }
  v1 = (BetterList_T__o *)sub_21FFEBC(BetterList_UILabel__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3E3C988 *)Method_BetterList_UILabel___ctor__);
  UILabel_TypeInfo->static_fields->mList = (struct BetterList_UILabel__o *)v1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)UILabel_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_Font__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v8,
    (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_Font__int___ctor__);
  static_fields = UILabel_TypeInfo->static_fields;
  static_fields->mFontUsage = (struct System_Collections_Generic_Dictionary_Font__int__o *)v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->mFontUsage, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = BetterList_Vector3__TypeInfo;
  UILabel_TypeInfo->static_fields->mTexRebuildAdded = 0;
  v17 = (BetterList_Vector3__o *)sub_21FFEBC(v16);
  BetterList_Vector3____ctor(v17, (const MethodInfo_3E3E7D0 *)Method_BetterList_Vector3___ctor__);
  v18 = UILabel_TypeInfo->static_fields;
  v18->mTempVerts = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->mTempVerts, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  v25 = (BetterList_int__o *)sub_21FFEBC(BetterList_int__TypeInfo);
  BetterList_int____ctor(v25, (const MethodInfo_3E3BFBC *)Method_BetterList_int___ctor__);
  v26 = UILabel_TypeInfo->static_fields;
  v26->mTempIndices = v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->mTempIndices, (int32_t)v25, v27, v28, v29, v30, v31, v32);
}


void UILabel___ctor(UILabel_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  struct UnityEngine_Color_o v10; // q3
  int v11; // w8
  UnityEngine_Vector2_c *v17; // x8
  struct UnityEngine_Vector2_o oneVector; // d2
  int v19; // w9
  struct UnityEngine_Vector2_o zeroVector; // d0

  if ( (byte_593CFCE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CFCE = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.keepCrispWhenShrunk = 1;
  this->fields.mText = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mText, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = (struct UnityEngine_Color_o)xmmword_E93460;
  this->fields.mFontSize = 16;
  v11 = (unsigned __int8)byte_59373DF;
  this->fields.mEncoding = 1;
  this->fields.mEffectColor = (struct UnityEngine_Color_o)xmmword_E93460;
  this->fields.mSymbols = 1;
  if ( !v11 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    v10 = (struct UnityEngine_Color_o)xmmword_E93460;
    byte_59373DF = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v17 = UnityEngine_Vector2_TypeInfo;
  oneVector = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  v19 = (unsigned __int8)byte_5931820;
  this->fields.mMultiline = 1;
  this->fields.mShouldBeProcessed = 1;
  this->fields.mGradientBottom = (struct UnityEngine_Color_o)xmmword_E939B0;
  this->fields.mGradientTop = _Q0;
  this->fields.specificGradientTop = _Q0;
  this->fields.specificGradientBottom = _Q0;
  this->fields.specificOutline = v10;
  this->fields.mEffectDistance = oneVector;
  this->fields.mDensity = 1.0;
  if ( !v19 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    v17 = UnityEngine_Vector2_TypeInfo;
    byte_5931820 = 1;
  }
  zeroVector = v17->static_fields->zeroVector;
  this->fields.mScale = 1.0;
  this->fields.mCalculatedSize = zeroVector;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


void UILabel__AddToDynamicFontList(UILabel_o *this, const MethodInfo *method)
{
  UILabel_c *v3; // x0
  BetterList_T__o *mList; // x0
  UILabel_c *v5; // x0

  if ( (byte_593CFB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UILabel__Add__);
    sub_21FFC50(&Method_BetterList_UILabel__Contains__);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFB3 = 1;
  }
  v3 = UILabel_TypeInfo;
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, method);
    v3 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v3->static_fields->mList;
  if ( !mList )
    goto LABEL_11;
  if ( BetterList_object___Contains(
         mList,
         (Il2CppObject *)this,
         (const MethodInfo_3E3C408 *)Method_BetterList_UILabel__Contains__) )
  {
    return;
  }
  v5 = UILabel_TypeInfo;
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, method);
    v5 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v5->static_fields->mList;
  if ( !mList )
LABEL_11:
    sub_21FFECC(mList, method);
  BetterList_object___Add(mList, (Il2CppObject *)this, (const MethodInfo_3E3C260 *)Method_BetterList_UILabel__Add__);
}


UnityEngine_Vector2_o UILabel__ApplyOffset(
        UILabel_o *this,
        BetterList_Vector3__o *verts,
        int32_t start,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  float y; // s2
  float x; // s3
  float v10; // s9
  float v11; // s8
  double v12; // d0
  double v13; // d0
  float v14; // s2
  float v15; // s1
  __int64 v16; // x8
  float v17; // s0
  __int64 v18; // x0
  __int64 v19; // x1
  double v20; // d0
  double v21; // d0
  float v22; // s2
  float v23; // s1
  float v24; // s0
  int32_t size; // w8
  struct UnityEngine_Vector3_array *buffer; // x9
  float32x2_t *v27; // x10
  float v28; // [xsp+0h] [xbp-50h]
  double iptr; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  y = 1.0;
  if ( pivotOffset.fields.x <= 1.0 )
    x = pivotOffset.fields.x;
  else
    x = 1.0;
  if ( pivotOffset.fields.x < 0.0 )
    x = 0.0;
  if ( pivotOffset.fields.y <= 1.0 )
    y = pivotOffset.fields.y;
  if ( pivotOffset.fields.y < 0.0 )
    y = 0.0;
  v10 = (float)(x * (float)-this->fields.mWidth) + 0.0;
  v11 = (float)((float)((float)(0.0 - (float)this->fields.mHeight) * y) + (float)this->fields.mHeight)
      + (float)((float)(this->fields.mCalculatedSize.fields.y - (float)this->fields.mHeight)
              + (float)(y * (float)(0.0 - (float)(this->fields.mCalculatedSize.fields.y - (float)this->fields.mHeight))));
  v12 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v17 = floorf(v10 + 0.5);
      goto LABEL_20;
    }
    v13 = iptr;
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v17 = ceilf(v10 + -0.5);
      goto LABEL_20;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v15 = v13;
  v16 = (__int64)v13;
  v17 = v15 + v14;
  if ( (v16 & 1) == 0 )
    v17 = v15;
LABEL_20:
  v28 = v17;
  v20 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v23 = floorf(v11 + 0.5);
      goto LABEL_30;
    }
    v21 = iptr;
    v22 = 1.0;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v23 = ceilf(v11 + -0.5);
      goto LABEL_30;
    }
    v21 = iptr;
    v22 = -1.0;
  }
  v23 = v21;
  if ( ((__int64)v21 & 1) != 0 )
    v23 = v23 + v22;
LABEL_30:
  v24 = v28;
  if ( !verts )
    goto LABEL_37;
  size = verts->fields.size;
  if ( size > start )
  {
    buffer = verts->fields.buffer;
    v27 = (float32x2_t *)&buffer->m_Items[start];
    while ( buffer )
    {
      if ( (unsigned int)start >= LODWORD(buffer->max_length) )
        sub_21FFED4(v18);
      ++start;
      v27->n64_u64[0] = vadd_f32((float32x2_t)__PAIR64__(LODWORD(v23), LODWORD(v28)), (float32x2_t)v27->n64_u64[0]).n64_u64[0];
      v27 = (float32x2_t *)((char *)v27 + 12);
      if ( size == start )
        goto LABEL_39;
    }
LABEL_37:
    sub_21FFECC(v18, v19);
  }
LABEL_39:
  result.fields.y = v23;
  result.fields.x = v24;
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
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float finalAlpha; // s12
  UnityEngine_Object_o *mFont; // x24
  float v20; // s11
  bool v21; // w0
  const MethodInfo *v22; // x1
  float v23; // s3
  float v24; // s2
  float v25; // s1
  float v26; // s0 OVERLAPPED
  __int64 v27; // x0
  bool premultipliedAlphaShader; // w0
  __int64 v29; // x1
  __int64 v30; // x29
  __int64 v31; // x27
  __int64 v32; // x26
  __int64 v33; // x28
  struct UnityEngine_Vector3_array *buffer; // x8
  struct UnityEngine_Vector2_array *v35; // x8
  struct UnityEngine_Color32_array *v36; // x8
  UnityEngine_Color32_o v37; // x1
  struct UnityEngine_Vector3_array *v38; // x8
  struct UnityEngine_Color32_array *v39; // x23
  unsigned int v40; // w24
  UnityEngine_Object_o *v41; // x25
  float v42; // s12
  __int64 v43; // x1
  float32x2_t v47; // [xsp+20h] [xbp-A0h]
  unsigned int v48; // [xsp+3Ch] [xbp-84h]
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CFC3 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    sub_21FFC50(&Method_BetterList_Vector2__Add__);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFC3 = 1;
  }
  r = this->fields.mEffectColor.fields.r;
  g = this->fields.mEffectColor.fields.g;
  b = this->fields.mEffectColor.fields.b;
  a = this->fields.mEffectColor.fields.a;
  finalAlpha = this->fields.finalAlpha;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, verts);
  v20 = a * finalAlpha;
  v21 = UnityEngine_Object__op_Inequality(mFont, 0, 0);
  v23 = v20;
  v24 = b;
  v25 = g;
  v26 = r;
  if ( v21 )
  {
    v27 = (__int64)this->fields.mFont;
    if ( !v27 )
      goto LABEL_39;
    premultipliedAlphaShader = UIFont__get_premultipliedAlphaShader((UIFont_o *)v27, v22);
    v23 = v20;
    v24 = b;
    v25 = g;
    v26 = r;
    if ( premultipliedAlphaShader )
    {
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v29);
      v49.fields.r = r;
      v49.fields.g = g;
      v49.fields.b = b;
      v49.fields.a = v20;
      *(UnityEngine_Color_o *)&v26 = NGUITools__ApplyPMA(v49, 0);
    }
  }
  v27 = sub_2BB41EC(0, v26, v25, v24, v23);
  v48 = v27;
  if ( start < end )
  {
    if ( verts )
    {
      v30 = start;
      v31 = -(__int64)end;
      v32 = start + 8LL;
      v33 = 12LL * start + 40;
      v47.n64_u64[0] = __PAIR64__(LODWORD(y), LODWORD(x));
      while ( 1 )
      {
        buffer = verts->fields.buffer;
        if ( !buffer )
          break;
        if ( (unsigned int)start >= LODWORD(buffer->max_length) )
          goto LABEL_40;
        BetterList_Vector3___Add(
          verts,
          *(UnityEngine_Vector3_o *)((char *)buffer + v33 - 8),
          (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
        if ( !uvs )
          break;
        v35 = uvs->fields.buffer;
        if ( !v35 )
          break;
        if ( (unsigned int)start >= LODWORD(v35->max_length) )
          goto LABEL_40;
        BetterList_Vector2___Add(uvs, v35->m_Items[v30], (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
        if ( !cols )
          break;
        v36 = cols->fields.buffer;
        if ( !v36 )
          break;
        if ( (unsigned int)start >= LODWORD(v36->max_length) )
          goto LABEL_40;
        v37 = (UnityEngine_Color32_o)*((unsigned int *)&v36->obj.klass + v32);
        BetterList_Color32___Add(cols, v37, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
        v38 = verts->fields.buffer;
        if ( !v38 )
          break;
        if ( (unsigned int)start >= LODWORD(v38->max_length) )
          goto LABEL_40;
        *(float32x2_t *)((char *)v38 + v33 - 8) = vadd_f32(*(float32x2_t *)((char *)v38 + v33 - 8), v47);
        v39 = cols->fields.buffer;
        if ( !v39 )
          break;
        if ( (unsigned int)start >= LODWORD(v39->max_length) )
          goto LABEL_40;
        v27 = v48;
        v40 = HIBYTE(*((_DWORD *)&v39->obj.klass + v32));
        if ( v40 != 255 )
        {
          v41 = (UnityEngine_Object_o *)this->fields.mFont;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
          v42 = v20 * (float)((float)v40 / 255.0);
          if ( !UnityEngine_Object__op_Inequality(v41, 0, 0) )
            goto LABEL_35;
          v27 = (__int64)this->fields.mFont;
          if ( !v27 )
            break;
          if ( UIFont__get_premultipliedAlphaShader((UIFont_o *)v27, v22) )
          {
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v43);
            v50.fields.r = r;
            v50.fields.g = g;
            v50.fields.b = b;
            v50.fields.a = v20 * (float)((float)v40 / 255.0);
            v51 = NGUITools__ApplyPMA(v50, 0);
            v42 = v51.fields.a;
          }
          else
          {
LABEL_35:
            v51.fields.r = r;
            v51.fields.g = g;
            v51.fields.b = b;
          }
          v27 = sub_2BB41EC(0, v51.fields.r, v51.fields.g, v51.fields.b, v42);
          if ( (unsigned int)start >= LODWORD(v39->max_length) )
LABEL_40:
            sub_21FFED4(v27);
        }
        *((_DWORD *)&v39->obj.klass + v32++) = v27;
        v33 += 12;
        ++v30;
        ++start;
        if ( v31 + v32 == 8 )
          return;
      }
    }
LABEL_39:
    sub_21FFECC(v27, v22);
  }
}


void UILabel__AssumeNaturalSize(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *ambigiousFont; // x20
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  float x; // s9
  double v8; // d8
  __int64 v9; // x1
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  int v14; // w10
  float y; // s9
  int32_t v16; // w8
  double v17; // d8
  double v18; // d0
  double v19; // d0
  double v20; // d1
  double v21; // d1
  int32_t mWidth; // w9
  int32_t v23; // w8
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593CFBC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFBC = 1;
  }
  ambigiousFont = UILabel__get_ambigiousFont(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(ambigiousFont, 0, 0) )
  {
    *(int32x2_t *)&this->fields.mWidth = vdup_n_s32(0x186A0u);
    UILabel__ProcessText_56369940(this, 0, 1, v5);
    x = this->fields.mCalculatedSize.fields.x;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v8 = x;
    v10 = modf(x, &iptr);
    if ( x >= 0.0 )
    {
      if ( v10 != 0.5 )
      {
        v11 = floor(v8 + 0.5);
        goto LABEL_21;
      }
      v12 = 1.0;
      v11 = iptr;
    }
    else
    {
      if ( v10 != -0.5 )
      {
        v11 = ceil(v8 + -0.5);
        goto LABEL_21;
      }
      v11 = iptr;
      v12 = -1.0;
    }
    v13 = v11 + v12;
    if ( ((__int64)v11 & 1) != 0 )
      v11 = v13;
LABEL_21:
    v14 = (unsigned __int8)byte_593220B;
    y = this->fields.mCalculatedSize.fields.y;
    if ( v11 == INFINITY )
      v16 = 0x80000000;
    else
      v16 = (int)v11;
    this->fields.mWidth = v16;
    if ( !v14 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v17 = y;
    v18 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v18 == 0.5 )
      {
        v20 = 1.0;
        v19 = iptr;
LABEL_33:
        v21 = v19 + v20;
        if ( ((__int64)v19 & 1) != 0 )
          v19 = v21;
        goto LABEL_38;
      }
      v19 = floor(v17 + 0.5);
    }
    else
    {
      if ( v18 == -0.5 )
      {
        v19 = iptr;
        v20 = -1.0;
        goto LABEL_33;
      }
      v19 = ceil(v17 + -0.5);
    }
LABEL_38:
    mWidth = this->fields.mWidth;
    if ( v19 == INFINITY )
      v23 = 0x80000000;
    else
      v23 = (int)v19;
    this->fields.mHeight = v23;
    if ( (mWidth & 1) != 0 )
      this->fields.mWidth = mWidth + 1;
    if ( (v23 & 1) != 0 )
      this->fields.mHeight = v23 + 1;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__Awake(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *trueTypeFont; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *mFont; // x20
  __int64 v8; // x1
  UILabel_c *v9; // x0
  UnityEngine_Object_o *defaultFont; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Font_c *v20; // x1
  struct UILabel_StaticFields *static_fields; // x0
  MissionNaviTransitionBoardItem_o *p_defaultFont; // x0
  struct UILabel_StaticFields *v23; // x0
  UILabel_c *v24; // x0
  UnityEngine_Object_o *v25; // x20
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  UILabel_c *v28; // x0
  System_String_o *v29; // x1
  const MethodInfo *v30; // x2

  if ( (byte_593CFCA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Font_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UILabel_TypeInfo);
    sub_21FFC50(&StringLiteral_7077/*"Fonts/FGO-Main-Font"*/);
    byte_593CFCA = 1;
  }
  UIWidget__Awake((UIWidget_o *)this, 0);
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, v3);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
  {
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Equality(mFont, 0, 0) )
    {
      v9 = UILabel_TypeInfo;
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v8);
        v9 = UILabel_TypeInfo;
      }
      defaultFont = (UnityEngine_Object_o *)v9->static_fields->defaultFont;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Equality(defaultFont, 0, 0) )
        goto LABEL_22;
      v19 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_7077/*"Fonts/FGO-Main-Font"*/, 0);
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v12);
      if ( v19 )
      {
        v20 = UnityEngine_Font_TypeInfo;
        if ( (UnityEngine_Font_c *)v19->klass == UnityEngine_Font_TypeInfo )
        {
          static_fields = UILabel_TypeInfo->static_fields;
          static_fields->defaultFont = (struct UnityEngine_Font_o *)v19;
          p_defaultFont = (MissionNaviTransitionBoardItem_o *)&static_fields->defaultFont;
          if ( (UnityEngine_Font_c *)v19->klass == v20 )
            goto LABEL_21;
        }
        sub_220024C(v19, v20, v13);
      }
      v23 = UILabel_TypeInfo->static_fields;
      v23->defaultFont = 0;
      p_defaultFont = (MissionNaviTransitionBoardItem_o *)&v23->defaultFont;
LABEL_21:
      sub_21FFBF4(p_defaultFont, (int32_t)v19, v13, v14, v15, v16, v17, v18);
LABEL_22:
      v24 = UILabel_TypeInfo;
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v11);
        v24 = UILabel_TypeInfo;
      }
      v25 = (UnityEngine_Object_o *)v24->static_fields->defaultFont;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
      {
        v28 = UILabel_TypeInfo;
        if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v26);
          v28 = UILabel_TypeInfo;
        }
        UILabel__set_trueTypeFont(this, v28->static_fields->defaultFont, v27);
      }
    }
  }
  if ( !System_String__IsNullOrEmpty(this->fields.localKey, 0) )
  {
    v29 = NguiLocalizationManager__Get(this->fields.localKey, 0);
    UILabel__set_text(this, v29, v30);
  }
}


int32_t UILabel__CalculateOffsetToFit(UILabel_o *this, System_String_o *text, const MethodInfo *method)
{
  __int64 v5; // x1
  NGUIText_c *v6; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t v8; // w19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct NGUIText_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_593CFC4 & 1) == 0 )
  {
    sub_21FFC50(&NGUIText_TypeInfo);
    byte_593CFC4 = 1;
  }
  UILabel__UpdateNGUIText(this, (const MethodInfo *)text);
  v6 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v5);
    v6 = NGUIText_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->encoding = 0;
  static_fields->symbolStyle = 0;
  v8 = NGUIText__CalculateOffsetToFit(text, 0);
  NGUIText_TypeInfo->static_fields->bitmapFont = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields, 0, v9, v10, v11, v12, v13, v14);
  v15 = NGUIText_TypeInfo->static_fields;
  v15->dynamicFont = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->dynamicFont, 0, v16, v17, v18, v19, v20, v21);
  return v8;
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    sub_21FFECC(0, v10);
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  v14 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v13, 0);
  return UILabel__GetCharacterIndexAtPosition_56378928(this, *(UnityEngine_Vector2_o *)&v14.fields.x, precise, v11);
}


// local variable allocation has failed, the output may be wrong!
int32_t UILabel__GetCharacterIndexAtPosition_56378928(
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
  int32_t v11; // w19
  __int64 v12; // x1
  UILabel_c *v13; // x0
  int v14; // w8
  struct UILabel_StaticFields *static_fields; // x9
  BetterList_Vector3__o *mTempVerts; // x22
  BetterList_int__o *mTempIndices; // x23
  __int64 v18; // x1
  System_String_o *v19; // x2
  MethodInfo *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UILabel_StaticFields *v25; // x9
  BetterList_Vector3__o *v26; // x22
  BetterList_int__o *v27; // x23
  BetterList_Vector3__o *v28; // x0
  struct BetterList_Vector3__o *v29; // x1
  __int64 v30; // x1
  UILabel_c *v31; // x0
  int v32; // w8
  struct UILabel_StaticFields *v33; // x9
  BetterList_Vector3__o *v34; // x19
  BetterList_int__o *v35; // x20
  int32_t ExactCharacterIndex; // w0
  struct UILabel_StaticFields *v37; // x9
  BetterList_Vector3__o *v38; // x19
  BetterList_int__o *v39; // x20
  UILabel_c *v40; // x0
  NGUIText_c *v41; // x0
  struct NGUIText_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v51; // 0:s0.4,4:s1.4

  y = localPos.fields.y;
  x = localPos.fields.x;
  if ( (byte_593CFBD & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Clear__);
    sub_21FFC50(&Method_BetterList_int__Clear__);
    sub_21FFC50(&NGUIText_TypeInfo);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFBD = 1;
  }
  if ( !UILabel__get_isValid(this, (const MethodInfo *)precise) )
    return 0;
  processedText = UILabel__get_processedText(this, v8);
  if ( System_String__IsNullOrEmpty(processedText, 0) )
    return 0;
  UILabel__UpdateNGUIText(this, v10);
  v13 = UILabel_TypeInfo;
  v14 = *(&UILabel_TypeInfo->_2.cctor_finished + 1);
  if ( precise )
  {
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v12);
      v13 = UILabel_TypeInfo;
    }
    static_fields = v13->static_fields;
    mTempVerts = static_fields->mTempVerts;
    mTempIndices = static_fields->mTempIndices;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
    NGUIText__PrintExactCharacterPositions(processedText, mTempVerts, mTempIndices, 0);
  }
  else
  {
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v12);
      v13 = UILabel_TypeInfo;
    }
    v25 = v13->static_fields;
    v26 = v25->mTempVerts;
    v27 = v25->mTempIndices;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v12);
    NGUIText__PrintApproximateCharacterPositions(processedText, v26, v27, 0);
  }
  v28 = (BetterList_Vector3__o *)UILabel_TypeInfo;
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v18);
    v28 = (BetterList_Vector3__o *)UILabel_TypeInfo;
  }
  v29 = *(struct BetterList_Vector3__o **)(*(_QWORD *)&v28[5].fields.size + 24LL);
  if ( !v29 )
    goto LABEL_44;
  if ( v29->fields.size >= 1 )
  {
    if ( !HIDWORD(v28[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(v28, v29);
      v29 = UILabel_TypeInfo->static_fields->mTempVerts;
    }
    UILabel__ApplyOffset(this, v29, 0, v20);
    v31 = UILabel_TypeInfo;
    v32 = *(&UILabel_TypeInfo->_2.cctor_finished + 1);
    if ( precise )
    {
      if ( !v32 )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v30);
        v31 = UILabel_TypeInfo;
      }
      v33 = v31->static_fields;
      v34 = v33->mTempVerts;
      v35 = v33->mTempIndices;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v30);
      v50.fields.x = x;
      v50.fields.y = y;
      ExactCharacterIndex = NGUIText__GetExactCharacterIndex(v34, v35, v50, 0);
    }
    else
    {
      if ( !v32 )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v30);
        v31 = UILabel_TypeInfo;
      }
      v37 = v31->static_fields;
      v38 = v37->mTempVerts;
      v39 = v37->mTempIndices;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v30);
      v51.fields.x = x;
      v51.fields.y = y;
      ExactCharacterIndex = NGUIText__GetApproximateCharacterIndex(v38, v39, v51, 0);
    }
    v11 = ExactCharacterIndex;
    v40 = UILabel_TypeInfo;
    if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v29);
      v40 = UILabel_TypeInfo;
    }
    v28 = v40->static_fields->mTempVerts;
    if ( v28 )
    {
      BetterList_Vector3___Clear(v28, (const MethodInfo_3E3DF14 *)Method_BetterList_Vector3__Clear__);
      v28 = (BetterList_Vector3__o *)UILabel_TypeInfo->static_fields->mTempIndices;
      if ( v28 )
      {
        BetterList_int___Clear((BetterList_int__o *)v28, (const MethodInfo_3E3B930 *)Method_BetterList_int__Clear__);
        goto LABEL_40;
      }
    }
LABEL_44:
    sub_21FFECC(v28, v29);
  }
  v11 = 0;
LABEL_40:
  v41 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v29);
    v41 = NGUIText_TypeInfo;
  }
  v41->static_fields->bitmapFont = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields,
    0,
    v19,
    (System_String_o *)v20,
    v21,
    v22,
    v23,
    v24);
  v42 = NGUIText_TypeInfo->static_fields;
  v42->dynamicFont = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v42->dynamicFont, 0, v43, v44, v45, v46, v47, v48);
  return v11;
}


int32_t UILabel__GetCharacterIndex_56378920(UILabel_o *this, UnityEngine_Vector2_o localPos, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  return UILabel__GetCharacterIndexAtPosition_56378928(this, localPos, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t UILabel__GetCharacterIndex_56381180(
        UILabel_o *this,
        int32_t currentIndex,
        int32_t key,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_String_o *processedText; // x21
  const MethodInfo *v9; // x1
  int32_t ApproximateCharacterIndex; // w22
  int32_t defaultFontSize; // w23
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  UILabel_c *v14; // x0
  struct UILabel_StaticFields *static_fields; // x9
  BetterList_Vector3__o *mTempVerts; // x24
  BetterList_int__o *mTempIndices; // x25
  System_String_o *v18; // x2
  MethodInfo *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  BetterList_Vector3__o *v24; // x0
  struct BetterList_Vector3__o *v25; // x1
  int32_t i; // w24
  struct BetterList_int__o *v27; // x8
  UILabel_c *v28; // x0
  __int64 v29; // x1
  float x; // s8
  float y; // s9
  float mSpacingY; // s0
  float v33; // w8
  float mFloatSpacingY; // s0
  UILabel_c *v35; // x0
  struct UILabel_StaticFields *v36; // x9
  BetterList_Vector3__o *v37; // x22
  BetterList_int__o *v38; // x23
  NGUIText_c *v39; // x0
  struct NGUIText_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CFC0 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Clear__);
    sub_21FFC50(&Method_BetterList_int__Clear__);
    sub_21FFC50(&Method_BetterList_int__get_Item__);
    sub_21FFC50(&Method_BetterList_Vector3__get_Item__);
    sub_21FFC50(&NGUIText_TypeInfo);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFC0 = 1;
  }
  if ( !UILabel__get_isValid(this, *(const MethodInfo **)&currentIndex) )
    return currentIndex;
  processedText = UILabel__get_processedText(this, v7);
  if ( !System_String__IsNullOrEmpty(processedText, 0) )
  {
    defaultFontSize = UILabel__get_defaultFontSize(this, v9);
    UILabel__UpdateNGUIText(this, v12);
    v14 = UILabel_TypeInfo;
    if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v13);
      v14 = UILabel_TypeInfo;
    }
    static_fields = v14->static_fields;
    mTempVerts = static_fields->mTempVerts;
    mTempIndices = static_fields->mTempIndices;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v13);
    NGUIText__PrintApproximateCharacterPositions(processedText, mTempVerts, mTempIndices, 0);
    v24 = (BetterList_Vector3__o *)UILabel_TypeInfo;
    v25 = UILabel_TypeInfo->static_fields->mTempVerts;
    if ( !v25 )
      goto LABEL_68;
    if ( v25->fields.size < 1 )
      goto LABEL_52;
    if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v25);
      v25 = UILabel_TypeInfo->static_fields->mTempVerts;
    }
    UILabel__ApplyOffset(this, v25, 0, v19);
    for ( i = 0; ; ++i )
    {
      v24 = (BetterList_Vector3__o *)UILabel_TypeInfo;
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v25);
        v24 = (BetterList_Vector3__o *)UILabel_TypeInfo;
      }
      v27 = *(struct BetterList_int__o **)(*(_QWORD *)&v24[5].fields.size + 32LL);
      if ( !v27 )
        goto LABEL_68;
      if ( i >= v27->fields.size )
        goto LABEL_47;
      if ( !HIDWORD(v24[7].klass) )
      {
        j_il2cpp_runtime_class_init_0(v24, v25);
        v27 = UILabel_TypeInfo->static_fields->mTempIndices;
        if ( !v27 )
          goto LABEL_68;
      }
      if ( BetterList_int___get_Item(v27, i, (const MethodInfo_3E3B744 *)Method_BetterList_int__get_Item__) == currentIndex )
        break;
    }
    v28 = UILabel_TypeInfo;
    if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v25);
      v28 = UILabel_TypeInfo;
    }
    v24 = v28->static_fields->mTempVerts;
    if ( !v24 )
      goto LABEL_68;
    Item = BetterList_Vector3___get_Item(v24, i, (const MethodInfo_3E3DD08 *)Method_BetterList_Vector3__get_Item__);
    x = Item.fields.x;
    y = Item.fields.y;
    if ( key <= 277 )
    {
      if ( key == 273 )
      {
        if ( this->fields.mUseFloatSpacing )
          mFloatSpacingY = this->fields.mFloatSpacingY;
        else
          mFloatSpacingY = (float)this->fields.mSpacingY;
        y = Item.fields.y + (float)(mFloatSpacingY + (float)defaultFontSize);
      }
      else if ( key == 274 )
      {
        if ( this->fields.mUseFloatSpacing )
          mSpacingY = this->fields.mFloatSpacingY;
        else
          mSpacingY = (float)this->fields.mSpacingY;
        y = Item.fields.y - (float)(mSpacingY + (float)defaultFontSize);
      }
      goto LABEL_42;
    }
    if ( key == 278 )
    {
      v33 = -1000.0;
    }
    else
    {
      if ( key != 279 )
      {
LABEL_42:
        v35 = UILabel_TypeInfo;
        if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v29);
          v35 = UILabel_TypeInfo;
        }
        v36 = v35->static_fields;
        v37 = v36->mTempVerts;
        v38 = v36->mTempIndices;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v29);
        v48.fields.x = x;
        v48.fields.y = y;
        ApproximateCharacterIndex = NGUIText__GetApproximateCharacterIndex(v37, v38, v48, 0);
        v24 = (BetterList_Vector3__o *)UILabel_TypeInfo;
        if ( ApproximateCharacterIndex != currentIndex )
        {
          if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v25);
            v24 = (BetterList_Vector3__o *)UILabel_TypeInfo;
          }
          v24 = *(BetterList_Vector3__o **)(*(_QWORD *)&v24[5].fields.size + 24LL);
          if ( v24 )
          {
            BetterList_Vector3___Clear(v24, (const MethodInfo_3E3DF14 *)Method_BetterList_Vector3__Clear__);
            v24 = (BetterList_Vector3__o *)UILabel_TypeInfo->static_fields->mTempIndices;
            if ( v24 )
            {
              BetterList_int___Clear(
                (BetterList_int__o *)v24,
                (const MethodInfo_3E3B930 *)Method_BetterList_int__Clear__);
              return ApproximateCharacterIndex;
            }
          }
          goto LABEL_68;
        }
LABEL_47:
        if ( !HIDWORD(v24[7].klass) )
        {
          j_il2cpp_runtime_class_init_0(v24, v25);
          v24 = (BetterList_Vector3__o *)UILabel_TypeInfo;
        }
        v24 = *(BetterList_Vector3__o **)(*(_QWORD *)&v24[5].fields.size + 24LL);
        if ( !v24 )
          goto LABEL_68;
        BetterList_Vector3___Clear(v24, (const MethodInfo_3E3DF14 *)Method_BetterList_Vector3__Clear__);
        v24 = (BetterList_Vector3__o *)UILabel_TypeInfo->static_fields->mTempIndices;
        if ( !v24 )
          goto LABEL_68;
        BetterList_int___Clear((BetterList_int__o *)v24, (const MethodInfo_3E3B930 *)Method_BetterList_int__Clear__);
LABEL_52:
        v39 = NGUIText_TypeInfo;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v25);
          v39 = NGUIText_TypeInfo;
        }
        v39->static_fields->bitmapFont = 0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields,
          0,
          v18,
          (System_String_o *)v19,
          v20,
          v21,
          v22,
          v23);
        v40 = NGUIText_TypeInfo->static_fields;
        v40->dynamicFont = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->dynamicFont, 0, v41, v42, v43, v44, v45, v46);
        ApproximateCharacterIndex = 0;
        if ( key > 277 )
        {
          if ( key == 278 )
            return ApproximateCharacterIndex;
          if ( key != 279 )
            return currentIndex;
        }
        else
        {
          if ( key == 273 )
            return ApproximateCharacterIndex;
          if ( key != 274 )
            return currentIndex;
        }
        if ( processedText )
          return processedText->fields._stringLength;
LABEL_68:
        sub_21FFECC(v24, v25);
      }
      v33 = 1000.0;
    }
    x = Item.fields.x + v33;
    goto LABEL_42;
  }
  return 0;
}


UnityEngine_Vector3_array *UILabel__GetSides(
        UILabel_o *this,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_56369940(this, 0, 1, v3);
  return UIWidget__GetSides((UIWidget_o *)this, relativeTo, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UILabel__GetUrlAtCharacterIndex(UILabel_o *this, int32_t characterIndex, const MethodInfo *method)
{
  System_String_o *mText; // x0
  int Chars; // w8
  int32_t v7; // w21
  int32_t v8; // w0
  int32_t v9; // w22
  int32_t v10; // w0

  if ( (byte_593CFBF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16430/*"[/url]"*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    sub_21FFC50(&StringLiteral_16607/*"[url="*/);
    byte_593CFBF = 1;
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
    mText = (System_String_o *)System_String__LastIndexOf_75504628(
                                 mText,
                                 (System_String_o *)StringLiteral_16607/*"[url="*/,
                                 characterIndex,
                                 0);
    if ( (_DWORD)mText == -1 )
      return 0;
  }
  if ( !this->fields.mText )
    goto LABEL_25;
  v7 = (_DWORD)mText + 5;
  v8 = System_String__IndexOf_75501908(this->fields.mText, (System_String_o *)StringLiteral_16659/*"]"*/, (_DWORD)mText + 5, 0);
  if ( v8 == -1 )
    return 0;
  v9 = v8;
  mText = this->fields.mText;
  if ( !mText )
    goto LABEL_25;
  v10 = System_String__IndexOf_75501908(mText, (System_String_o *)StringLiteral_16430/*"[/url]"*/, v9, 0);
  if ( v10 != -1 && v10 < characterIndex )
    return 0;
  mText = this->fields.mText;
  if ( !mText )
LABEL_25:
    sub_21FFECC(mText, *(_QWORD *)&characterIndex);
  return System_String__Substring_75489544(mText, v7, v9 - v7, 0);
}


System_String_o *UILabel__GetUrlAtPosition(UILabel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition = UILabel__GetCharacterIndexAtPosition(this, worldPos, 1, v3);
  return UILabel__GetUrlAtCharacterIndex(this, CharacterIndexAtPosition, v6);
}


System_String_o *UILabel__GetUrlAtPosition_56381148(
        UILabel_o *this,
        UnityEngine_Vector2_o localPos,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition_56378928; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition_56378928 = UILabel__GetCharacterIndexAtPosition_56378928(this, localPos, 1, v3);
  return UILabel__GetUrlAtCharacterIndex(this, CharacterIndexAtPosition_56378928, v6);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UILabel__GetWordAtCharacterIndex(UILabel_o *this, int32_t characterIndex, const MethodInfo *method)
{
  int32_t v3; // w20
  UILabel_o *v4; // x19
  System_String_o *mText; // x21
  int m_CancellationTokenSource; // w8
  int32_t IndexOfAny_75503368; // w0
  System_String_o *v8; // x22
  int32_t v9; // w21
  System_Array_o *v10; // x23
  System_RuntimeFieldHandle_o v11; // x1
  struct System_String_o *v12; // x8
  int32_t v13; // w2
  __int64 v14; // x1
  System_String_o *v15; // x19

  v3 = characterIndex;
  v4 = this;
  if ( (byte_593CFBE & 1) == 0 )
  {
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&NGUIText_TypeInfo);
    this = (UILabel_o *)sub_21FFC50(&Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5);
    byte_593CFBE = 1;
  }
  if ( v3 == -1 )
    return 0;
  mText = v4->fields.mText;
  if ( !mText )
    goto LABEL_20;
  if ( mText->fields._stringLength <= v3 )
    return 0;
  this = (UILabel_o *)sub_21FFD10(char___TypeInfo, 2);
  if ( !this )
    goto LABEL_20;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LOWORD(this->fields.leftAnchor) = 32, m_CancellationTokenSource == 1) )
    sub_21FFED4(this);
  WORD1(this->fields.leftAnchor) = 10;
  IndexOfAny_75503368 = System_String__LastIndexOfAny_75503368(mText, (System_Char_array *)this, v3, 0);
  v8 = v4->fields.mText;
  v9 = IndexOfAny_75503368;
  v10 = (System_Array_o *)sub_21FFD10(char___TypeInfo, 4);
  v11.fields.value = Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v10, v11, 0);
  if ( !v8 )
LABEL_20:
    sub_21FFECC(this, *(_QWORD *)&characterIndex);
  this = (UILabel_o *)System_String__IndexOfAny_75501212(v8, (System_Char_array *)v10, v3, 0);
  if ( (_DWORD)this == -1 )
  {
    v12 = v4->fields.mText;
    if ( !v12 )
      goto LABEL_20;
    LODWORD(this) = v12->fields._stringLength;
  }
  *(_QWORD *)&characterIndex = (unsigned int)(v9 + 1);
  v13 = (_DWORD)this - characterIndex;
  if ( (_DWORD)this == characterIndex || v13 < 1 )
    return 0;
  this = (UILabel_o *)v4->fields.mText;
  if ( !this )
    goto LABEL_20;
  v15 = System_String__Substring_75489544((System_String_o *)this, characterIndex, v13, 0);
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v14);
  return NGUIText__StripSymbols(v15, 0);
}


System_String_o *UILabel__GetWordAtPosition(UILabel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition = UILabel__GetCharacterIndexAtPosition(this, worldPos, 1, v3);
  return UILabel__GetWordAtCharacterIndex(this, CharacterIndexAtPosition, v6);
}


System_String_o *UILabel__GetWordAtPosition_56380620(
        UILabel_o *this,
        UnityEngine_Vector2_o localPos,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t CharacterIndexAtPosition_56378928; // w1
  const MethodInfo *v6; // x2

  CharacterIndexAtPosition_56378928 = UILabel__GetCharacterIndexAtPosition_56378928(this, localPos, 1, v3);
  return UILabel__GetWordAtCharacterIndex(this, CharacterIndexAtPosition_56378928, v6);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__MakePixelPerfect(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *ambigiousFont; // x20
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  float x; // s9
  float y; // s10
  float z; // s8
  double v11; // d11
  __int64 v12; // x1
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  float v17; // s9
  double v18; // d11
  __int64 v19; // x1
  double v20; // d0
  double v21; // d0
  double v22; // d1
  double v23; // d1
  float v24; // s10
  double v25; // d11
  double v26; // d0
  double v27; // d0
  double v28; // d1
  double v29; // d1
  double v30; // d8
  float v31; // s2
  float v32; // s1 OVERLAPPED
  float v33; // s0
  UnityEngine_Transform_o *v34; // x20
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x3
  int32_t mOverflow; // w24
  int32_t mWidth; // w20
  int32_t mHeight; // w23
  __int64 v40; // x1
  int v41; // w8
  float v42; // s9
  double v43; // d8
  __int64 v44; // x1
  double v45; // d0
  double v46; // d0
  double v47; // d1
  double v48; // d1
  float v49; // s9
  int v50; // w24
  double v51; // d8
  double v52; // d0
  double v53; // d0
  double v54; // d1
  double v55; // d1
  int v56; // w21
  int32_t minWidth; // w0
  int32_t v58; // w22
  int32_t minHeight; // w0
  UILabel_c *klass; // x8
  int32_t v61; // w9
  int32_t v62; // w10
  double iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CFBB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFBB = 1;
  }
  ambigiousFont = UILabel__get_ambigiousFont(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Inequality(ambigiousFont, 0, 0) )
  {
    UIWidget__MakePixelPerfect((UIWidget_o *)this, 0);
    return;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
LABEL_112:
    sub_21FFECC(cachedTransform, v6);
  localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  v11 = x;
  v13 = modf(x, &iptr);
  if ( x >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v14 = floor(v11 + 0.5);
      goto LABEL_22;
    }
    v15 = 1.0;
    v14 = iptr;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v14 = ceil(v11 + -0.5);
      goto LABEL_22;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  v16 = v14 + v15;
  if ( ((__int64)v14 & 1) != 0 )
    v14 = v16;
LABEL_22:
  if ( v14 == INFINITY )
    v17 = -2147500000.0;
  else
    v17 = (float)(int)v14;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
  v18 = y;
  v20 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v21 = floor(v18 + 0.5);
      goto LABEL_39;
    }
    v22 = 1.0;
    v21 = iptr;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v21 = ceil(v18 + -0.5);
      goto LABEL_39;
    }
    v21 = iptr;
    v22 = -1.0;
  }
  v23 = v21 + v22;
  if ( ((__int64)v21 & 1) != 0 )
    v21 = v23;
LABEL_39:
  if ( v21 == INFINITY )
    v24 = -2147500000.0;
  else
    v24 = (float)(int)v21;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19);
  v25 = z;
  v26 = modf(z, &iptr);
  if ( z >= 0.0 )
  {
    if ( v26 == 0.5 )
    {
      v28 = 1.0;
      v27 = iptr;
LABEL_51:
      v29 = v27 + v28;
      if ( ((__int64)v27 & 1) != 0 )
        v30 = v29;
      else
        v30 = v27;
      goto LABEL_56;
    }
    v30 = floor(v25 + 0.5);
  }
  else
  {
    if ( v26 == -0.5 )
    {
      v27 = iptr;
      v28 = -1.0;
      goto LABEL_51;
    }
    v30 = ceil(v25 + -0.5);
  }
LABEL_56:
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_112;
  v31 = -2147500000.0;
  v32 = v24;
  if ( v30 != INFINITY )
    v31 = (float)(int)v30;
  v33 = v17;
  UnityEngine_Transform__set_localPosition(cachedTransform, *(UnityEngine_Vector3_o *)(&v32 - 1), 0);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  v34 = cachedTransform;
  if ( !byte_5931945 )
  {
    cachedTransform = (UnityEngine_Transform_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v34 )
    goto LABEL_112;
  UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  mOverflow = this->fields.mOverflow;
  if ( mOverflow == 2 )
  {
    UILabel__AssumeNaturalSize(this, v35);
    return;
  }
  mWidth = this->fields.mWidth;
  if ( mOverflow != 3 )
    this->fields.mWidth = 100000;
  mHeight = this->fields.mHeight;
  this->fields.mHeight = 100000;
  this->fields.mOverflow = 0;
  UILabel__ProcessText_56369940(this, 0, 1, v36);
  v41 = (unsigned __int8)byte_593220B;
  v42 = this->fields.mCalculatedSize.fields.x;
  this->fields.mOverflow = mOverflow;
  if ( !v41 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v40);
  v43 = v42;
  v45 = modf(v42, &iptr);
  if ( v42 >= 0.0 )
  {
    if ( v45 != 0.5 )
    {
      v46 = floor(v43 + 0.5);
      goto LABEL_80;
    }
    v47 = 1.0;
    v46 = iptr;
  }
  else
  {
    if ( v45 != -0.5 )
    {
      v46 = ceil(v43 + -0.5);
      goto LABEL_80;
    }
    v46 = iptr;
    v47 = -1.0;
  }
  v48 = v46 + v47;
  if ( ((__int64)v46 & 1) != 0 )
    v46 = v48;
LABEL_80:
  v49 = this->fields.mCalculatedSize.fields.y;
  if ( v46 == INFINITY )
    v50 = 0x80000000;
  else
    v50 = (int)v46;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v44);
  v51 = v49;
  v52 = modf(v49, &iptr);
  if ( v49 >= 0.0 )
  {
    if ( v52 == 0.5 )
    {
      v54 = 1.0;
      v53 = iptr;
LABEL_92:
      v55 = v53 + v54;
      if ( ((__int64)v53 & 1) != 0 )
        v53 = v55;
      goto LABEL_97;
    }
    v53 = floor(v51 + 0.5);
  }
  else
  {
    if ( v52 == -0.5 )
    {
      v53 = iptr;
      v54 = -1.0;
      goto LABEL_92;
    }
    v53 = ceil(v51 + -0.5);
  }
LABEL_97:
  if ( v53 == INFINITY )
    v56 = 0x80000000;
  else
    v56 = (int)v53;
  minWidth = UIWidget__get_minWidth((UIWidget_o *)this, 0);
  if ( v50 <= minWidth )
    v58 = minWidth;
  else
    v58 = v50;
  minHeight = UIWidget__get_minHeight((UIWidget_o *)this, 0);
  klass = this->klass;
  if ( v56 <= minHeight )
    v61 = minHeight;
  else
    v61 = v56;
  if ( mWidth <= v58 )
    v62 = v58;
  else
    v62 = mWidth;
  if ( mHeight > v61 )
    v61 = mHeight;
  this->fields.mWidth = v62;
  this->fields.mHeight = v61;
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
  if ( (byte_593CFB6 & 1) == 0 )
  {
    this = (UILabel_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFB6 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UILabel_o *)UnityEngine_Object__op_Inequality(target, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_16;
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
LABEL_17:
    sub_21FFECC(this, method);
  v7 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    goto LABEL_15;
LABEL_16:
  UIWidget__OnAnchor((UIWidget_o *)v2, 0);
}


void UILabel__OnDisable(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UILabel_c *v5; // x0
  BetterList_T__o *mList; // x0

  if ( (byte_593CFB0 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UILabel__Remove__);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFB0 = 1;
  }
  UILabel__SetActiveFont(this, 0, v2);
  v5 = UILabel_TypeInfo;
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v4);
    v5 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v5->static_fields->mList;
  if ( !mList )
    sub_21FFECC(0, v4);
  BetterList_object___Remove(
    mList,
    (Il2CppObject *)this,
    (const MethodInfo_3E3C51C *)Method_BetterList_UILabel__Remove__);
  UIWidget__OnDisable((UIWidget_o *)this, 0);
}


void UILabel__OnEnable(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_c *v4; // x0
  struct UILabel_StaticFields *static_fields; // x8
  System_Action_object__o *v6; // x19

  if ( (byte_593CFB8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_Font__TypeInfo);
    sub_21FFC50(&Method_UILabel_OnFontChanged__);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFB8 = 1;
  }
  UIRect__OnEnable((UIRect_o *)this, 0);
  v4 = UILabel_TypeInfo;
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v3);
    v4 = UILabel_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( !static_fields->mTexRebuildAdded )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v3);
      static_fields = UILabel_TypeInfo->static_fields;
    }
    static_fields->mTexRebuildAdded = 1;
    v6 = (System_Action_object__o *)sub_21FFEBC(System_Action_Font__TypeInfo);
    System_Action_object____ctor(v6, 0, Method_UILabel_OnFontChanged__, 0);
    UnityEngine_Font__add_textureRebuilt((System_Action_Font__o *)v6, 0);
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
  const MethodInfo *v10; // x1
  float b; // s9
  float g; // s10
  float finalAlpha; // s8
  float r; // s11
  unsigned int size; // w23
  UnityEngine_Object_o *mFont; // x24
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  System_String_o *processedText; // x0
  int32_t v20; // w24
  System_String_o *v21; // x25
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  NGUIText_c *v24; // x0
  float *static_fields; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct NGUIText_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x24
  const MethodInfo *v42; // x6
  int32_t mEffectStyle; // w8
  float y; // s8
  float x; // s9
  unsigned int v46; // w8
  int32_t v47; // w24
  float v48; // s11
  float v49; // s12
  const MethodInfo *v50; // x6
  int32_t v51; // w25
  const MethodInfo *v52; // x6
  int32_t v53; // w24
  const MethodInfo *v54; // x6
  const MethodInfo *v55; // x6
  int32_t v56; // w23
  int32_t v57; // w24
  const MethodInfo *v58; // x6
  const MethodInfo *v59; // x6
  const MethodInfo *v60; // x6
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CFC2 & 1) == 0 )
  {
    sub_21FFC50(&NGUIText_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFC2 = 1;
  }
  isValid = (UIFont_o *)UILabel__get_isValid(this, (const MethodInfo *)verts);
  if ( ((unsigned __int8)isValid & 1) != 0 )
  {
    if ( !verts )
      goto LABEL_35;
    g = this->fields.mColor.fields.g;
    b = this->fields.mColor.fields.b;
    finalAlpha = this->fields.finalAlpha;
    r = this->fields.mColor.fields.r;
    size = verts->fields.size;
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
    {
      isValid = this->fields.mFont;
      if ( !isValid )
        goto LABEL_35;
      if ( UIFont__get_premultipliedAlphaShader(isValid, v10) )
      {
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v17);
        v62.fields.r = r;
        v62.fields.g = g;
        v62.fields.b = b;
        v62.fields.a = finalAlpha;
        v63 = NGUITools__ApplyPMA(v62, 0);
        r = v63.fields.r;
        g = v63.fields.g;
        b = v63.fields.b;
        finalAlpha = v63.fields.a;
      }
    }
    if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
    {
      r = powf(r, 2.2);
      g = powf(g, 2.2);
      b = powf(b, 2.2);
    }
    processedText = UILabel__get_processedText(this, v18);
    v20 = verts->fields.size;
    v21 = processedText;
    UILabel__UpdateNGUIText(this, v22);
    v24 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v23);
      v24 = NGUIText_TypeInfo;
    }
    static_fields = (float *)v24->static_fields;
    static_fields[11] = r;
    static_fields[12] = g;
    static_fields[13] = b;
    static_fields[14] = finalAlpha;
    NGUIText__Print(v21, verts, uvs, cols, 0);
    NGUIText_TypeInfo->static_fields->bitmapFont = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields, 0, v26, v27, v28, v29, v30, v31);
    v32 = NGUIText_TypeInfo->static_fields;
    v32->dynamicFont = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->dynamicFont, 0, v33, v34, v35, v36, v37, v38);
    UILabel__ApplyOffset(this, verts, v20, v39);
    v41 = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    if ( !UnityEngine_Object__op_Inequality(v41, 0, 0) )
    {
LABEL_22:
      mEffectStyle = this->fields.mEffectStyle;
      if ( mEffectStyle )
      {
        y = this->fields.mEffectDistance.fields.y;
        x = this->fields.mEffectDistance.fields.x;
        v46 = mEffectStyle & 0xFFFFFFFE;
        v47 = verts->fields.size;
        if ( v46 == 2 )
          v48 = y * 0.5;
        else
          v48 = this->fields.mEffectDistance.fields.y;
        if ( v46 == 2 )
          v49 = x * 0.5;
        else
          v49 = this->fields.mEffectDistance.fields.x;
        UILabel__ApplyShadow(this, verts, uvs, cols, size, verts->fields.size, v49, -v48, v42);
        if ( (unsigned int)(this->fields.mEffectStyle - 2) <= 2 )
        {
          v51 = verts->fields.size;
          UILabel__ApplyShadow(this, verts, uvs, cols, v47, v51, -v49, v48, v50);
          size = verts->fields.size;
          UILabel__ApplyShadow(this, verts, uvs, cols, v51, size, v49, v48, v52);
          v53 = verts->fields.size;
          UILabel__ApplyShadow(this, verts, uvs, cols, size, v53, -v49, -v48, v54);
          if ( (this->fields.mEffectStyle & 0xFFFFFFFE) == 2 )
          {
            v56 = verts->fields.size;
            UILabel__ApplyShadow(this, verts, uvs, cols, v53, v56, -x, 0.0, v55);
            v57 = verts->fields.size;
            UILabel__ApplyShadow(this, verts, uvs, cols, v56, v57, x, 0.0, v58);
            size = verts->fields.size;
            UILabel__ApplyShadow(this, verts, uvs, cols, v57, size, 0.0, y, v59);
            UILabel__ApplyShadow(this, verts, uvs, cols, size, verts->fields.size, 0.0, -y, v60);
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
      if ( UIFont__get_packedFontShader(isValid, v10) )
        return;
      goto LABEL_22;
    }
LABEL_35:
    sub_21FFECC(isValid, v10);
  }
}


void UILabel__OnFontChanged(UnityEngine_Font_o *font, const MethodInfo *method)
{
  int32_t i; // w20
  System_Collections_Generic_HashSet_object__o *updateAgainPanels; // x0
  BetterList_T__o *mList; // x8
  __int64 v6; // x1
  Il2CppObject *Item; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *trueTypeFont; // x22
  int32_t j; // w20
  BetterList_T__o *v11; // x8
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x22
  UIPanel_o *Panel; // x0
  UIPanel_c *v17; // x8
  UnityEngine_Object_o *v18; // x21
  UIPanel_c *v19; // x0

  if ( (byte_593CFB2 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UILabel__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIPanel__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UILabel_TypeInfo);
    sub_21FFC50(&UIPanel_TypeInfo);
    byte_593CFB2 = 1;
  }
  for ( i = 0; ; ++i )
  {
    updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UILabel_TypeInfo;
    if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, method);
      updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UILabel_TypeInfo;
    }
    mList = **(BetterList_T__o ***)&updateAgainPanels[2].fields._freeList;
    if ( !mList )
LABEL_48:
      sub_21FFECC(updateAgainPanels, method);
    if ( i >= mList->fields.size )
      break;
    if ( !HIDWORD(updateAgainPanels[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(updateAgainPanels, method);
      mList = (BetterList_T__o *)UILabel_TypeInfo->static_fields->mList;
      if ( !mList )
        goto LABEL_48;
    }
    Item = BetterList_object___get_Item(mList, i, (const MethodInfo_3E3C040 *)Method_BetterList_UILabel__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UnityEngine_Object__op_Inequality(
                                                                          (UnityEngine_Object_o *)Item,
                                                                          0,
                                                                          0);
    if ( ((unsigned __int8)updateAgainPanels & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_48;
      trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)Item, method);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UnityEngine_Object__op_Equality(
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
    if ( !HIDWORD(updateAgainPanels[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(updateAgainPanels, method);
      updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UILabel_TypeInfo;
    }
    v11 = **(BetterList_T__o ***)&updateAgainPanels[2].fields._freeList;
    if ( !v11 )
      goto LABEL_48;
    if ( j >= v11->fields.size )
      break;
    if ( !HIDWORD(updateAgainPanels[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(updateAgainPanels, method);
      v11 = (BetterList_T__o *)UILabel_TypeInfo->static_fields->mList;
      if ( !v11 )
        goto LABEL_48;
    }
    v13 = BetterList_object___get_Item(v11, j, (const MethodInfo_3E3C040 *)Method_BetterList_UILabel__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UnityEngine_Object__op_Inequality(
                                                                          (UnityEngine_Object_o *)v13,
                                                                          0,
                                                                          0);
    if ( ((unsigned __int8)updateAgainPanels & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_48;
      v15 = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)v13, method);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Equality(v15, (UnityEngine_Object_o *)font, 0) )
      {
        UIWidget__RemoveFromPanel((UIWidget_o *)v13, 0);
        Panel = UIWidget__CreatePanel((UIWidget_o *)v13, 0);
        v17 = UIPanel_TypeInfo;
        v18 = (UnityEngine_Object_o *)Panel;
        if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
          v17 = UIPanel_TypeInfo;
        }
        if ( v17->static_fields->mUpdating )
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v18,
                                                                                0,
                                                                                0);
          if ( ((unsigned __int8)updateAgainPanels & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_48;
            if ( UIPanel__get_IsUpdated((UIPanel_o *)v18, 0) )
            {
              v19 = UIPanel_TypeInfo;
              if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
                v19 = UIPanel_TypeInfo;
              }
              updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)v19->static_fields->updateAgainPanels;
              if ( !updateAgainPanels )
                goto LABEL_48;
              System_Collections_Generic_HashSet_object___Add(
                updateAgainPanels,
                (Il2CppObject *)v18,
                (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_UIPanel__Add__);
            }
          }
        }
      }
    }
    updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)UILabel_TypeInfo;
  }
}


void UILabel__OnInit(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_c *v4; // x0
  BetterList_T__o *mList; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Font_o *trueTypeFont; // x0
  const MethodInfo *v8; // x2
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0

  if ( (byte_593CFAF & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UILabel__Add__);
    sub_21FFC50(&UILabel_TypeInfo);
    sub_21FFC50(&StringLiteral_11411/*"RANKUP_GRADIENT_BOTTOM"*/);
    sub_21FFC50(&StringLiteral_11412/*"RANKUP_GRADIENT_TOP"*/);
    sub_21FFC50(&StringLiteral_11413/*"RANKUP_OUTLINE"*/);
    byte_593CFAF = 1;
  }
  UIWidget__OnInit((UIWidget_o *)this, 0);
  v4 = UILabel_TypeInfo;
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v3);
    v4 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v4->static_fields->mList;
  if ( !mList )
    sub_21FFECC(0, v3);
  BetterList_object___Add(mList, (Il2CppObject *)this, (const MethodInfo_3E3C260 *)Method_BetterList_UILabel__Add__);
  trueTypeFont = UILabel__get_trueTypeFont(this, v6);
  UILabel__SetActiveFont(this, trueTypeFont, v8);
  v9 = NguiLocalizationManager__Get((System_String_o *)StringLiteral_11412/*"RANKUP_GRADIENT_TOP"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v9, &this->fields.specificGradientTop, 0);
  v10 = NguiLocalizationManager__Get((System_String_o *)StringLiteral_11411/*"RANKUP_GRADIENT_BOTTOM"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v10, &this->fields.specificGradientBottom, 0);
  v11 = NguiLocalizationManager__Get((System_String_o *)StringLiteral_11413/*"RANKUP_OUTLINE"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v11, &this->fields.specificOutline, 0);
}


void UILabel__OnStart(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float mLineWidth; // s9
  double v5; // d8
  double v6; // d0
  double v7; // d0
  double v8; // d1
  double v9; // d1
  int32_t v10; // w8
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x1
  UnityEngine_Material_o *name; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *shader; // x20
  bool v18; // w0
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593CFB9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11170/*"Premultiplied"*/);
    byte_593CFB9 = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0);
  mLineWidth = this->fields.mLineWidth;
  if ( mLineWidth <= 0.0 )
    goto LABEL_22;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v5 = mLineWidth;
  v6 = modf(mLineWidth, &iptr);
  if ( mLineWidth >= 0.0 )
  {
    if ( v6 == 0.5 )
    {
      v8 = 1.0;
      v7 = iptr;
LABEL_13:
      v9 = v7 + v8;
      if ( ((__int64)v7 & 1) != 0 )
        v7 = v9;
      goto LABEL_18;
    }
    v7 = floor(v5 + 0.5);
  }
  else
  {
    if ( v6 == -0.5 )
    {
      v7 = iptr;
      v8 = -1.0;
      goto LABEL_13;
    }
    v7 = ceil(v5 + -0.5);
  }
LABEL_18:
  this->fields.mLineWidth = 0.0;
  if ( v7 == INFINITY )
    v10 = 0x80000000;
  else
    v10 = (int)v7;
  this->fields.mMaxLineWidth = v10;
LABEL_22:
  if ( !this->fields.mMultiline )
  {
    this->fields.mMaxLineCount = 1;
    this->fields.mMultiline = 1;
  }
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                  this,
                                  this->klass->vtable._24_get_material.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Inequality(v12, 0, 0) )
    goto LABEL_35;
  name = (UnityEngine_Material_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                     this,
                                     this->klass->vtable._24_get_material.method);
  if ( !name )
    goto LABEL_37;
  shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(name, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( !UnityEngine_Object__op_Inequality(shader, 0, 0) )
  {
LABEL_35:
    v18 = 0;
    goto LABEL_36;
  }
  name = (UnityEngine_Material_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                     this,
                                     this->klass->vtable._24_get_material.method);
  if ( !name
    || (name = (UnityEngine_Material_o *)UnityEngine_Material__get_shader(name, 0)) == 0
    || (name = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0)) == 0 )
  {
LABEL_37:
    sub_21FFECC(name, v15);
  }
  v18 = System_String__Contains((System_String_o *)name, (System_String_o *)StringLiteral_11170/*"Premultiplied"*/, 0);
LABEL_36:
  this->fields.mPremultiply = v18;
  UILabel__ProcessAndRequest(this, v13);
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
  float b; // s12
  float g; // s13
  float r; // s14
  float v12; // s11
  float v13; // s8
  float v15; // s9
  float v16; // s10
  const MethodInfo *v21; // x1
  System_String_o *processedText; // x26
  const MethodInfo *v23; // x1
  BetterList_Vector2__o *uvs; // x0
  struct BetterList_Vector3__o *v25; // x1
  struct BetterList_Vector3__o *verts; // x27
  int32_t size; // w22
  float finalAlpha; // s8
  struct BetterList_Vector3__o *v29; // x28
  int32_t v30; // w25
  const MethodInfo *v31; // x3
  struct BetterList_Vector3__o *v32; // x8
  UnityEngine_Color32_o v33; // x23
  int v34; // w25
  UnityEngine_Color32_o v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct BetterList_Vector3__o *v42; // x8
  UnityEngine_Color32_o v43; // x20
  int v44; // w22
  UnityEngine_Color32_o v45; // x1
  NGUIText_c *v46; // x0
  struct NGUIText_StaticFields *static_fields; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  float v54; // [xsp+4Ch] [xbp-54h]
  UnityEngine_Vector2_o v55; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4

  a = highlightColor.fields.a;
  b = highlightColor.fields.b;
  g = highlightColor.fields.g;
  r = highlightColor.fields.r;
  v12 = caretColor.fields.a;
  v13 = caretColor.fields.b;
  v15 = caretColor.fields.g;
  v16 = caretColor.fields.r;
  if ( (byte_593CFC1 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    sub_21FFC50(&Method_BetterList_Vector2__Add__);
    sub_21FFC50(&NGUIText_TypeInfo);
    byte_593CFC1 = 1;
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
  v54 = v13;
  if ( !verts )
    goto LABEL_34;
  size = verts->fields.size;
  finalAlpha = this->fields.finalAlpha;
  if ( start == end || !highlight )
  {
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v25);
    NGUIText__PrintCaretAndSelection(processedText, start, end, verts, 0, 0);
    goto LABEL_28;
  }
  v29 = highlight->fields.verts;
  if ( !v29 )
    goto LABEL_34;
  v30 = v29->fields.size;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v25);
  NGUIText__PrintCaretAndSelection(processedText, start, end, verts, v29, 0);
  v25 = highlight->fields.verts;
  if ( !v25 )
LABEL_34:
    sub_21FFECC(uvs, v25);
  if ( v25->fields.size > v30 )
  {
    UILabel__ApplyOffset(this, v25, v30, v31);
    uvs = (BetterList_Vector2__o *)sub_2BB41EC(0, r, g, b, a * finalAlpha);
    v32 = highlight->fields.verts;
    if ( !v32 )
      goto LABEL_34;
    v33 = (UnityEngine_Color32_o)(unsigned int)uvs;
    v34 = v30 - 1;
    while ( ++v34 < v32->fields.size )
    {
      uvs = highlight->fields.uvs;
      if ( uvs )
      {
        v55.fields.x = 0.5;
        v55.fields.y = 0.5;
        BetterList_Vector2___Add(uvs, v55, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
        uvs = (BetterList_Vector2__o *)highlight->fields.cols;
        if ( uvs )
        {
          v35 = v33;
          BetterList_Color32___Add(
            (BetterList_Color32__o *)uvs,
            v35,
            (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
          v32 = highlight->fields.verts;
          if ( v32 )
            continue;
        }
      }
      goto LABEL_34;
    }
  }
LABEL_28:
  UILabel__ApplyOffset(this, caret->fields.verts, size, v31);
  uvs = (BetterList_Vector2__o *)sub_2BB41EC(0, v16, v15, v54, v12 * finalAlpha);
  v42 = caret->fields.verts;
  if ( !v42 )
    goto LABEL_34;
  v43 = (UnityEngine_Color32_o)(unsigned int)uvs;
  v44 = size - 1;
  while ( ++v44 < v42->fields.size )
  {
    uvs = caret->fields.uvs;
    if ( uvs )
    {
      v56.fields.x = 0.5;
      v56.fields.y = 0.5;
      BetterList_Vector2___Add(uvs, v56, (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
      uvs = (BetterList_Vector2__o *)caret->fields.cols;
      if ( uvs )
      {
        v45 = v43;
        BetterList_Color32___Add(
          (BetterList_Color32__o *)uvs,
          v45,
          (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
        v42 = caret->fields.verts;
        if ( v42 )
          continue;
      }
    }
    goto LABEL_34;
  }
  v46 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v25);
    v46 = NGUIText_TypeInfo;
  }
  v46->static_fields->bitmapFont = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields, 0, v36, v37, v38, v39, v40, v41);
  static_fields = NGUIText_TypeInfo->static_fields;
  static_fields->dynamicFont = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->dynamicFont, 0, v48, v49, v50, v51, v52, v53);
}


void UILabel__ProcessAndRequest(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *ambigiousFont; // x20
  const MethodInfo *v5; // x3

  if ( (byte_593CFB7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFB7 = 1;
  }
  ambigiousFont = UILabel__get_ambigiousFont(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(ambigiousFont, 0, 0) )
    UILabel__ProcessText_56369940(this, 0, 1, v5);
}


void UILabel__ProcessText(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  UILabel__ProcessText_56369940(this, 0, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__ProcessText_56369940(UILabel_o *this, bool legacyMode, bool full, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  int32_t mMaxLineWidth; // w22
  NGUIText_c *v9; // x0
  float y; // s10
  float x; // s11
  float z; // s8
  float w; // s9
  struct NGUIText_StaticFields *static_fields; // x8
  int32_t mMaxLineHeight; // w22
  float v16; // s11
  int v17; // w9
  int v18; // w22
  float rectWidth; // s8
  float v20; // s12
  double v21; // d8
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  float v26; // s10
  struct NGUIText_StaticFields *v27; // x8
  int v28; // w9
  int v29; // w22
  float rectHeight; // s8
  float v31; // s9
  double v32; // d8
  double v33; // d0
  double v34; // d0
  double v35; // d1
  double v36; // d1
  __int64 cachedTransform; // x0
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  float v40; // s8
  double v41; // d9
  const MethodInfo *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  double v49; // d0
  double v50; // d0
  double v51; // d1
  int32_t defaultFontSize; // w22
  double v53; // d1
  NGUIText_c *v54; // x0
  int32_t v55; // w8
  struct NGUIText_StaticFields *v56; // x8
  __int64 v57; // x1
  UnityEngine_Object_o *trueTypeFont; // x22
  float pixelSizeAdjustment; // s8
  _BOOL4 v60; // w22
  __int64 v61; // x1
  UnityEngine_Object_o *root; // x23
  int32_t mOverflow; // w8
  NGUIText_c *v64; // x0
  struct NGUIText_StaticFields *v65; // x8
  struct System_String_o **p_mProcessedText; // x0
  int32_t v67; // w1
  struct NGUIText_StaticFields *v68; // x9
  struct NGUIText_StaticFields *v69; // x8
  bool keepCrisp; // w0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  int mPrintedSize; // w29
  bool v78; // w23
  NGUIText_c *v79; // x0
  UnityEngine_Object_c *v80; // x0
  UnityEngine_Object_o *mFont; // x25
  float mScale; // s8
  int32_t mFontSize; // s8
  bool v84; // w0
  int32_t v85; // w8
  bool v86; // vf
  UnityEngine_Transform_o *v87; // x21
  int32_t v88; // w1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  System_String_o *mProcessedText; // x22
  int v96; // w9
  UnityEngine_Vector2_o v97; // kr00_8
  UILabel_c *v98; // x8
  int32_t v99; // w0
  __int64 v100; // x1
  float v101; // s9
  int32_t v102; // w22
  double v103; // d8
  double v104; // d0
  double v105; // d0
  double v106; // d1
  UnityEngine_Vector2_o v107; // kr08_8
  UILabel_c *klass; // x8
  int32_t v109; // w22
  int32_t v110; // w0
  double v111; // d1
  int32_t v112; // w8
  int32_t v113; // w0
  __int64 v114; // x1
  float v115; // s9
  int32_t v116; // w22
  double v117; // d8
  double v118; // d0
  double v119; // d0
  double v120; // d1
  double v121; // d1
  int v122; // w8
  int32_t mWidth; // w8
  float v124; // s9
  double v125; // d8
  double v126; // d0
  double v127; // d0
  double v128; // d1
  double v129; // d1
  int32_t v130; // w1
  __int64 v131; // x1
  float v132; // s9
  double v133; // d8
  double v134; // d0
  double v135; // d0
  double v136; // d1
  double v137; // d1
  int32_t v138; // w1
  UnityEngine_Transform_o *v139; // x20
  NGUIText_c *v140; // x0
  struct NGUIText_StaticFields *v141; // x0
  double iptr; // [xsp+8h] [xbp-88h] BYREF

  if ( (byte_593CFBA & 1) == 0 )
  {
    sub_21FFC50(&NGUIText_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CFBA = 1;
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
  v9 = NGUIText_TypeInfo;
  x = this->fields.mDrawRegion.fields.x;
  y = this->fields.mDrawRegion.fields.y;
  z = this->fields.mDrawRegion.fields.z;
  w = this->fields.mDrawRegion.fields.w;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v7);
    v9 = NGUIText_TypeInfo;
  }
  static_fields = v9->static_fields;
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
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v7);
    v9 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  static_fields->rectHeight = mMaxLineHeight;
  v17 = *(&v9->_2.cctor_finished + 1);
  if ( v16 != 1.0 )
  {
    if ( !v17 )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      static_fields = NGUIText_TypeInfo->static_fields;
    }
    rectWidth = (float)static_fields->rectWidth;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v20 = v16 * rectWidth;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
    v21 = v20;
    v22 = modf(v20, &iptr);
    if ( v20 >= 0.0 )
    {
      if ( v22 == 0.5 )
      {
        v24 = 1.0;
        v23 = iptr;
LABEL_33:
        v25 = v23 + v24;
        if ( ((__int64)v23 & 1) != 0 )
          v23 = v25;
        goto LABEL_38;
      }
      v23 = floor(v21 + 0.5);
    }
    else
    {
      if ( v22 == -0.5 )
      {
        v23 = iptr;
        v24 = -1.0;
        goto LABEL_33;
      }
      v23 = ceil(v21 + -0.5);
    }
LABEL_38:
    v9 = NGUIText_TypeInfo;
    if ( v23 == INFINITY )
      v18 = 0x80000000;
    else
      v18 = (int)v23;
    goto LABEL_41;
  }
  if ( !v17 )
  {
    j_il2cpp_runtime_class_init_0(v9, v7);
    v9 = NGUIText_TypeInfo;
    static_fields = NGUIText_TypeInfo->static_fields;
  }
  v18 = static_fields->rectWidth;
LABEL_41:
  v26 = w - y;
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v7);
    v9 = NGUIText_TypeInfo;
  }
  v27 = v9->static_fields;
  v27->regionWidth = v18;
  v28 = *(&v9->_2.cctor_finished + 1);
  if ( v26 != 1.0 )
  {
    if ( !v28 )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      v27 = NGUIText_TypeInfo->static_fields;
    }
    rectHeight = (float)v27->rectHeight;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v31 = v26 * rectHeight;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
    v32 = v31;
    v33 = modf(v31, &iptr);
    if ( v31 >= 0.0 )
    {
      if ( v33 == 0.5 )
      {
        v35 = 1.0;
        v34 = iptr;
LABEL_58:
        v36 = v34 + v35;
        if ( ((__int64)v34 & 1) != 0 )
          v34 = v36;
        goto LABEL_63;
      }
      v34 = floor(v32 + 0.5);
    }
    else
    {
      if ( v33 == -0.5 )
      {
        v34 = iptr;
        v35 = -1.0;
        goto LABEL_58;
      }
      v34 = ceil(v32 + -0.5);
    }
LABEL_63:
    v9 = NGUIText_TypeInfo;
    if ( v34 == INFINITY )
      v29 = 0x80000000;
    else
      v29 = (int)v34;
    goto LABEL_66;
  }
  if ( !v28 )
  {
    j_il2cpp_runtime_class_init_0(v9, v7);
    v9 = NGUIText_TypeInfo;
    v27 = NGUIText_TypeInfo->static_fields;
  }
  v29 = v27->rectHeight;
LABEL_66:
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v7);
    v9 = NGUIText_TypeInfo;
  }
  v9->static_fields->regionHeight = v29;
  if ( !legacyMode )
  {
    defaultFontSize = UILabel__get_defaultFontSize(this, v7);
    goto LABEL_88;
  }
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_258;
  LODWORD(v40) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)cachedTransform, 0);
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v39);
  v41 = v40;
  v49 = modf(v40, &iptr);
  if ( v40 >= 0.0 )
  {
    if ( v49 == 0.5 )
    {
      v51 = 1.0;
      v50 = iptr;
LABEL_80:
      v53 = v50 + v51;
      if ( ((__int64)v50 & 1) != 0 )
        v50 = v53;
      goto LABEL_85;
    }
    v50 = floor(v41 + 0.5);
  }
  else
  {
    if ( v49 == -0.5 )
    {
      v50 = iptr;
      v51 = -1.0;
      goto LABEL_80;
    }
    v50 = ceil(v41 + -0.5);
  }
LABEL_85:
  if ( v50 == INFINITY )
    defaultFontSize = 0x80000000;
  else
    defaultFontSize = (int)v50;
LABEL_88:
  if ( !byte_5932DF6 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5932DF6 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v42);
  v54 = NGUIText_TypeInfo;
  if ( defaultFontSize >= 0 )
    v55 = defaultFontSize;
  else
    v55 = -defaultFontSize;
  this->fields.mScale = 1.0;
  this->fields.mPrintedSize = v55;
  if ( !*(&v54->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v54, v42);
    v54 = NGUIText_TypeInfo;
  }
  v56 = v54->static_fields;
  if ( v56->regionWidth < 1 )
    goto LABEL_119;
  if ( !*(&v54->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v54, v42);
    v56 = NGUIText_TypeInfo->static_fields;
  }
  if ( v56->regionHeight < 0 )
  {
LABEL_119:
    p_mProcessedText = &this->fields.mProcessedText;
    v67 = (int)StringLiteral_1/*""*/;
    this->fields.mProcessedText = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_256:
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mProcessedText, v67, v43, v44, v45, v46, v47, v48);
    return;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, v42);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  pixelSizeAdjustment = 1.0;
  v60 = UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0);
  if ( !v60 || !UILabel__get_keepCrisp(this, v38) )
  {
LABEL_113:
    this->fields.mDensity = pixelSizeAdjustment;
    goto LABEL_114;
  }
  root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
  if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    cachedTransform = UnityEngine_Object__op_Inequality(root, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      if ( !root )
        goto LABEL_258;
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)root, v38);
    }
    goto LABEL_113;
  }
LABEL_114:
  if ( full )
    UILabel__UpdateNGUIText(this, v38);
  mOverflow = this->fields.mOverflow;
  if ( mOverflow == 2 )
  {
    v64 = NGUIText_TypeInfo;
    if ( *(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      v65 = NGUIText_TypeInfo->static_fields;
      v65->rectWidth = 1000000;
      v65->regionWidth = 1000000;
      goto LABEL_123;
    }
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v38);
    v64 = NGUIText_TypeInfo;
    mOverflow = this->fields.mOverflow;
    v68 = NGUIText_TypeInfo->static_fields;
    v68->rectWidth = 1000000;
    v68->regionWidth = 1000000;
    if ( mOverflow == 2 )
      goto LABEL_123;
  }
  if ( mOverflow != 3 )
    goto LABEL_126;
  v64 = NGUIText_TypeInfo;
LABEL_123:
  if ( !*(&v64->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v64, v38);
    v64 = NGUIText_TypeInfo;
  }
  v69 = v64->static_fields;
  v69->rectHeight = 1000000;
  v69->regionHeight = 1000000;
LABEL_126:
  if ( this->fields.mPrintedSize < 1 )
  {
    cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)this, 0);
    v87 = (UnityEngine_Transform_o *)cachedTransform;
    if ( !byte_5931945 )
    {
      cachedTransform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( v87 )
    {
      UnityEngine_Transform__set_localScale(v87, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v88 = (int)StringLiteral_1/*""*/;
      this->fields.mProcessedText = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mProcessedText, v88, v89, v90, v91, v92, v93, v94);
      this->fields.mScale = 1.0;
      goto LABEL_252;
    }
LABEL_258:
    sub_21FFECC(cachedTransform, v38);
  }
  keepCrisp = UILabel__get_keepCrisp(this, v38);
  mPrintedSize = this->fields.mPrintedSize;
  if ( mPrintedSize < 1 )
    goto LABEL_252;
  v78 = keepCrisp;
  while ( 1 )
  {
    if ( v78 )
    {
      v79 = NGUIText_TypeInfo;
      this->fields.mPrintedSize = mPrintedSize;
      if ( !*(&v79->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v79, v38);
        v79 = NGUIText_TypeInfo;
      }
      v79->static_fields->fontSize = mPrintedSize;
    }
    else
    {
      v80 = UnityEngine_Object_TypeInfo;
      mFont = (UnityEngine_Object_o *)this->fields.mFont;
      this->fields.mScale = (float)mPrintedSize / (float)this->fields.mPrintedSize;
      if ( !*(&v80->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v80, v38);
      if ( ((v60 | UnityEngine_Object__op_Equality(mFont, 0, 0)) & 1) != 0 )
      {
        mScale = this->fields.mScale;
      }
      else
      {
        cachedTransform = (__int64)this->fields.mFont;
        if ( !cachedTransform )
          goto LABEL_258;
        mFontSize = this->fields.mFontSize;
        mScale = this->fields.mScale
               * (float)((float)mFontSize / (float)UIFont__get_defaultSize((UIFont_o *)cachedTransform, v38));
      }
      v79 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v38);
        v79 = NGUIText_TypeInfo;
      }
      v79->static_fields->fontScale = mScale;
    }
    if ( !*(&v79->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v79, v38);
    NGUIText__Update_56168172(0, 0);
    v84 = NGUIText__WrapText_56184444(this->fields.mText, &this->fields.mProcessedText, 1, 0);
    v85 = this->fields.mOverflow;
    if ( v85 || v84 )
      break;
    v86 = __OFSUB__(mPrintedSize, 2);
    mPrintedSize -= 2;
    if ( (mPrintedSize < 0) ^ v86 | (mPrintedSize == 0) )
      goto LABEL_252;
  }
  mProcessedText = this->fields.mProcessedText;
  v96 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
  if ( v85 == 3 )
  {
    if ( !v96 )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v38);
    v107 = NGUIText__CalculatePrintedSize(mProcessedText, 0);
    klass = this->klass;
    this->fields.mCalculatedSize = v107;
    v109 = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))klass->vtable._35_get_minHeight.methodPtr)(
             this,
             klass->vtable._35_get_minHeight.method);
    v110 = sub_357AA88(0, this->fields.mCalculatedSize.fields.y);
    if ( v109 > v110 )
      v110 = v109;
    this->fields.mHeight = v110;
    if ( v26 != 1.0 )
    {
      v110 = sub_357AA88(0, (float)v110 / v26);
      this->fields.mHeight = v110;
    }
    goto LABEL_211;
  }
  if ( v85 == 2 )
  {
    if ( !v96 )
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v38);
    v97 = NGUIText__CalculatePrintedSize(mProcessedText, 0);
    v98 = this->klass;
    this->fields.mCalculatedSize = v97;
    v99 = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))v98->vtable._34_get_minWidth.methodPtr)(
            this,
            v98->vtable._34_get_minWidth.method);
    v101 = this->fields.mCalculatedSize.fields.x;
    v102 = v99;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v100);
    v103 = v101;
    v104 = modf(v101, &iptr);
    if ( v101 >= 0.0 )
    {
      if ( v104 != 0.5 )
      {
        v105 = floor(v103 + 0.5);
        goto LABEL_180;
      }
      v106 = 1.0;
      v105 = iptr;
    }
    else
    {
      if ( v104 != -0.5 )
      {
        v105 = ceil(v103 + -0.5);
        goto LABEL_180;
      }
      v105 = iptr;
      v106 = -1.0;
    }
    v111 = v105 + v106;
    if ( ((__int64)v105 & 1) != 0 )
      v105 = v111;
LABEL_180:
    if ( v105 == INFINITY )
      v112 = 0x80000000;
    else
      v112 = (int)v105;
    if ( v102 > v112 )
      v112 = v102;
    this->fields.mWidth = v112;
    if ( v16 != 1.0 )
      this->fields.mWidth = sub_357AA88(0, (float)v112 / v16);
    v113 = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._35_get_minHeight.methodPtr)(
             this,
             this->klass->vtable._35_get_minHeight.method);
    v115 = this->fields.mCalculatedSize.fields.y;
    v116 = v113;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v114);
    v117 = v115;
    v118 = modf(v115, &iptr);
    if ( v115 >= 0.0 )
    {
      if ( v118 == 0.5 )
      {
        v120 = 1.0;
        v119 = iptr;
LABEL_196:
        v121 = v119 + v120;
        if ( ((__int64)v119 & 1) != 0 )
          v119 = v121;
        goto LABEL_201;
      }
      v119 = floor(v117 + 0.5);
    }
    else
    {
      if ( v118 == -0.5 )
      {
        v119 = iptr;
        v120 = -1.0;
        goto LABEL_196;
      }
      v119 = ceil(v117 + -0.5);
    }
LABEL_201:
    if ( v119 == INFINITY )
      v122 = 0x80000000;
    else
      v122 = (int)v119;
    if ( v116 <= v122 )
      v110 = v122;
    else
      v110 = v116;
    this->fields.mHeight = v110;
    if ( v26 != 1.0 )
    {
      v110 = sub_357AA88(0, (float)v110 / v26);
      this->fields.mHeight = v110;
    }
    mWidth = this->fields.mWidth;
    if ( (mWidth & 1) != 0 )
      this->fields.mWidth = mWidth + 1;
LABEL_211:
    if ( (v110 & 1) != 0 )
      this->fields.mHeight = v110 + 1;
    goto LABEL_213;
  }
  if ( !v96 )
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v38);
  this->fields.mCalculatedSize = NGUIText__CalculatePrintedSize(mProcessedText, 0);
LABEL_213:
  if ( !legacyMode )
    goto LABEL_252;
  v124 = this->fields.mCalculatedSize.fields.x;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38);
  v125 = v124;
  v126 = modf(v124, &iptr);
  if ( v124 >= 0.0 )
  {
    if ( v126 != 0.5 )
    {
      v127 = floor(v125 + 0.5);
      goto LABEL_228;
    }
    v128 = 1.0;
    v127 = iptr;
  }
  else
  {
    if ( v126 != -0.5 )
    {
      v127 = ceil(v125 + -0.5);
      goto LABEL_228;
    }
    v127 = iptr;
    v128 = -1.0;
  }
  v129 = v127 + v128;
  if ( ((__int64)v127 & 1) != 0 )
    v127 = v129;
LABEL_228:
  if ( v127 == INFINITY )
    v130 = 0x80000000;
  else
    v130 = (int)v127;
  UIWidget__set_width((UIWidget_o *)this, v130, 0);
  v132 = this->fields.mCalculatedSize.fields.y;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v131);
  v133 = v132;
  v134 = modf(v132, &iptr);
  if ( v132 >= 0.0 )
  {
    if ( v134 != 0.5 )
    {
      v135 = floor(v133 + 0.5);
      goto LABEL_245;
    }
    v136 = 1.0;
    v135 = iptr;
  }
  else
  {
    if ( v134 != -0.5 )
    {
      v135 = ceil(v133 + -0.5);
      goto LABEL_245;
    }
    v135 = iptr;
    v136 = -1.0;
  }
  v137 = v135 + v136;
  if ( ((__int64)v135 & 1) != 0 )
    v135 = v137;
LABEL_245:
  if ( v135 == INFINITY )
    v138 = 0x80000000;
  else
    v138 = (int)v135;
  UIWidget__set_height((UIWidget_o *)this, v138, 0);
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)this, 0);
  v139 = (UnityEngine_Transform_o *)cachedTransform;
  if ( !byte_5931945 )
  {
    cachedTransform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v139 )
    goto LABEL_258;
  UnityEngine_Transform__set_localScale(v139, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
LABEL_252:
  if ( full )
  {
    v140 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v38);
      v140 = NGUIText_TypeInfo;
    }
    v140->static_fields->bitmapFont = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields, 0, v71, v72, v73, v74, v75, v76);
    v67 = 0;
    v141 = NGUIText_TypeInfo->static_fields;
    v141->dynamicFont = 0;
    p_mProcessedText = (struct System_String_o **)&v141->dynamicFont;
    goto LABEL_256;
  }
}


void UILabel__RemoveFromDynamicFontList(UILabel_o *this, const MethodInfo *method)
{
  UILabel_c *v3; // x0
  BetterList_T__o *mList; // x0

  if ( (byte_593CFB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UILabel__Remove__);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFB4 = 1;
  }
  v3 = UILabel_TypeInfo;
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, method);
    v3 = UILabel_TypeInfo;
  }
  mList = (BetterList_T__o *)v3->static_fields->mList;
  if ( !mList )
    sub_21FFECC(0, method);
  BetterList_object___Remove(
    mList,
    (Il2CppObject *)this,
    (const MethodInfo_3E3C51C *)Method_BetterList_UILabel__Remove__);
}


void UILabel__SetActiveFont(UILabel_o *this, UnityEngine_Font_o *fnt, const MethodInfo *method)
{
  UnityEngine_Object_o *mActiveTTF; // x21
  __int64 v6; // x1
  Il2CppObject **p_mActiveTTF; // x20
  Il2CppObject *v8; // x21
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UILabel_c *v16; // x0
  System_Collections_Generic_Dictionary_object__int__o *mFontUsage; // x0
  UILabel_c *v18; // x0
  int v19; // w9
  int v20; // w8
  bool v21; // zf
  __int64 v22; // x1
  Il2CppObject *v23; // x19
  UILabel_c *v24; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593CFB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Font__int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Font__int__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Font__int__set_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UILabel_TypeInfo);
    byte_593CFB1 = 1;
  }
  mActiveTTF = (UnityEngine_Object_o *)this->fields.mActiveTTF;
  value = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, fnt);
  if ( UnityEngine_Object__op_Inequality(mActiveTTF, (UnityEngine_Object_o *)fnt, 0) )
  {
    p_mActiveTTF = (Il2CppObject **)&this->fields.mActiveTTF;
    v8 = *p_mActiveTTF;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
    {
      v16 = UILabel_TypeInfo;
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v9);
        v16 = UILabel_TypeInfo;
      }
      mFontUsage = (System_Collections_Generic_Dictionary_object__int__o *)v16->static_fields->mFontUsage;
      if ( !mFontUsage )
        goto LABEL_30;
      if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
             mFontUsage,
             *p_mActiveTTF,
             &value,
             (const MethodInfo_3FC241C *)Method_System_Collections_Generic_Dictionary_Font__int__TryGetValue__) )
      {
        v18 = UILabel_TypeInfo;
        v19 = value - 1;
        v20 = *(&UILabel_TypeInfo->_2.cctor_finished + 1);
        v21 = value == 1;
        value = v19 & ~(v19 >> 31);
        if ( v19 < 0 || v21 )
        {
          if ( !v20 )
          {
            j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v9);
            v18 = UILabel_TypeInfo;
          }
          mFontUsage = (System_Collections_Generic_Dictionary_object__int__o *)v18->static_fields->mFontUsage;
          if ( !mFontUsage )
            goto LABEL_30;
          System_Collections_Generic_Dictionary_object__int___Remove(
            mFontUsage,
            *p_mActiveTTF,
            (const MethodInfo_3FC1DDC *)Method_System_Collections_Generic_Dictionary_Font__int__Remove__);
        }
        else
        {
          if ( !v20 )
          {
            j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v9);
            v18 = UILabel_TypeInfo;
          }
          mFontUsage = (System_Collections_Generic_Dictionary_object__int__o *)v18->static_fields->mFontUsage;
          if ( !mFontUsage )
            goto LABEL_30;
          System_Collections_Generic_Dictionary_object__int___set_Item(
            mFontUsage,
            *p_mActiveTTF,
            value,
            (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_Font__int__set_Item__);
        }
      }
    }
    *p_mActiveTTF = (Il2CppObject *)fnt;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mActiveTTF, (int32_t)fnt, v10, v11, v12, v13, v14, v15);
    v23 = *p_mActiveTTF;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0) )
    {
      v24 = UILabel_TypeInfo;
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v9);
        v24 = UILabel_TypeInfo;
      }
      mFontUsage = (System_Collections_Generic_Dictionary_object__int__o *)v24->static_fields->mFontUsage;
      if ( mFontUsage )
      {
        System_Collections_Generic_Dictionary_object__int___set_Item(
          mFontUsage,
          *p_mActiveTTF,
          1,
          (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_Font__int__set_Item__);
        return;
      }
LABEL_30:
      sub_21FFECC(mFontUsage, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UILabel__SetCondensedScale(UILabel_o *this, int32_t maxWidth, int32_t correctWidth, const MethodInfo *method)
{
  UILabel__SetCondensedScale_56386440(this, (float)maxWidth, (float)correctWidth, *(const MethodInfo **)&maxWidth);
}


// local variable allocation has failed, the output may be wrong!
void UILabel__SetCondensedScale_56386440(UILabel_o *this, float maxWidth, float correctWidth, const MethodInfo *method)
{
  float v5; // s9
  __int64 transform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x19
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8

  v5 = (float)this->fields.mWidth + correctWidth;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v8 = (UnityEngine_Transform_o *)transform;
  if ( v5 <= maxWidth )
  {
    if ( !byte_5931945 )
    {
      transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( v8 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(transform, v7);
  }
  if ( !transform )
    goto LABEL_9;
  x = maxWidth / v5;
  y = 1.0;
  z = 1.0;
LABEL_8:
  UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&x, 0);
}


void UILabel__SetCurrentPercent(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0
  __int64 v6; // x1
  float value; // s8
  float v8; // s9
  double v9; // d8
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  int v14; // w8
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_593CFC6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIProgressBar_TypeInfo);
    sub_21FFC50(&StringLiteral_506/*"%"*/);
    byte_593CFC6 = 1;
  }
  v18 = 0;
  current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    v5 = UIProgressBar_TypeInfo->static_fields->current;
    if ( !v5 )
      sub_21FFECC(0, v4);
    value = UIProgressBar__get_value(v5, 0);
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v8 = value * 100.0;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v9 = v8;
    v10 = modf(v8, &iptr);
    if ( v8 >= 0.0 )
    {
      if ( v10 == 0.5 )
      {
        v12 = 1.0;
        v11 = iptr;
LABEL_16:
        v13 = v11 + v12;
        if ( ((__int64)v11 & 1) != 0 )
          v11 = v13;
        goto LABEL_21;
      }
      v11 = floor(v9 + 0.5);
    }
    else
    {
      if ( v10 == -0.5 )
      {
        v11 = iptr;
        v12 = -1.0;
        goto LABEL_16;
      }
      v11 = ceil(v9 + -0.5);
    }
LABEL_21:
    if ( v11 == INFINITY )
      v14 = 0x80000000;
    else
      v14 = (int)v11;
    v18 = v14;
    v15 = System_Int32__ToString((int32_t)&v18, 0);
    v16 = System_String__Concat_75438412(v15, (System_String_o *)StringLiteral_506/*"%"*/, 0);
    UILabel__set_text(this, v16, v17);
  }
}


void UILabel__SetCurrentPercentFloat(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0
  __int64 v6; // x1
  float value; // s8
  float v8; // s9
  double v9; // d8
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  float v14; // s1
  bool v15; // zf
  float v16; // s0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  float v20; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_593CFCC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIProgressBar_TypeInfo);
    sub_21FFC50(&StringLiteral_26387/*"{0:0.0}%"*/);
    byte_593CFCC = 1;
  }
  current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    v5 = UIProgressBar_TypeInfo->static_fields->current;
    if ( !v5 )
      sub_21FFECC(0, v4);
    value = UIProgressBar__get_value(v5, 0);
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v8 = value * 1000.0;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v9 = v8;
    v10 = modf(v8, &iptr);
    if ( v8 >= 0.0 )
    {
      if ( v10 == 0.5 )
      {
        v12 = 1.0;
        v11 = iptr;
LABEL_16:
        v13 = v11 + v12;
        if ( ((__int64)v11 & 1) != 0 )
          v11 = v13;
        goto LABEL_21;
      }
      v11 = floor(v9 + 0.5);
    }
    else
    {
      if ( v10 == -0.5 )
      {
        v11 = iptr;
        v12 = -1.0;
        goto LABEL_16;
      }
      v11 = ceil(v9 + -0.5);
    }
LABEL_21:
    v14 = (float)(int)v11 / 10.0;
    v15 = v11 == INFINITY;
    v16 = -214750000.0;
    if ( !v15 )
      v16 = v14;
    if ( v16 > 100.0 )
      v16 = 100.0;
    v20 = v16;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v20);
    v18 = System_String__Format((System_String_o *)StringLiteral_26387/*"{0:0.0}%"*/, v17, 0);
    UILabel__set_text(this, v18, v19);
  }
}


void UILabel__SetCurrentProgress(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2
  System_String_o format; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593CFC5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIProgressBar_TypeInfo);
    sub_21FFC50(&StringLiteral_6645/*"F"*/);
    byte_593CFC5 = 1;
  }
  LODWORD(format.klass) = 0;
  current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
  {
    v5 = UIProgressBar_TypeInfo->static_fields->current;
    if ( !v5 )
      sub_21FFECC(0, v4);
    LODWORD(format.klass) = UIProgressBar__get_value(v5, 0);
    v6 = System_Single__ToString_77012896(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6645/*"F"*/);
    UILabel__set_text(this, v6, v7);
  }
}


void UILabel__SetCurrentSelection(UILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct UIPopupList_o *v7; // x8
  System_String_o *mSelectedItem; // x20

  if ( (byte_593CFC7 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIPopupList_TypeInfo);
    byte_593CFC7 = 1;
  }
  current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (System_String_o *)UnityEngine_Object__op_Inequality(current, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v7 = UIPopupList_TypeInfo->static_fields->current;
    if ( !v7 )
      goto LABEL_14;
    mSelectedItem = v7->fields.mSelectedItem;
    if ( v7->fields.isLocalized )
    {
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v5);
      v4 = Localization__Get(mSelectedItem, 0);
      mSelectedItem = v4;
    }
    if ( !this )
LABEL_14:
      sub_21FFECC(v4, v5);
    UILabel__set_text(this, mSelectedItem, v6);
  }
}


void UILabel__SetDefaultFont(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *trueTypeFont; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *mFont; // x20
  __int64 v7; // x1
  UILabel_c *v8; // x0
  UnityEngine_Object_o *defaultFont; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Font_c *v19; // x1
  struct UILabel_StaticFields *static_fields; // x0
  MissionNaviTransitionBoardItem_o *p_defaultFont; // x0
  struct UILabel_StaticFields *v22; // x0
  UILabel_c *v23; // x0
  UnityEngine_Object_o *v24; // x20
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  UILabel_c *v27; // x0

  if ( (byte_593CFCB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Font_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UILabel_TypeInfo);
    sub_21FFC50(&StringLiteral_7077/*"Fonts/FGO-Main-Font"*/);
    byte_593CFCB = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Equality(trueTypeFont, 0, 0) )
  {
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality(mFont, 0, 0) )
    {
      v8 = UILabel_TypeInfo;
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v7);
        v8 = UILabel_TypeInfo;
      }
      defaultFont = (UnityEngine_Object_o *)v8->static_fields->defaultFont;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( !UnityEngine_Object__op_Equality(defaultFont, 0, 0) )
        goto LABEL_22;
      v18 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_7077/*"Fonts/FGO-Main-Font"*/, 0);
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v11);
      if ( v18 )
      {
        v19 = UnityEngine_Font_TypeInfo;
        if ( (UnityEngine_Font_c *)v18->klass == UnityEngine_Font_TypeInfo )
        {
          static_fields = UILabel_TypeInfo->static_fields;
          static_fields->defaultFont = (struct UnityEngine_Font_o *)v18;
          p_defaultFont = (MissionNaviTransitionBoardItem_o *)&static_fields->defaultFont;
          if ( (UnityEngine_Font_c *)v18->klass == v19 )
            goto LABEL_21;
        }
        sub_220024C(v18, v19, v12);
      }
      v22 = UILabel_TypeInfo->static_fields;
      v22->defaultFont = 0;
      p_defaultFont = (MissionNaviTransitionBoardItem_o *)&v22->defaultFont;
LABEL_21:
      sub_21FFBF4(p_defaultFont, (int32_t)v18, v12, v13, v14, v15, v16, v17);
LABEL_22:
      v23 = UILabel_TypeInfo;
      if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v10);
        v23 = UILabel_TypeInfo;
      }
      v24 = (UnityEngine_Object_o *)v23->static_fields->defaultFont;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
      {
        v27 = UILabel_TypeInfo;
        if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, v25);
          v27 = UILabel_TypeInfo;
        }
        UILabel__set_trueTypeFont(this, v27->static_fields->defaultFont, v26);
      }
    }
  }
}


void UILabel__UpdateCondensedScaleComponent(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_593CFCD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFCD = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
  {
    if ( !Component_object )
      sub_21FFECC(v5, v6);
    UILabel__SetCondensedScale_56386440(this, (float)SLODWORD(Component_object[3].monitor), 0.0, v6);
  }
}


void UILabel__UpdateNGUIText(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *trueTypeFont; // x21
  _BOOL4 v5; // w0
  __int64 v6; // x1
  NGUIText_c *v7; // x8
  int32_t mPrintedSize; // w22
  _BOOL4 v9; // w20
  struct NGUIText_StaticFields *static_fields; // x8
  __int64 v11; // d0
  float v12; // s8
  float v13; // s9
  float v14; // s9
  double v15; // d8
  __int64 v16; // x1
  double v17; // d0
  double v18; // d0
  double v19; // d1
  double v20; // d1
  int32_t v21; // w9
  float mHeight; // s8
  float v23; // s9
  float v24; // s9
  double v25; // d8
  const MethodInfo *v26; // x1
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  int32_t v31; // w9
  UnityEngine_Object_o *mFont; // x22
  bool v33; // w22
  UIFont_o *bitmapFont; // x0
  NGUIText_c *v35; // x0
  struct NGUIText_StaticFields *v36; // x8
  struct NGUIText_StaticFields *v37; // x8
  unsigned __int64 v38; // d0
  UnityEngine_Object_c *v39; // x0
  UnityEngine_Object_o *v40; // x22
  float mScale; // s8
  int32_t mFontSize; // s8
  NGUIText_c *v43; // x0
  struct NGUIText_StaticFields *v44; // x8
  struct NGUIText_StaticFields *v45; // x9
  UnityEngine_Object_c *v46; // x0
  UnityEngine_Object_o *v47; // x22
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  NGUIText_c *v54; // x0
  UnityEngine_Object_o *castClass; // x21
  NGUIText_c *v56; // x0
  struct NGUIText_StaticFields *v57; // x0
  int32_t v58; // w1
  MissionNaviTransitionBoardItem_o *p_dynamicFont; // x0
  UIAtlas_c *klass; // x8
  bool v61; // w8
  int v62; // w9
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  bool isDynamic; // w8
  NGUIText_c *v70; // x0
  int v71; // w9
  UnityEngine_Font_o *dynamicFont; // x0
  struct NGUIText_StaticFields *v73; // x8
  MissionNaviTransitionBoardItem_o *v74; // x0
  struct NGUIText_StaticFields *v75; // x0
  const MethodInfo *v76; // x3
  __int64 v77; // x1
  UnityEngine_Object_o *root; // x20
  float pixelSizeAdjustment; // s8
  NGUIText_c *v80; // x0
  float mDensity; // s8
  __int64 v82; // x1
  NGUIText_c *v83; // x0
  int32_t mWidth; // w20
  struct NGUIText_StaticFields *v85; // x9
  float v86; // s8
  int v87; // w8
  float v88; // s9
  float v89; // s9
  double v90; // d8
  __int64 v91; // x1
  double v92; // d0
  double v93; // d0
  double v94; // d1
  double v95; // d1
  int32_t v96; // w9
  float v97; // s8
  float v98; // s9
  float v99; // s9
  double v100; // d8
  double v101; // d0
  double v102; // d0
  double v103; // d1
  double v104; // d1
  int32_t v105; // w8
  int32_t mAlignment; // w20
  unsigned int mPivot; // w8
  int v108; // w8
  double iptr; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_593CFC9 & 1) == 0 )
  {
    sub_21FFC50(&NGUIText_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFC9 = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0);
  v7 = NGUIText_TypeInfo;
  mPrintedSize = this->fields.mPrintedSize;
  v9 = v5;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v6);
    v7 = NGUIText_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->fontSize = mPrintedSize;
  static_fields->fontStyle = this->fields.mFontStyle;
  v11 = *(_QWORD *)&this->fields.mWidth;
  *(_QWORD *)&static_fields->rectWidth = v11;
  v12 = (float)(int)v11;
  v13 = this->fields.mDrawRegion.fields.z - this->fields.mDrawRegion.fields.x;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v14 = v13 * v12;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v15 = v14;
  v17 = modf(v14, &iptr);
  if ( v14 >= 0.0 )
  {
    if ( v17 != 0.5 )
    {
      v18 = floor(v15 + 0.5);
      goto LABEL_21;
    }
    v19 = 1.0;
    v18 = iptr;
  }
  else
  {
    if ( v17 != -0.5 )
    {
      v18 = ceil(v15 + -0.5);
      goto LABEL_21;
    }
    v18 = iptr;
    v19 = -1.0;
  }
  v20 = v18 + v19;
  if ( ((__int64)v18 & 1) != 0 )
    v18 = v20;
LABEL_21:
  v21 = (int)v18;
  if ( v18 == INFINITY )
    v21 = 0x80000000;
  NGUIText_TypeInfo->static_fields->regionWidth = v21;
  mHeight = (float)this->fields.mHeight;
  v23 = this->fields.mDrawRegion.fields.w - this->fields.mDrawRegion.fields.y;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v24 = v23 * mHeight;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
  v25 = v24;
  v27 = modf(v24, &iptr);
  if ( v24 >= 0.0 )
  {
    if ( v27 != 0.5 )
    {
      v28 = floor(v25 + 0.5);
      goto LABEL_37;
    }
    v29 = 1.0;
    v28 = iptr;
  }
  else
  {
    if ( v27 != -0.5 )
    {
      v28 = ceil(v25 + -0.5);
      goto LABEL_37;
    }
    v28 = iptr;
    v29 = -1.0;
  }
  v30 = v28 + v29;
  if ( ((__int64)v28 & 1) != 0 )
    v28 = v30;
LABEL_37:
  v31 = (int)v28;
  if ( v28 == INFINITY )
    v31 = 0x80000000;
  NGUIText_TypeInfo->static_fields->regionHeight = v31;
  if ( this->fields.mApplyGradient )
  {
    mFont = (UnityEngine_Object_o *)this->fields.mFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Equality(mFont, 0, 0) )
    {
      v33 = 1;
    }
    else
    {
      bitmapFont = this->fields.mFont;
      if ( !bitmapFont )
        goto LABEL_160;
      v33 = !UIFont__get_packedFontShader(bitmapFont, v26);
    }
  }
  else
  {
    v33 = 0;
  }
  v35 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
    v35 = NGUIText_TypeInfo;
  }
  v36 = v35->static_fields;
  v36->gradient = v33;
  v36->gradientTop = this->fields.mGradientTop;
  v35->static_fields->gradientBottom = this->fields.mGradientBottom;
  v37 = v35->static_fields;
  v37->encoding = this->fields.mEncoding;
  v37->premultiply = this->fields.mPremultiply;
  v37->symbolStyle = this->fields.mSymbols;
  v37->maxLines = this->fields.mMaxLineCount;
  if ( this->fields.mUseFloatSpacing )
    v38 = *(_QWORD *)&this->fields.mFloatSpacingX;
  else
    v38 = vcvt_f32_s32(*(int32x2_t *)&this->fields.mSpacingX).n64_u64[0];
  v39 = UnityEngine_Object_TypeInfo;
  *(_QWORD *)&v37->spacingX = v38;
  v40 = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&v39->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v39, v26);
  if ( ((v9 | UnityEngine_Object__op_Equality(v40, 0, 0)) & 1) != 0 )
  {
    mScale = this->fields.mScale;
  }
  else
  {
    bitmapFont = this->fields.mFont;
    if ( !bitmapFont )
      goto LABEL_160;
    mFontSize = this->fields.mFontSize;
    mScale = this->fields.mScale * (float)((float)mFontSize / (float)UIFont__get_defaultSize(bitmapFont, v26));
  }
  v43 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
    v43 = NGUIText_TypeInfo;
  }
  v44 = v43->static_fields;
  v44->fontScale = mScale;
  v44->specificGradientTop = this->fields.specificGradientTop;
  v43->static_fields->specificGradientBottom = this->fields.specificGradientBottom;
  v43->static_fields->outlineEffect = this->fields.specificOutline;
  v45 = v43->static_fields;
  v46 = UnityEngine_Object_TypeInfo;
  v45->outlineDistance = this->fields.mEffectDistance;
  v47 = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&v46->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v46, v26);
  if ( !UnityEngine_Object__op_Inequality(v47, 0, 0) )
  {
    v56 = NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
      v56 = NGUIText_TypeInfo;
    }
    v57 = v56->static_fields;
    v58 = (int)trueTypeFont;
    v57->dynamicFont = (struct UnityEngine_Font_o *)trueTypeFont;
    p_dynamicFont = (MissionNaviTransitionBoardItem_o *)&v57->dynamicFont;
LABEL_85:
    sub_21FFBF4(p_dynamicFont, v58, v48, v49, v50, v51, v52, v53);
    NGUIText_TypeInfo->static_fields->bitmapFont = 0;
    v74 = (MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields;
    goto LABEL_89;
  }
  v54 = NGUIText_TypeInfo;
  castClass = (UnityEngine_Object_o *)this->fields.mFont;
  if ( *(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    goto LABEL_69;
LABEL_68:
  j_il2cpp_runtime_class_init_0(v54, v26);
  v54 = NGUIText_TypeInfo;
  while ( 1 )
  {
LABEL_69:
    v54->static_fields->bitmapFont = (struct UIFont_o *)castClass;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields,
      (int32_t)castClass,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    bitmapFont = (UIFont_o *)NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
      bitmapFont = (UIFont_o *)NGUIText_TypeInfo;
    }
    klass = bitmapFont[1].fields.mAtlas->klass;
    if ( !klass )
      goto LABEL_160;
    castClass = (UnityEngine_Object_o *)klass->_1.castClass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    v61 = UnityEngine_Object__op_Equality(castClass, 0, 0);
    v54 = NGUIText_TypeInfo;
    v62 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
    if ( v61 )
      break;
    if ( !v62 )
      goto LABEL_68;
  }
  if ( !v62 )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
    v54 = NGUIText_TypeInfo;
  }
  bitmapFont = v54->static_fields->bitmapFont;
  if ( !bitmapFont )
    goto LABEL_160;
  isDynamic = UIFont__get_isDynamic(bitmapFont, v26);
  v70 = NGUIText_TypeInfo;
  v71 = *(&NGUIText_TypeInfo->_2.cctor_finished + 1);
  if ( isDynamic )
  {
    if ( !v71 )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
      v70 = NGUIText_TypeInfo;
    }
    bitmapFont = v70->static_fields->bitmapFont;
    if ( !bitmapFont )
      goto LABEL_160;
    dynamicFont = UIFont__get_dynamicFont(bitmapFont, v26);
    v58 = (int)dynamicFont;
    v73 = NGUIText_TypeInfo->static_fields;
    v73->dynamicFont = dynamicFont;
    p_dynamicFont = (MissionNaviTransitionBoardItem_o *)&v73->dynamicFont;
    goto LABEL_85;
  }
  if ( !v71 )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
    v70 = NGUIText_TypeInfo;
  }
  v75 = v70->static_fields;
  v75->dynamicFont = 0;
  v74 = (MissionNaviTransitionBoardItem_o *)&v75->dynamicFont;
LABEL_89:
  sub_21FFBF4(v74, 0, v63, v64, v65, v66, v67, v68);
  if ( v9 && UILabel__get_keepCrisp(this, v26) )
  {
    root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
    if ( !UnityEngine_Object__op_Inequality(root, 0, 0) )
    {
      v80 = NGUIText_TypeInfo;
      goto LABEL_105;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    bitmapFont = (UIFont_o *)UnityEngine_Object__op_Inequality(root, 0, 0);
    pixelSizeAdjustment = 1.0;
    if ( ((unsigned __int8)bitmapFont & 1) == 0 )
      goto LABEL_99;
    if ( root )
    {
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)root, v26);
LABEL_99:
      v80 = NGUIText_TypeInfo;
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
        v80 = NGUIText_TypeInfo;
      }
      v80->static_fields->pixelDensity = pixelSizeAdjustment;
      goto LABEL_105;
    }
LABEL_160:
    sub_21FFECC(bitmapFont, v26);
  }
  v80 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v26);
    v80 = NGUIText_TypeInfo;
  }
  v80->static_fields->pixelDensity = 1.0;
LABEL_105:
  mDensity = this->fields.mDensity;
  if ( !*(&v80->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v80, v26);
    v80 = NGUIText_TypeInfo;
  }
  if ( mDensity == v80->static_fields->pixelDensity )
    goto LABEL_145;
  UILabel__ProcessText_56369940(this, 0, 0, v76);
  v83 = NGUIText_TypeInfo;
  mWidth = this->fields.mWidth;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v82);
    v83 = NGUIText_TypeInfo;
  }
  v85 = v83->static_fields;
  v86 = (float)this->fields.mWidth;
  v87 = (unsigned __int8)byte_593220B;
  v85->rectWidth = mWidth;
  v85->rectHeight = this->fields.mHeight;
  v88 = this->fields.mDrawRegion.fields.z - this->fields.mDrawRegion.fields.x;
  if ( !v87 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v89 = v88 * v86;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v82);
  v90 = v89;
  v92 = modf(v89, &iptr);
  if ( v89 >= 0.0 )
  {
    if ( v92 != 0.5 )
    {
      v93 = floor(v90 + 0.5);
      goto LABEL_125;
    }
    v94 = 1.0;
    v93 = iptr;
  }
  else
  {
    if ( v92 != -0.5 )
    {
      v93 = ceil(v90 + -0.5);
      goto LABEL_125;
    }
    v93 = iptr;
    v94 = -1.0;
  }
  v95 = v93 + v94;
  if ( ((__int64)v93 & 1) != 0 )
    v93 = v95;
LABEL_125:
  v96 = (int)v93;
  if ( v93 == INFINITY )
    v96 = 0x80000000;
  NGUIText_TypeInfo->static_fields->regionWidth = v96;
  v97 = (float)this->fields.mHeight;
  v98 = this->fields.mDrawRegion.fields.w - this->fields.mDrawRegion.fields.y;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v99 = v98 * v97;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v91);
  v100 = v99;
  v101 = modf(v99, &iptr);
  if ( v99 >= 0.0 )
  {
    if ( v101 == 0.5 )
    {
      v103 = 1.0;
      v102 = iptr;
LABEL_136:
      v104 = v102 + v103;
      if ( ((__int64)v102 & 1) != 0 )
        v102 = v104;
      goto LABEL_141;
    }
    v102 = floor(v100 + 0.5);
  }
  else
  {
    if ( v101 == -0.5 )
    {
      v102 = iptr;
      v103 = -1.0;
      goto LABEL_136;
    }
    v102 = ceil(v100 + -0.5);
  }
LABEL_141:
  v80 = NGUIText_TypeInfo;
  if ( v102 == INFINITY )
    v105 = 0x80000000;
  else
    v105 = (int)v102;
  NGUIText_TypeInfo->static_fields->regionHeight = v105;
LABEL_145:
  mAlignment = this->fields.mAlignment;
  if ( mAlignment )
  {
    if ( *(&v80->_2.cctor_finished + 1) )
      goto LABEL_148;
    goto LABEL_147;
  }
  mPivot = this->fields.mPivot;
  if ( mPivot > 8 )
    goto LABEL_158;
  v108 = 1 << mPivot;
  if ( (v108 & 0x49) != 0 )
  {
    mAlignment = 1;
    if ( !*(&v80->_2.cctor_finished + 1) )
      goto LABEL_147;
    goto LABEL_148;
  }
  if ( (v108 & 0x124) == 0 )
  {
LABEL_158:
    mAlignment = 2;
    if ( !*(&v80->_2.cctor_finished + 1) )
      goto LABEL_147;
    goto LABEL_148;
  }
  mAlignment = 3;
  if ( !*(&v80->_2.cctor_finished + 1) )
  {
LABEL_147:
    j_il2cpp_runtime_class_init_0(v80, v26);
    v80 = NGUIText_TypeInfo;
  }
LABEL_148:
  v80->static_fields->alignment = mAlignment;
  if ( !*(&v80->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v80, v26);
  NGUIText__Update(0);
}


void UILabel__UpgradeFrom265(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t mMaxLineWidth; // w1
  int32_t v5; // w8
  __int64 mMaxLineHeight; // x1
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v8; // x1
  UIFont_o *v9; // x0
  const MethodInfo *v10; // x1
  int defaultSize; // w20
  int v12; // w8
  int32_t v13; // w8
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_593CFB5 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFB5 = 1;
  }
  UILabel__ProcessText_56369940(this, 1, 1, v2);
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
  if ( !mMaxLineWidth )
  {
    if ( this->fields.mOverflow == 2 )
      goto LABEL_16;
    v5 = 2;
    goto LABEL_15;
  }
  UIWidget__set_width((UIWidget_o *)this, mMaxLineWidth, 0);
  if ( this->fields.mMaxLineCount <= 0 )
    v5 = 0;
  else
    v5 = 3;
  if ( this->fields.mOverflow != v5 )
  {
LABEL_15:
    this->fields.mOverflow = v5;
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
  }
LABEL_16:
  mMaxLineHeight = (unsigned int)this->fields.mMaxLineHeight;
  if ( (_DWORD)mMaxLineHeight )
    UIWidget__set_height((UIWidget_o *)this, mMaxLineHeight, 0);
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mMaxLineHeight);
  if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
  {
    v9 = this->fields.mFont;
    if ( !v9 )
      sub_21FFECC(0, v8);
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
  this->fields.mMaxLineHeight = 0;
  this->fields.mMaxLineWidth = 0;
  this->fields.mShrinkToFit = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v14);
  NGUITools__UpdateWidgetCollider_56209572(gameObject, 1, 0);
}


bool UILabel__Wrap(UILabel_o *this, System_String_o *text, System_String_o **final, const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return UILabel__Wrap_56385136(this, text, final, 1000000, v4);
}


bool UILabel__Wrap_56385136(
        UILabel_o *this,
        System_String_o *text,
        System_String_o **final,
        int32_t height,
        const MethodInfo *method)
{
  __int64 v9; // x1
  NGUIText_c *v10; // x0
  struct NGUIText_StaticFields *static_fields; // x8
  bool v12; // w19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct NGUIText_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_593CFC8 & 1) == 0 )
  {
    sub_21FFC50(&NGUIText_TypeInfo);
    byte_593CFC8 = 1;
  }
  UILabel__UpdateNGUIText(this, (const MethodInfo *)text);
  v10 = NGUIText_TypeInfo;
  if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v9);
    v10 = NGUIText_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->rectHeight = height;
  static_fields->regionHeight = height;
  v12 = NGUIText__WrapText(text, final, 0);
  NGUIText_TypeInfo->static_fields->bitmapFont = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)NGUIText_TypeInfo->static_fields, 0, v13, v14, v15, v16, v17, v18);
  v19 = NGUIText_TypeInfo->static_fields;
  v19->dynamicFont = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->dynamicFont, 0, v20, v21, v22, v23, v24, v25);
  return v12;
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

  if ( (byte_593CFA9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFA9 = 1;
  }
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  __int64 v3; // x1
  UnityEngine_Object_o *trueTypeFont; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v8; // x1
  UIFont_o *v9; // x0

  if ( (byte_593CFAC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFAC = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(trueTypeFont, 0, 0) )
    return this->fields.mFontSize;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Inequality(mFont, 0, 0) )
    return 16;
  v9 = this->fields.mFont;
  if ( !v9 )
    sub_21FFECC(0, v8);
  return UIFont__get_defaultSize(v9, v8);
}


UnityEngine_Vector4_o UILabel__get_drawingDimensions(UILabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.mShouldBeProcessed )
    UILabel__ProcessText_56369940(this, 0, 1, v2);
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
  __int64 v4; // x1
  UnityEngine_Object_o *mTrueTypeFont; // x19

  if ( (byte_593CFAE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFAE = 1;
  }
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
    return 1;
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  return UnityEngine_Object__op_Inequality(mTrueTypeFont, 0, 0);
}


bool UILabel__get_keepCrisp(UILabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *trueTypeFont; // x20

  if ( (byte_593CFAD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFAD = 1;
  }
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
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
    UILabel__ProcessText_56369940(this, 0, 1, v2);
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
    UILabel__ProcessText_56369940(this, 0, 1, v2);
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
  __int64 v4; // x1
  UnityEngine_Material_o *result; // x0
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v7; // x1
  UIFont_o *v8; // x0
  UnityEngine_Object_o *mTrueTypeFont; // x20
  bool v10; // w8

  if ( (byte_593CFA4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFA4 = 1;
  }
  mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mMaterial, 0, 0) )
    return this->fields.mMaterial;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mFont, 0, 0) )
  {
    v8 = this->fields.mFont;
    if ( v8 )
      return UIFont__get_material(v8, v7);
    goto LABEL_18;
  }
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v10 = UnityEngine_Object__op_Inequality(mTrueTypeFont, 0, 0);
  result = 0;
  if ( v10 )
  {
    v8 = (UIFont_o *)this->fields.mTrueTypeFont;
    if ( v8 )
      return UnityEngine_Font__get_material((UnityEngine_Font_o *)v8, 0);
LABEL_18:
    sub_21FFECC(v8, v7);
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
    UILabel__ProcessText_56369940(this, 0, 1, v2);
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
  UILabel__ProcessText_56369940(this, 0, 1, v2);
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
  __int64 v4; // x1
  UnityEngine_Font_o *result; // x0
  UnityEngine_Object_o *mFont; // x20
  const MethodInfo *v7; // x1
  bool v8; // w8
  UIFont_o *v9; // x0

  if ( (byte_593CFA7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFA7 = 1;
  }
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTrueTypeFont, 0, 0) )
    return this->fields.mTrueTypeFont;
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v8 = UnityEngine_Object__op_Inequality(mFont, 0, 0);
  result = 0;
  if ( v8 )
  {
    v9 = this->fields.mFont;
    if ( !v9 )
      sub_21FFECC(0, v7);
    return UIFont__get_dynamicFont(v9, v7);
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
    UILabel__ProcessText_56369940(this, 0, 1, v2);
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

  if ( (byte_593CFAA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Font_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIFont_TypeInfo);
    byte_593CFAA = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593CFA6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFA6 = 1;
  }
  mFont = (UnityEngine_Object_o *)this->fields.mFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mFont, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mFont = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFont, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mTrueTypeFont = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mTrueTypeFont, 0, v12, v13, v14, v15, v16, v17);
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
  float v6; // s0
  float v7; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v9; // s0
  UILabel_c *klass; // x8

  mFloatSpacingX = this->fields.mFloatSpacingX;
  if ( !byte_5931944 )
  {
    sub_21FFC50(&UnityEngine_Mathf_TypeInfo);
    byte_5931944 = 1;
  }
  v6 = fabsf(mFloatSpacingX);
  v7 = fabsf(value);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v6 <= v7 )
    v6 = v7;
  v9 = v6 * 0.000001;
  if ( v9 <= (float)(static_fields->Epsilon * 8.0) )
    v9 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(value, mFloatSpacingX) >= v9 )
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
  float v6; // s0
  float v7; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v9; // s0
  UILabel_c *klass; // x8

  mFloatSpacingY = this->fields.mFloatSpacingY;
  if ( !byte_5931944 )
  {
    sub_21FFC50(&UnityEngine_Mathf_TypeInfo);
    byte_5931944 = 1;
  }
  v6 = fabsf(mFloatSpacingY);
  v7 = fabsf(value);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v6 <= v7 )
    v6 = v7;
  v9 = v6 * 0.000001;
  if ( v9 <= (float)(static_fields->Epsilon * 8.0) )
    v9 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(value, mFloatSpacingY) >= v9 )
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593CFA5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFA5 = 1;
  }
  mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mMaterial, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mMaterial = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMaterial, (int32_t)value, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UILabel__set_maxLineCount(UILabel_o *this, int32_t value, const MethodInfo *method)
{
  int32_t mOverflow; // w10

  if ( this->fields.mMaxLineCount != value )
  {
    mOverflow = this->fields.mOverflow;
    this->fields.mChanged = 1;
    this->fields.mMaxLineCount = value & ~(value >> 31);
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
  UILabel_c *klass; // x9

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
  UILabel_c *klass; // x9

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
  bool IsNullOrEmpty; // w8
  System_String_o *mText; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  if ( (byte_593CFAB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CFAB = 1;
  }
  if ( !System_String__op_Equality(this->fields.mText, value, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
    mText = this->fields.mText;
    if ( IsNullOrEmpty )
    {
      if ( System_String__IsNullOrEmpty(mText, 0) )
        goto LABEL_9;
      value = (System_String_o *)StringLiteral_1/*""*/;
    }
    else if ( !System_String__op_Inequality(mText, value, 0) )
    {
      goto LABEL_9;
    }
    this->fields.mText = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mText, (int32_t)value, v7, v8, v9, v10, v11, v12);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
    UILabel__ProcessAndRequest(this, v13);
LABEL_9:
    if ( this->fields.autoResizeBoxCollider )
      UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  }
}


void UILabel__set_trueTypeFont(UILabel_o *this, UnityEngine_Font_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrueTypeFont; // x21
  const MethodInfo *v6; // x2
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *mActiveTTF; // x20

  if ( (byte_593CFA8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFA8 = 1;
  }
  mTrueTypeFont = (UnityEngine_Object_o *)this->fields.mTrueTypeFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mTrueTypeFont, (UnityEngine_Object_o *)value, 0) )
  {
    UILabel__SetActiveFont(this, 0, v6);
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mTrueTypeFont = value;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mTrueTypeFont,
      (int32_t)value,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    this->fields.mChanged = 1;
    this->fields.mShouldBeProcessed = 1;
    this->fields.mFont = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFont, 0, v13, v14, v15, v16, v17, v18);
    UILabel__SetActiveFont(this, value, v19);
    UILabel__ProcessAndRequest(this, v20);
    mActiveTTF = (UnityEngine_Object_o *)this->fields.mActiveTTF;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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