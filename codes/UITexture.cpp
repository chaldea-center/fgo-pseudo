void UITexture___ctor(UITexture_o *this, const MethodInfo *method)
{
  if ( (byte_4C5B6A2 & 1) == 0 )
  {
    sub_1C3E564(&UIBasicSprite_TypeInfo);
    byte_4C5B6A2 = 1;
  }
  this->fields.mRect = (struct UnityEngine_Rect_o)xmmword_C11C00;
  if ( !byte_4C509A7 )
  {
    sub_1C3E564(&UnityEngine_Vector4_TypeInfo);
    byte_4C509A7 = 1;
  }
  this->fields.mBorder = UnityEngine_Vector4_TypeInfo->static_fields->zeroVector;
  this->fields.mPMA = -1;
  if ( !UIBasicSprite_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIBasicSprite_TypeInfo);
  UIBasicSprite___ctor((UIBasicSprite_o *)this, 0);
}


void UITexture__MakePixelPerfect(UITexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  int32_t mType; // w8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int v7; // w21
  int v8; // w0
  int32_t v9; // w20

  if ( (byte_4C5B69F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B69F = 1;
  }
  UIWidget__MakePixelPerfect((UIWidget_o *)this, 0);
  if ( this->fields.mType != 2 )
  {
    v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                   this,
                                   this->klass->vtable._26_get_mainTexture.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
    {
      mType = this->fields.mType;
      if ( !mType || mType == 3 || !UIBasicSprite__get_hasBorder((UIBasicSprite_o *)this, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v5 = UnityEngine_Object__op_Inequality(v3, 0, 0);
        if ( v5 )
        {
          if ( !v3 )
            sub_1C3E7C0(v5, v6);
          v7 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v3->klass[1]._1.image)(
                 v3,
                 v3->klass[1]._1.gc_desc);
          v8 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v3->klass[1]._1.byval_arg.data)(
                 v3,
                 *(_QWORD *)&v3->klass[1]._1.byval_arg.bits);
          v9 = (v8 & 1) + v8;
          UIWidget__set_width((UIWidget_o *)this, (v7 & 1) + v7, 0);
          UIWidget__set_height((UIWidget_o *)this, v9, 0);
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
  UnityEngine_Object_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  float m_XMin; // s13
  int v13; // w0
  float m_YMin; // s15
  int v15; // w24
  int v16; // w25
  int v17; // w0
  float m_Width; // s12
  int v19; // w26
  int v20; // w0
  float m_Height; // s14
  int v22; // w27
  float v23; // s9
  float v24; // s1
  float v25; // s10
  float v26; // s2
  float v27; // s8
  float v28; // s3
  float v29; // s11
  int v30; // w28
  float v31; // s0
  float v32; // s1
  float v33; // s16
  float v34; // s2
  float v35; // s17
  float v36; // s3
  float v37; // s7
  float v38; // s6
  float v39; // s18
  float v40; // s19
  unsigned int size; // w23
  float v42; // s2
  float v43; // s16
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C5B6A1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B6A1 = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                 this,
                                 this->klass->vtable._26_get_mainTexture.method,
                                 uvs,
                                 cols,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( (v10 & 1) == 0 )
  {
    if ( !v9 )
      goto LABEL_11;
    m_XMin = this->fields.mRect.fields.m_XMin;
    v13 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    m_YMin = this->fields.mRect.fields.m_YMin;
    v15 = v13;
    v16 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    v17 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    m_Width = this->fields.mRect.fields.m_Width;
    v19 = v17;
    v20 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    m_Height = this->fields.mRect.fields.m_Height;
    v22 = v20;
    LODWORD(v23) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
                       this,
                       this->klass->vtable._36_get_border.method));
    v25 = v24;
    v27 = v26;
    v29 = v28;
    v30 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    v10 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    if ( !verts )
LABEL_11:
      sub_1C3E7C0(v10, v11);
    v31 = m_XMin * (float)v15;
    v32 = m_YMin * (float)v16;
    v33 = v31 + v23;
    v34 = v31 + (float)(m_Width * (float)v19);
    v35 = v32 + v25;
    v36 = v32 + (float)(m_Height * (float)v22);
    v37 = 1.0 / (float)v30;
    v38 = 1.0 / (float)(int)v10;
    v39 = (float)((float)((float)(v32 + v25) + (float)(v36 - (float)(v32 + v25))) - v29) - (float)(v32 + v25);
    v40 = (float)((float)((float)(v31 + v23) + (float)(v34 - (float)(v31 + v23))) - v27) - (float)(v31 + v23);
    v45.fields.m_XMin = v31 * v37;
    v45.fields.m_YMin = v32 * v38;
    v46.fields.m_XMin = v33 * v37;
    v46.fields.m_YMin = v35 * v38;
    size = verts->fields.size;
    v42 = v37 * (float)(v45.fields.m_XMin + (float)(v34 - v45.fields.m_XMin));
    v43 = v37 * (float)((float)(v33 * v37) + (float)((float)(v33 + v40) - (float)(v33 * v37)));
    v45.fields.m_Height = (float)(v38 * (float)(v45.fields.m_YMin + (float)(v36 - v45.fields.m_YMin)))
                        - v45.fields.m_YMin;
    v46.fields.m_Height = (float)(v38 * (float)((float)(v35 * v38) + (float)((float)(v35 + v39) - (float)(v35 * v38))))
                        - (float)(v35 * v38);
    v46.fields.m_Width = v43 - v46.fields.m_XMin;
    v45.fields.m_Width = v42 - v45.fields.m_XMin;
    UIBasicSprite__Fill((UIBasicSprite_o *)this, verts, uvs, cols, v45, v46, 0);
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
  UnityEngine_Object_o *v3; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int v6; // w21
  int v7; // w0
  float mWidth; // s0
  float mHeight; // s1
  float v10; // s2
  float v11; // s0 OVERLAPPED
  float v12; // s1
  float v13; // s2
  float v14; // s3

  if ( (byte_4C5B6A0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B6A0 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0);
  if ( this->fields.mFixedAspect )
  {
    v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                   this,
                                   this->klass->vtable._26_get_mainTexture.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(v3, 0, 0);
    if ( v4 )
    {
      if ( !v3 )
        sub_1C3E7C0(v4, v5);
      v6 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v3->klass[1]._1.image)(v3, v3->klass[1]._1.gc_desc);
      v7 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v3->klass[1]._1.byval_arg.data)(
             v3,
             *(_QWORD *)&v3->klass[1]._1.byval_arg.bits);
      mWidth = (float)this->fields.mWidth;
      mHeight = (float)this->fields.mHeight;
      v10 = (float)((v6 & 1) + v6) / (float)((v7 & 1) + v7);
      if ( v10 >= (float)(mWidth / mHeight) )
      {
        v12 = (float)((float)(mHeight - (float)(mWidth / v10)) / mHeight) * 0.5;
        v11 = 0.0;
        v14 = 1.0 - v12;
        v13 = 1.0;
      }
      else
      {
        v11 = (float)((float)(mWidth - (float)(v10 * mHeight)) / mWidth) * 0.5;
        v12 = 0.0;
        v13 = 1.0 - v11;
        v14 = 1.0;
      }
      UIWidget__set_drawRegion((UIWidget_o *)this, *(UnityEngine_Vector4_o *)&v11, 0);
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
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  UnityEngine_Object_o *mTexture; // x20
  float mWidth; // s9
  float v6; // s10
  float mHeight; // s12
  float v8; // s8
  float v9; // s11
  float v10; // s9
  __int64 v11; // x1
  struct UnityEngine_Texture_o *v12; // x0
  struct UnityEngine_Texture_o *v13; // x8
  int v14; // w20
  int v15; // w0
  float v16; // s0
  float v17; // s1
  int32_t mType; // w8
  float v19; // s2
  float v20; // s3
  int32_t mFlip; // w8
  float v22; // s2
  float v23; // s0
  float v24; // s1
  float v25; // s0
  float v26; // s0
  float v27; // s2
  float v28; // s1
  float v29; // s3
  float x; // s4
  float y; // s5
  bool v32; // nf
  float v33; // s4
  float v34; // s2
  float z; // s4
  float v36; // s7
  float v37; // s0
  float w; // s2
  float v39; // s5
  float v40; // s16
  float v41; // s1
  float v42; // s4
  float v43; // s1
  float v44; // s3
  float v45; // s1
  float v46; // s2
  float v47; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B69E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B69E = 1;
  }
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  mWidth = (float)this->fields.mWidth;
  v6 = (float)-pivotOffset.fields.x * mWidth;
  mHeight = (float)this->fields.mHeight;
  v8 = (float)-pivotOffset.fields.y * mHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = v6 + mWidth;
  v10 = v8 + mHeight;
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) && this->fields.mType != 2 )
  {
    v12 = this->fields.mTexture;
    if ( !v12
      || (v12 = (struct UnityEngine_Texture_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, const MethodInfo *))v12->klass->vtable._4_get_width.methodPtr)(
                                                  v12,
                                                  v12->klass->vtable._4_get_width.method),
          (v13 = this->fields.mTexture) == 0) )
    {
      sub_1C3E7C0(v12, v11);
    }
    v14 = (int)v12;
    v15 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v13->klass->vtable._6_get_height.methodPtr)(
                          v13,
                          this->fields.mTexture,
                          v13->klass->vtable._6_get_height.method);
    v16 = 0.0;
    v17 = 1.0;
    if ( v14 < 1 || v15 < 1 )
    {
      v19 = 1.0;
      v20 = 0.0;
    }
    else
    {
      mType = this->fields.mType;
      if ( mType == 3 || (v19 = 1.0, v20 = 0.0, !mType) )
      {
        v20 = (float)(v14 & 1);
        v19 = (float)(1.0 / (float)v14) * (float)this->fields.mWidth;
        v17 = (float)(1.0 / (float)v15) * (float)this->fields.mHeight;
        v16 = (float)(v15 & 1);
      }
    }
    mFlip = this->fields.mFlip;
    v22 = v19 * v20;
    if ( (mFlip | 2) == 3 )
      v6 = v6 + v22;
    else
      v9 = v9 - v22;
    v23 = v17 * v16;
    if ( (mFlip & 0xFFFFFFFE) == 2 )
      v8 = v8 + v23;
    else
      v10 = v10 - v23;
  }
  v24 = 0.0;
  v25 = 0.0;
  if ( !this->fields.mFixedAspect )
  {
    v26 = ((float (__fastcall *)(UITexture_o *, const MethodInfo *, float, float))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method,
            0.0,
            0.0);
    v25 = v26 + v27;
    v24 = v28 + v29;
  }
  x = this->fields.mDrawRegion.fields.x;
  y = this->fields.mDrawRegion.fields.y;
  v32 = x < 0.0;
  v33 = fminf(x, 1.0);
  if ( v32 )
    v33 = 0.0;
  v34 = (float)((float)(v9 - v25) - v6) * v33;
  z = this->fields.mDrawRegion.fields.z;
  v36 = v6 + v25;
  v37 = v6 + v34;
  w = this->fields.mDrawRegion.fields.w;
  v32 = y < 0.0;
  v39 = fminf(y, 1.0);
  v40 = v8 + v24;
  v41 = (float)(v10 - v24) - v8;
  if ( v32 )
    v39 = 0.0;
  v32 = z < 0.0;
  v42 = fminf(z, 1.0);
  v43 = v41 * v39;
  v44 = fminf(w, 1.0);
  if ( v32 )
    v42 = 0.0;
  v45 = v8 + v43;
  if ( w < 0.0 )
    v44 = 0.0;
  v46 = v36 + (float)((float)(v9 - v36) * v42);
  v47 = v40 + (float)((float)(v10 - v40) * v44);
  result.fields.w = v47;
  result.fields.z = v46;
  result.fields.y = v45;
  result.fields.x = v37;
  return result;
}


