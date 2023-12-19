void __fastcall CharaWipeEffectComponent___ctor(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_40FAF09 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17365, method);
    byte_40FAF09 = 1;
  }
  this->fields.wipeColor = UnityEngine_Color__get_clear(0LL);
  v3 = (System_Int32_array **)StringLiteral_17365;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17365;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.wipeName, v3, v4, v5, v6, v7, v8, v9);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaWipeEffectComponent__EffectResume(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  CharaWipeEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  TweenRenderVolume_o *v6; // x20
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FAF05 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9967, method);
    byte_40FAF05 = 1;
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
    sub_B170D4();
  v6 = v5;
  v5->fields.style = 1;
  v7 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v6->fields.eventReceiver, v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Int32_array **)StringLiteral_9967;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9967;
  sub_B16F98((BattleServantConfConponent_o *)&v6->fields.callWhenFinished, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall CharaWipeEffectComponent__EndCreateEffect(
        CharaWipeEffectComponent_o *this,
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.childEffect,
    (System_Int32_array **)effect,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaWipeEffectComponent__EffectResume(this, v9);
}


void __fastcall CharaWipeEffectComponent__EndLoadWipe(
        CharaWipeEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  AssetData_o *wipeData; // x22
  UIStandFigureRender_o *figure; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v20; // x0
  UIStandFigureRender_o *v21; // x21
  UnityEngine_Texture_o *Object_Texture2D; // x0
  UIStandFigureRender_o *v23; // x0
  UIStandFigureRender_o *v24; // x0
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v26; // x2
  UnityEngine_GameObject_o *v27; // x20
  System_String_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  CommonEffectLoadComponent_LoadEndHandler_o *v33; // x22

  if ( (byte_40FAF04 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D___, data);
    sub_B16FFC(&AssetManager_TypeInfo, v10);
    sub_B16FFC(&Method_CharaWipeEffectComponent_EndCreateEffect__, v11);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v12);
    sub_B16FFC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_13498, v15);
    sub_B16FFC(&StringLiteral_4517, v16);
    byte_40FAF04 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_B16F98(
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
  v20 = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !v20
    || (UIStandFigureRender__SetSharder(v20, (System_String_o *)StringLiteral_4517, 0LL), !data)
    || (v21 = (UIStandFigureRender_o *)this->fields.figure,
        Object_Texture2D = (UnityEngine_Texture_o *)AssetData__GetObject_Texture2D_(
                                                      data,
                                                      (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_Texture2D___),
        !v21)
    || (UIStandFigureRender__SetWipeTexture(v21, Object_Texture2D, 0LL),
        (v23 = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(v23, this->fields.wipeColor, 0LL),
        (v24 = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  UIStandFigureRender__SetGradation(v24, 0.2, 0LL);
  ((void (__fastcall *)(CharaWipeEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v27 = this->fields.subEffectBase;
    v28 = System_String__Concat_43743732((System_String_o *)StringLiteral_13498, this->fields.subEffectName, 0LL);
    v33 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B170CC(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v29,
                                                          v30,
                                                          v31,
                                                          v32);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v33,
      (Il2CppObject *)this,
      Method_CharaWipeEffectComponent_EndCreateEffect__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Create_18186748(v27, v28, v33, 0, 0, 0, 0LL);
  }
  else
  {
    CharaWipeEffectComponent__EndCreateEffect(this, 0LL, v26);
  }
}


void __fastcall CharaWipeEffectComponent__OnDestroy(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *wipeData; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *figure; // x20
  UIStandFigureRender_o **p_figure; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FAF07 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FAF07 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.wipeData, 0LL, v5, v6, v7, v8, v9, v10);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (UIStandFigureRender_o **)&this->fields.figure;
    if ( !*p_figure || (UIStandFigureRender__RecoverSharder(*p_figure, 0LL), !*p_figure) )
      sub_B170D4();
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    *p_figure = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_figure, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


void __fastcall CharaWipeEffectComponent__OnEndEffect(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_40FAF06 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    byte_40FAF06 = 1;
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


void __fastcall CharaWipeEffectComponent__OnUpdate(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FAF08 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FAF08 = 1;
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
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_B170D4();
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
    sub_B170D4();
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeEffectComponent__WipeStart(
        CharaWipeEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UIStandFigureRender_o **p_figure; // x21
  _BOOL4 isSkip; // w8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_40FAF03 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, figure);
    sub_B16FFC(&Method_CharaWipeEffectComponent_EndLoadWipe__, v10);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_15433, v13);
    byte_40FAF03 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.figure,
    (System_Int32_array **)figure,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !*p_figure )
      sub_B170D4();
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.figure, 0LL, v16, v17, v18, v19, v20, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  else
  {
    v23 = System_String__Concat_43743732((System_String_o *)StringLiteral_15433, this->fields.wipeName, 0LL);
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26, v27);
    AssetLoader_LoadEndDataHandler___ctor(v28, (Il2CppObject *)this, Method_CharaWipeEffectComponent_EndLoadWipe__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v23, v28, 1, 0LL);
  }
}