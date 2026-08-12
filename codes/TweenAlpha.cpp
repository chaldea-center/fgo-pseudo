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

  if ( (byte_59751E5 & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    byte_59751E5 = 1;
  }
  v7 = (TweenAlpha_o *)UITweener__Begin_object_(
                         go,
                         duration,
                         (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v7 )
    sub_2213CDC(0, v8);
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
  const MethodInfo_3820CA8 *v3; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  UnityEngine_Object_o *mRect; // x22
  __int64 v20; // x1
  UnityEngine_Object_o *mSr; // x21
  __int64 v22; // x1
  Il2CppObject *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct UnityEngine_Material_o *material; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UnityEngine_Object_o *mMat; // x21
  Il2CppObject *ComponentInChildren_object__58855044; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_59751E2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UIRect___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIRect___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751E2 = 1;
  }
  v3 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRect___;
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v3);
  this->fields.mRect = (struct UIRect_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mRect,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
  this->fields.mSr = (struct UnityEngine_SpriteRenderer_o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSr, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Equality(mRect, 0, 0) )
  {
    mSr = (UnityEngine_Object_o *)this->fields.mSr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Equality(mSr, 0, 0) )
    {
      v23 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
      if ( v24 )
      {
        if ( !v23 )
          sub_2213CDC(v24, v25);
        material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v23, 0);
        this->fields.mMat = material;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mMat,
          (int32_t)material,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      mMat = (UnityEngine_Object_o *)this->fields.mMat;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
      {
        ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UIRect___);
        this->fields.mRect = (struct UIRect_o *)ComponentInChildren_object__58855044;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mRect,
          (int32_t)ComponentInChildren_object__58855044,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TweenAlpha__OnUpdate(TweenAlpha_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float v4; // s1

  v4 = 1.0;
  if ( factor <= 1.0 )
    v4 = factor;
  if ( factor < 0.0 )
    v4 = 0.0;
  TweenAlpha__set_value(
    this,
    this->fields.from + (float)(v4 * (float)(this->fields.to - this->fields.from)),
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
  __int64 v4; // x1
  UnityEngine_SpriteRenderer_o *v5; // x0
  float result; // s0
  UnityEngine_Object_o *mSr; // x20
  UnityEngine_Object_o *mMat; // x20
  bool v9; // w0

  if ( (byte_59751E3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751E3 = 1;
  }
  if ( !this->fields.mCached )
    TweenAlpha__Cache(this, method);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mRect, 0, 0) )
  {
    v5 = (UnityEngine_SpriteRenderer_o *)this->fields.mRect;
    if ( v5 )
      return ((float (__fastcall *)(UnityEngine_SpriteRenderer_o *, _QWORD))v5->klass[1]._1.this_arg.data)(
               v5,
               *(_QWORD *)&v5->klass[1]._1.this_arg.bits);
LABEL_22:
    sub_2213CDC(v5, v4);
  }
  mSr = (UnityEngine_Object_o *)this->fields.mSr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
  {
    v5 = this->fields.mSr;
    if ( !v5 )
      goto LABEL_22;
    return UnityEngine_SpriteRenderer__get_color(v5, 0).fields.a;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v9 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  result = 1.0;
  if ( v9 )
  {
    v5 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
    if ( !v5 )
      goto LABEL_22;
    return UnityEngine_Material__get_color((UnityEngine_Material_o *)v5, 0).fields.a;
  }
  return result;
}


// attributes: thunk
void TweenAlpha__set_alpha(TweenAlpha_o *this, float value, const MethodInfo *method)
{
  TweenAlpha__set_value(this, value, method);
}


void TweenAlpha__set_value(TweenAlpha_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *mRect; // x20
  __int64 v6; // x1
  UnityEngine_SpriteRenderer_o *v7; // x0
  UnityEngine_Object_o *mSr; // x20
  UnityEngine_Object_o *mMat; // x20
  UnityEngine_Color_o color; // 0:kr00_16.16
  UnityEngine_Color_o v15; // 0:kr10_16.16
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59751E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751E4 = 1;
  }
  if ( !this->fields.mCached )
    TweenAlpha__Cache(this, method);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mRect, 0, 0) )
  {
    v7 = (UnityEngine_SpriteRenderer_o *)this->fields.mRect;
    if ( v7 )
    {
      ((void (__fastcall *)(UnityEngine_SpriteRenderer_o *, Il2CppClass *, float))v7->klass[1]._1.element_class)(
        v7,
        v7->klass[1]._1.castClass,
        value);
      return;
    }
LABEL_23:
    sub_2213CDC(v7, v6);
  }
  mSr = (UnityEngine_Object_o *)this->fields.mSr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
  {
    v7 = this->fields.mSr;
    if ( !v7 )
      goto LABEL_23;
    color = UnityEngine_SpriteRenderer__get_color(v7, 0);
    v16.fields.r = color.fields.r;
    v16.fields.g = color.fields.g;
    v16.fields.b = color.fields.b;
    v7 = this->fields.mSr;
    if ( !v7 )
      goto LABEL_23;
    v16.fields.a = value;
    UnityEngine_SpriteRenderer__set_color(v7, v16, 0);
  }
  else
  {
    mMat = (UnityEngine_Object_o *)this->fields.mMat;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
    {
      v7 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
      if ( !v7 )
        goto LABEL_23;
      v15 = UnityEngine_Material__get_color((UnityEngine_Material_o *)v7, 0);
      v17.fields.r = v15.fields.r;
      v17.fields.g = v15.fields.g;
      v17.fields.b = v15.fields.b;
      v7 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
      if ( !v7 )
        goto LABEL_23;
      v17.fields.a = value;
      UnityEngine_Material__set_color((UnityEngine_Material_o *)v7, v17, 0);
    }
  }
}