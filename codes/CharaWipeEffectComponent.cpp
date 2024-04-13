void __fastcall CharaWipeEffectComponent___ctor(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array **v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E970F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17650/*"circleOut"*/, (_DWORD)method, v2, v3);
    byte_42E970F = 1;
  }
  this->fields.wipeColor = UnityEngine_Color__get_clear(0LL);
  v5 = (System_Int32_array **)StringLiteral_17650/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17650/*"circleOut"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.wipeName, v5, v6, v7, v8, v9, v10, v11);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaWipeEffectComponent__EffectResume(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CharaWipeEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v7; // x0
  __int64 v8; // x1
  TweenRenderVolume_o *v9; // x20
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E970B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10105/*"OnEndEffect"*/, (_DWORD)method, v2, v3);
    byte_42E970B = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  v9 = v7;
  v7->fields.style = 1;
  v10 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v10;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_10105/*"OnEndEffect"*/;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10105/*"OnEndEffect"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v17, v18, v19, v20, v21, v22, v23);
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
  sub_B5D560(
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  AssetData_o *wipeData; // x22
  __int64 v32; // x1
  UIStandFigureRender_o *figure; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v35; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v37; // x2
  UnityEngine_GameObject_o *v38; // x20
  System_String_o *v39; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v40; // x22

  if ( (byte_42E970A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_CharaWipeEffectComponent_EndCreateEffect__, v13, v14, v15);
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_13710/*"Talk/"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_4607/*"Custom/Sprite-ScriptActionFigureWipe"*/, v28, v29, v30);
    byte_42E970A = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_B5D560(
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
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !figure
    || (UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4607/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL), !data)
    || (v35 = (UIStandFigureRender_o *)this->fields.figure,
        figure = (UIStandFigureRender_o *)AssetData__GetObject_Texture2D_(
                                            data,
                                            (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___),
        !v35)
    || (UIStandFigureRender__SetWipeTexture(v35, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(figure, v32);
  }
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
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
    v38 = this->fields.subEffectBase;
    v39 = System_String__Concat_44577788((System_String_o *)StringLiteral_13710/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v40 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B5D694(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v40,
      (Il2CppObject *)this,
      Method_CharaWipeEffectComponent_EndCreateEffect__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Create_18151128(v38, v39, v40, 0, 0, 0, 0LL);
  }
  else
  {
    CharaWipeEffectComponent__EndCreateEffect(this, 0LL, v37);
  }
}


void __fastcall CharaWipeEffectComponent__OnDestroy(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AssetData_o *wipeData; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *figure; // x20
  __int64 v16; // x1
  BattleServantConfConponent_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E970D & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E970D = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.wipeData, 0LL, v9, v10, v11, v12, v13, v14);
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
      sub_B5D69C(klass, v16);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_B5D560(p_figure, 0LL, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall CharaWipeEffectComponent__OnEndEffect(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_42E970C & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E970C = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E970E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E970E = 1;
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
    sub_B5D69C(0LL, v8);
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
    sub_B5D69C(0LL, method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UIStandFigureRender_o **p_figure; // x21
  __int64 v23; // x1
  _BOOL4 isSkip; // w8
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v32; // x20
  AssetLoader_LoadEndDataHandler_o *v33; // x21

  if ( (byte_42E9709 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)figure, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaWipeEffectComponent_EndLoadWipe__, v10, v11, v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_15686/*"Wipe/"*/, v19, v20, v21);
    byte_42E9709 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_B5D560(
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
      sub_B5D69C(0LL, v23);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.figure, 0LL, v25, v26, v27, v28, v29, v30);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  else
  {
    v32 = System_String__Concat_44577788((System_String_o *)StringLiteral_15686/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v33, (Il2CppObject *)this, Method_CharaWipeEffectComponent_EndLoadWipe__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v32, v33, 1, 0LL);
  }
}