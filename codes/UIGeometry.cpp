void UIGeometry___ctor(UIGeometry_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BetterList_Vector2__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BetterList_Color32__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  BetterList_Vector3__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D3526C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Color32___ctor__);
    sub_1C93AD4(&Method_BetterList_Vector3___ctor__);
    sub_1C93AD4(&Method_BetterList_Vector2___ctor__);
    sub_1C93AD4(&BetterList_Vector3__TypeInfo);
    sub_1C93AD4(&BetterList_Vector2__TypeInfo);
    sub_1C93AD4(&BetterList_Color32__TypeInfo);
    byte_4D3526C = 1;
  }
  v3 = (BetterList_Vector3__o *)sub_1C93D20(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v3, (const MethodInfo_33DE510 *)Method_BetterList_Vector3___ctor__);
  this->fields.verts = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BetterList_Vector2__o *)sub_1C93D20(BetterList_Vector2__TypeInfo);
  BetterList_Vector2____ctor(v10, (const MethodInfo_33DD98C *)Method_BetterList_Vector2___ctor__);
  this->fields.uvs = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.uvs, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (BetterList_Color32__o *)sub_1C93D20(BetterList_Color32__TypeInfo);
  BetterList_Color32____ctor(v17, (const MethodInfo_33DB380 *)Method_BetterList_Color32___ctor__);
  this->fields.cols = v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cols, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (BetterList_Vector3__o *)sub_1C93D20(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v24, (const MethodInfo_33DE510 *)Method_BetterList_Vector3___ctor__);
  this->fields.mRtpVerts = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mRtpVerts, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UIGeometry__ApplyTransform(UIGeometry_o *this, UnityEngine_Matrix4x4_o *widgetToPanel, const MethodInfo *method)
{
  UIGeometry_o *v4; // x19
  struct BetterList_Vector3__o *verts; // x8
  int size; // w21
  int uvs; // w23
  int32_t v8; // w21
  BetterList_Vector3__o *mRtpVerts; // x22
  float v10; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v15; // s2
  float v16; // s0
  float v17; // s1
  float v18; // s2
  struct UnityEngine_Vector3_StaticFields *v19; // x8
  UnityEngine_Vector3_o v20; // 0:kr20_12.12
  UnityEngine_Vector3_o v21; // 0:kr34_12.12
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D3526A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_Vector3__Clear__);
    this = (UIGeometry_o *)sub_1C93AD4(&Method_BetterList_Vector3__get_Item__);
    byte_4D3526A = 1;
  }
  verts = v4->fields.verts;
  if ( !verts )
    goto LABEL_12;
  this = (UIGeometry_o *)v4->fields.mRtpVerts;
  if ( !this )
    goto LABEL_12;
  size = verts->fields.size;
  BetterList_Vector3___Clear(
    (BetterList_Vector3__o *)this,
    (const MethodInfo_33DDC20 *)Method_BetterList_Vector3__Clear__);
  if ( size >= 1 )
  {
    this = (UIGeometry_o *)v4->fields.verts;
    if ( !this )
      goto LABEL_12;
    uvs = (int)this->fields.uvs;
    if ( uvs >= 1 )
    {
      v8 = 0;
      do
      {
        mRtpVerts = v4->fields.mRtpVerts;
        Item = BetterList_Vector3___get_Item(
                 (BetterList_Vector3__o *)this,
                 v8,
                 (const MethodInfo_33DDA0C *)Method_BetterList_Vector3__get_Item__);
        v23 = UnityEngine_Matrix4x4__MultiplyPoint3x4(widgetToPanel, Item, 0);
        if ( !mRtpVerts )
          break;
        BetterList_Vector3___Add(mRtpVerts, v23, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        if ( uvs == ++v8 )
          goto LABEL_13;
        this = (UIGeometry_o *)v4->fields.verts;
      }
      while ( this );
LABEL_12:
      sub_1C93D2C(this, widgetToPanel);
    }
LABEL_13:
    if ( !byte_4D2D067 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2D067 = 1;
    }
    v20 = UnityEngine_Matrix4x4__MultiplyVector(
            widgetToPanel,
            UnityEngine_Vector3_TypeInfo->static_fields->backVector,
            0);
    if ( !byte_4D2A13C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v10 = sqrtf(
            (float)(v20.fields.z * v20.fields.z)
          + (float)((float)(v20.fields.x * v20.fields.x) + (float)(v20.fields.y * v20.fields.y)));
    if ( v10 <= 0.00001 )
    {
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
    }
    else
    {
      x = v20.fields.x / v10;
      y = v20.fields.y / v10;
      z = v20.fields.z / v10;
    }
    v4->fields.mRtpNormal.fields.x = x;
    v4->fields.mRtpNormal.fields.y = y;
    v4->fields.mRtpNormal.fields.z = z;
    if ( !byte_4D2A140 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A140 = 1;
    }
    v21 = UnityEngine_Matrix4x4__MultiplyVector(
            widgetToPanel,
            UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
            0);
    if ( !byte_4D2A13C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v15 = sqrtf(
            (float)(v21.fields.z * v21.fields.z)
          + (float)((float)(v21.fields.x * v21.fields.x) + (float)(v21.fields.y * v21.fields.y)));
    if ( v15 <= 0.00001 )
    {
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      v19 = UnityEngine_Vector3_TypeInfo->static_fields;
      v16 = v19->zeroVector.fields.x;
      v17 = v19->zeroVector.fields.y;
      v18 = v19->zeroVector.fields.z;
    }
    else
    {
      v16 = v21.fields.x / v15;
      v17 = v21.fields.y / v15;
      v18 = v21.fields.z / v15;
    }
    v4->fields.mRtpTan.fields.x = v16;
    v4->fields.mRtpTan.fields.y = v17;
    v4->fields.mRtpTan.fields.z = v18;
    v4->fields.mRtpTan.fields.w = -1.0;
  }
}


void UIGeometry__Clear(UIGeometry_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *verts; // x0

  if ( (byte_4D35269 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector2__Clear__);
    sub_1C93AD4(&Method_BetterList_Vector3__Clear__);
    sub_1C93AD4(&Method_BetterList_Color32__Clear__);
    byte_4D35269 = 1;
  }
  verts = this->fields.verts;
  if ( !verts
    || (BetterList_Vector3___Clear(verts, (const MethodInfo_33DDC20 *)Method_BetterList_Vector3__Clear__),
        (verts = (BetterList_Vector3__o *)this->fields.uvs) == 0)
    || (BetterList_Vector2___Clear(
          (BetterList_Vector2__o *)verts,
          (const MethodInfo_33DD194 *)Method_BetterList_Vector2__Clear__),
        (verts = (BetterList_Vector3__o *)this->fields.cols) == 0)
    || (BetterList_Color32___Clear(
          (BetterList_Color32__o *)verts,
          (const MethodInfo_33DAC48 *)Method_BetterList_Color32__Clear__),
        (verts = this->fields.mRtpVerts) == 0) )
  {
    sub_1C93D2C(verts, method);
  }
  BetterList_Vector3___Clear(verts, (const MethodInfo_33DDC20 *)Method_BetterList_Vector3__Clear__);
}


void UIGeometry__WriteToBuffers(
        UIGeometry_o *this,
        BetterList_Vector3__o *v,
        BetterList_Vector2__o *u,
        BetterList_Color32__o *c,
        BetterList_Vector3__o *n,
        BetterList_Vector4__o *t,
        const MethodInfo *method)
{
  UIGeometry_o *v12; // x22
  struct BetterList_Vector3__o *mRtpVerts; // x8
  __int64 v14; // x25
  __int64 v15; // x26
  unsigned __int64 v16; // x27
  struct UnityEngine_Vector3_array *buffer; // x8
  struct BetterList_Vector2__o *uvs; // x8
  struct UnityEngine_Vector2_array *v19; // x8
  struct BetterList_Color32__o *cols; // x8
  struct UnityEngine_Color32_array *v21; // x8
  UnityEngine_Color32_o v22; // x1
  __int64 v23; // x23
  __int64 v24; // x24
  unsigned __int64 v25; // x25
  struct UnityEngine_Vector3_array *v26; // x8
  struct BetterList_Vector2__o *v27; // x8
  struct UnityEngine_Vector2_array *v28; // x8
  struct BetterList_Color32__o *v29; // x8
  struct UnityEngine_Color32_array *v30; // x8
  UnityEngine_Color32_o v31; // x1

  v12 = this;
  if ( (byte_4D3526B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector4__Add__);
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_Color32__Add__);
    this = (UIGeometry_o *)sub_1C93AD4(&Method_BetterList_Vector2__Add__);
    byte_4D3526B = 1;
  }
  mRtpVerts = v12->fields.mRtpVerts;
  if ( mRtpVerts && mRtpVerts->fields.size >= 1 )
  {
    if ( n )
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        buffer = mRtpVerts->fields.buffer;
        if ( !buffer )
          break;
        if ( v16 >= LODWORD(buffer->max_length) )
          goto LABEL_38;
        if ( !v )
          break;
        BetterList_Vector3___Add(v, buffer->m_Items[v14], (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        uvs = v12->fields.uvs;
        if ( !uvs )
          break;
        v19 = uvs->fields.buffer;
        if ( !v19 )
          break;
        if ( v16 >= LODWORD(v19->max_length) )
          goto LABEL_38;
        if ( !u )
          break;
        BetterList_Vector2___Add(u, v19->m_Items[v15], (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
        cols = v12->fields.cols;
        if ( !cols )
          break;
        v21 = cols->fields.buffer;
        if ( !v21 )
          break;
        if ( v16 >= LODWORD(v21->max_length) )
          goto LABEL_38;
        if ( !c )
          break;
        v22 = (UnityEngine_Color32_o)*((unsigned int *)&v21->m_Items[0].fields.rgba + v16);
        BetterList_Color32___Add(c, v22, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
        BetterList_Vector3___Add(
          n,
          v12->fields.mRtpNormal,
          (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        if ( !t )
          break;
        BetterList_Vector4___Add(t, v12->fields.mRtpTan, (const MethodInfo_33DE7A4 *)Method_BetterList_Vector4__Add__);
        mRtpVerts = v12->fields.mRtpVerts;
        if ( !mRtpVerts )
          break;
        ++v16;
        ++v15;
        ++v14;
        if ( (__int64)v16 >= mRtpVerts->fields.size )
          return;
      }
    }
    else
    {
      v23 = 0;
      v24 = 0;
      v25 = 0;
      while ( 1 )
      {
        v26 = mRtpVerts->fields.buffer;
        if ( !v26 )
          break;
        if ( v25 >= LODWORD(v26->max_length) )
          goto LABEL_38;
        if ( !v )
          break;
        BetterList_Vector3___Add(v, v26->m_Items[v23], (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
        v27 = v12->fields.uvs;
        if ( !v27 )
          break;
        v28 = v27->fields.buffer;
        if ( !v28 )
          break;
        if ( v25 >= LODWORD(v28->max_length) )
          goto LABEL_38;
        if ( !u )
          break;
        BetterList_Vector2___Add(u, v28->m_Items[v24], (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
        v29 = v12->fields.cols;
        if ( !v29 )
          break;
        v30 = v29->fields.buffer;
        if ( !v30 )
          break;
        if ( v25 >= LODWORD(v30->max_length) )
LABEL_38:
          sub_1C93D34(this);
        if ( !c )
          break;
        v31 = (UnityEngine_Color32_o)*((unsigned int *)&v30->m_Items[0].fields.rgba + v25);
        BetterList_Color32___Add(c, v31, (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
        mRtpVerts = v12->fields.mRtpVerts;
        if ( !mRtpVerts )
          break;
        ++v25;
        ++v24;
        ++v23;
        if ( (__int64)v25 >= mRtpVerts->fields.size )
          return;
      }
    }
    sub_1C93D2C(this, v);
  }
}


bool UIGeometry__get_hasTransformed(UIGeometry_o *this, const MethodInfo *method)
{
  struct BetterList_Vector3__o *mRtpVerts; // x8
  int size; // w8
  struct BetterList_Vector3__o *verts; // x9

  mRtpVerts = this->fields.mRtpVerts;
  if ( !mRtpVerts )
    return 0;
  size = mRtpVerts->fields.size;
  if ( size < 1 )
    return 0;
  verts = this->fields.verts;
  if ( !verts )
    sub_1C93D2C(this, method);
  return size == verts->fields.size;
}


bool UIGeometry__get_hasVertices(UIGeometry_o *this, const MethodInfo *method)
{
  struct BetterList_Vector3__o *verts; // x8

  verts = this->fields.verts;
  if ( !verts )
    sub_1C93D2C(this, method);
  return verts->fields.size > 0;
}