bool UITexture__get_fixedAspect(UITexture_o *this, const MethodInfo *method)
{
  return this->fields.mFixedAspect;
}


UnityEngine_Texture_o *UITexture__get_mainTexture(UITexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTexture; // x20
  UnityEngine_Texture_o *result; // x0
  UnityEngine_Object_o *mMat; // x20
  __int64 v6; // x1
  bool v7; // w8
  UnityEngine_Material_o *v8; // x0

  if ( (byte_4C5B698 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B698 = 1;
  }
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) )
    return this->fields.mTexture;
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  result = 0;
  if ( v7 )
  {
    v8 = this->fields.mMat;
    if ( !v8 )
      sub_1C3E7C0(0, v6);
    return UnityEngine_Material__get_mainTexture(v8, 0);
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
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *name; // x0
  __int64 v6; // x1
  UITexture_o *v7; // x22
  UnityEngine_Object_o *shader; // x21
  int32_t v9; // w8

  if ( (byte_4C5B69D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_10727/*"Premultiplied"*/);
    byte_4C5B69D = 1;
  }
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._24_get_material.methodPtr)(
                                   this,
                                   this->klass->vtable._24_get_material.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
      v7 = this;
    else
      v7 = 0;
    if ( ((unsigned __int8)name & 1) == 0 )
    {
      v9 = 0;
      v7 = this;
LABEL_20:
      v7->fields.mPMA = v9;
      mPMA = this->fields.mPMA;
      return mPMA == 1;
    }
    if ( v4 )
    {
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v4, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0, 0);
      if ( ((unsigned __int8)name & 1) != 0 )
      {
        name = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v4, 0);
        if ( !name )
          goto LABEL_22;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
        if ( !name )
          goto LABEL_22;
        name = (UnityEngine_Object_o *)System_String__Contains(
                                         (System_String_o *)name,
                                         (System_String_o *)StringLiteral_10727/*"Premultiplied"*/,
                                         0);
        v9 = (unsigned __int8)name & 1;
      }
      else
      {
        v9 = 0;
        v7 = this;
      }
      if ( v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C3E7C0(name, v6);
  }
  return mPMA == 1;
}


