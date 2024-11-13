void __fastcall CharaErasureReverseEffectComponent___ctor(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)&this->fields.erasureColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.erasureColor.fields.b = 0LL;
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CharaErasureReverseEffectComponent__EffectResume(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaErasureReverseEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v6; // x0
  __int64 v7; // x1
  TweenRenderVolume_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B17552 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10028/*"OnEndEffect"*/, method, v2);
    byte_4B17552 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaErasureReverseEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  v8 = v6;
  v6->fields.method = 1;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8->fields.eventReceiver = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.eventReceiver, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_10028/*"OnEndEffect"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10028/*"OnEndEffect"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.callWhenFinished, v16, v17, v18, v19, v20, v21, v22);
}


void __fastcall CharaErasureReverseEffectComponent__EndCreateEffect(
        CharaErasureReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.childEffect,
    (int64_t)effect,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaErasureReverseEffectComponent__EffectResume(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaErasureReverseEffectComponent__ErasureStart(
        CharaErasureReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct UIStandFigureM_o **p_figure; // x20
  __int64 v21; // x1
  UIStandFigureRender_o *transform; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v28; // x2
  float v29; // s8
  float v30; // s0
  float v31; // s1
  float v32; // s9
  float v33; // s10
  UnityEngine_GameObject_o *v34; // x20
  System_String_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  CommonEffectLoadComponent_LoadEndHandler_o *v39; // x22
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  const MethodInfo *v42; // x6
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17551 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaErasureReverseEffectComponent_EndCreateEffect__, figure, method);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_13699/*"Talk/"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_5032/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, v18, v19);
    byte_4B17551 = 1;
  }
  p_figure = &this->fields.figure;
  this->fields.figure = figure;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.figure, (int64_t)figure, (int64_t)method, v3, v4, v5, v6, v7);
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
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_5032/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    return;
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    CharaErasureReverseEffectComponent__EndCreateEffect(this, 0LL, v28);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_27;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_27;
  LODWORD(v29) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = (UIStandFigureRender_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (UIStandFigureRender_o *)this->fields.subEffectBase) == 0LL)
    || (v32 = v30,
        v33 = v31,
        (transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)transform,
                                                0LL)) == 0LL) )
  {
LABEL_27:
    sub_1BCAA3C(transform, v21);
  }
  v43.fields.y = -v33;
  v43.fields.x = -v32;
  v43.fields.z = v29;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v43, 0LL);
  v34 = this->fields.subEffectBase;
  v35 = System_String__Concat_62401220((System_String_o *)StringLiteral_13699/*"Talk/"*/, this->fields.subEffectName, 0LL);
  v39 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BCAA2C(
                                                        CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                        v36,
                                                        v37,
                                                        v38);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CharaErasureReverseEffectComponent_EndCreateEffect__,
    v40);
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v41);
  CommonEffectManager__Create_41360948(v34, v35, v39, 0, 0, 0, v42);
}


void __fastcall CharaErasureReverseEffectComponent__OnDestroy(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *figure; // x20
  __int64 v5; // x1
  PartyOrganizationUtility_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17554 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17554 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (PartyOrganizationUtility_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_1BCAA3C(klass, v5);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_1BCA784(p_figure, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall CharaErasureReverseEffectComponent__OnEndEffect(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4B17553 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    byte_4B17553 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v3);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaErasureReverseEffectComponent__OnUpdate(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float totalTime; // s8
  const MethodInfo *v7; // x1
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B17555 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17555 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v7);
    if ( !CommonEffectManager__IsBusy(subEffectBase, v7) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    sub_1BCAA3C(0LL, v8);
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
  __int64 v3; // x2
  UIStandFigureRender_o *figure; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *childEffect; // x20
  PartyOrganizationUtility_o *p_childEffect; // x20
  float v10; // s8
  UnityEngine_Object_o *klass; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17550 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B17550 = 1;
  }
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    goto LABEL_17;
  UIStandFigureRender__SetVolume(figure, v, 0LL);
  childEffect = (UnityEngine_Object_o *)this->fields.childEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(childEffect, 0LL, 0LL) )
  {
    p_childEffect = (PartyOrganizationUtility_o *)&this->fields.childEffect;
    v10 = this->fields.volume - this->fields.addVolume;
    if ( v10 > 0.0 )
    {
      figure = (UIStandFigureRender_o *)p_childEffect->klass;
      if ( p_childEffect->klass )
      {
        figure = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)figure, 0LL);
        if ( figure )
        {
          v18.fields.x = 0.0;
          v18.fields.y = this->fields.bodySize.fields.y * (float)-v10;
          v18.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v18, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1BCAA3C(figure, method);
    }
    klass = (UnityEngine_Object_o *)p_childEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      sub_1BCA784(p_childEffect, 0LL, v12, v13, v14, v15, v16, v17);
    }
  }
}