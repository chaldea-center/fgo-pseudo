void UITexture___ctor(UITexture_o *this, const MethodInfo *method)
{
  int v3; // w8
  UIBasicSprite_c *v4; // x0
  struct UnityEngine_Vector4_o zeroVector; // q0

  if ( (byte_593D006 & 1) == 0 )
  {
    sub_21FFC50(&UIBasicSprite_TypeInfo);
    byte_593D006 = 1;
  }
  v3 = (unsigned __int8)byte_5931C1E;
  this->fields.mRect = (struct UnityEngine_Rect_o)xmmword_E92B70;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector4_TypeInfo);
    byte_5931C1E = 1;
  }
  v4 = UIBasicSprite_TypeInfo;
  zeroVector = UnityEngine_Vector4_TypeInfo->static_fields->zeroVector;
  this->fields.mPMA = -1;
  this->fields.mBorder = zeroVector;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method);
  UIBasicSprite___ctor((UIBasicSprite_o *)this, 0);
}


void UITexture__MakePixelPerfect(UITexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x1
  int32_t mType; // w8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int v9; // w21
  int v10; // w20

  if ( (byte_593D003 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593D003 = 1;
  }
  UIWidget__MakePixelPerfect((UIWidget_o *)this, 0);
  if ( this->fields.mType != 2 )
  {
    v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                   this,
                                   this->klass->vtable._26_get_mainTexture.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
    {
      mType = this->fields.mType;
      if ( !mType || mType == 3 || !UIBasicSprite__get_hasBorder((UIBasicSprite_o *)this, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
        v7 = UnityEngine_Object__op_Inequality(v4, 0, 0);
        if ( v7 )
        {
          if ( !v4 )
            sub_21FFECC(v7, v8);
          v9 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v4->klass[1]._1.image)(
                 v4,
                 v4->klass[1]._1.gc_desc);
          v10 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v4->klass[1]._1.byval_arg.data)(
                  v4,
                  *(_QWORD *)&v4->klass[1]._1.byval_arg.bits);
          UIWidget__set_width((UIWidget_o *)this, (v9 & 1) + v9, 0);
          UIWidget__set_height((UIWidget_o *)this, (v10 & 1) + v10, 0);
        }
      }
    }
  }
}


