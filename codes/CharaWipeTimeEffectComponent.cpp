void __fastcall CharaWipeTimeEffectComponent___ctor(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AFE09 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17556/*"circleOut"*/);
    byte_42AFE09 = 1;
  }
  this->fields.wipeColor = UnityEngine_Color__get_clear(0LL);
  v3 = (System_Int32_array **)StringLiteral_17556/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17556/*"circleOut"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.wipeName, v3, v4, v5, v6, v7, v8, v9);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaWipeTimeEffectComponent__EffectResume(
        CharaWipeTimeEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaWipeTimeEffectComponent_c *klass; // x8
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

  if ( (byte_42AFE05 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10063/*"OnEndEffect"*/);
    byte_42AFE05 = 1;
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
    sub_B52A5C(0LL, v6);
  v7 = v5;
  v5->fields.style = 1;
  v8 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v8;
  sub_B52920((BattleServantConfConponent_o *)&v7->fields.eventReceiver, v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Int32_array **)StringLiteral_10063/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10063/*"OnEndEffect"*/;
  sub_B52920((BattleServantConfConponent_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall CharaWipeTimeEffectComponent__EndCreateEffect(
        CharaWipeTimeEffectComponent_o *this,
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.childEffect,
    (System_Int32_array **)effect,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaWipeTimeEffectComponent__EffectResume(this, v9);
}


void __fastcall CharaWipeTimeEffectComponent__EndLoadWipe(
        CharaWipeTimeEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  long double v8; // q8
  AssetData_o *wipeData; // x22
  __int64 v12; // x1
  UIStandFigureRender_o *figure; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v15; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x20
  System_String_o *v19; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v20; // x22

  if ( (byte_42AFE04 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D___);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CharaWipeTimeEffectComponent_EndCreateEffect__);
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_13651/*"Talk/"*/);
    sub_B52984(&StringLiteral_4574/*"Custom/Sprite-ScriptActionFigureWipe"*/);
    byte_42AFE04 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30359936(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_B52920(
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
    goto LABEL_24;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  *(float *)&v8 = this->fields.effectRange;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !figure
    || (UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4574/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL), !data)
    || (v15 = (UIStandFigureRender_o *)this->fields.figure,
        figure = (UIStandFigureRender_o *)AssetData__GetObject_Texture2D_(
                                            data,
                                            (const MethodInfo_1A3B800 *)Method_AssetData_GetObject_Texture2D___),
        !v15)
    || (UIStandFigureRender__SetWipeTexture(v15, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_24:
    sub_B52A5C(figure, v12);
  }
  *(float *)&v8 = 1.2039 - *(float *)&v8;
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
  ((void (__fastcall *)(CharaWipeTimeEffectComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    v8);
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
    v19 = System_String__Concat_44568316((System_String_o *)StringLiteral_13651/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B52A54(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndCreateEffect__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Create_18107188(v18, v19, v20, 0, 0, 0, 0LL);
  }
  else
  {
    CharaWipeTimeEffectComponent__EndCreateEffect(this, 0LL, v17);
  }
}


void __fastcall CharaWipeTimeEffectComponent__OnDestroy(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_42AFE07 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFE07 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30359936(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.wipeData, 0LL, v4, v5, v6, v7, v8, v9);
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
      sub_B52A5C(klass, v11);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_B52920(p_figure, 0LL, v14, v15, v16, v17, v18, v19);
  }
}


void __fastcall CharaWipeTimeEffectComponent__OnEndEffect(
        CharaWipeTimeEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_42AFE06 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AFE06 = 1;
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


void __fastcall CharaWipeTimeEffectComponent__OnUpdate(CharaWipeTimeEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AFE08 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFE08 = 1;
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
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
  __int64 v8; // x1
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_B52A5C(0LL, v8);
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
    sub_B52A5C(0LL, method);
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeTimeEffectComponent__WipeStart(
        CharaWipeTimeEffectComponent_o *this,
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

  if ( (byte_42AFE03 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CharaWipeTimeEffectComponent_EndLoadWipe__);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_15601/*"Wipe/"*/);
    byte_42AFE03 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_B52920(
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
      sub_B52A5C(0LL, v11);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.figure, 0LL, v12, v13, v14, v15, v16, v17);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  else
  {
    v19 = System_String__Concat_44568316((System_String_o *)StringLiteral_15601/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CharaWipeTimeEffectComponent_EndLoadWipe__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
  }
}