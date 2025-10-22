void UIGeometry___ctor(UIGeometry_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BetterList_Vector2__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BetterList_Color32__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BetterList_Vector3__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C5B562 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_Color32___ctor__);
    sub_1C3E564(&Method_BetterList_Vector3___ctor__);
    sub_1C3E564(&Method_BetterList_Vector2___ctor__);
    sub_1C3E564(&BetterList_Vector3__TypeInfo);
    sub_1C3E564(&BetterList_Vector2__TypeInfo);
    sub_1C3E564(&BetterList_Color32__TypeInfo);
    byte_4C5B562 = 1;
  }
  v3 = (BetterList_Vector3__o *)sub_1C3E7B0(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v3, (const MethodInfo_332E4A4 *)Method_BetterList_Vector3___ctor__);
  this->fields.verts = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (BetterList_Vector2__o *)sub_1C3E7B0(BetterList_Vector2__TypeInfo);
  BetterList_Vector2____ctor(v6, (const MethodInfo_332D920 *)Method_BetterList_Vector2___ctor__);
  this->fields.uvs = v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.uvs, (int32_t)v6, v7, v8);
  v9 = (BetterList_Color32__o *)sub_1C3E7B0(BetterList_Color32__TypeInfo);
  BetterList_Color32____ctor(v9, (const MethodInfo_332B314 *)Method_BetterList_Color32___ctor__);
  this->fields.cols = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cols, (int32_t)v9, v10, v11);
  v12 = (BetterList_Vector3__o *)sub_1C3E7B0(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v12, (const MethodInfo_332E4A4 *)Method_BetterList_Vector3___ctor__);
  this->fields.mRtpVerts = v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mRtpVerts, (int32_t)v12, v13, v14);
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
  float x; // s8
  float y; // s9
  float z; // s10
  float v13; // s2
  float v14; // s0
  float v15; // s1
  float v16; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s2
  float v22; // s0
  float v23; // s1
  float v24; // s2
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C5B560 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_Vector3__Add__);
    sub_1C3E564(&Method_BetterList_Vector3__Clear__);
    this = (UIGeometry_o *)sub_1C3E564(&Method_BetterList_Vector3__get_Item__);
    byte_4C5B560 = 1;
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
    (const MethodInfo_332DBB4 *)Method_BetterList_Vector3__Clear__);
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
                 (const MethodInfo_332D9A0 *)Method_BetterList_Vector3__get_Item__);
        v27 = UnityEngine_Matrix4x4__MultiplyPoint3x4(widgetToPanel, Item, 0);
        if ( !mRtpVerts )
          break;
        BetterList_Vector3___Add(mRtpVerts, v27, (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
        if ( uvs == ++v8 )
          goto LABEL_13;
        this = (UIGeometry_o *)v4->fields.verts;
      }
      while ( this );
LABEL_12:
      sub_1C3E7C0(this, widgetToPanel);
    }
LABEL_13:
    if ( !byte_4C53574 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C53574 = 1;
    }
    v28 = UnityEngine_Matrix4x4__MultiplyVector(
            widgetToPanel,
            UnityEngine_Vector3_TypeInfo->static_fields->backVector,
            0);
    x = v28.fields.x;
    y = v28.fields.y;
    z = v28.fields.z;
    if ( !byte_4C506A4 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C506A4 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v13 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
    if ( v13 <= 0.00001 )
    {
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v14 = static_fields->zeroVector.fields.x;
      v15 = static_fields->zeroVector.fields.y;
      v16 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v14 = x / v13;
      v15 = y / v13;
      v16 = z / v13;
    }
    v4->fields.mRtpNormal.fields.x = v14;
    v4->fields.mRtpNormal.fields.y = v15;
    v4->fields.mRtpNormal.fields.z = v16;
    if ( !byte_4C506A8 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A8 = 1;
    }
    v29 = UnityEngine_Matrix4x4__MultiplyVector(
            widgetToPanel,
            UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
            0);
    v18 = v29.fields.x;
    v19 = v29.fields.y;
    v20 = v29.fields.z;
    if ( !byte_4C506A4 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C506A4 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = sqrtf((float)(v20 * v20) + (float)((float)(v18 * v18) + (float)(v19 * v19)));
    if ( v21 <= 0.00001 )
    {
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      v25 = UnityEngine_Vector3_TypeInfo->static_fields;
      v22 = v25->zeroVector.fields.x;
      v23 = v25->zeroVector.fields.y;
      v24 = v25->zeroVector.fields.z;
    }
    else
    {
      v22 = v18 / v21;
      v23 = v19 / v21;
      v24 = v20 / v21;
    }
    v4->fields.mRtpTan.fields.x = v22;
    v4->fields.mRtpTan.fields.y = v23;
    v4->fields.mRtpTan.fields.z = v24;
    v4->fields.mRtpTan.fields.w = -1.0;
  }
}