UnityEngine_Shader_o *UITexture__get_shader(UITexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMat; // x20
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x0
  UnityEngine_Object_o *mShader; // x20
  CGThumbnailListItem_o *p_mShader; // x19
  UnityEngine_Shader_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5B69B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_15143/*"Unlit/Transparent Colored"*/);
    byte_4C5B69B = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
  {
    v5 = this->fields.mMat;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    return UnityEngine_Material__get_shader(v5, 0);
  }
  else
  {
    mShader = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mShader = (CGThumbnailListItem_o *)&this->fields.mShader;
    if ( UnityEngine_Object__op_Equality(mShader, 0, 0) )
    {
      v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15143/*"Unlit/Transparent Colored"*/, 0);
      p_mShader->klass = (CGThumbnailListItem_c *)v9;
      sub_1C3E508(p_mShader, (int32_t)v9, v10, v11);
    }
    return (UnityEngine_Shader_o *)p_mShader->klass;
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
    klass = this->klass;
    this->fields.mFixedAspect = value;
    this->fields.mDrawRegion = (struct UnityEngine_Vector4_o)xmmword_C11C00;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UITexture__set_mainTexture(UITexture_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mTexture; // x21
  UnityEngine_Object_o *drawCall; // x22
  UIDrawCall_o *v7; // x0
  __int64 v8; // x1
  struct UIDrawCall_o *v9; // x8
  UnityEngine_Object_o *mMat; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UITexture_c *klass; // x8

  if ( (byte_4C5B699 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B699 = 1;
  }
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTexture, (UnityEngine_Object_o *)value, 0) )
  {
    drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v9 = this->fields.drawCall;
      if ( !v9 )
        goto LABEL_18;
      if ( v9->fields.widgetCount == 1 )
      {
        mMat = (UnityEngine_Object_o *)this->fields.mMat;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
        {
          this->fields.mTexture = value;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTexture, (int32_t)value, v11, v12);
          v7 = this->fields.drawCall;
          if ( v7 )
          {
            UIDrawCall__set_mainTexture(v7, value, 0);
            return;
          }
LABEL_18:
          sub_1C3E7C0(v7, v8);
        }
      }
    }
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mTexture = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTexture, (int32_t)value, v13, v14);
    klass = this->klass;
    this->fields.mPMA = -1;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UITexture__set_material(UITexture_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mMat; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UITexture_c *klass; // x8

  if ( (byte_4C5B69A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B69A = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mShader = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mShader, 0, v6, v7);
    this->fields.mMat = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mMat, (int32_t)value, v8, v9);
    klass = this->klass;
    this->fields.mPMA = -1;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}


