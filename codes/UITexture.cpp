void UITexture___ctor(UITexture_o *this, const MethodInfo *method)
{
  if ( (byte_4C478AB & 1) == 0 )
  {
    sub_1C37058(&UIBasicSprite_TypeInfo);
    byte_4C478AB = 1;
  }
  this->fields.mRect = (struct UnityEngine_Rect_o)xmmword_C0E590;
  if ( !byte_4C3CC27 )
  {
    sub_1C37058(&UnityEngine_Vector4_TypeInfo);
    byte_4C3CC27 = 1;
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
  int v6; // w21
  int v7; // w0
  int32_t v8; // w20

  if ( (byte_4C478A8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478A8 = 1;
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
            sub_1C372B4(v5);
          v6 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v3->klass[1]._1.image)(
                 v3,
                 v3->klass[1]._1.gc_desc);
          v7 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v3->klass[1]._1.byval_arg.data)(
                 v3,
                 *(_QWORD *)&v3->klass[1]._1.byval_arg.bits);
          v8 = (v7 & 1) + v7;
          UIWidget__set_width((UIWidget_o *)this, (v6 & 1) + v6, 0);
          UIWidget__set_height((UIWidget_o *)this, v8, 0);
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
  float m_XMin; // s13
  int v12; // w0
  float m_YMin; // s15
  int v14; // w24
  int v15; // w25
  int v16; // w0
  float m_Width; // s12
  int v18; // w26
  int v19; // w0
  float m_Height; // s14
  int v21; // w27
  float v22; // s9
  float v23; // s1
  float v24; // s10
  float v25; // s2
  float v26; // s8
  float v27; // s3
  float v28; // s11
  int v29; // w28
  float v30; // s0
  float v31; // s1
  float v32; // s16
  float v33; // s2
  float v34; // s17
  float v35; // s3
  float v36; // s7
  float v37; // s6
  float v38; // s18
  float v39; // s19
  unsigned int size; // w23
  float v41; // s2
  float v42; // s16
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C478AA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478AA = 1;
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
    v12 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    m_YMin = this->fields.mRect.fields.m_YMin;
    v14 = v12;
    v15 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    v16 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    m_Width = this->fields.mRect.fields.m_Width;
    v18 = v16;
    v19 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    m_Height = this->fields.mRect.fields.m_Height;
    v21 = v19;
    LODWORD(v22) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UITexture_o *, const MethodInfo *))this->klass->vtable._36_get_border.methodPtr)(
                       this,
                       this->klass->vtable._36_get_border.method));
    v24 = v23;
    v26 = v25;
    v28 = v27;
    v29 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
    v10 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
            v9,
            *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
    if ( !verts )