void UIGeometry__Clear(UIGeometry_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *verts; // x0

  if ( (byte_4C5B55F & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_Vector2__Clear__);
    sub_1C3E564(&Method_BetterList_Vector3__Clear__);
    sub_1C3E564(&Method_BetterList_Color32__Clear__);
    byte_4C5B55F = 1;
  }
  verts = this->fields.verts;
  if ( !verts
    || (BetterList_Vector3___Clear(verts, (const MethodInfo_332DBB4 *)Method_BetterList_Vector3__Clear__),
        (verts = (BetterList_Vector3__o *)this->fields.uvs) == 0)
    || (BetterList_Vector2___Clear(
          (BetterList_Vector2__o *)verts,
          (const MethodInfo_332D128 *)Method_BetterList_Vector2__Clear__),
        (verts = (BetterList_Vector3__o *)this->fields.cols) == 0)
    || (BetterList_Color32___Clear(
          (BetterList_Color32__o *)verts,
          (const MethodInfo_332ABDC *)Method_BetterList_Color32__Clear__),
        (verts = this->fields.mRtpVerts) == 0) )
  {
    sub_1C3E7C0(verts, method);
  }
  BetterList_Vector3___Clear(verts, (const MethodInfo_332DBB4 *)Method_BetterList_Vector3__Clear__);
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
  if ( (byte_4C5B561 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_Vector4__Add__);
    sub_1C3E564(&Method_BetterList_Vector3__Add__);
    sub_1C3E564(&Method_BetterList_Color32__Add__);
    this = (UIGeometry_o *)sub_1C3E564(&Method_BetterList_Vector2__Add__);
    byte_4C5B561 = 1;
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
        BetterList_Vector3___Add(v, buffer->m_Items[v14], (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
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
        BetterList_Vector2___Add(u, v19->m_Items[v15], (const MethodInfo_332D140 *)Method_BetterList_Vector2__Add__);
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
        BetterList_Color32___Add(c, v22, (const MethodInfo_332ABF4 *)Method_BetterList_Color32__Add__);
        BetterList_Vector3___Add(
          n,
          v12->fields.mRtpNormal,
          (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
        if ( !t )
          break;
        BetterList_Vector4___Add(t, v12->fields.mRtpTan, (const MethodInfo_332E738 *)Method_BetterList_Vector4__Add__);
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
        BetterList_Vector3___Add(v, v26->m_Items[v23], (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
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
        BetterList_Vector2___Add(u, v28->m_Items[v24], (const MethodInfo_332D140 *)Method_BetterList_Vector2__Add__);
        v29 = v12->fields.cols;
        if ( !v29 )
          break;
        v30 = v29->fields.buffer;
        if ( !v30 )
          break;
        if ( v25 >= LODWORD(v30->max_length) )
LABEL_38:
          sub_1C3E7C8(this, v);
        if ( !c )
          break;
        v31 = (UnityEngine_Color32_o)*((unsigned int *)&v30->m_Items[0].fields.rgba + v25);
        BetterList_Color32___Add(c, v31, (const MethodInfo_332ABF4 *)Method_BetterList_Color32__Add__);
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
    sub_1C3E7C0(this, v);
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
    sub_1C3E7C0(this, method);
  return size == verts->fields.size;
}


bool UIGeometry__get_hasVertices(UIGeometry_o *this, const MethodInfo *method)
{
  struct BetterList_Vector3__o *verts; // x8

  verts = this->fields.verts;
  if ( !verts )
    sub_1C3E7C0(this, method);
  return verts->fields.size > 0;
}