void UITexture__OnFill(
        UITexture_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  float m_XMin; // s12
  int v14; // w0
  float m_YMin; // s13
  int v16; // w24
  int v17; // w26
  int v18; // w0
  float m_Width; // s14
  int v20; // w25
  int v21; // w0
  float m_Height; // s15
  int v23; // w28
  float v24; // s10
  float v25; // s1
  float v26; // s11
  float v27; // s2
  float v28; // s8
  float v29; // s3
  float v30; // s9
  int v31; // w27
  unsigned int size; // w23
  float v33; // s1
  float v34; // s3
  float v35; // s6
  float v36; // s7
  float v37; // s0
  float v38; // s2
  float v39; // s19
  float v40; // s4
  float v41; // s18
  float v42; // s17
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_593D005 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593D005 = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                  this,
                                  this->klass->vtable._26_get_mainTexture.method,
                                  uvs,
                                  cols,
                                  method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality(v10, 0, 0);
  if ( (v11 & 1) == 0 )
  {
    if ( !v10 )
      goto LABEL_11;
    m_XMin = this->fields.mRect.fields.m_XMin;
    v14 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
            v10,
            v10->klass[1]._1.gc_desc);
    m_YMin = this->fields.mRect.fields.m_YMin;
    v16 = v14;
    v17 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
            v10,
            *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
    v18 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
            v10,
            v10->klass[1]._1.gc_desc);
    m_Width = this->fields.mRect.fields.m_Width;
    v20 = v18;
    v21 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
            v10,
            *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
    m_Height = this->fields.mRect.fields.m_Height;
    v23 = v21;
    v24 = ((float (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method);
    v26 = v25;
    v28 = v27;
    v30 = v29;
    v31 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
            v10,
            v10->klass[1]._1.gc_desc);
    v11 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
            v10,
            *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
    if ( !verts )
LABEL_11:
      sub_21FFECC(v11, v12);
    size = verts->fields.size;
    v33 = m_YMin * (float)v17;
    v34 = m_XMin * (float)v16;
    v35 = 1.0 / (float)(int)v11;
    v36 = v33 + (float)(m_Height * (float)v23);
    v37 = v33 + v26;
    v38 = v34 + (float)(m_Width * (float)v20);
    v39 = 1.0 / (float)v31;
    v40 = (float)(v33 + v26) + (float)(v36 - (float)(v33 + v26));
    v44.fields.m_YMin = v33 * v35;
    v45.fields.m_YMin = v37 * v35;
    v41 = v37 + (float)((float)(v40 - v30) - v37);
    v45.fields.m_XMin = (float)(v34 + v24) * v39;
    v44.fields.m_XMin = v34 * v39;
    v42 = v35 * (float)(v44.fields.m_YMin + (float)(v36 - v44.fields.m_YMin));
    v45.fields.m_Height = (float)(v35 * (float)(v45.fields.m_YMin + (float)(v41 - v45.fields.m_YMin)))
                        - v45.fields.m_YMin;
    v45.fields.m_Width = (float)(v39
                               * (float)(v45.fields.m_XMin
                                       + (float)((float)((float)(v34 + v24)
                                                       + (float)((float)((float)((float)(v34 + v24)
                                                                               + (float)(v38 - (float)(v34 + v24)))
                                                                       - v28)
                                                               - (float)(v34 + v24)))
                                               - v45.fields.m_XMin)))
                       - v45.fields.m_XMin;
    v44.fields.m_Height = v42 - v44.fields.m_YMin;
    v44.fields.m_Width = (float)(v39 * (float)(v44.fields.m_XMin + (float)(v38 - v44.fields.m_XMin)))
                       - v44.fields.m_XMin;
    UIBasicSprite__Fill((UIBasicSprite_o *)this, verts, uvs, cols, v44, v45, 0);
    onPostFill = this->fields.onPostFill;
    if ( onPostFill )
      ((void (__fastcall *)(intptr_t, UITexture_o *, _QWORD, BetterList_Vector3__o *, BetterList_Vector2__o *, BetterList_Color32__o *, intptr_t))onPostFill->fields.invoke_impl)(
        onPostFill->fields.method_code,
        this,
        size,
        verts,
        uvs,
        cols,
        onPostFill->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UITexture__OnUpdate(UITexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int v7; // w21
  int v8; // w0
  float v9; // s0
  float mWidth; // s1
  float mHeight; // s2
  float v12; // s4
  float v13; // s3
  float v14; // s1
  float v15; // s3
  bool v16; // nf
  float v17; // s0 OVERLAPPED
  float v18; // s1
  float v19; // s2
  float v20; // s3

  if ( (byte_593D004 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593D004 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0);
  if ( this->fields.mFixedAspect )
  {
    v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                   this,
                                   this->klass->vtable._26_get_mainTexture.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    v5 = UnityEngine_Object__op_Inequality(v4, 0, 0);
    if ( v5 )
    {
      if ( !v4 )
        sub_21FFECC(v5, v6);
      v7 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v4->klass[1]._1.image)(v4, v4->klass[1]._1.gc_desc);
      v8 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v4->klass[1]._1.byval_arg.data)(
             v4,
             *(_QWORD *)&v4->klass[1]._1.byval_arg.bits);
      v9 = (float)((v7 & 1) + v7) / (float)((v8 & 1) + v8);
      mWidth = (float)this->fields.mWidth;
      mHeight = (float)this->fields.mHeight;
      v12 = (float)(mWidth - (float)(v9 * mHeight)) / mWidth;
      v13 = (float)(mHeight - (float)(mWidth / v9)) / mHeight;
      v14 = mWidth / mHeight;
      v15 = v13 * 0.5;
      v16 = v9 < v14;
      if ( v9 < v14 )
        v17 = v12 * 0.5;
      else
        v17 = 0.0;
      if ( v16 )
        v18 = 0.0;
      else
        v18 = v15;
      if ( v16 )
        v19 = 1.0 - (float)(v12 * 0.5);
      else
        v19 = 1.0;
      if ( v16 )
        v20 = 1.0;
      else
        v20 = 1.0 - v15;
      UIWidget__set_drawRegion((UIWidget_o *)this, *(UnityEngine_Vector4_o *)&v17, 0);
    }
  }
}


UnityEngine_Vector4_o UITexture__get_border(UITexture_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields.mBorder.fields.x;
  y = this->fields.mBorder.fields.y;
  z = this->fields.mBorder.fields.z;
  w = this->fields.mBorder.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector4_o UITexture__get_drawingDimensions(UITexture_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x1
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  UnityEngine_Object_o *mTexture; // x20
  float mWidth; // s8
  float mHeight; // s9
  float v8; // s0
  float v9; // s1
  __int64 v10; // x1
  struct UnityEngine_Texture_o *v11; // x0
  struct UnityEngine_Texture_o *v12; // x8
  int v13; // w20
  int v14; // w0
  float v20; // s1
  int32_t mType; // w8
  float v22; // s2
  float32x2_t v24; // d0
  float32x2_t v25; // d3
  int32_t mFlip; // w8
  float v27; // s2
  float v28; // s0
  float v29; // s0
  float v30; // s2
  float v31; // s0
  float v32; // s2
  float v33; // s1
  float v34; // s3
  float32x4_t v35; // q5
  float32x4_t v36; // q1
  float32x4_t v38; // q0
  float v39; // s1
  float v40; // s2
  float v41; // s3
  float v42; // [xsp+0h] [xbp-70h]
  float v43; // [xsp+10h] [xbp-60h]
  float v44; // [xsp+20h] [xbp-50h]
  float v45; // [xsp+30h] [xbp-40h]
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593D002 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593D002 = 1;
  }
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  mWidth = (float)this->fields.mWidth;
  mHeight = (float)this->fields.mHeight;
  v8 = -(float)(pivotOffset.fields.x * mWidth);
  v9 = -(float)(pivotOffset.fields.y * mHeight);
  v44 = v9;
  v45 = v8;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    v9 = -(float)(pivotOffset.fields.y * mHeight);
    v8 = -(float)(pivotOffset.fields.x * mWidth);
  }
  v42 = v8 + mWidth;
  v43 = v9 + mHeight;
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) && this->fields.mType != 2 )
  {
    v11 = this->fields.mTexture;
    if ( !v11
      || (v11 = (struct UnityEngine_Texture_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, const MethodInfo *))v11->klass->vtable._4_get_width.methodPtr)(
                                                  v11,
                                                  v11->klass->vtable._4_get_width.method),
          (v12 = this->fields.mTexture) == 0) )
    {
      sub_21FFECC(v11, v10);
    }
    v13 = (int)v11;
    v14 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v12->klass->vtable._6_get_height.methodPtr)(
                          v12,
                          this->fields.mTexture,
                          v12->klass->vtable._6_get_height.method);
    __asm { FMOV            V0.2S, #1.0 }
    v20 = 0.0;
    if ( v13 < 1 || v14 < 1 )
    {
      v22 = 0.0;
    }
    else
    {
      mType = this->fields.mType;
      if ( mType == 3 || (v22 = 0.0, !mType) )
      {
        __asm { FMOV            V1.2S, #1.0 }
        v24.n64_u64[0] = vdiv_f32(_D1, vcvt_f32_s32((int32x2_t)__PAIR64__(v14, v13))).n64_u64[0];
        v25.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&this->fields.mWidth).n64_u64[0];
        v20 = 1.0;
        if ( (v14 & 1) == 0 )
          v20 = 0.0;
        v22 = (float)(v13 & 1);
        _D0.n64_u64[0] = vmul_f32(v24, v25).n64_u64[0];
      }
    }
    mFlip = this->fields.mFlip;
    v27 = v22 * _D0.n64_f32[0];
    if ( (mFlip | 2) == 3 )
      v45 = v27 - (float)(pivotOffset.fields.x * mWidth);
    else
      v42 = v42 - v27;
    v28 = vmuls_lane_f32(v20, _D0, 1);
    if ( (mFlip & 0xFFFFFFFE) == 2 )
      v44 = v28 - (float)(pivotOffset.fields.y * mHeight);
    else
      v43 = v43 - v28;
  }
  v29 = 0.0;
  v30 = 0.0;
  if ( !this->fields.mFixedAspect )
  {
    v31 = ((float (__fastcall *)(UITexture_o *, const MethodInfo *, double))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method,
            0.0);
    v30 = v31 + v32;
    v29 = v33 + v34;
  }
  v35.n128_u64[0] = __PAIR64__(LODWORD(v44), LODWORD(v45));
  v36.n128_f32[0] = v42 - v30;
  v36.n128_f32[1] = v43 - v29;
  __asm { FMOV            V3.4S, #1.0 }
  v35.n128_f32[2] = v45 + v30;
  v36.n128_u64[1] = __PAIR64__(LODWORD(v43), LODWORD(v42));
  v35.n128_f32[3] = v44 + v29;
  v38 = vaddq_f32(
          v35,
          vmulq_f32(
            vsubq_f32(v36, v35),
            vbicq_s8(
              vbslq_s8(vcgtq_f32((float32x4_t)this->fields.mDrawRegion, _Q3), _Q3, (int8x16_t)this->fields.mDrawRegion),
              vcltzq_f32((float32x4_t)this->fields.mDrawRegion))));
  v39 = v38.n128_f32[1];
  v41 = v38.n128_f32[3];
  v40 = v38.n128_f32[2];
  result.fields.x = v38.n128_f32[0];
  result.fields.w = v41;
  result.fields.z = v40;
  result.fields.y = v39;
  return result;
}


