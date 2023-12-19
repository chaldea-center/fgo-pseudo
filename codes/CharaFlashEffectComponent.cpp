void __fastcall CharaFlashEffectComponent___ctor(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_40FCFCF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17364, method);
    byte_40FCFCF = 1;
  }
  this->fields.flashColor = UnityEngine_Color__get_clear(0LL);
  v3 = (System_Int32_array **)StringLiteral_17364;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17364;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.wipeName, v3, v4, v5, v6, v7, v8, v9);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaFlashEffectComponent__EffectResume(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  CharaFlashEffectComponent_c *klass; // x8
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

  if ( (byte_40FCFCB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9967, method);
    byte_40FCFCB = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
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


void __fastcall CharaFlashEffectComponent__EndCreateEffect(
        CharaFlashEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  _BOOL4 isPause; // w8

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
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    CharaFlashEffectComponent__EffectResume(this, v9);
}


void __fastcall CharaFlashEffectComponent__EndLoadWipe(
        CharaFlashEffectComponent_o *this,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  AssetData_o *wipeData; // x22
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v24; // x20
  UnityEngine_Shader_o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UnityEngine_Material_o *v30; // x22
  ExUIMeshRenderer_o *v31; // x0
  struct ExUIMeshRenderer_o *v32; // x0
  ExUIMeshRenderer_o *v33; // x0
  UnityEngine_Material_o *material; // x0
  ExUIMeshRenderer_o *v35; // x0
  UnityEngine_Material_o *v36; // x0
  UIStandFigureRender_o *v37; // x0
  UIStandFigureRender_o *v38; // x0
  UIStandFigureRender_o *v39; // x0
  UIStandFigureRender_o *v40; // x0
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v42; // x2
  UnityEngine_GameObject_o *v43; // x20
  System_String_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  CommonEffectLoadComponent_LoadEndHandler_o *v49; // x22

  if ( (byte_40FCFCA & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D___, data);
    sub_B16FFC(&AssetManager_TypeInfo, v10);
    sub_B16FFC(&Method_CharaFlashEffectComponent_EndCreateEffect__, v11);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v12);
    sub_B16FFC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_4508, v16);
    sub_B16FFC(&StringLiteral_15932, v17);
    sub_B16FFC(&StringLiteral_13498, v18);
    sub_B16FFC(&StringLiteral_4497, v19);
    byte_40FCFCA = 1;
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
    goto LABEL_33;
  this->fields.bodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_33;
  Object_Texture2D = AssetData__GetObject_Texture2D_(
                       data,
                       (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v24 = (UnityEngine_Texture_o *)Object_Texture2D;
  v25 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4497, 0LL);
  v30 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v26, v27, v28, v29);
  UnityEngine_Material___ctor(v30, v25, 0LL);
  if ( !backFlashMesh )
    goto LABEL_33;
  ExUIMeshRenderer__set_material(backFlashMesh, v30, 0LL);
  v31 = this->fields.backFlashMesh;
  if ( !v31 )
    goto LABEL_33;
  ExUIMeshRenderer__SetImage(v31, v24, 0LL);
  v32 = this->fields.backFlashMesh;
  if ( !v32 )
    goto LABEL_33;
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))v32->klass->vtable._39_SetTweenColor.method)(
    v32,
    v32->klass->vtable._40_GetTweenColor.methodPtr,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  v33 = this->fields.backFlashMesh;
  if ( !v33 )
    goto LABEL_33;
  material = ExUIMeshRenderer__get_material(v33, 0LL);
  if ( !material )
    goto LABEL_33;
  if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15932, 0LL) )
  {
    v35 = this->fields.backFlashMesh;
    if ( v35 )
    {
      v36 = ExUIMeshRenderer__get_material(v35, 0LL);
      if ( v36 )
      {
        UnityEngine_Material__SetFloat(v36, (System_String_o *)StringLiteral_15932, 0.2, 0LL);
        goto LABEL_19;
      }
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_19:
  v37 = (UIStandFigureRender_o *)this->fields.figure;
  if ( !v37 )
    goto LABEL_33;
  UIStandFigureRender__SetSharder(v37, (System_String_o *)StringLiteral_4508, 0LL);
  v38 = (UIStandFigureRender_o *)this->fields.figure;
  if ( !v38 )
    goto LABEL_33;
  UIStandFigureRender__SetWipeTexture(v38, v24, 0LL);
  v39 = (UIStandFigureRender_o *)this->fields.figure;
  if ( !v39 )
    goto LABEL_33;
  UIStandFigureRender__SetFilterColor(v39, this->fields.flashColor, 0LL);
  v40 = (UIStandFigureRender_o *)this->fields.figure;
  if ( !v40 )
    goto LABEL_33;
  UIStandFigureRender__SetGradation(v40, 0.2, 0LL);
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
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
    v43 = this->fields.subEffectBase;
    v44 = System_String__Concat_43743732((System_String_o *)StringLiteral_13498, this->fields.subEffectName, 0LL);
    v49 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B170CC(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v45,
                                                          v46,
                                                          v47,
                                                          v48);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v49,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndCreateEffect__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Create_18186748(v43, v44, v49, 0, 0, 0, 0LL);
  }
  else
  {
    CharaFlashEffectComponent__EndCreateEffect(this, 0LL, v42);
  }
}


