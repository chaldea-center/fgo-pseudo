void TweenColor___ctor(TweenColor_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.from = _Q0;
  this->fields.to = _Q0;
  UITweener___ctor((UITweener_o *)this, method);
}


TweenColor_o *TweenColor__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s12
  TweenColor_o *v10; // x0
  const MethodInfo *v11; // x1
  TweenColor_o *v12; // x19
  const MethodInfo *v13; // x2

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C3C23B & 1) == 0 )
  {
    sub_1C32C20(&Method_UITweener_Begin_TweenColor___);
    byte_4C3C23B = 1;
  }
  v10 = (TweenColor_o *)UITweener__Begin_object_(
                          go,
                          duration,
                          (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenColor___);
  if ( !v10 )
    sub_1C32E7C(0);
  v12 = v10;
  v10->fields.from = TweenColor__get_value(v10, v11);
  v12->fields.to.fields.r = r;
  v12->fields.to.fields.g = g;
  v12->fields.to.fields.b = b;
  v12->fields.to.fields.a = a;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v12, 1.0, 1, v13);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0);
  }
  return v12;
}


void TweenColor__Cache(TweenColor_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *mWidget; // x21
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *mSr; // x21
  Il2CppObject *v11; // x21
  _BOOL8 v12; // x0
  struct UnityEngine_Material_o *material; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  CGThumbnailListItem_o *p_mMat; // x0
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *mLight; // x21
  Il2CppObject *ComponentInChildren_object__51199524; // x0

  if ( (byte_4C3C238 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UIWidget___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Light___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C238 = 1;
  }
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v4, v5);
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v7 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)this,
           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    this->fields.mSr = (struct UnityEngine_SpriteRenderer_o *)v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSr, (int32_t)v7, v8, v9);
    mSr = (UnityEngine_Object_o *)this->fields.mSr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mSr, 0, 0) )
    {
      v11 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( v12 )
      {
        if ( !v11 )
          sub_1C32E7C(v12);
        material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v11, 0);
        this->fields.mMat = material;
        v16 = (int)material;
        p_mMat = (CGThumbnailListItem_o *)&this->fields.mMat;
      }
      else
      {
        v18 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Light___);
        this->fields.mLight = (struct UnityEngine_Light_o *)v18;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mLight, (int32_t)v18, v19, v20);
        mLight = (UnityEngine_Object_o *)this->fields.mLight;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(mLight, 0, 0) )
          return;
        ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_UIWidget___);
        v16 = (int)ComponentInChildren_object__51199524;
        this->fields.mWidget = (struct UIWidget_o *)ComponentInChildren_object__51199524;
        p_mMat = (CGThumbnailListItem_o *)&this->fields.mWidget;
      }
      sub_1C32BC4(p_mMat, v16, v14, v15);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TweenColor__OnUpdate(TweenColor_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  bool v4; // nf
  float v5; // s0
  UnityEngine_Color_o v6; // q0 OVERLAPPED
  float g; // s1
  __int64 v8; // kr00_8

  v4 = factor < 0.0;
  v5 = fminf(factor, 1.0);
  if ( v4 )
    v5 = 0.0;
  v6 = (UnityEngine_Color_o)vaddq_f32(
                              (float32x4_t)this->fields.from,
                              vmulq_n_f32(vsubq_f32((float32x4_t)this->fields.to, (float32x4_t)this->fields.from), v5));
  g = v6.fields.g;
  v8 = *(_QWORD *)&v6.fields.b;
  TweenColor__set_value(this, v6, (const MethodInfo *)isFinished);
}


void TweenColor__SetCurrentValueToEnd(TweenColor_o *this, const MethodInfo *method)
{
  TweenColor__set_value(this, this->fields.to, method);
}


void TweenColor__SetCurrentValueToStart(TweenColor_o *this, const MethodInfo *method)
{
  TweenColor__set_value(this, this->fields.from, method);
}


void TweenColor__SetEndToCurrentValue(TweenColor_o *this, const MethodInfo *method)
{
  this->fields.to = TweenColor__get_value(this, method);
}


void TweenColor__SetStartToCurrentValue(TweenColor_o *this, const MethodInfo *method)
{
  this->fields.from = TweenColor__get_value(this, method);
}