bool UITexture__get_fixedAspect(UITexture_o *this, const MethodInfo *method)
{
  return this->fields.mFixedAspect;
}


UnityEngine_Texture_o *UITexture__get_mainTexture(UITexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTexture; // x20
  __int64 v4; // x1
  UnityEngine_Texture_o *result; // x0
  UnityEngine_Object_o *mMat; // x20
  __int64 v7; // x1
  bool v8; // w8
  UnityEngine_Material_o *v9; // x0

  if ( (byte_593CFFC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFFC = 1;
  }
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) )
    return this->fields.mTexture;
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v8 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  result = 0;
  if ( v8 )
  {
    v9 = this->fields.mMat;
    if ( !v9 )
      sub_21FFECC(0, v7);
    return UnityEngine_Material__get_mainTexture(v9, 0);
  }
  return result;
}


UnityEngine_Material_o *UITexture__get_material(UITexture_o *this, const MethodInfo *method)
{
  return this->fields.mMat;
}


bool UITexture__get_premultipliedAlpha(UITexture_o *this, const MethodInfo *method)
{
  int32_t mPMA; // w8
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *name; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *shader; // x21

  if ( (byte_593D001 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11170/*"Premultiplied"*/);
    byte_593D001 = 1;
  }
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                   this,
                                   this->klass->vtable._24_get_material.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_17;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v5, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(shader, 0, 0) )
      {
        name = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v5, 0);
        if ( name )
        {
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
          if ( name )
          {
            mPMA = System_String__Contains((System_String_o *)name, (System_String_o *)StringLiteral_11170/*"Premultiplied"*/, 0);
LABEL_15:
            this->fields.mPMA = mPMA;
            return mPMA == 1;
          }
        }
