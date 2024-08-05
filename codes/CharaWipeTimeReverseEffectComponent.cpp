void __fastcall CharaWipeTimeReverseEffectComponent___ctor(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FF819 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17906/*"circleOut"*/, method);
    byte_49FF819 = 1;
  }
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0LL;
  v5 = StringLiteral_17906/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17906/*"circleOut"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.wipeName, v5, v2, v3);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaWipeTimeReverseEffectComponent__EffectResume(
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
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FF815 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9851/*"OnEndEffect"*/, method);
    byte_49FF815 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeTimeReverseEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, this->fields.maxAlpha, 0LL);
  if ( !v5 )
    sub_1B64ACC(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9851/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9851/*"OnEndEffect"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void __fastcall CharaWipeTimeReverseEffectComponent__EndCreateEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaWipeTimeReverseEffectComponent__EffectResume(this, v5);
}


void __fastcall CharaWipeTimeReverseEffectComponent__EndLoadWipe(
        CharaWipeTimeReverseEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  UnityEngine_Vector2_o BodySize; // kr00_8
  float v17; // s0
  UIStandFigureRender_o *v18; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *v21; // x20
  System_String_o *v22; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x6

  if ( (byte_49FF814 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_Texture2D___, data);
    sub_1B64870(&AssetManager_TypeInfo, v6);
    sub_1B64870(&Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__, v7);
    sub_1B64870(&CommonEffectManager_TypeInfo, v8);
    sub_1B64870(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&StringLiteral_13471/*"Talk/"*/, v11);
    sub_1B64870(&StringLiteral_4950/*"Custom/Sprite-ScriptActionFigureWipe"*/, v12);
    byte_49FF814 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37481844(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_22;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  this->fields.bodySize.fields.x = BodySize.fields.x;
  figure = (UIStandFigureRender_o *)this->fields.figure;
  v17 = 1.2039 - this->fields.effectRange;
  this->fields.bodySize.fields.y = BodySize.fields.y;
  this->fields.maxAlpha = v17;
  this->fields.addVolume = 0.2;
  if ( !figure )
    goto LABEL_22;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4950/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL);
  if ( !data )
    goto LABEL_22;
  v18 = (UIStandFigureRender_o *)this->fields.figure;
  figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                      data,
                                      (const MethodInfo_2E1DBF0 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v18
    || (UIStandFigureRender__SetWipeTexture(v18, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetGradation(figure, 0.2, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_22:
    sub_1B64ACC(figure, v14);
  }
  UIStandFigureRender__SetAlpha(figure, 1.0, 0LL);
  ((void (__fastcall *)(CharaWipeTimeReverseEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    0.0);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v21 = this->fields.subEffectBase;
    v22 = System_String__Concat_61383576((System_String_o *)StringLiteral_13471/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v23 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B64ABC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v23,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__,
      v24);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_40289944(v21, v22, v23, 0, 0, 0, v25);
  }
  else
  {
    CharaWipeTimeReverseEffectComponent__EndCreateEffect(this, 0LL, v20);
  }
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnDestroy(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *wipeData; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *figure; // x20
  __int64 v8; // x1
  ServantStatusBattleListViewItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF817 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF817 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37481844(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, 0, v5, v6);
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
      sub_1B64ACC(klass, v8);
    }
    UIStandFigureRender__SetAlpha(klass, 1.0, 0LL);
    p_figure->klass = 0LL;
    sub_1B64814(p_figure, 0, v11, v12);
  }
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnEndEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_49FF816 & 1) == 0 )
  {
    sub_1B64870(&CommonEffectManager_TypeInfo, method);
    byte_49FF816 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnUpdate(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FF818 & 1) == 0 )
  {
    sub_1B64870(&CommonEffectManager_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF818 = 1;
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
      UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeTimeReverseEffectComponent__Resume(
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
void __fastcall CharaWipeTimeReverseEffectComponent__SetTweenColor(
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
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_1B64ACC(0LL, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaWipeTimeReverseEffectComponent__SetTweenVolume(
        CharaWipeTimeReverseEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_1B64ACC(0LL, method);
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeTimeReverseEffectComponent__WipeStart(
        CharaWipeTimeReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UIStandFigureRender_o **p_figure; // x21
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v15; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_49FF813 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, figure);
    sub_1B64870(&Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__, v6);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64870(&StringLiteral_15594/*"Wipe/"*/, v9);
    byte_49FF813 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  if ( this->fields.isSkip )
  {
    if ( !*p_figure )
      sub_1B64ACC(0LL, v11);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.figure, 0, v12, v13);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
  }
  else
  {
    v15 = System_String__Concat_61383576((System_String_o *)StringLiteral_15594/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v15, v16, 1, 0LL);
  }
}