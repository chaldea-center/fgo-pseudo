void __fastcall CharaWipeEffectComponent___ctor(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B1DAF3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17818/*"circleOut"*/, method);
    byte_4B1DAF3 = 1;
  }
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0LL;
  v5 = StringLiteral_17818/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17818/*"circleOut"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.wipeName, v5, v2, v3);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaWipeEffectComponent__EffectResume(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  CharaWipeEffectComponent_c *klass; // x8
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

  if ( (byte_4B1DAEF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9824/*"OnEndEffect"*/, method);
    byte_4B1DAEF = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v5 )
    sub_1BCB254(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9824/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9824/*"OnEndEffect"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void __fastcall CharaWipeEffectComponent__EndCreateEffect(
        CharaWipeEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaWipeEffectComponent__EffectResume(this, v5);
}


void __fastcall CharaWipeEffectComponent__EndLoadWipe(
        CharaWipeEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  AssetData_o *wipeData; // x22
  __int64 v14; // x1
  UIStandFigureRender_o *figure; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v17; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  System_String_o *v21; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v22; // x22
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x6

  if ( (byte_4B1DAEE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_Texture2D___, data);
    sub_1BCAFF8(&AssetManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_CharaWipeEffectComponent_EndCreateEffect__, v7);
    sub_1BCAFF8(&CommonEffectManager_TypeInfo, v8);
    sub_1BCAFF8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_13514/*"Talk/"*/, v11);
    sub_1BCAFF8(&StringLiteral_4899/*"Custom/Sprite-ScriptActionFigureWipe"*/, v12);
    byte_4B1DAEE = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39722652(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_21;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !figure
    || (UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4899/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL), !data)
    || (v17 = (UIStandFigureRender_o *)this->fields.figure,
        figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                            data,
                                            (const MethodInfo_2FFBEC8 *)Method_AssetData_GetObject_Texture2D___),
        !v17)
    || (UIStandFigureRender__SetWipeTexture(v17, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_21:
    sub_1BCB254(figure, v14);
  }
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
  ((void (__fastcall *)(CharaWipeEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v20 = this->fields.subEffectBase;
    v21 = System_String__Concat_62450424((System_String_o *)StringLiteral_13514/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v22 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BCB244(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CharaWipeEffectComponent_EndCreateEffect__,
      v23);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_42839516(v20, v21, v22, 0, 0, 0, v24);
  }
  else
  {
    CharaWipeEffectComponent__EndCreateEffect(this, 0LL, v19);
  }
}


void __fastcall CharaWipeEffectComponent__OnDestroy(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *wipeData; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *figure; // x20
  __int64 v8; // x1
  CGThumbnailListItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B1DAF1 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1DAF1 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39722652(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.wipeData, 0, v5, v6);
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
      sub_1BCB254(klass, v8);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_1BCAF9C(p_figure, 0, v11, v12);
  }
}


void __fastcall CharaWipeEffectComponent__OnEndEffect(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4B1DAF0 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectManager_TypeInfo, method);
    byte_4B1DAF0 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0LL, v2);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaWipeEffectComponent__OnUpdate(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1DAF2 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1DAF2 = 1;
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
      UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeEffectComponent__Resume(
        CharaWipeEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaWipeEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeEffectComponent__SetTweenColor(
        CharaWipeEffectComponent_o *this,
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
    sub_1BCB254(0LL, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaWipeEffectComponent__SetTweenVolume(
        CharaWipeEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_1BCB254(0LL, method);
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeEffectComponent__WipeStart(
        CharaWipeEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UIStandFigureRender_o **p_figure; // x21
  __int64 v11; // x1
  _BOOL4 isSkip; // w8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v16; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4B1DAED & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, figure);
    sub_1BCAFF8(&Method_CharaWipeEffectComponent_EndLoadWipe__, v6);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_15525/*"Wipe/"*/, v9);
    byte_4B1DAED = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !*p_figure )
      sub_1BCB254(0LL, v11);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.figure, 0, v13, v14);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  }
  else
  {
    v16 = System_String__Concat_62450424((System_String_o *)StringLiteral_15525/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_CharaWipeEffectComponent_EndLoadWipe__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v16, v17, 1, 0LL);
  }
}