LABEL_17:
        sub_21FFECC(name, v7);
      }
    }
    mPMA = 0;
    goto LABEL_15;
  }
  return mPMA == 1;
}


UnityEngine_Shader_o *UITexture__get_shader(UITexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMat; // x20
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x0
  UnityEngine_Object_o *mShader; // x20
  struct UnityEngine_Shader_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593CFFF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_15702/*"Unlit/Transparent Colored"*/);
    byte_593CFFF = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
  {
    v5 = this->fields.mMat;
    if ( !v5 )
      sub_21FFECC(0, v4);
    return UnityEngine_Material__get_shader(v5, 0);
  }
  else
  {
    mShader = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(mShader, 0, 0) )
    {
      v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15702/*"Unlit/Transparent Colored"*/, 0);
      this->fields.mShader = v8;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mShader, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    }
    return this->fields.mShader;
  }
}


UnityEngine_Rect_o UITexture__get_uvRect(UITexture_o *this, const MethodInfo *method)
{
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.mRect.fields.m_XMin;
  m_YMin = this->fields.mRect.fields.m_YMin;
  m_Width = this->fields.mRect.fields.m_Width;
  m_Height = this->fields.mRect.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


void UITexture__set_border(UITexture_o *this, UnityEngine_Vector4_o value, const MethodInfo *method)
{
  UITexture_c *klass; // x8

  if ( (float)((float)((float)(this->fields.mBorder.fields.w - value.fields.w)
                     * (float)(this->fields.mBorder.fields.w - value.fields.w))
             + (float)((float)((float)(this->fields.mBorder.fields.z - value.fields.z)
                             * (float)(this->fields.mBorder.fields.z - value.fields.z))
                     + (float)((float)((float)(this->fields.mBorder.fields.x - value.fields.x)
                                     * (float)(this->fields.mBorder.fields.x - value.fields.x))
                             + (float)((float)(this->fields.mBorder.fields.y - value.fields.y)
                                     * (float)(this->fields.mBorder.fields.y - value.fields.y))))) >= 1.0e-10 )
  {
    klass = this->klass;
    this->fields.mBorder = value;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UITexture__set_fixedAspect(UITexture_o *this, bool value, const MethodInfo *method)
{
  UITexture_c *klass; // x9

  if ( this->fields.mFixedAspect != value )
  {
    this->fields.mFixedAspect = value;
    klass = this->klass;
    this->fields.mDrawRegion = (struct UnityEngine_Vector4_o)xmmword_E92B70;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UITexture__set_mainTexture(UITexture_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mTexture; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *drawCall; // x21
  UIDrawCall_o *v8; // x0
  __int64 v9; // x1
  struct UIDrawCall_o *v10; // x8
  UnityEngine_Object_o *mMat; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( (byte_593CFFD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFFD = 1;
  }
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mTexture, (UnityEngine_Object_o *)value, 0) )
  {
    drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v10 = this->fields.drawCall;
      if ( !v10 )
        goto LABEL_18;
      if ( v10->fields.widgetCount == 1 )
      {
        mMat = (UnityEngine_Object_o *)this->fields.mMat;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
        {
          this->fields.mTexture = value;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mTexture,
            (int32_t)value,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          v8 = this->fields.drawCall;
          if ( v8 )
          {
            UIDrawCall__set_mainTexture(v8, value, 0);
            return;
          }
LABEL_18:
          sub_21FFECC(v8, v9);
        }
      }
    }
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mTexture = value;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mTexture,
      (int32_t)value,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = this->klass->vtable._30_MarkAsChanged.method;
    methodPtr = this->klass->vtable._30_MarkAsChanged.methodPtr;
    this->fields.mPMA = -1;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))methodPtr)(this, v24);
  }
}


