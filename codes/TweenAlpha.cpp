void TweenAlpha___ctor(TweenAlpha_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.from = _D0;
  UITweener___ctor((UITweener_o *)this, method);
}


TweenAlpha_o *TweenAlpha__Begin(UnityEngine_GameObject_o *go, float duration, float alpha, const MethodInfo *method)
{
  TweenAlpha_o *v7; // x0
  const MethodInfo *v8; // x1
  TweenAlpha_o *v9; // x19
  const MethodInfo *v10; // x2

  if ( (byte_4C477B2 & 1) == 0 )
  {
    sub_1C37058(&Method_UITweener_Begin_TweenAlpha___);
    byte_4C477B2 = 1;
  }
  v7 = (TweenAlpha_o *)UITweener__Begin_object_(
                         go,
                         duration,
                         (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v7 )
    sub_1C372B4(0);
  v9 = v7;
  v7->fields.from = TweenAlpha__get_value(v7, v8);
  v9->fields.to = alpha;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v9, 1.0, 1, v10);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, 0, 0);
  }
  return v9;
}


void TweenAlpha__Cache(TweenAlpha_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *mRect; // x22
  UnityEngine_Object_o *mSr; // x21
  Il2CppObject *v11; // x21
  _BOOL8 v12; // x0
  struct UnityEngine_Material_o *material; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *mMat; // x21
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C477AF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UIRect___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIRect___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477AF = 1;
  }
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  this->fields.mRect = (struct UIRect_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mRect, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
  this->fields.mSr = (struct UnityEngine_SpriteRenderer_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSr, (int32_t)v6, v7, v8);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mRect, 0, 0) )
  {
    mSr = (UnityEngine_Object_o *)this->fields.mSr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mSr, 0, 0) )
    {
      v11 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( v12 )
      {
        if ( !v11 )
          sub_1C372B4(v12);
        material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v11, 0);
        this->fields.mMat = material;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMat, (int32_t)material, v14, v15);
      }
      mMat = (UnityEngine_Object_o *)this->fields.mMat;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
      {
        ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UIRect___);
        this->fields.mRect = (struct UIRect_o *)ComponentInChildren_object__51242636;
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&this->fields.mRect,
          (int32_t)ComponentInChildren_object__51242636,
          v18,
          v19);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TweenAlpha__OnUpdate(TweenAlpha_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float v4; // s3
  bool v5; // nf
  float v6; // s0

  v4 = fminf(factor, 1.0);
  v5 = factor < 0.0;
  v6 = 0.0;
  if ( !v5 )
    v6 = v4;
  TweenAlpha__set_value(
    this,
    this->fields.from + (float)(v6 * (float)(this->fields.to - this->fields.from)),
    (const MethodInfo *)isFinished);
}


void TweenAlpha__SetEndToCurrentValue(TweenAlpha_o *this, const MethodInfo *method)
{
  this->fields.to = TweenAlpha__get_value(this, method);
}


void TweenAlpha__SetStartToCurrentValue(TweenAlpha_o *this, const MethodInfo *method)
{
  this->fields.from = TweenAlpha__get_value(this, method);
}


// attributes: thunk
float TweenAlpha__get_alpha(TweenAlpha_o *this, const MethodInfo *method)
{
  return TweenAlpha__get_value(this, method);
}


float TweenAlpha__get_value(TweenAlpha_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mRect; // x20
  UnityEngine_SpriteRenderer_o *v4; // x0
  float result; // s0
  UnityEngine_Object_o *mSr; // x20
  UnityEngine_Object_o *mMat; // x20
  bool v8; // w0
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C477B0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477B0 = 1;
  }
  if ( !this->fields.mCached )
    TweenAlpha__Cache(this, method);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRect, 0, 0) )
  {
    v4 = (UnityEngine_SpriteRenderer_o *)this->fields.mRect;
    if ( v4 )
    {
      ((void (__fastcall *)(UnityEngine_SpriteRenderer_o *, _QWORD))v4->klass[1]._1.this_arg.data)(
        v4,
        *(_QWORD *)&v4->klass[1]._1.this_arg.bits);
      return result;
    }
LABEL_22:
    sub_1C372B4(v4);
  }
  mSr = (UnityEngine_Object_o *)this->fields.mSr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
  {
    v4 = this->fields.mSr;
    if ( !v4 )
      goto LABEL_22;
    color = UnityEngine_SpriteRenderer__get_color(v4, 0);
    return color.fields.a;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  result = 1.0;
  if ( v8 )
  {
    v4 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
    if ( !v4 )
      goto LABEL_22;
    color = UnityEngine_Material__get_color((UnityEngine_Material_o *)v4, 0);
    return color.fields.a;
  }
  return result;
}


// attributes: thunk
void TweenAlpha__set_alpha(TweenAlpha_o *this, float value, const MethodInfo *method)
{
  TweenAlpha__set_value(this, value, method);
}


// local variable allocation has failed, the output may be wrong!
void TweenAlpha__set_value(TweenAlpha_o *this, float value, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *mRect; // x20
  UnityEngine_SpriteRenderer_o *v6; // x0
  UnityEngine_Object_o *mSr; // x20
  int v8; // s3
  UnityEngine_Object_o *mMat; // x20
  int v10; // s3
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = *(long double *)&value;
  if ( (byte_4C477B1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477B1 = 1;
  }
  if ( !this->fields.mCached )
    TweenAlpha__Cache(this, method);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRect, 0, 0) )
  {
    v6 = (UnityEngine_SpriteRenderer_o *)this->fields.mRect;
    if ( v6 )
    {
      ((void (__fastcall *)(UnityEngine_SpriteRenderer_o *, Il2CppClass *, long double))v6->klass[1]._1.element_class)(
        v6,
        v6->klass[1]._1.castClass,
        v3);
      return;
    }
LABEL_23:
    sub_1C372B4(v6);
  }
  mSr = (UnityEngine_Object_o *)this->fields.mSr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
  {
    v6 = this->fields.mSr;
    if ( !v6 )
      goto LABEL_23;
    color = UnityEngine_SpriteRenderer__get_color(v6, 0);
    v6 = this->fields.mSr;
    if ( !v6 )
      goto LABEL_23;
    v8 = LODWORD(v3);
    UnityEngine_SpriteRenderer__set_color(v6, color, 0);
  }
  else
  {
    mMat = (UnityEngine_Object_o *)this->fields.mMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
    {
      v6 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
      if ( !v6 )
        goto LABEL_23;
      v12 = UnityEngine_Material__get_color((UnityEngine_Material_o *)v6, 0);
      v6 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
      if ( !v6 )
        goto LABEL_23;
      v10 = LODWORD(v3);
      UnityEngine_Material__set_color((UnityEngine_Material_o *)v6, v12, 0);
    }
  }
}