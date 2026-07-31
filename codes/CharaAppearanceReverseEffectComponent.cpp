void CharaAppearanceReverseEffectComponent___ctor(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.erasureColor.fields.r = 0;
  *(_QWORD *)&this->fields.erasureColor.fields.b = 0;
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaAppearanceReverseEffectComponent__AppearanceStart(
        CharaAppearanceReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UIStandFigureRender_o *transform; // x0
  UnityEngine_Vector2_o BodySize; // kr00_8
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v18; // x2
  float v19; // s8
  float x; // s9
  float y; // s10
  UnityEngine_GameObject_o *v22; // x20
  System_String_o *v23; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v24; // x22
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  const MethodInfo *v27; // x6
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939D01 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_14162/*"Talk/"*/);
    sub_21FFC50(&StringLiteral_5100/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/);
    byte_5939D01 = 1;
  }
  this->fields.figure = figure;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.figure,
    (int32_t)figure,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 2.0;
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_32;
  BodySize = UIStandFigureRender__GetBodySize(transform, 0);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 1.2039;
  if ( !transform )
    goto LABEL_32;
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_5100/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, 0);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_32;
  UIStandFigureRender__SetFilterColor(transform, this->fields.erasureColor, 0);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_32;
  UIStandFigureRender__SetGradation(transform, 0.2, 0);
  ((void (__fastcall *)(CharaAppearanceReverseEffectComponent_o *, const MethodInfo *, float))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    0.2);
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    return;
  }
  v16 = (UnityEngine_Object_o *)this->fields.figure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    transform = (UIStandFigureRender_o *)this->fields.figure;
    if ( !transform )
      goto LABEL_32;
    UIStandFigureRender__SetAlpha(transform, 1.0, 0);
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    CharaAppearanceReverseEffectComponent__EndCreateEffect(this, 0, v18);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_32;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_32;
  LODWORD(v19) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  transform = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (transform = (UIStandFigureRender_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        (transform = (UIStandFigureRender_o *)this->fields.subEffectBase) == 0)
    || (x = localPosition.fields.x,
        y = localPosition.fields.y,
        (transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)transform,
                                                0)) == 0) )
  {
LABEL_32:
    sub_21FFECC(transform, v10);
  }
  v29.fields.y = -y;
  v29.fields.x = -x;
  v29.fields.z = v19;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v29, 0);
  v22 = this->fields.subEffectBase;
  v23 = System_String__Concat_75438412((System_String_o *)StringLiteral_14162/*"Talk/"*/, this->fields.subEffectName, 0);
  v24 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_21FFEBC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v24,
    (Il2CppObject *)this,
    Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__,
    v25);
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v26);
  CommonEffectManager__Create_50652356(v22, v23, v24, 0, 0, 0, v27);
}


void CharaAppearanceReverseEffectComponent__EffectResume(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaAppearanceReverseEffectComponent_c *klass; // x8
  float volume; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v6; // x0
  __int64 v7; // x1
  TweenRenderVolume_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5939D02 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10290/*"OnEndEffect"*/);
    byte_5939D02 = 1;
  }
  klass = this->klass;
  volume = this->fields.volume;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaAppearanceReverseEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 1.0, 0);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v8 = v6;
  v6->fields.method = 1;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8->fields.eventReceiver = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.eventReceiver, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_10290/*"OnEndEffect"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10290/*"OnEndEffect"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.callWhenFinished, v16, v17, v18, v19, v20, v21, v22);
}


void CharaAppearanceReverseEffectComponent__EndCreateEffect(
        CharaAppearanceReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.childEffect = effect;
  this->fields.isStart = 1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.childEffect,
    (int32_t)effect,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaAppearanceReverseEffectComponent__EffectResume(this, v9);
}


void CharaAppearanceReverseEffectComponent__OnDestroy(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x20
  __int64 v4; // x1
  UIStandFigureRender_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5939D04 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D04 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    v5 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v5 || (UIStandFigureRender__RecoverSharder(v5, 0), (v5 = (UIStandFigureRender_o *)this->fields.figure) == 0) )
      sub_21FFECC(v5, v4);
    UIStandFigureRender__SetAlpha(v5, 1.0, 0);
    this->fields.figure = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.figure, 0, v6, v7, v8, v9, v10, v11);
  }
}


void CharaAppearanceReverseEffectComponent__OnEndEffect(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_5939D03 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D03 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void CharaAppearanceReverseEffectComponent__OnUpdate(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5939D05 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D05 = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0);
  if ( this->fields.isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v3);
    if ( !CommonEffectManager__IsBusy(subEffectBase, v3) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaAppearanceReverseEffectComponent__Resume(
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


void CharaAppearanceReverseEffectComponent__SetTweenColor(
        CharaAppearanceReverseEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  struct UIStandFigureM_o *figure; // x0

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  figure = this->fields.figure;
  if ( !figure )
    sub_21FFECC(0, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, const MethodInfo *, float, float, float, float))figure->klass->vtable._39_SetTweenColor.methodPtr)(
    figure,
    figure->klass->vtable._39_SetTweenColor.method,
    r,
    g,
    b,
    a);
}


void CharaAppearanceReverseEffectComponent__SetTweenVolume(
        CharaAppearanceReverseEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *childEffect; // x20
  UnityEngine_Object_o *v8; // x20
  float v9; // s8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939D00 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D00 = 1;
  }
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    goto LABEL_17;
  UIStandFigureRender__SetVolume(figure, v, 0);
  childEffect = (UnityEngine_Object_o *)this->fields.childEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  figure = (UIStandFigureRender_o *)UnityEngine_Object__op_Inequality(childEffect, 0, 0);
  if ( ((unsigned __int8)figure & 1) != 0 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.childEffect;
    v9 = this->fields.volume - this->fields.addVolume;
    if ( v9 > 0.0 )
    {
      if ( v8 )
      {
        figure = (UIStandFigureRender_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.childEffect,
                                            0);
        if ( figure )
        {
          v16.fields.z = 0.0;
          v16.fields.y = (float)(v9 + -1.0) * this->fields.bodySize.fields.y;
          v16.fields.x = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v16, 0);
          return;
        }
      }
LABEL_17:
      sub_21FFECC(figure, method);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      figure = (UIStandFigureRender_o *)this->fields.childEffect;
      if ( !figure )
        goto LABEL_17;
      ((void (__fastcall *)(UIStandFigureRender_o *, __int64, _QWORD, const MethodInfo *))figure->klass->vtable._8_set_alpha.methodPtr)(
        figure,
        1,
        0,
        figure->klass->vtable._8_set_alpha.method);
      this->fields.childEffect = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.childEffect, 0, v10, v11, v12, v13, v14, v15);
    }
  }
}