void UITexture__set_material(UITexture_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mMat; // x21
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
  const MethodInfo *v18; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( (byte_593CFFE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CFFE = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mShader = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mShader, 0, v6, v7, v8, v9, v10, v11);
    this->fields.mMat = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMat, (int32_t)value, v12, v13, v14, v15, v16, v17);
    v18 = this->klass->vtable._30_MarkAsChanged.method;
    methodPtr = this->klass->vtable._30_MarkAsChanged.methodPtr;
    this->fields.mPMA = -1;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))methodPtr)(this, v18);
  }
}


void UITexture__set_shader(UITexture_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mShader; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *drawCall; // x21
  UIDrawCall_o *v8; // x0
  __int64 v9; // x1
  struct UIDrawCall_o *v10; // x8
  UnityEngine_Object_o *mMat; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_593D000 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593D000 = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v10 = this->fields.drawCall;
      if ( !v10 )
        goto LABEL_18;
      if ( v10->fields.widgetCount == 1 )
      {
        mMat = (UnityEngine_Object_o *)this->fields.mMat;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
        {
          this->fields.mShader = value;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mShader,
            (int32_t)value,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          v8 = this->fields.drawCall;
          if ( v8 )
          {
            UIDrawCall__set_shader(v8, value, 0);
            return;
          }
LABEL_18:
          sub_21FFECC(v8, v9);
        }
      }
    }
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mShader = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mShader, (int32_t)value, v18, v19, v20, v21, v22, v23);
    this->fields.mPMA = -1;
    this->fields.mMat = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMat, 0, v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UITexture__set_uvRect(UITexture_o *this, UnityEngine_Rect_o value, const MethodInfo *method)
{
  UITexture_c *klass; // x8

  if ( (vmaxv_u16(vcltz_s16(vshl_n_s16(vmovn_s32(vmvnq_s8(vceqq_f32((float32x4_t)this->fields.mRect, (float32x4_t)value))), 0xFu)))
      & 1) != 0 )
  {
    klass = this->klass;
    this->fields.mRect = value;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}