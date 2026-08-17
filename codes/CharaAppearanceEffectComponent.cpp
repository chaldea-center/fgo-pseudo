void CharaAppearanceEffectComponent___ctor(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.erasureColor.fields.r = 0;
  *(_QWORD *)&this->fields.erasureColor.fields.b = 0;
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaAppearanceEffectComponent__AppearanceStart(
        CharaAppearanceEffectComponent_o *this,
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
  _BOOL4 isContinueSilhouette; // w8
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v19; // x2
  float v20; // s8
  float x; // s9
  float y; // s10
  UnityEngine_GameObject_o *v23; // x20
  System_String_o *v24; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v25; // x22
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  const MethodInfo *v28; // x6
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971EBF & 1) == 0 )
  {
    sub_2213A60(&Method_CharaAppearanceEffectComponent_EndCreateEffect__);
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_14192/*"Talk/"*/);
    sub_2213A60(&StringLiteral_5110/*"Custom/Sprite-ScriptActionFigureErasureWhenSilhouette"*/);
    sub_2213A60(&StringLiteral_5107/*"Custom/Sprite-ScriptActionFigureErasure"*/);
    byte_5971EBF = 1;
  }
  this->fields.figure = figure;
  sub_2213A04(
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
    goto LABEL_35;
  BodySize = UIStandFigureRender__GetBodySize(transform, 0);
  isContinueSilhouette = this->fields.isContinueSilhouette;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 1.2039;
  if ( isContinueSilhouette )
  {
    if ( !figure )
      goto LABEL_35;
    UIStandFigureRender__SetSharder((UIStandFigureRender_o *)figure, (System_String_o *)StringLiteral_5110/*"Custom/Sprite-ScriptActionFigureErasureWhenSilhouette"*/, 0);
    UIStandFigureRender__SetErasureColor((UIStandFigureRender_o *)figure, this->fields.erasureColor, 0);
  }
  else
  {
    if ( !figure )
      goto LABEL_35;
    UIStandFigureRender__SetSharder((UIStandFigureRender_o *)figure, (System_String_o *)StringLiteral_5107/*"Custom/Sprite-ScriptActionFigureErasure"*/, 0);
    UIStandFigureRender__SetFilterColor((UIStandFigureRender_o *)figure, this->fields.erasureColor, 0);
  }
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_35;
  UIStandFigureRender__SetGradation(transform, 0.2, 0);
  ((void (__fastcall *)(CharaAppearanceEffectComponent_o *, const MethodInfo *, float))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    0.2);
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    return;
  }
  v17 = (UnityEngine_Object_o *)this->fields.figure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
  {
    transform = (UIStandFigureRender_o *)this->fields.figure;
    if ( !transform )
      goto LABEL_35;
    UIStandFigureRender__SetAlpha(transform, 1.0, 0);
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    CharaAppearanceEffectComponent__EndCreateEffect(this, 0, v19);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_35;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_35;
  LODWORD(v20) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
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
LABEL_35:
    sub_2213CDC(transform, v10);
  }
  v30.fields.y = -y;
  v30.fields.x = -x;
  v30.fields.z = v20;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v30, 0);
  v23 = this->fields.subEffectBase;
  v24 = System_String__Concat_75651716((System_String_o *)StringLiteral_14192/*"Talk/"*/, this->fields.subEffectName, 0);
  v25 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_2213CCC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v25,
    (Il2CppObject *)this,
    Method_CharaAppearanceEffectComponent_EndCreateEffect__,
    v26);
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v27);
  CommonEffectManager__Create_50717624(v23, v24, v25, 0, 0, 0, v28);
}


void CharaAppearanceEffectComponent__EffectResume(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
{
  CharaAppearanceEffectComponent_c *klass; // x8
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

  if ( (byte_5971EC0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10303/*"OnEndEffect"*/);
    byte_5971EC0 = 1;
  }
  klass = this->klass;
  volume = this->fields.volume;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaAppearanceEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 1.0, 0);
  if ( !v6 )
    sub_2213CDC(0, v7);
  v8 = v6;
  v6->fields.method = 1;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8->fields.eventReceiver = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.eventReceiver, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_10303/*"OnEndEffect"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10303/*"OnEndEffect"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.callWhenFinished, v16, v17, v18, v19, v20, v21, v22);
}


void CharaAppearanceEffectComponent__EndCreateEffect(
        CharaAppearanceEffectComponent_o *this,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.childEffect,
    (int32_t)effect,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaAppearanceEffectComponent__EffectResume(this, v9);
}


void CharaAppearanceEffectComponent__OnDestroy(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_5971EC2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971EC2 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    v5 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v5 || (UIStandFigureRender__RecoverSharder(v5, 0), (v5 = (UIStandFigureRender_o *)this->fields.figure) == 0) )
      sub_2213CDC(v5, v4);
    UIStandFigureRender__SetAlpha(v5, 1.0, 0);
    this->fields.figure = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.figure, 0, v6, v7, v8, v9, v10, v11);
  }
}


void CharaAppearanceEffectComponent__OnEndEffect(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_5971EC1 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    byte_5971EC1 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void CharaAppearanceEffectComponent__OnUpdate(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5971EC3 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971EC3 = 1;
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
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaAppearanceEffectComponent__Resume(
        CharaAppearanceEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaAppearanceEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


void CharaAppearanceEffectComponent__SetTweenColor(
        CharaAppearanceEffectComponent_o *this,
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
    sub_2213CDC(0, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, const MethodInfo *, float, float, float, float))figure->klass->vtable._39_SetTweenColor.methodPtr)(
    figure,
    figure->klass->vtable._39_SetTweenColor.method,
    r,
    g,
    b,
    a);
}


void CharaAppearanceEffectComponent__SetTweenVolume(
        CharaAppearanceEffectComponent_o *this,
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

  if ( (byte_5971EBE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971EBE = 1;
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
      sub_2213CDC(figure, method);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.childEffect, 0, v10, v11, v12, v13, v14, v15);
    }
  }
}