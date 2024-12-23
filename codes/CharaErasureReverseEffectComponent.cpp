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
  CharaErasureReverseEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B67F65 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_10051/*"OnEndEffect"*/, method);
    byte_4B67F65 = 1;
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
    sub_1BE4D28(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v7->fields.eventReceiver, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_10051/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10051/*"OnEndEffect"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
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
  sub_1BE4A70(
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UIStandFigureM_o **p_figure; // x20
  __int64 v16; // x1
  UIStandFigureRender_o *transform; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v21; // x2
  float v22; // s8
  float v23; // s0
  float v24; // s1
  float v25; // s9
  float v26; // s10
  UnityEngine_GameObject_o *v27; // x20
  System_String_o *v28; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v29; // x22
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x6
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B67F64 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CharaErasureReverseEffectComponent_EndCreateEffect__, figure);
    sub_1BE4ACC(&CommonEffectManager_TypeInfo, v10);
    sub_1BE4ACC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_13736/*"Talk/"*/, v13);
    sub_1BE4ACC(&StringLiteral_5043/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, v14);
    byte_4B67F64 = 1;
  }
  p_figure = &this->fields.figure;
  this->fields.figure = figure;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.figure, (int64_t)figure, (int64_t)method, v3, v4, v5, v6, v7);
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
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_5043/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, 0LL);
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
    UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
    return;
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    CharaErasureReverseEffectComponent__EndCreateEffect(this, 0LL, v21);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_27;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_27;
  LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = (UIStandFigureRender_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (UIStandFigureRender_o *)this->fields.subEffectBase) == 0LL)
    || (v25 = v23,
        v26 = v24,
        (transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)transform,
                                                0LL)) == 0LL) )
  {
LABEL_27:
    sub_1BE4D28(transform, v16);
  }
  v32.fields.y = -v26;
  v32.fields.x = -v25;
  v32.fields.z = v22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0LL);
  v27 = this->fields.subEffectBase;
  v28 = System_String__Concat_62698808((System_String_o *)StringLiteral_13736/*"Talk/"*/, this->fields.subEffectName, 0LL);
  v29 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BE4D18(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v29,
    (Il2CppObject *)this,
    Method_CharaErasureReverseEffectComponent_EndCreateEffect__,
    v30);
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Create_41600480(v27, v28, v29, 0, 0, 0, v31);
}


void __fastcall CharaErasureReverseEffectComponent__OnDestroy(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x20
  __int64 v4; // x1
  PartyOrganizationUtility_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B67F67 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B67F67 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (PartyOrganizationUtility_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_1BE4D28(klass, v4);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_1BE4A70(p_figure, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall CharaErasureReverseEffectComponent__OnEndEffect(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4B67F66 & 1) == 0 )
  {
    sub_1BE4ACC(&CommonEffectManager_TypeInfo, method);
    byte_4B67F66 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaErasureReverseEffectComponent__OnUpdate(
        CharaErasureReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float totalTime; // s8
  const MethodInfo *v5; // x1
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B67F68 & 1) == 0 )
  {
    sub_1BE4ACC(&CommonEffectManager_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B67F68 = 1;
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
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( !CommonEffectManager__IsBusy(subEffectBase, v5) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
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
    sub_1BE4D28(0LL, v8);
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
  PartyOrganizationUtility_o *p_childEffect; // x20
  float v8; // s8
  UnityEngine_Object_o *klass; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B67F63 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B67F63 = 1;
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
    p_childEffect = (PartyOrganizationUtility_o *)&this->fields.childEffect;
    v8 = this->fields.volume - this->fields.addVolume;
    if ( v8 > 0.0 )
    {
      figure = (UIStandFigureRender_o *)p_childEffect->klass;
      if ( p_childEffect->klass )
      {
        figure = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)figure, 0LL);
        if ( figure )
        {
          v16.fields.x = 0.0;
          v16.fields.y = this->fields.bodySize.fields.y * (float)-v8;
          v16.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v16, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1BE4D28(figure, method);
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
      sub_1BE4A70(p_childEffect, 0LL, v10, v11, v12, v13, v14, v15);
    }
  }
}