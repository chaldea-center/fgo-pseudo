void __fastcall CharaErasureReverseEffectComponent___ctor(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.erasureColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.erasureColor.fields.b = 0LL;
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaErasureReverseEffectComponent__EffectResume(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaErasureReverseEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49BC2AD & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9696/*"OnEndEffect"*/, method);
    byte_49BC2AD = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaErasureReverseEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v5 )
    sub_1B4D1EC(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1B4CF34((CGThumbnailListItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9696/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9696/*"OnEndEffect"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void __fastcall CharaErasureReverseEffectComponent__EndCreateEffect(
        CharaErasureReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaErasureReverseEffectComponent__EffectResume(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaErasureReverseEffectComponent__ErasureStart(
        CharaErasureReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UIStandFigureM_o **p_figure; // x20
  __int64 v12; // x1
  UIStandFigureRender_o *transform; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v17; // x2
  float v18; // s8
  float v19; // s0
  float v20; // s1
  float v21; // s9
  float v22; // s10
  UnityEngine_GameObject_o *v23; // x20
  System_String_o *v24; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v25; // x22
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x6
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49BC2AC & 1) == 0 )
  {
    sub_1B4CF90(&Method_CharaErasureReverseEffectComponent_EndCreateEffect__, figure);
    sub_1B4CF90(&CommonEffectManager_TypeInfo, v6);
    sub_1B4CF90(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_13331/*"Talk/"*/, v9);
    sub_1B4CF90(&StringLiteral_4864/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, v10);
    byte_49BC2AC = 1;
  }
  p_figure = &this->fields.figure;
  this->fields.figure = figure;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 2.0;
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_27;
  BodySize = UIStandFigureRender__GetBodySize(transform, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !transform )
    goto LABEL_27;
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_4864/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, 0LL);
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_27;
  UIStandFigureRender__SetFilterColor(transform, this->fields.erasureColor, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_27;
  UIStandFigureRender__SetGradation(transform, 0.2, 0LL);
  ((void (__fastcall *)(CharaErasureReverseEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    return;
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    CharaErasureReverseEffectComponent__EndCreateEffect(this, 0LL, v17);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_27;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_27;
  LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = (UIStandFigureRender_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (UIStandFigureRender_o *)this->fields.subEffectBase) == 0LL)
    || (v21 = v19,
        v22 = v20,
        (transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)transform,
                                                0LL)) == 0LL) )
  {
LABEL_27:
    sub_1B4D1EC(transform, v12);
  }
  v28.fields.y = -v22;
  v28.fields.x = -v21;
  v28.fields.z = v18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v28, 0LL);
  v23 = this->fields.subEffectBase;
  v24 = System_String__Concat_61093468((System_String_o *)StringLiteral_13331/*"Talk/"*/, this->fields.subEffectName, 0LL);
  v25 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B4D1DC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v25,
    (Il2CppObject *)this,
    Method_CharaErasureReverseEffectComponent_EndCreateEffect__,
    v26);
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Create_41236180(v23, v24, v25, 0, 0, 0, v27);
}


void __fastcall CharaErasureReverseEffectComponent__OnDestroy(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x20
  __int64 v4; // x1
  CGThumbnailListItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49BC2AF & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BC2AF = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (CGThumbnailListItem_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_1B4D1EC(klass, v4);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_1B4CF34(p_figure, 0, v7, v8);
  }
}


void __fastcall CharaErasureReverseEffectComponent__OnEndEffect(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_49BC2AE & 1) == 0 )
  {
    sub_1B4CF90(&CommonEffectManager_TypeInfo, method);
    byte_49BC2AE = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0LL, v2);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaErasureReverseEffectComponent__OnUpdate(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49BC2B0 & 1) == 0 )
  {
    sub_1B4CF90(&CommonEffectManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49BC2B0 = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0LL);
  if ( this->fields.isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( !CommonEffectManager__IsBusy(subEffectBase, v4) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaErasureReverseEffectComponent__Resume(
        CharaErasureReverseEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaErasureReverseEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaErasureReverseEffectComponent__SetTweenColor(
        CharaErasureReverseEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  __int64 v8; // x1
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_1B4D1EC(0LL, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaErasureReverseEffectComponent__SetTweenVolume(
        CharaErasureReverseEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Object_o *childEffect; // x20
  CGThumbnailListItem_o *p_childEffect; // x20
  float v8; // s8
  UnityEngine_Object_o *klass; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49BC2AB & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BC2AB = 1;
  }
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    goto LABEL_17;
  UIStandFigureRender__SetVolume(figure, v, 0LL);
  childEffect = (UnityEngine_Object_o *)this->fields.childEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(childEffect, 0LL, 0LL) )
  {
    p_childEffect = (CGThumbnailListItem_o *)&this->fields.childEffect;
    v8 = this->fields.volume - this->fields.addVolume;
    if ( v8 > 0.0 )
    {
      figure = (UIStandFigureRender_o *)p_childEffect->klass;
      if ( p_childEffect->klass )
      {
        figure = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)figure, 0LL);
        if ( figure )
        {
          v12.fields.x = 0.0;
          v12.fields.y = this->fields.bodySize.fields.y * (float)-v8;
          v12.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v12, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1B4D1EC(figure, method);
    }
    klass = (UnityEngine_Object_o *)p_childEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      figure = (UIStandFigureRender_o *)p_childEffect->klass;
      if ( !p_childEffect->klass )
        goto LABEL_17;
      ((void (__fastcall *)(UIStandFigureRender_o *, __int64, _QWORD, Il2CppMethodPointer))figure->klass->vtable._8_set_alpha.method)(
        figure,
        1LL,
        0LL,
        figure->klass->vtable._9_CalculateFinalAlpha.methodPtr);
      p_childEffect->klass = 0LL;
      sub_1B4CF34(p_childEffect, 0, v10, v11);
    }
  }
}