LABEL_11:
      sub_1C372B4(v10);
    v30 = m_XMin * (float)v14;
    v31 = m_YMin * (float)v15;
    v32 = v30 + v22;
    v33 = v30 + (float)(m_Width * (float)v18);
    v34 = v31 + v24;
    v35 = v31 + (float)(m_Height * (float)v21);
    v36 = 1.0 / (float)v29;
    v37 = 1.0 / (float)(int)v10;
    v38 = (float)((float)((float)(v31 + v24) + (float)(v35 - (float)(v31 + v24))) - v28) - (float)(v31 + v24);
    v39 = (float)((float)((float)(v30 + v22) + (float)(v33 - (float)(v30 + v22))) - v26) - (float)(v30 + v22);
    v44.fields.m_XMin = v30 * v36;
    v44.fields.m_YMin = v31 * v37;
    v45.fields.m_XMin = v32 * v36;
    v45.fields.m_YMin = v34 * v37;
    size = verts->fields.size;
    v41 = v36 * (float)(v44.fields.m_XMin + (float)(v33 - v44.fields.m_XMin));
    v42 = v36 * (float)((float)(v32 * v36) + (float)((float)(v32 + v39) - (float)(v32 * v36)));
    v44.fields.m_Height = (float)(v37 * (float)(v44.fields.m_YMin + (float)(v35 - v44.fields.m_YMin)))
                        - v44.fields.m_YMin;
    v45.fields.m_Height = (float)(v37 * (float)((float)(v34 * v37) + (float)((float)(v34 + v38) - (float)(v34 * v37))))
                        - (float)(v34 * v37);
    v45.fields.m_Width = v42 - v45.fields.m_XMin;
    v44.fields.m_Width = v41 - v44.fields.m_XMin;
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
  UnityEngine_Object_o *v3; // x20
  _BOOL8 v4; // x0
  int v5; // w21
  int v6; // w0
  float mWidth; // s0
  float mHeight; // s1
  float v9; // s2
  float v10; // s0 OVERLAPPED
  float v11; // s1
  float v12; // s2
  float v13; // s3

  if ( (byte_4C478A9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478A9 = 1;
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
        sub_1C372B4(v4);
      v5 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v3->klass[1]._1.image)(v3, v3->klass[1]._1.gc_desc);
      v6 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v3->klass[1]._1.byval_arg.data)(
             v3,
             *(_QWORD *)&v3->klass[1]._1.byval_arg.bits);
      mWidth = (float)this->fields.mWidth;
      mHeight = (float)this->fields.mHeight;
      v9 = (float)((v5 & 1) + v5) / (float)((v6 & 1) + v6);
      if ( v9 >= (float)(mWidth / mHeight) )
      {
        v11 = (float)((float)(mHeight - (float)(mWidth / v9)) / mHeight) * 0.5;
        v10 = 0.0;
        v13 = 1.0 - v11;
        v12 = 1.0;
      }
      else
      {
        v10 = (float)((float)(mWidth - (float)(v9 * mHeight)) / mWidth) * 0.5;
        v11 = 0.0;
        v12 = 1.0 - v10;
        v13 = 1.0;
      }
      UIWidget__set_drawRegion((UIWidget_o *)this, *(UnityEngine_Vector4_o *)&v10, 0);
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
  struct UnityEngine_Texture_o *v11; // x0
  struct UnityEngine_Texture_o *v12; // x8
  int v13; // w20
  int v14; // w0
  float v15; // s0
  float v16; // s1
  int32_t mType; // w8
  float v18; // s2
  float v19; // s3
  int32_t mFlip; // w8
  float v21; // s2
  float v22; // s0
  float v23; // s1
  float v24; // s0
  float v25; // s0
  float v26; // s2
  float v27; // s1
  float v28; // s3
  float x; // s4
  float y; // s5
  bool v31; // nf
  float v32; // s4
  float v33; // s2
  float z; // s4
  float v35; // s7
  float v36; // s0
  float w; // s2
  float v38; // s5
  float v39; // s16
  float v40; // s1
  float v41; // s4
  float v42; // s1
  float v43; // s3
  float v44; // s1
  float v45; // s2
  float v46; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C478A7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478A7 = 1;
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
    v11 = this->fields.mTexture;
    if ( !v11
      || (v11 = (struct UnityEngine_Texture_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, const MethodInfo *))v11->klass->vtable._4_get_width.methodPtr)(
                                                  v11,
                                                  v11->klass->vtable._4_get_width.method),
          (v12 = this->fields.mTexture) == 0) )
    {
      sub_1C372B4(v11);
    }
    v13 = (int)v11;
    v14 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v12->klass->vtable._6_get_height.methodPtr)(
                          v12,
                          this->fields.mTexture,
                          v12->klass->vtable._6_get_height.method);
    v15 = 0.0;
    v16 = 1.0;
    if ( v13 < 1 || v14 < 1 )
    {
      v18 = 1.0;
      v19 = 0.0;
    }
    else
    {
      mType = this->fields.mType;
      if ( mType == 3 || (v18 = 1.0, v19 = 0.0, !mType) )
      {
        v19 = (float)(v13 & 1);
        v18 = (float)(1.0 / (float)v13) * (float)this->fields.mWidth;
        v16 = (float)(1.0 / (float)v14) * (float)this->fields.mHeight;
        v15 = (float)(v14 & 1);
      }
    }
    mFlip = this->fields.mFlip;
    v21 = v18 * v19;
    if ( (mFlip | 2) == 3 )
      v6 = v6 + v21;
    else
      v9 = v9 - v21;
    v22 = v16 * v15;
    if ( (mFlip & 0xFFFFFFFE) == 2 )
      v8 = v8 + v22;
    else
      v10 = v10 - v22;
  }
  v23 = 0.0;
  v24 = 0.0;
  if ( !this->fields.mFixedAspect )
  {
    v25 = ((float (__fastcall *)(UITexture_o *, const MethodInfo *, float, float))this->klass->vtable._36_get_border.methodPtr)(
            this,
            this->klass->vtable._36_get_border.method,
            0.0,
            0.0);
    v24 = v25 + v26;
    v23 = v27 + v28;
  }
  x = this->fields.mDrawRegion.fields.x;
  y = this->fields.mDrawRegion.fields.y;
  v31 = x < 0.0;
  v32 = fminf(x, 1.0);
  if ( v31 )
    v32 = 0.0;
  v33 = (float)((float)(v9 - v24) - v6) * v32;
  z = this->fields.mDrawRegion.fields.z;
  v35 = v6 + v24;
  v36 = v6 + v33;
  w = this->fields.mDrawRegion.fields.w;
  v31 = y < 0.0;
  v38 = fminf(y, 1.0);
  v39 = v8 + v23;
  v40 = (float)(v10 - v23) - v8;
  if ( v31 )
    v38 = 0.0;
  v31 = z < 0.0;
  v41 = fminf(z, 1.0);
  v42 = v40 * v38;
  v43 = fminf(w, 1.0);
  if ( v31 )
    v41 = 0.0;
  v44 = v8 + v42;
  if ( w < 0.0 )
    v43 = 0.0;
  v45 = v35 + (float)((float)(v9 - v35) * v41);
  v46 = v39 + (float)((float)(v10 - v39) * v43);
  result.fields.w = v46;
  result.fields.z = v45;
  result.fields.y = v44;
  result.fields.x = v36;
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
  bool v6; // w8
  UnityEngine_Material_o *v7; // x0

  if ( (byte_4C478A1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478A1 = 1;
  }
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) )
    return this->fields.mTexture;
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  result = 0;
  if ( v6 )
  {
    v7 = this->fields.mMat;
    if ( !v7 )
      sub_1C372B4(0);
    return UnityEngine_Material__get_mainTexture(v7, 0);
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
  UITexture_o *v6; // x22
  UnityEngine_Object_o *shader; // x21
  int32_t v8; // w8

  if ( (byte_4C478A6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_10725/*"Premultiplied"*/);
    byte_4C478A6 = 1;
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
      v6 = this;
    else
      v6 = 0;
    if ( ((unsigned __int8)name & 1) == 0 )
    {
      v8 = 0;
      v6 = this;
LABEL_20:
      v6->fields.mPMA = v8;
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
                                         (System_String_o *)StringLiteral_10725/*"Premultiplied"*/,
                                         0);
        v8 = (unsigned __int8)name & 1;
      }
      else
      {
        v8 = 0;
        v6 = this;
      }
      if ( v6 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C372B4(name);
  }
  return mPMA == 1;
}


