void CharaWipeTimeReverseEffectComponent___ctor(CharaWipeTimeReverseEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB7949 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17987/*"circleOut"*/);
    byte_4CB7949 = 1;
  }
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0;
  v5 = StringLiteral_17987/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17987/*"circleOut"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wipeName, v5, v2, v3);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaWipeTimeReverseEffectComponent__EffectResume(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaWipeTimeReverseEffectComponent_c *klass; // x8
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

  if ( (byte_4CB7945 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9897/*"OnEndEffect"*/);
    byte_4CB7945 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeTimeReverseEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, this->fields.maxAlpha, 0);
  if ( !v5 )
    sub_1C6BC60(0, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7->fields.eventReceiver = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9897/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9897/*"OnEndEffect"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void CharaWipeTimeReverseEffectComponent__EndCreateEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaWipeTimeReverseEffectComponent__EffectResume(this, v5);
}


void CharaWipeTimeReverseEffectComponent__EndLoadWipe(
        CharaWipeTimeReverseEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *wipeData; // x22
  __int64 v7; // x1
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Vector2_o BodySize; // kr00_8
  float v10; // s0
  UIStandFigureRender_o *v11; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x20
  System_String_o *v15; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v16; // x22

  if ( (byte_4CB7944 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D___);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__);
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    sub_1C6BA08(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_13632/*"Talk/"*/);
    sub_1C6BA08(&StringLiteral_4928/*"Custom/Sprite-ScriptActionFigureWipe"*/);
    byte_4CB7944 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40765532(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_22;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0);
  this->fields.bodySize.fields.x = BodySize.fields.x;
  figure = (UIStandFigureRender_o *)this->fields.figure;
  v10 = 1.2039 - this->fields.effectRange;
  this->fields.bodySize.fields.y = BodySize.fields.y;
  this->fields.maxAlpha = v10;
  this->fields.addVolume = 0.2;
  if ( !figure )
    goto LABEL_22;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4928/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0);
  if ( !data )
    goto LABEL_22;
  v11 = (UIStandFigureRender_o *)this->fields.figure;
  figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                      data,
                                      (const MethodInfo_311C2F8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v11
    || (UIStandFigureRender__SetWipeTexture(v11, (UnityEngine_Texture_o *)figure, 0),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0)
    || (UIStandFigureRender__SetGradation(figure, 0.2, 0), (figure = (UIStandFigureRender_o *)this->fields.figure) == 0) )
  {
LABEL_22:
    sub_1C6BC60(figure, v7);
  }
  UIStandFigureRender__SetAlpha(figure, 1.0, 0);
  ((void (__fastcall *)(CharaWipeTimeReverseEffectComponent_o *, const MethodInfo *, float))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    0.0);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    v14 = this->fields.subEffectBase;
    v15 = System_String__Concat_63966792((System_String_o *)StringLiteral_13632/*"Talk/"*/, this->fields.subEffectName, 0);
    v16 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C6BC54(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v16,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__,
      0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_43999448(v14, v15, v16, 0, 0, 0, 0);
  }
  else
  {
    CharaWipeTimeReverseEffectComponent__EndCreateEffect(this, 0, v13);
  }
}


void CharaWipeTimeReverseEffectComponent__OnDestroy(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *figure; // x20
  __int64 v7; // x1
  CGThumbnailListItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB7947 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7947 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40765532(wipeData, 0);
    this->fields.wipeData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wipeData, 0, v4, v5);
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
      sub_1C6BC60(klass, v7);
    }
    UIStandFigureRender__SetAlpha(klass, 1.0, 0);
    p_figure->klass = 0;
    sub_1C6B9AC(p_figure, 0, v10, v11);
  }
}


void CharaWipeTimeReverseEffectComponent__OnEndEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4CB7946 & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    byte_4CB7946 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, 0);
  this->fields.isWaitEndEffect = 1;
}


void CharaWipeTimeReverseEffectComponent__OnUpdate(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB7948 & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7948 = 1;
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
      UnityEngine_Object__Destroy_71659676(gameObject, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaWipeTimeReverseEffectComponent__Resume(
        CharaWipeTimeReverseEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaWipeTimeReverseEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaWipeTimeReverseEffectComponent__SetTweenColor(
        CharaWipeTimeReverseEffectComponent_o *this,
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
    sub_1C6BC60(0, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, const MethodInfo *, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.methodPtr)(
    figure,
    figure->klass->vtable._39_SetTweenColor.method,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void CharaWipeTimeReverseEffectComponent__SetTweenVolume(
        CharaWipeTimeReverseEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_1C6BC60(0, method);
  UIStandFigureRender__SetVolume(figure, v, 0);
}


void CharaWipeTimeReverseEffectComponent__WipeStart(
        CharaWipeTimeReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UIStandFigureRender_o **p_figure; // x21
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v11; // x20
  AssetLoader_LoadEndDataHandler_o *v12; // x21

  if ( (byte_4CB7943 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_15656/*"Wipe/"*/);
    byte_4CB7943 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  if ( this->fields.isSkip )
  {
    if ( !*p_figure )
      sub_1C6BC60(0, v7);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0);
    this->fields.figure = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.figure, 0, v8, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
  }
  else
  {
    v11 = System_String__Concat_63966792((System_String_o *)StringLiteral_15656/*"Wipe/"*/, this->fields.wipeName, 0);
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v12,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v11, v12, 1, 0);
  }
}