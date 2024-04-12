void __fastcall CharaFlashEffectComponent___ctor(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B174B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17555/*"circleIn"*/);
    byte_42B174B = 1;
  }
  this->fields.flashColor = UnityEngine_Color__get_clear(0LL);
  v3 = (System_Int32_array **)StringLiteral_17555/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17555/*"circleIn"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.wipeName, v3, v4, v5, v6, v7, v8, v9);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaFlashEffectComponent__EffectResume(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  CharaFlashEffectComponent_c *klass; // x8
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

  if ( (byte_42B1747 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10063/*"OnEndEffect"*/);
    byte_42B1747 = 1;
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
  sub_B52920(
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
  AssetData_o *wipeData; // x22
  __int64 v11; // x1
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x23
  UnityEngine_Material_o *v17; // x22
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  System_String_o *v21; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v22; // x22

  if ( (byte_42B1746 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D___);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CharaFlashEffectComponent_EndCreateEffect__);
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_4565/*"Custom/Sprite-ScriptActionFigureFlash"*/);
    sub_B52984(&StringLiteral_16102/*"_Gradation"*/);
    sub_B52984(&StringLiteral_13651/*"Talk/"*/);
    sub_B52984(&StringLiteral_4553/*"Custom/BackFlashSheder"*/);
    byte_42B1746 = 1;
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
    goto LABEL_33;
  this->fields.bodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_33;
  Object_Texture2D = AssetData__GetObject_Texture2D_(
                       data,
                       (const MethodInfo_1A3B800 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v15 = (UnityEngine_Texture_o *)Object_Texture2D;
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4553/*"Custom/BackFlashSheder"*/, 0LL);
  v17 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0LL);
  if ( !backFlashMesh )
    goto LABEL_33;
  ExUIMeshRenderer__set_material(backFlashMesh, v17, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_33;
  ExUIMeshRenderer__SetImage((ExUIMeshRenderer_o *)figure, v15, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_33;
  ((void (__fastcall *)(UIStandFigureRender_o *, Il2CppMethodPointer, float, float, float, float))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_33;
  figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0LL);
  if ( !figure )
    goto LABEL_33;
  if ( UnityEngine_Material__HasProperty_41519220(
         (UnityEngine_Material_o *)figure,
         (System_String_o *)StringLiteral_16102/*"_Gradation"*/,
         0LL) )
  {
    figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
    if ( figure )
    {
      figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0LL);
      if ( figure )
      {
        UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)figure,
          (System_String_o *)StringLiteral_16102/*"_Gradation"*/,
          0.2,
          0LL);
        goto LABEL_19;
      }
    }
LABEL_33:
    sub_B52A5C(figure, v11);
  }
LABEL_19:
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_33;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4565/*"Custom/Sprite-ScriptActionFigureFlash"*/, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_33;
  UIStandFigureRender__SetWipeTexture(figure, v15, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_33;
  UIStandFigureRender__SetFilterColor(figure, this->fields.flashColor, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_33;
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
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
    v20 = this->fields.subEffectBase;
    v21 = System_String__Concat_44568316((System_String_o *)StringLiteral_13651/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v22 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B52A54(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndCreateEffect__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Create_18107188(v20, v21, v22, 0, 0, 0, 0LL);
  }
  else
  {
    CharaFlashEffectComponent__EndCreateEffect(this, 0LL, v19);
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
  UIStandFigureRender_o **p_figure; // x20
  _BOOL4 isSkip; // w8
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_42B1745 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CharaFlashEffectComponent_EndLoadWipe__);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&StringLiteral_15601/*"Wipe/"*/);
    sub_B52984(&StringLiteral_23467/*"white"*/);
    byte_42B1745 = 1;
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
    ScriptManager__Fade((System_String_o *)StringLiteral_23467/*"white"*/, 0, 0.0, 0LL);
    if ( !*p_figure )
      sub_B52A5C(0LL, v12);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.figure, 0LL, v13, v14, v15, v16, v17, v18);
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
    v20 = System_String__Concat_44568316((System_String_o *)StringLiteral_15601/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndLoadWipe__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
  }
}


void __fastcall CharaFlashEffectComponent__OnDestroy(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *backFlashMesh; // x0
  struct AssetData_o **p_wipeData; // x20
  UnityEngine_Object_o *material; // x21
  AssetData_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *figure; // x20
  BattleServantConfConponent_o *p_figure; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42B1749 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1749 = 1;
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
    UnityEngine_Object__Destroy_35616956(material, 0LL);
    v6 = *p_wipeData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30359936(v6, 0LL);
    *p_wipeData = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.wipeData, 0LL, v7, v8, v9, v10, v11, v12);
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
    backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
    if ( p_figure->klass )
    {
      UIStandFigureRender__RecoverSharder((UIStandFigureRender_o *)backFlashMesh, 0LL);
      backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
      if ( p_figure->klass )
      {
        UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)backFlashMesh, 0.0, 0LL);
        p_figure->klass = 0LL;
        sub_B52920(p_figure, 0LL, v15, v16, v17, v18, v19, v20);
        return;
      }
    }
LABEL_20:
    sub_B52A5C(backFlashMesh, method);
  }
}


void __fastcall CharaFlashEffectComponent__OnEndEffect(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_42B1748 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&StringLiteral_23467/*"white"*/);
    byte_42B1748 = 1;
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
  ScriptManager__Fade((System_String_o *)StringLiteral_23467/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaFlashEffectComponent__OnUpdate(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42B174A & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    byte_42B174A = 1;
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
        UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
  __int64 v8; // x1
  void *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure
    || ((*(void (__fastcall **)(void *, _QWORD, long double, long double, long double, long double))(*(_QWORD *)figure + 936LL))(
          figure,
          *(_QWORD *)(*(_QWORD *)figure + 944LL),
          *(long double *)&c,
          v5,
          v4,
          v3),
        (figure = this->fields.backFlashMesh) == 0LL) )
  {
    sub_B52A5C(figure, v8);
  }
  (*(void (__fastcall **)(void *, _QWORD, long double, long double, long double, long double))(*(_QWORD *)figure + 936LL))(
    figure,
    *(_QWORD *)(*(_QWORD *)figure + 944LL),
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

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure
    || (v5 = *(long double *)&v,
        UIStandFigureRender__SetVolume(figure, v, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.backFlashMesh) == 0LL) )
  {
    sub_B52A5C(figure, method);
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, Il2CppMethodPointer, long double))figure->klass->vtable._41_SetTweenVolume.method)(
    figure,
    figure->klass->vtable._42_GetTweenVolume.methodPtr,
    v5);
}