UnityEngine_Shader_o *UITexture__get_shader(UITexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMat; // x20
  UnityEngine_Material_o *v4; // x0
  UnityEngine_Object_o *mShader; // x20
  CGThumbnailListItem_o *p_mShader; // x19
  UnityEngine_Shader_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C478A4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_15133/*"Unlit/Transparent Colored"*/);
    byte_4C478A4 = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
  {
    v4 = this->fields.mMat;
    if ( !v4 )
      sub_1C372B4(0);
    return UnityEngine_Material__get_shader(v4, 0);
  }
  else
  {
    mShader = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mShader = (CGThumbnailListItem_o *)&this->fields.mShader;
    if ( UnityEngine_Object__op_Equality(mShader, 0, 0) )
    {
      v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15133/*"Unlit/Transparent Colored"*/, 0);
      p_mShader->klass = (CGThumbnailListItem_c *)v8;
      sub_1C36FFC(p_mShader, (int32_t)v8, v9, v10);
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
    this->fields.mDrawRegion = (struct UnityEngine_Vector4_o)xmmword_C0E590;
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
  struct UIDrawCall_o *v8; // x8
  UnityEngine_Object_o *mMat; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UITexture_c *klass; // x8

  if ( (byte_4C478A2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478A2 = 1;
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
      v8 = this->fields.drawCall;
      if ( !v8 )
        goto LABEL_18;
      if ( v8->fields.widgetCount == 1 )
      {
        mMat = (UnityEngine_Object_o *)this->fields.mMat;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
        {
          this->fields.mTexture = value;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTexture, (int32_t)value, v10, v11);
          v7 = this->fields.drawCall;
          if ( v7 )
          {
            UIDrawCall__set_mainTexture(v7, value, 0);
            return;
          }
LABEL_18:
          sub_1C372B4(v7);
        }
      }
    }
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mTexture = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTexture, (int32_t)value, v12, v13);
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

  if ( (byte_4C478A3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478A3 = 1;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mShader = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mShader, 0, v6, v7);
    this->fields.mMat = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMat, (int32_t)value, v8, v9);
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
  struct UIDrawCall_o *v8; // x8
  UnityEngine_Object_o *mMat; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C478A5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478A5 = 1;
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
      v8 = this->fields.drawCall;
      if ( !v8 )
        goto LABEL_18;
      if ( v8->fields.widgetCount == 1 )
      {
        mMat = (UnityEngine_Object_o *)this->fields.mMat;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
        {
          this->fields.mShader = value;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mShader, (int32_t)value, v10, v11);
          v7 = this->fields.drawCall;
          if ( v7 )
          {
            UIDrawCall__set_shader(v7, value, 0);
            return;
          }
LABEL_18:
          sub_1C372B4(v7);
        }
      }
    }
    UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
    this->fields.mShader = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mShader, (int32_t)value, v12, v13);
    this->fields.mPMA = -1;
    this->fields.mMat = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMat, 0, v14, v15);
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