void UITexture__set_shader(UITexture_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mShader; // x21
  UnityEngine_Object_o *drawCall; // x22
  UIDrawCall_o *v7; // x0
  __int64 v8; // x1
  struct UIDrawCall_o *v9; // x8
  UnityEngine_Object_o *mMat; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C5B69C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B69C = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    drawCall = (UnityEngine_Object_o *)this->fields.drawCall;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v9 = this->fields.drawCall;
      if ( !v9 )
        goto LABEL_18;
      if ( v9->fields.widgetCount == 1 )
      {
        mMat = (UnityEngine_Object_o *)this->fields.mMat;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
        {
          this->fields.mShader = value;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mShader, (int32_t)value, v11, v12);
          v7 = this->fields.drawCall;
          if ( v7 )
          {
            UIDrawCall__set_shader(v7, value, 0);
            return;
          }
LABEL_18:
          sub_1C3E7C0(v7, v8);
        }
      }
    }
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mShader = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mShader, (int32_t)value, v13, v14);
    this->fields.mPMA = -1;
    this->fields.mMat = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mMat, 0, v15, v16);
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      this->klass->vtable._30_MarkAsChanged.method);
  }
}


void UITexture__set_uvRect(UITexture_o *this, UnityEngine_Rect_o value, const MethodInfo *method)
{
  UITexture_c *klass; // x8

  if ( this->fields.mRect.fields.m_XMin != value.fields.m_XMin
    || this->fields.mRect.fields.m_Height != value.fields.m_Height
    || this->fields.mRect.fields.m_Width != value.fields.m_Width
    || this->fields.mRect.fields.m_YMin != value.fields.m_YMin )
  {
    klass = this->klass;
    this->fields.mRect = value;
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))klass->vtable._30_MarkAsChanged.methodPtr)(
      this,
      klass->vtable._30_MarkAsChanged.method);
  }
}