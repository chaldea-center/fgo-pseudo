void __fastcall CharaAppearanceReverseEffectComponent___ctor(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.erasureColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.erasureColor.fields.b = 0LL;
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaAppearanceReverseEffectComponent__AppearanceStart(
        CharaAppearanceReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  int32_t v3; // w3
  long double v4; // q8
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UIStandFigureM_o **p_figure; // x20
  UIStandFigureRender_o *transform; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v18; // x2
  float v19; // s8
  float v20; // s0
  float v21; // s1
  float v22; // s9
  float v23; // s10
  UnityEngine_GameObject_o *v24; // x20
  System_String_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  CommonEffectLoadComponent_LoadEndHandler_o *v28; // x22
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x6
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD6EE & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__, figure);
    sub_1B640C8(&CommonEffectManager_TypeInfo, v7);
    sub_1B640C8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_13467/*"Talk/"*/, v10);
    sub_1B640C8(&StringLiteral_4940/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, v11);
    byte_49FD6EE = 1;
  }
  p_figure = &this->fields.figure;
  this->fields.figure = figure;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 2.0;
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_32;
  BodySize = UIStandFigureRender__GetBodySize(transform, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 1.2039;
  if ( !transform )
    goto LABEL_32;
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_4940/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, 0LL);
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_32;
  UIStandFigureRender__SetFilterColor(transform, this->fields.erasureColor, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_32;
  LODWORD(v4) = 1045220557;
  UIStandFigureRender__SetGradation(transform, 0.2, 0LL);
  ((void (__fastcall *)(CharaAppearanceReverseEffectComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    v4);
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    return;
  }
  v16 = (UnityEngine_Object_o *)*p_figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    transform = (UIStandFigureRender_o *)*p_figure;
    if ( !*p_figure )
      goto LABEL_32;
    UIStandFigureRender__SetAlpha(transform, 1.0, 0LL);
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    CharaAppearanceReverseEffectComponent__EndCreateEffect(this, 0LL, v18);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_32;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_32;
  LODWORD(v19) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = (UIStandFigureRender_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (UIStandFigureRender_o *)this->fields.subEffectBase) == 0LL)
    || (v22 = v20,
        v23 = v21,
        (transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)transform,
                                                0LL)) == 0LL) )
  {
LABEL_32:
    sub_1B64324(transform);
  }
  v31.fields.y = -v23;
  v31.fields.x = -v22;
  v31.fields.z = v19;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v31, 0LL);
  v24 = this->fields.subEffectBase;
  v25 = System_String__Concat_61375396((System_String_o *)StringLiteral_13467/*"Talk/"*/, this->fields.subEffectName, 0LL);
  v28 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B64314(
                                                        CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                        v26,
                                                        v27);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__,
    v29);
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Create_40285436(v24, v25, v28, 0, 0, 0, v30);
}


void __fastcall CharaAppearanceReverseEffectComponent__EffectResume(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaAppearanceReverseEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  TweenRenderVolume_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD6EF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9850/*"OnEndEffect"*/, method);
    byte_49FD6EF = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaAppearanceReverseEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 1.0, 0LL);
  if ( !v5 )
    sub_1B64324(0LL);
  v6 = v5;
  v5->fields.method = 1;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6->fields.eventReceiver = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.eventReceiver, (int32_t)v7, v8, v9);
  v10 = StringLiteral_9850/*"OnEndEffect"*/;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9850/*"OnEndEffect"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.callWhenFinished, v10, v11, v12);
}


void __fastcall CharaAppearanceReverseEffectComponent__EndCreateEffect(
        CharaAppearanceReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaAppearanceReverseEffectComponent__EffectResume(this, v5);
}


void __fastcall CharaAppearanceReverseEffectComponent__OnDestroy(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x20
  ServantStatusBattleListViewItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FD6F1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FD6F1 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (ServantStatusBattleListViewItem_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_1B64324(klass);
    }
    UIStandFigureRender__SetAlpha(klass, 1.0, 0LL);
    p_figure->klass = 0LL;
    sub_1B6406C(p_figure, 0, v6, v7);
  }
}


void __fastcall CharaAppearanceReverseEffectComponent__OnEndEffect(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_49FD6F0 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    byte_49FD6F0 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaAppearanceReverseEffectComponent__OnUpdate(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FD6F2 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FD6F2 = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaAppearanceReverseEffectComponent__Resume(
        CharaAppearanceReverseEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaAppearanceReverseEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaAppearanceReverseEffectComponent__SetTweenColor(
        CharaAppearanceReverseEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaAppearanceReverseEffectComponent__SetTweenVolume(
        CharaAppearanceReverseEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Object_o *childEffect; // x20
  ServantStatusBattleListViewItem_o *p_childEffect; // x20
  float v8; // s8
  UnityEngine_Object_o *klass; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD6ED & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FD6ED = 1;
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
    p_childEffect = (ServantStatusBattleListViewItem_o *)&this->fields.childEffect;
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
          v12.fields.y = (float)(v8 + -1.0) * this->fields.bodySize.fields.y;
          v12.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v12, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1B64324(figure);
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
      sub_1B6406C(p_childEffect, 0, v10, v11);
    }
  }
}