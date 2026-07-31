void UIGeometry___ctor(UIGeometry_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  BetterList_Vector2__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BetterList_Color32__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  BetterList_Vector3__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_593CEC8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Color32___ctor__);
    sub_21FFC50(&Method_BetterList_Vector3___ctor__);
    sub_21FFC50(&Method_BetterList_Vector2___ctor__);
    sub_21FFC50(&BetterList_Vector3__TypeInfo);
    sub_21FFC50(&BetterList_Vector2__TypeInfo);
    sub_21FFC50(&BetterList_Color32__TypeInfo);
    byte_593CEC8 = 1;
  }
  v3 = (BetterList_Vector3__o *)sub_21FFEBC(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v3, (const MethodInfo_3E3E7D0 *)Method_BetterList_Vector3___ctor__);
  this->fields.verts = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BetterList_Vector2__o *)sub_21FFEBC(BetterList_Vector2__TypeInfo);
  BetterList_Vector2____ctor(v10, (const MethodInfo_3E3DC84 *)Method_BetterList_Vector2___ctor__);
  this->fields.uvs = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.uvs, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (BetterList_Color32__o *)sub_21FFEBC(BetterList_Color32__TypeInfo);
  BetterList_Color32____ctor(v17, (const MethodInfo_3E3B6C0 *)Method_BetterList_Color32___ctor__);
  this->fields.cols = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cols, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (BetterList_Vector3__o *)sub_21FFEBC(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v24, (const MethodInfo_3E3E7D0 *)Method_BetterList_Vector3___ctor__);
  this->fields.mRtpVerts = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mRtpVerts, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIGeometry__ApplyTransform(UIGeometry_o *this, UnityEngine_Matrix4x4_o *widgetToPanel, const MethodInfo *method)
{
  UIGeometry_o *v4; // x19
  struct BetterList_Vector3__o *verts; // x8
  struct BetterList_Vector3__o *v6; // x8
  int size; // w23
  int32_t v8; // w21
  BetterList_Vector3__o *mRtpVerts; // x22
  __int64 v10; // x1
  float z; // s8
  float v12; // v0.s[1]
  unsigned __int64 v13; // d1
  float v14; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int v16; // w8
  __int64 v17; // x1
  float v18; // s8
  float v19; // v0.s[1]
  unsigned __int64 v20; // d1
  float v21; // s0
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  float y; // [xsp+0h] [xbp-70h]
  float v24; // [xsp+0h] [xbp-70h]
  float v25; // [xsp+0h] [xbp-70h]
  float v26; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  float v28; // [xsp+10h] [xbp-60h]
  float v29; // [xsp+10h] [xbp-60h]
  float v30; // [xsp+10h] [xbp-60h]
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v4 = this;
  if ( (byte_593CEC6 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Vector3__Clear__);
    this = (UIGeometry_o *)sub_21FFC50(&Method_BetterList_Vector3__get_Item__);
    byte_593CEC6 = 1;
  }
  verts = v4->fields.verts;
  if ( !verts )
    goto LABEL_37;
  this = (UIGeometry_o *)v4->fields.mRtpVerts;
  if ( verts->fields.size < 1 )
  {
    if ( !this )
      goto LABEL_37;
    BetterList_Vector3___Clear(
      (BetterList_Vector3__o *)this,
      (const MethodInfo_3E3DF14 *)Method_BetterList_Vector3__Clear__);
  }
  else
  {
    if ( !this )
      goto LABEL_37;
    BetterList_Vector3___Clear(
      (BetterList_Vector3__o *)this,
      (const MethodInfo_3E3DF14 *)Method_BetterList_Vector3__Clear__);
    v6 = v4->fields.verts;
    if ( !v6 )
      goto LABEL_37;
    size = v6->fields.size;
    if ( size >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        this = (UIGeometry_o *)v4->fields.verts;
        if ( !this )
          break;
        mRtpVerts = v4->fields.mRtpVerts;
        Item = BetterList_Vector3___get_Item(
                 (BetterList_Vector3__o *)this,
                 v8,
                 (const MethodInfo_3E3DD08 *)Method_BetterList_Vector3__get_Item__);
        v32 = UnityEngine_Matrix4x4__MultiplyPoint3x4(widgetToPanel, Item, 0);
        if ( !mRtpVerts )
          break;
        BetterList_Vector3___Add(mRtpVerts, v32, (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
        if ( size == ++v8 )
          goto LABEL_12;
      }
LABEL_37:
      sub_21FFECC(this, widgetToPanel);
    }
LABEL_12:
    if ( !byte_5934CBC )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5934CBC = 1;
    }
    v33 = UnityEngine_Matrix4x4__MultiplyVector(
            widgetToPanel,
            UnityEngine_Vector3_TypeInfo->static_fields->backVector,
            0);
    z = v33.fields.z;
    if ( !byte_5931943 )
    {
      y = v33.fields.y;
      x = v33.fields.x;
      sub_21FFC50(&System_Math_TypeInfo);
      v33.fields.y = y;
      v33.fields.x = x;
      byte_5931943 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    {
      v24 = v33.fields.y;
      v28 = v33.fields.x;
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
      v33.fields.y = v24;
      v33.fields.x = v28;
    }
    v33.fields.z = sqrtf(
                     (float)(z * z)
                   + (float)((float)(v33.fields.x * v33.fields.x) + (float)(v33.fields.y * v33.fields.y)));
    if ( v33.fields.z <= 0.00001 )
    {
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v13 = *(_QWORD *)&static_fields->zeroVector.fields.x;
      v14 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v12 = v33.fields.y;
      v13 = vdiv_f32(*(float32x2_t *)&v33.fields.x, vdup_lane_s32(*(int32x2_t *)&v33.fields.z, 0)).n64_u64[0];
      v14 = z / v33.fields.z;
    }
    *(_QWORD *)&v4->fields.mRtpNormal.fields.x = v13;
    v16 = (unsigned __int8)byte_5931947;
    v4->fields.mRtpNormal.fields.z = v14;
    if ( !v16 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931947 = 1;
    }
    v34 = UnityEngine_Matrix4x4__MultiplyVector(
            widgetToPanel,
            UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
            0);
    v18 = v34.fields.z;
    if ( !byte_5931943 )
    {
      v25 = v34.fields.y;
      v29 = v34.fields.x;
      sub_21FFC50(&System_Math_TypeInfo);
      v34.fields.y = v25;
      v34.fields.x = v29;
      byte_5931943 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    {
      v26 = v34.fields.y;
      v30 = v34.fields.x;
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17);
      v34.fields.y = v26;
      v34.fields.x = v30;
    }
    v34.fields.z = sqrtf(
                     (float)(v18 * v18)
                   + (float)((float)(v34.fields.x * v34.fields.x) + (float)(v34.fields.y * v34.fields.y)));
    if ( v34.fields.z <= 0.00001 )
    {
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      v22 = UnityEngine_Vector3_TypeInfo->static_fields;
      v20 = *(_QWORD *)&v22->zeroVector.fields.x;
      v21 = v22->zeroVector.fields.z;
    }
    else
    {
      v19 = v34.fields.y;
      v20 = vdiv_f32(*(float32x2_t *)&v34.fields.x, vdup_lane_s32(*(int32x2_t *)&v34.fields.z, 0)).n64_u64[0];
      v21 = v18 / v34.fields.z;
    }
    *(_QWORD *)&v4->fields.mRtpTan.fields.x = v20;
    v4->fields.mRtpTan.fields.z = v21;
    v4->fields.mRtpTan.fields.w = -1.0;
  }
}


void UIGeometry__Clear(UIGeometry_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *verts; // x0

  if ( (byte_593CEC5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector2__Clear__);
    sub_21FFC50(&Method_BetterList_Vector3__Clear__);
    sub_21FFC50(&Method_BetterList_Color32__Clear__);
    byte_593CEC5 = 1;
  }
  verts = this->fields.verts;
  if ( !verts
    || (BetterList_Vector3___Clear(verts, (const MethodInfo_3E3DF14 *)Method_BetterList_Vector3__Clear__),
        (verts = (BetterList_Vector3__o *)this->fields.uvs) == 0)
    || (BetterList_Vector2___Clear(
          (BetterList_Vector2__o *)verts,
          (const MethodInfo_3E3D4F8 *)Method_BetterList_Vector2__Clear__),
        (verts = (BetterList_Vector3__o *)this->fields.cols) == 0)
    || (BetterList_Color32___Clear(
          (BetterList_Color32__o *)verts,
          (const MethodInfo_3E3AF60 *)Method_BetterList_Color32__Clear__),
        (verts = this->fields.mRtpVerts) == 0) )
  {
    sub_21FFECC(verts, method);
  }
  BetterList_Vector3___Clear(verts, (const MethodInfo_3E3DF14 *)Method_BetterList_Vector3__Clear__);
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
  unsigned __int64 v16; // x29
  struct UnityEngine_Vector3_array *buffer; // x8
  struct BetterList_Vector2__o *uvs; // x8
  struct UnityEngine_Vector2_array *v19; // x8
  struct BetterList_Color32__o *cols; // x8
  struct UnityEngine_Color32_array *v21; // x8
  UnityEngine_Color32_o v22; // x1
  __int64 v23; // x23
  unsigned __int64 v24; // x28
  struct UnityEngine_Vector3_array *v25; // x8
  struct BetterList_Vector2__o *v26; // x8
  struct UnityEngine_Vector2_array *v27; // x8
  struct BetterList_Color32__o *v28; // x8
  struct UnityEngine_Color32_array *v29; // x8
  UnityEngine_Color32_o v30; // x1

  v12 = this;
  if ( (byte_593CEC7 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_Vector4__Add__);
    sub_21FFC50(&Method_BetterList_Vector3__Add__);
    sub_21FFC50(&Method_BetterList_Color32__Add__);
    this = (UIGeometry_o *)sub_21FFC50(&Method_BetterList_Vector2__Add__);
    byte_593CEC7 = 1;
  }
  mRtpVerts = v12->fields.mRtpVerts;
  if ( mRtpVerts && mRtpVerts->fields.size >= 1 )
  {
    if ( n )
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      while ( (__int64)v16 < mRtpVerts->fields.size )
      {
        buffer = mRtpVerts->fields.buffer;
        if ( !buffer )
          goto LABEL_36;
        if ( v16 >= LODWORD(buffer->max_length) )
          goto LABEL_38;
        if ( v )
        {
          BetterList_Vector3___Add(
            v,
            buffer->m_Items[v15],
            (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
          uvs = v12->fields.uvs;
          if ( uvs )
          {
            v19 = uvs->fields.buffer;
            if ( v19 )
            {
              if ( v16 >= LODWORD(v19->max_length) )
                goto LABEL_38;
              if ( u )
              {
                BetterList_Vector2___Add(
                  u,
                  v19->m_Items[v14],
                  (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
                cols = v12->fields.cols;
                if ( cols )
                {
                  v21 = cols->fields.buffer;
                  if ( v21 )
                  {
                    if ( v16 >= LODWORD(v21->max_length) )
                      goto LABEL_38;
                    if ( c )
                    {
                      v22 = (UnityEngine_Color32_o)*((unsigned int *)&v21->m_Items[0].fields.rgba + v16);
                      BetterList_Color32___Add(c, v22, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
                      BetterList_Vector3___Add(
                        n,
                        v12->fields.mRtpNormal,
                        (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
                      if ( t )
                      {
                        BetterList_Vector4___Add(
                          t,
                          v12->fields.mRtpTan,
                          (const MethodInfo_3E3EA60 *)Method_BetterList_Vector4__Add__);
                        mRtpVerts = v12->fields.mRtpVerts;
                        ++v16;
                        ++v15;
                        ++v14;
                        if ( mRtpVerts )
                          continue;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_36;
      }
    }
    else
    {
      v23 = 0;
      v24 = 0;
      while ( (__int64)v24 < mRtpVerts->fields.size )
      {
        v25 = mRtpVerts->fields.buffer;
        if ( !v25 )
          goto LABEL_36;
        if ( v24 >= LODWORD(v25->max_length) )
LABEL_38:
          sub_21FFED4(this);
        if ( v )
        {
          BetterList_Vector3___Add(
            v,
            *(UnityEngine_Vector3_o *)((char *)&n[1].klass + (_QWORD)v25),
            (const MethodInfo_3E3DF2C *)Method_BetterList_Vector3__Add__);
          v26 = v12->fields.uvs;
          if ( v26 )
          {
            v27 = v26->fields.buffer;
            if ( v27 )
            {
              if ( v24 >= LODWORD(v27->max_length) )
                goto LABEL_38;
              if ( u )
              {
                BetterList_Vector2___Add(
                  u,
                  v27->m_Items[v23],
                  (const MethodInfo_3E3D510 *)Method_BetterList_Vector2__Add__);
                v28 = v12->fields.cols;
                if ( v28 )
                {
                  v29 = v28->fields.buffer;
                  if ( v29 )
                  {
                    if ( v24 >= LODWORD(v29->max_length) )
                      goto LABEL_38;
                    if ( c )
                    {
                      v30 = (UnityEngine_Color32_o)*((unsigned int *)&v29->m_Items[0].fields.rgba + v24);
                      BetterList_Color32___Add(c, v30, (const MethodInfo_3E3AF78 *)Method_BetterList_Color32__Add__);
                      mRtpVerts = v12->fields.mRtpVerts;
                      ++v24;
                      n = (BetterList_Vector3__o *)((char *)n + 12);
                      ++v23;
                      if ( mRtpVerts )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_36:
        sub_21FFECC(this, v);
      }
    }
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
    sub_21FFECC(this, method);
  return size == verts->fields.size;
}


bool UIGeometry__get_hasVertices(UIGeometry_o *this, const MethodInfo *method)
{
  struct BetterList_Vector3__o *verts; // x8

  verts = this->fields.verts;
  if ( !verts )
    sub_21FFECC(this, method);
  return verts->fields.size > 0;
}