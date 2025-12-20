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

  if ( (byte_4D31091 & 1) == 0 )
  {
    sub_1C94098(&Method_UITweener_Begin_TweenAlpha___);
    byte_4D31091 = 1;
  }
  v7 = (TweenAlpha_o *)UITweener__Begin_object_(
                         go,
                         duration,
                         (const MethodInfo_3272360 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v7 )
    sub_1C942F0(0, v8);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Object_o *mRect; // x22
  UnityEngine_Object_o *mSr; // x21
  Il2CppObject *v19; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct UnityEngine_Material_o *material; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *mMat; // x21
  Il2CppObject *ComponentInChildren_object__51981160; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4D3108E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_UIRect___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIRect___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3108E = 1;
  }
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  this->fields.mRect = (struct UIRect_o *)Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mRect, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
  this->fields.mSr = (struct UnityEngine_SpriteRenderer_o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSr, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
      v19 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
      if ( v20 )
      {
        if ( !v19 )
          sub_1C942F0(v20, v21);
        material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v19, 0);
        this->fields.mMat = material;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mMat, (int32_t)material, v23, v24, v25, v26, v27, v28);
      }
      mMat = (UnityEngine_Object_o *)this->fields.mMat;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(mMat, 0, 0) )
      {
        ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_UIRect___);
        this->fields.mRect = (struct UIRect_o *)ComponentInChildren_object__51981160;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mRect,
          (int32_t)ComponentInChildren_object__51981160,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
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
  __int64 v4; // x1
  UnityEngine_SpriteRenderer_o *v5; // x0
  float result; // s0
  UnityEngine_Object_o *mSr; // x20
  UnityEngine_Object_o *mMat; // x20
  bool v9; // w0
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D3108F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3108F = 1;
  }
  if ( !this->fields.mCached )
    TweenAlpha__Cache(this, method);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRect, 0, 0) )
  {
    v5 = (UnityEngine_SpriteRenderer_o *)this->fields.mRect;
    if ( v5 )
    {
      ((void (__fastcall *)(UnityEngine_SpriteRenderer_o *, _QWORD))v5->klass[1]._1.this_arg.data)(
        v5,
        *(_QWORD *)&v5->klass[1]._1.this_arg.bits);
      return result;
    }
LABEL_22:
    sub_1C942F0(v5, v4);
  }
  mSr = (UnityEngine_Object_o *)this->fields.mSr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
  {
    v5 = this->fields.mSr;
    if ( !v5 )
      goto LABEL_22;
    color = UnityEngine_SpriteRenderer__get_color(v5, 0);
    return color.fields.a;
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  result = 1.0;
  if ( v9 )
  {
    v5 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
    if ( !v5 )
      goto LABEL_22;
    color = UnityEngine_Material__get_color((UnityEngine_Material_o *)v5, 0);
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
  __int64 v6; // x1
  UnityEngine_SpriteRenderer_o *v7; // x0
  UnityEngine_Object_o *mSr; // x20
  int v9; // s3
  UnityEngine_Object_o *mMat; // x20
  int v11; // s3
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = *(long double *)&value;
  if ( (byte_4D31090 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31090 = 1;
  }
  if ( !this->fields.mCached )
    TweenAlpha__Cache(this, method);
  mRect = (UnityEngine_Object_o *)this->fields.mRect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRect, 0, 0) )
  {
    v7 = (UnityEngine_SpriteRenderer_o *)this->fields.mRect;
    if ( v7 )
    {
      ((void (__fastcall *)(UnityEngine_SpriteRenderer_o *, Il2CppClass *, long double))v7->klass[1]._1.element_class)(
        v7,
        v7->klass[1]._1.castClass,
        v3);
      return;
    }
LABEL_23:
    sub_1C942F0(v7, v6);
  }
  mSr = (UnityEngine_Object_o *)this->fields.mSr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSr, 0, 0) )
  {
    v7 = this->fields.mSr;
    if ( !v7 )
      goto LABEL_23;
    color = UnityEngine_SpriteRenderer__get_color(v7, 0);
    v7 = this->fields.mSr;
    if ( !v7 )
      goto LABEL_23;
    v9 = LODWORD(v3);
    UnityEngine_SpriteRenderer__set_color(v7, color, 0);
  }
  else
  {
    mMat = (UnityEngine_Object_o *)this->fields.mMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mMat, 0, 0) )
    {
      v7 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
      if ( !v7 )
        goto LABEL_23;
      v13 = UnityEngine_Material__get_color((UnityEngine_Material_o *)v7, 0);
      v7 = (UnityEngine_SpriteRenderer_o *)this->fields.mMat;
      if ( !v7 )
        goto LABEL_23;
      v11 = LODWORD(v3);
      UnityEngine_Material__set_color((UnityEngine_Material_o *)v7, v13, 0);
    }
  }
}