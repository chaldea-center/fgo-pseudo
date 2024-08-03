void __fastcall CharaWipeTimeEffectComponent___ctor(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FD719 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17904/*"circleOut"*/, method);
    byte_49FD719 = 1;
  }
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0LL;
  v5 = StringLiteral_17904/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17904/*"circleOut"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wipeName, v5, v2, v3);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaWipeTimeEffectComponent__EffectResume(
        CharaWipeTimeEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaWipeTimeEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  TweenRenderVolume_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD715 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9850/*"OnEndEffect"*/, method);
    byte_49FD715 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeTimeEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v5 )
    sub_1B64324(0LL);
  v6 = v5;
  v5->fields.method = 1;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6->fields.eventReceiver = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.eventReceiver, (int32_t)v7, v8, v9);
  v10 = StringLiteral_9850/*"OnEndEffect"*/;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9850/*"OnEndEffect"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.callWhenFinished, v10, v11, v12);
}


void __fastcall CharaWipeTimeEffectComponent__EndCreateEffect(
        CharaWipeTimeEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaWipeTimeEffectComponent__EffectResume(this, v5);
}


void __fastcall CharaWipeTimeEffectComponent__EndLoadWipe(
        CharaWipeTimeEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  long double v4; // q8
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  AssetData_o *wipeData; // x22
  UIStandFigureRender_o *figure; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v17; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  System_String_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  CommonEffectLoadComponent_LoadEndHandler_o *v24; // x22
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x6

  if ( (byte_49FD714 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D___, data);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&Method_CharaWipeTimeEffectComponent_EndCreateEffect__, v8);
    sub_1B640C8(&CommonEffectManager_TypeInfo, v9);
    sub_1B640C8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_13467/*"Talk/"*/, v12);
    sub_1B640C8(&StringLiteral_4950/*"Custom/Sprite-ScriptActionFigureWipe"*/, v13);
    byte_49FD714 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_21;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  *(float *)&v4 = this->fields.effectRange;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !figure
    || (UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4950/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL), !data)
    || (v17 = (UIStandFigureRender_o *)this->fields.figure,
        figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                            data,
                                            (const MethodInfo_2E1B914 *)Method_AssetData_GetObject_Texture2D___),
        !v17)
    || (UIStandFigureRender__SetWipeTexture(v17, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_21:
    sub_1B64324(figure);
  }
  *(float *)&v4 = 1.2039 - *(float *)&v4;
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
  ((void (__fastcall *)(CharaWipeTimeEffectComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    v4);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v20 = this->fields.subEffectBase;
    v21 = System_String__Concat_61375396((System_String_o *)StringLiteral_13467/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v24 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B64314(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v22,
                                                          v23);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v24,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndCreateEffect__,
      v25);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_40285436(v20, v21, v24, 0, 0, 0, v26);
  }
  else
  {
    CharaWipeTimeEffectComponent__EndCreateEffect(this, 0LL, v19);
  }
}


void __fastcall CharaWipeTimeEffectComponent__OnDestroy(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *wipeData; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *figure; // x20
  ServantStatusBattleListViewItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FD717 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FD717 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, 0, v5, v6);
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
      sub_1B64324(klass);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_1B6406C(p_figure, 0, v10, v11);
  }
}


void __fastcall CharaWipeTimeEffectComponent__OnEndEffect(
        CharaWipeTimeEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_49FD716 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    byte_49FD716 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaWipeTimeEffectComponent__OnUpdate(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FD718 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FD718 = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeTimeEffectComponent__Resume(
        CharaWipeTimeEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
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
void __fastcall CharaWipeTimeEffectComponent__SetTweenColor(
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
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaWipeTimeEffectComponent__SetTweenVolume(
        CharaWipeTimeEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_1B64324(0LL);
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeTimeEffectComponent__WipeStart(
        CharaWipeTimeEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UIStandFigureRender_o **p_figure; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_49FD713 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, figure);
    sub_1B640C8(&Method_CharaWipeTimeEffectComponent_EndLoadWipe__, v6);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_15592/*"Wipe/"*/, v9);
    byte_49FD713 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  if ( this->fields.isSkip )
  {
    if ( !*p_figure )
      sub_1B64324(0LL);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.figure, 0, v11, v12);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  else
  {
    v14 = System_String__Concat_61375396((System_String_o *)StringLiteral_15592/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndLoadWipe__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v14, v17, 1, 0LL);
  }
}