void __fastcall CharaFlashEffectComponent__FlashStart(
        CharaFlashEffectComponent_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x1
  UIStandFigureRender_o **p_figure; // x20
  _BOOL4 isSkip; // w8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_40FCFC9 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, figure);
    sub_B16FFC(&Method_CharaFlashEffectComponent_EndLoadWipe__, v10);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&ScriptManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_15433, v14);
    sub_B16FFC(&StringLiteral_23180, v15);
    byte_40FCFC9 = 1;
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
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__Fade((System_String_o *)StringLiteral_23180, 0, 0.0, 0LL);
    if ( !*p_figure )
      sub_B170D4();
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.figure, 0LL, v18, v19, v20, v21, v22, v23);
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
    v25 = System_String__Concat_43743732((System_String_o *)StringLiteral_15433, this->fields.wipeName, 0LL);
    v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28, v29);
    AssetLoader_LoadEndDataHandler___ctor(
      v30,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndLoadWipe__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v25, v30, 1, 0LL);
  }
}


void __fastcall CharaFlashEffectComponent__OnDestroy(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ExUIMeshRenderer_o *backFlashMesh; // x0
  struct AssetData_o **p_wipeData; // x20
  UnityEngine_Object_o *material; // x21
  AssetData_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *figure; // x20
  UIStandFigureRender_o **p_figure; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FCFCD & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCFCD = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      goto LABEL_20;
    p_wipeData = &this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(material, 0LL);
    v7 = *p_wipeData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(v7, 0LL);
    *p_wipeData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.wipeData, 0LL, v8, v9, v10, v11, v12, v13);
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
    if ( *p_figure )
    {
      UIStandFigureRender__RecoverSharder(*p_figure, 0LL);
      if ( *p_figure )
      {
        UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
        *p_figure = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)p_figure, 0LL, v16, v17, v18, v19, v20, v21);
        return;
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall CharaFlashEffectComponent__OnEndEffect(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_40FCFCC & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    sub_B16FFC(&ScriptManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_23180, v4);
    byte_40FCFCC = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__Fade((System_String_o *)StringLiteral_23180, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaFlashEffectComponent__OnUpdate(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FCFCE & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&ScriptManager_TypeInfo, v4);
    byte_40FCFCE = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0LL);
  if ( this->fields.isWaitEndEffect )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    if ( !ScriptManager__IsBusyFade(0LL) )
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
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaFlashEffectComponent__Resume(
        CharaFlashEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaFlashEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaFlashEffectComponent__SetTweenColor(
        CharaFlashEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  struct UIStandFigureM_o *figure; // x0
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure
    || (((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
          figure,
          figure->klass->vtable._40_GetTweenColor.methodPtr,
          *(long double *)&c,
          v5,
          v4,
          v3),
        (backFlashMesh = this->fields.backFlashMesh) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, long double, long double, long double, long double))backFlashMesh->klass->vtable._39_SetTweenColor.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaFlashEffectComponent__SetTweenVolume(
        CharaFlashEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  long double v5; // q8
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure
    || (v5 = *(long double *)&v,
        UIStandFigureRender__SetVolume(figure, v, 0LL),
        (backFlashMesh = this->fields.backFlashMesh) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, long double))backFlashMesh->klass->vtable._41_SetTweenVolume.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._42_GetTweenVolume.methodPtr,
    v5);
}