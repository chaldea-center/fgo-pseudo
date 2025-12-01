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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double v8; // q8
  struct UIStandFigureM_o **p_figure; // x20
  __int64 v12; // x1
  UIStandFigureRender_o *transform; // x0
  UnityEngine_Vector2_o BodySize; // kr00_8
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v18; // x2
  float v19; // s8
  float x; // s9
  float y; // s10
  UnityEngine_GameObject_o *v22; // x20
  System_String_o *v23; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v24; // x22
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8A3A & 1) == 0 )
  {
    sub_1C713B0(&Method_CharaAppearanceEffectComponent_EndCreateEffect__);
    sub_1C713B0(&CommonEffectManager_TypeInfo);
    sub_1C713B0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_13638/*"Talk/"*/);
    sub_1C713B0(&StringLiteral_4916/*"Custom/Sprite-ScriptActionFigureErasure"*/);
    byte_4CC8A3A = 1;
  }
  p_figure = &this->fields.figure;
  this->fields.figure = figure;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3, v4, v5, v6, v7);
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 2.0;
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_32;
  BodySize = UIStandFigureRender__GetBodySize(transform, 0);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 1.2039;
  if ( !transform )
    goto LABEL_32;
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_4916/*"Custom/Sprite-ScriptActionFigureErasure"*/, 0);
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_32;
  UIStandFigureRender__SetFilterColor(transform, this->fields.erasureColor, 0);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_32;
  LODWORD(v8) = 1045220557;
  UIStandFigureRender__SetGradation(transform, 0.2, 0);
  ((void (__fastcall *)(CharaAppearanceEffectComponent_o *, const MethodInfo *, long double))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    v8);
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
    return;
  }
  v16 = (UnityEngine_Object_o *)*p_figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    transform = (UIStandFigureRender_o *)*p_figure;
    if ( !*p_figure )
      goto LABEL_32;
    UIStandFigureRender__SetAlpha(transform, 1.0, 0);
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    CharaAppearanceEffectComponent__EndCreateEffect(this, 0, v18);
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
    sub_1C71608(transform, v12);
  }
  v26.fields.y = -y;
  v26.fields.x = -x;
  v26.fields.z = v19;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0);
  v22 = this->fields.subEffectBase;
  v23 = System_String__Concat_64031724((System_String_o *)StringLiteral_13638/*"Talk/"*/, this->fields.subEffectName, 0);
  v24 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C715FC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v24,
    (Il2CppObject *)this,
    Method_CharaAppearanceEffectComponent_EndCreateEffect__,
    0);
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Create_44045776(v22, v23, v24, 0, 0, 0, 0);
}


void CharaAppearanceEffectComponent__EffectResume(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
{
  CharaAppearanceEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC8A3B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9902/*"OnEndEffect"*/);
    byte_4CC8A3B = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaAppearanceEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 1.0, 0);
  if ( !v5 )
    sub_1C71608(0, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7->fields.eventReceiver = v8;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_9902/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9902/*"OnEndEffect"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
}


void CharaAppearanceEffectComponent__EndCreateEffect(
        CharaAppearanceEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.childEffect,
    (int32_t)effect,
    (int32_t)method,
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
  GrandQuestFolderBoardItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC8A3D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8A3D = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    p_figure = (GrandQuestFolderBoardItem_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0) )
    {
      sub_1C71608(klass, v4);
    }
    UIStandFigureRender__SetAlpha(klass, 1.0, 0);
    p_figure->klass = 0;
    sub_1C71354(p_figure, 0, v7, v8, v9, v10, v11, v12);
  }
}


void CharaAppearanceEffectComponent__OnEndEffect(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4CC8A3C & 1) == 0 )
  {
    sub_1C713B0(&CommonEffectManager_TypeInfo);
    byte_4CC8A3C = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, 0);
  this->fields.isWaitEndEffect = 1;
}


void CharaAppearanceEffectComponent__OnUpdate(CharaAppearanceEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC8A3E & 1) == 0 )
  {
    sub_1C713B0(&CommonEffectManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8A3E = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0);
  if ( this->fields.isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( !CommonEffectManager__IsBusy(subEffectBase, 0) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(gameObject, 0);
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


// local variable allocation has failed, the output may be wrong!
void CharaAppearanceEffectComponent__SetTweenColor(
        CharaAppearanceEffectComponent_o *this,
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
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  figure = this->fields.figure;
  if ( !figure )
    sub_1C71608(0, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, const MethodInfo *, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.methodPtr)(
    figure,
    figure->klass->vtable._39_SetTweenColor.method,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void CharaAppearanceEffectComponent__SetTweenVolume(
        CharaAppearanceEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Object_o *childEffect; // x20
  GrandQuestFolderBoardItem_o *p_childEffect; // x20
  float v8; // s8
  UnityEngine_Object_o *klass; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8A39 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8A39 = 1;
  }
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    goto LABEL_17;
  UIStandFigureRender__SetVolume(figure, v, 0);
  childEffect = (UnityEngine_Object_o *)this->fields.childEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(childEffect, 0, 0) )
  {
    p_childEffect = (GrandQuestFolderBoardItem_o *)&this->fields.childEffect;
    v8 = this->fields.volume - this->fields.addVolume;
    if ( v8 > 0.0 )
    {
      figure = (UIStandFigureRender_o *)p_childEffect->klass;
      if ( p_childEffect->klass )
      {
        figure = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)figure, 0);
        if ( figure )
        {
          v16.fields.x = 0.0;
          v16.fields.y = (float)(v8 + -1.0) * this->fields.bodySize.fields.y;
          v16.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v16, 0);
          return;
        }
      }
LABEL_17:
      sub_1C71608(figure, method);
    }
    klass = (UnityEngine_Object_o *)p_childEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      figure = (UIStandFigureRender_o *)p_childEffect->klass;
      if ( !p_childEffect->klass )
        goto LABEL_17;
      ((void (__fastcall *)(UIStandFigureRender_o *, __int64, _QWORD, const MethodInfo *))figure->klass->vtable._8_set_alpha.methodPtr)(
        figure,
        1,
        0,
        figure->klass->vtable._8_set_alpha.method);
      p_childEffect->klass = 0;
      sub_1C71354(p_childEffect, 0, v10, v11, v12, v13, v14, v15);
    }
  }
}