void CharaWipeTimeEffectComponent___ctor(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C3900F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17968/*"circleOut"*/);
    byte_4C3900F = 1;
  }
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0;
  v5 = StringLiteral_17968/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17968/*"circleOut"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.wipeName, v5, v2, v3);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaWipeTimeEffectComponent__EffectResume(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  CharaWipeTimeEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  TweenRenderVolume_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3900B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9900/*"OnEndEffect"*/);
    byte_4C3900B = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeTimeEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0);
  if ( !v5 )
    sub_1C32E7C(0);
  v6 = v5;
  v5->fields.method = 1;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6->fields.eventReceiver = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.eventReceiver, (int32_t)v7, v8, v9);
  v10 = StringLiteral_9900/*"OnEndEffect"*/;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9900/*"OnEndEffect"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.callWhenFinished, v10, v11, v12);
}


void CharaWipeTimeEffectComponent__EndCreateEffect(
        CharaWipeTimeEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaWipeTimeEffectComponent__EffectResume(this, v5);
}


void CharaWipeTimeEffectComponent__EndLoadWipe(
        CharaWipeTimeEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double v4; // q8
  AssetData_o *wipeData; // x22
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v10; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *v13; // x20
  System_String_o *v14; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v15; // x22

  if ( (byte_4C3900A & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D___);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_CharaWipeTimeEffectComponent_EndCreateEffect__);
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    sub_1C32C20(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_13628/*"Talk/"*/);
    sub_1C32C20(&StringLiteral_4938/*"Custom/Sprite-ScriptActionFigureWipe"*/);
    byte_4C3900A = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435328(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_21;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  *(float *)&v4 = this->fields.effectRange;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !figure
    || (UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4938/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0), !data)
    || (v10 = (UIStandFigureRender_o *)this->fields.figure,
        figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                            data,
                                            (const MethodInfo_30BE658 *)Method_AssetData_GetObject_Texture2D___),
        !v10)
    || (UIStandFigureRender__SetWipeTexture(v10, (UnityEngine_Texture_o *)figure, 0),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0) )
  {
LABEL_21:
    sub_1C32E7C(figure);
  }
  UIStandFigureRender__SetGradation(figure, 0.2, 0);
  *(float *)&v4 = 1.2039 - *(float *)&v4;
  ((void (__fastcall *)(CharaWipeTimeEffectComponent_o *, const MethodInfo *, long double))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    v4);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    v13 = this->fields.subEffectBase;
    v14 = System_String__Concat_63518544((System_String_o *)StringLiteral_13628/*"Talk/"*/, this->fields.subEffectName, 0);
    v15 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C32E6C(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndCreateEffect__,
      0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_43651244(v13, v14, v15, 0, 0, 0, 0);
  }
  else
  {
    CharaWipeTimeEffectComponent__EndCreateEffect(this, 0, v12);
  }
}


void CharaWipeTimeEffectComponent__OnDestroy(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *figure; // x20
  CGThumbnailListItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3900D & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3900D = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435328(wipeData, 0);
    this->fields.wipeData = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.wipeData, 0, v4, v5);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    p_figure = (CGThumbnailListItem_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0) )
    {
      sub_1C32E7C(klass);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0);
    p_figure->klass = 0;
    sub_1C32BC4(p_figure, 0, v9, v10);
  }
}


void CharaWipeTimeEffectComponent__OnEndEffect(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4C3900C & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    byte_4C3900C = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, 0);
  this->fields.isWaitEndEffect = 1;
}


void CharaWipeTimeEffectComponent__OnUpdate(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3900E & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3900E = 1;
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
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaWipeTimeEffectComponent__Resume(CharaWipeTimeEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaWipeTimeEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaWipeTimeEffectComponent__SetTweenColor(
        CharaWipeTimeEffectComponent_o *this,
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
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  figure = this->fields.figure;
  if ( !figure )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UIStandFigureM_o *, const MethodInfo *, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.methodPtr)(
    figure,
    figure->klass->vtable._39_SetTweenColor.method,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void CharaWipeTimeEffectComponent__SetTweenVolume(
        CharaWipeTimeEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_1C32E7C(0);
  UIStandFigureRender__SetVolume(figure, v, 0);
}


void CharaWipeTimeEffectComponent__WipeStart(
        CharaWipeTimeEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UIStandFigureRender_o **p_figure; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v10; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  if ( (byte_4C39009 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_CharaWipeTimeEffectComponent_EndLoadWipe__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_15657/*"Wipe/"*/);
    byte_4C39009 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  if ( this->fields.isSkip )
  {
    if ( !*p_figure )
      sub_1C32E7C(0);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0);
    this->fields.figure = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.figure, 0, v7, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
  else
  {
    v10 = System_String__Concat_63518544((System_String_o *)StringLiteral_15657/*"Wipe/"*/, this->fields.wipeName, 0);
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndLoadWipe__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v10, v11, 1, 0);
  }
}