void CharaWipeTimeEffectComponent___ctor(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_5971EF0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18763/*"circleOut"*/);
    byte_5971EF0 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_18763/*"circleOut"*/;
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0;
  this->fields.wipeName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.wipeName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaWipeTimeEffectComponent__EffectResume(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  CharaWipeTimeEffectComponent_c *klass; // x8
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

  if ( (byte_5971EEC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10303/*"OnEndEffect"*/);
    byte_5971EEC = 1;
  }
  klass = this->klass;
  volume = this->fields.volume;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeTimeEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0);
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


void CharaWipeTimeEffectComponent__EndCreateEffect(
        CharaWipeTimeEffectComponent_o *this,
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
    CharaWipeTimeEffectComponent__EffectResume(this, v9);
}


void CharaWipeTimeEffectComponent__EndLoadWipe(
        CharaWipeTimeEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *wipeData; // x21
  __int64 v11; // x1
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Vector2_o BodySize; // kr00_8
  _BOOL4 isContinueSilhouette; // w8
  float effectRange; // s8
  UIStandFigureRender_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  System_String_o *v21; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v22; // x22
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  const MethodInfo *v25; // x6

  if ( (byte_5971EEB & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D___);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CharaWipeTimeEffectComponent_EndCreateEffect__);
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_14192/*"Talk/"*/);
    sub_2213A60(&StringLiteral_5126/*"Custom/Sprite-ScriptActionFigureWipeWhenSilhouette"*/);
    sub_2213A60(&StringLiteral_5125/*"Custom/Sprite-ScriptActionFigureWipe"*/);
    byte_5971EEB = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
    AssetManager__releaseAsset_47496972(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.wipeData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_26;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0);
  isContinueSilhouette = this->fields.isContinueSilhouette;
  effectRange = this->fields.effectRange;
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !isContinueSilhouette )
  {
    if ( figure )
    {
      UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_5125/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0);
      figure = (UIStandFigureRender_o *)this->fields.figure;
      if ( figure )
      {
        UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0);
        if ( data )
          goto LABEL_16;
      }
    }
LABEL_26:
    sub_2213CDC(figure, v11);
  }
  if ( !figure )
    goto LABEL_26;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_5126/*"Custom/Sprite-ScriptActionFigureWipeWhenSilhouette"*/, 0);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_26;
  UIStandFigureRender__SetWipeColor(figure, this->fields.wipeColor, 0);
  if ( !data )
    goto LABEL_26;
LABEL_16:
  v16 = (UIStandFigureRender_o *)this->fields.figure;
  figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                      data,
                                      (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___);
  if ( !v16 )
    goto LABEL_26;
  UIStandFigureRender__SetWipeTexture(v16, (UnityEngine_Texture_o *)figure, 0);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_26;
  UIStandFigureRender__SetGradation(figure, 0.2, 0);
  ((void (__fastcall *)(CharaWipeTimeEffectComponent_o *, const MethodInfo *, float))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    1.2039 - effectRange);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    v20 = this->fields.subEffectBase;
    v21 = System_String__Concat_75651716((System_String_o *)StringLiteral_14192/*"Talk/"*/, this->fields.subEffectName, 0);
    v22 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_2213CCC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndCreateEffect__,
      v23);
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v24);
    CommonEffectManager__Create_50717624(v20, v21, v22, 0, 0, 0, v25);
  }
  else
  {
    CharaWipeTimeEffectComponent__EndCreateEffect(this, 0, v19);
  }
}


void CharaWipeTimeEffectComponent__OnDestroy(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_Object_o *figure; // x20
  __int64 v11; // x1
  UIStandFigureRender_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5971EEE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971EEE = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(wipeData, 0);
    this->fields.wipeData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.wipeData, 0, v4, v5, v6, v7, v8, v9);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    v12 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v12
      || (UIStandFigureRender__RecoverSharder(v12, 0), (v12 = (UIStandFigureRender_o *)this->fields.figure) == 0) )
    {
      sub_2213CDC(v12, v11);
    }
    UIStandFigureRender__SetAlpha(v12, 0.0, 0);
    this->fields.figure = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.figure, 0, v13, v14, v15, v16, v17, v18);
  }
}


void CharaWipeTimeEffectComponent__OnEndEffect(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_5971EED & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    byte_5971EED = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void CharaWipeTimeEffectComponent__OnUpdate(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5971EEF & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971EEF = 1;
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


void CharaWipeTimeEffectComponent__SetTweenColor(
        CharaWipeTimeEffectComponent_o *this,
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


void CharaWipeTimeEffectComponent__SetTweenVolume(
        CharaWipeTimeEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_2213CDC(0, method);
  UIStandFigureRender__SetVolume(figure, v, 0);
}


void CharaWipeTimeEffectComponent__WipeStart(
        CharaWipeTimeEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UIStandFigureRender_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  __int64 v22; // x1

  if ( (byte_5971EEA & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CharaWipeTimeEffectComponent_EndLoadWipe__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16277/*"Wipe/"*/);
    byte_5971EEA = 1;
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
  if ( this->fields.isSkip )
  {
    v11 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v11 )
      sub_2213CDC(0, v10);
    UIStandFigureRender__SetAlpha(v11, 0.0, 0);
    this->fields.figure = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.figure, 0, v12, v13, v14, v15, v16, v17);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  else
  {
    v20 = System_String__Concat_75651716((System_String_o *)StringLiteral_16277/*"Wipe/"*/, this->fields.wipeName, 0);
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndLoadWipe__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
    AssetManager__loadAssetStorage(v20, v21, 1, 0, 0);
  }
}