// attributes: thunk
UnityEngine_Color_o TweenColor__get_color(TweenColor_o *this, const MethodInfo *method)
{
  return TweenColor__get_value(this, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o TweenColor__get_value(TweenColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  UnityEngine_Material_o *v4; // x0
  struct UIWidget_o *v5; // x8
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Object_o *mMat; // x20
  UnityEngine_Object_o *mSr; // x20
  UnityEngine_Object_o *mLight; // x20
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C239 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C239 = 1;
  }
  if ( !this->fields.mCached )
    TweenColor__Cache(this, method);
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(mWidget, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    mMat = (UnityEngine_Object_o *)this->fields.mMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
    {
      v4 = this->fields.mMat;
      if ( v4 )
      {
        *(UnityEngine_Color_o *)&r = UnityEngine_Material__get_color(v4, 0);
        goto LABEL_27;
      }
    }
    else
    {
      mSr = (UnityEngine_Object_o *)this->fields.mSr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
      {
        v4 = (UnityEngine_Material_o *)this->fields.mSr;
        if ( v4 )
        {
          *(UnityEngine_Color_o *)&r = UnityEngine_SpriteRenderer__get_color((UnityEngine_SpriteRenderer_o *)v4, 0);
          goto LABEL_27;
        }
      }
      else
      {
        mLight = (UnityEngine_Object_o *)this->fields.mLight;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mLight, 0, 0) )
        {
          a = 1.0;
          r = 0.0;
          g = 0.0;
          b = 0.0;
          goto LABEL_27;
        }
        v4 = (UnityEngine_Material_o *)this->fields.mLight;
        if ( v4 )
        {
          *(UnityEngine_Color_o *)&r = UnityEngine_Light__get_color((UnityEngine_Light_o *)v4, 0);
          goto LABEL_27;
        }
      }
    }
LABEL_26:
    sub_1C32E7C(v4);
  }
  v5 = this->fields.mWidget;
  if ( !v5 )
    goto LABEL_26;
  r = v5->fields.mColor.fields.r;
  g = v5->fields.mColor.fields.g;
  b = v5->fields.mColor.fields.b;
  a = v5->fields.mColor.fields.a;
LABEL_27:
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


// attributes: thunk
void TweenColor__set_color(TweenColor_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  TweenColor__set_value(this, value, method);
}


void TweenColor__set_value(TweenColor_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  float a; // s11
  float b; // s8
  float g; // s9
  float r; // s10
  UnityEngine_Object_o *mWidget; // x20
  const MethodInfo *v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Object_o *mMat; // x20
  UnityEngine_Object_o *mSr; // x20
  UnityEngine_Object_o *mLight; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4C3C23A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C23A = 1;
  }
  if ( !this->fields.mCached )
    TweenColor__Cache(this, method);
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v10 = this->fields.mWidget;
    if ( v10 )
    {
      v14.fields.g = g;
      v14.fields.b = b;
      v14.fields.r = r;
      v14.fields.a = a;
      UIWidget__set_color(v10, v14, v9);
      return;
    }
LABEL_27:
    sub_1C32E7C(v10);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.mMat;
    if ( !v10 )
      goto LABEL_27;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.r = r;
    v15.fields.a = a;
    UnityEngine_Material__set_color((UnityEngine_Material_o *)v10, v15, 0);
  }
  else
  {
    mSr = (UnityEngine_Object_o *)this->fields.mSr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
    {
      v10 = (UIWidget_o *)this->fields.mSr;
      if ( !v10 )
        goto LABEL_27;
      v16.fields.g = g;
      v16.fields.b = b;
      v16.fields.r = r;
      v16.fields.a = a;
      UnityEngine_SpriteRenderer__set_color((UnityEngine_SpriteRenderer_o *)v10, v16, 0);
    }
    else
    {
      mLight = (UnityEngine_Object_o *)this->fields.mLight;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mLight, 0, 0) )
      {
        v10 = (UIWidget_o *)this->fields.mLight;
        if ( !v10 )
          goto LABEL_27;
        v17.fields.r = r;
        v17.fields.g = g;
        v17.fields.b = b;
        v17.fields.a = a;
        UnityEngine_Light__set_color((UnityEngine_Light_o *)v10, v17, 0);
        v10 = (UIWidget_o *)this->fields.mLight;
        if ( !v10 )
          goto LABEL_27;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10, (float)(b + (float)(r + g)) > 0.01, 0);
      }
    }
  }
}