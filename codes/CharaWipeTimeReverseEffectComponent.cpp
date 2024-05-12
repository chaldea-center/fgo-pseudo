void __fastcall CharaWipeTimeReverseEffectComponent___ctor(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438E360 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17780/*"circleOut"*/);
    byte_438E360 = 1;
  }
  this->fields.wipeColor = UnityEngine_Color__get_clear(0LL);
  v3 = (System_Int32_array **)StringLiteral_17780/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17780/*"circleOut"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.wipeName, v3, v4, v5, v6, v7, v8, v9);
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
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438E35C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10181/*"OnEndEffect"*/);
    byte_438E35C = 1;
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
    sub_B7769C(0LL, v6);
  v7 = v5;
  v5->fields.style = 1;
  v8 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v8;
  sub_B77560((BattleServantConfConponent_o *)&v7->fields.eventReceiver, v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Int32_array **)StringLiteral_10181/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10181/*"OnEndEffect"*/;
  sub_B77560((BattleServantConfConponent_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall CharaWipeTimeReverseEffectComponent__EndCreateEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.childEffect,
    (System_Int32_array **)effect,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaWipeTimeReverseEffectComponent__EffectResume(this, v9);
}


void __fastcall CharaWipeTimeReverseEffectComponent__EndLoadWipe(
        CharaWipeTimeReverseEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetData_o *wipeData; // x22
  __int64 v11; // x1
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Vector2_o BodySize; // kr00_8
  float v14; // s0
  UIStandFigureRender_o *v15; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x20
  System_String_o *v19; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v20; // x22

  if ( (byte_438E35B & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D___);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__);
    sub_B775C4(&CommonEffectManager_TypeInfo);
    sub_B775C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_13804/*"Talk/"*/);
    sub_B775C4(&StringLiteral_4669/*"Custom/Sprite-ScriptActionFigureWipe"*/);
    byte_438E35B = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_24402476(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.wipeData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_25;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  this->fields.bodySize.fields.x = BodySize.fields.x;
  figure = (UIStandFigureRender_o *)this->fields.figure;
  v14 = 1.2039 - this->fields.effectRange;
  this->fields.bodySize.fields.y = BodySize.fields.y;
  this->fields.maxAlpha = v14;
  this->fields.addVolume = 0.2;
  if ( !figure )
    goto LABEL_25;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4669/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL);
  if ( !data )
    goto LABEL_25;
  v15 = (UIStandFigureRender_o *)this->fields.figure;
  figure = (UIStandFigureRender_o *)AssetData__GetObject_Texture2D_(
                                      data,
                                      (const MethodInfo_1C5FCD8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v15
    || (UIStandFigureRender__SetWipeTexture(v15, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetGradation(figure, 0.2, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_25:
    sub_B7769C(figure, v11);
  }
  UIStandFigureRender__SetAlpha(figure, 1.0, 0LL);
  ((void (__fastcall *)(CharaWipeTimeReverseEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    0.0);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v18 = this->fields.subEffectBase;
    v19 = System_String__Concat_44901936((System_String_o *)StringLiteral_13804/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B77694(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Create_18004964(v18, v19, v20, 0, 0, 0, 0LL);
  }
  else
  {
    CharaWipeTimeReverseEffectComponent__EndCreateEffect(this, 0LL, v17);
  }
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnDestroy(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *figure; // x20
  __int64 v11; // x1
  BattleServantConfConponent_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438E35E & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E35E = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_24402476(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.wipeData, 0LL, v4, v5, v6, v7, v8, v9);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (BattleServantConfConponent_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_B7769C(klass, v11);
    }
    UIStandFigureRender__SetAlpha(klass, 1.0, 0LL);
    p_figure->klass = 0LL;
    sub_B77560(p_figure, 0LL, v14, v15, v16, v17, v18, v19);
  }
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnEndEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_438E35D & 1) == 0 )
  {
    sub_B775C4(&CommonEffectManager_TypeInfo);
    byte_438E35D = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnUpdate(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_438E35F & 1) == 0 )
  {
    sub_B775C4(&CommonEffectManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E35F = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0LL);
  if ( this->fields.isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    if ( !CommonEffectManager__IsBusy(subEffectBase, 0LL) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
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
    sub_B7769C(0LL, v8);
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
    sub_B7769C(0LL, method);
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeTimeReverseEffectComponent__WipeStart(
        CharaWipeTimeReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UIStandFigureRender_o **p_figure; // x21
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v19; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_438E35A & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_15787/*"Wipe/"*/);
    byte_438E35A = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.figure,
    (System_Int32_array **)figure,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.isSkip )
  {
    if ( !*p_figure )
      sub_B7769C(0LL, v11);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.figure, 0LL, v12, v13, v14, v15, v16, v17);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  else
  {
    v19 = System_String__Concat_44901936((System_String_o *)StringLiteral_15787/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
  }
}