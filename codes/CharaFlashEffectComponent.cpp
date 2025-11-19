void CharaFlashEffectComponent___ctor(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB7934 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17986/*"circleIn"*/);
    byte_4CB7934 = 1;
  }
  *(_QWORD *)&this->fields.flashColor.fields.r = 0;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0;
  v5 = StringLiteral_17986/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17986/*"circleIn"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wipeName, v5, v2, v3);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaFlashEffectComponent__EffectResume(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  CharaFlashEffectComponent_c *klass; // x8
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

  if ( (byte_4CB7930 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9897/*"OnEndEffect"*/);
    byte_4CB7930 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0);
  if ( !v5 )
    sub_1C6BC60(0, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7->fields.eventReceiver = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9897/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9897/*"OnEndEffect"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void CharaFlashEffectComponent__EndCreateEffect(
        CharaFlashEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  _BOOL4 isPause; // w8

  this->fields.childEffect = effect;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    CharaFlashEffectComponent__EffectResume(this, v5);
}


void CharaFlashEffectComponent__EndLoadWipe(
        CharaFlashEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *wipeData; // x22
  __int64 v7; // x1
  UIStandFigureRender_o *figure; // x0
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v11; // x20
  UnityEngine_Shader_o *v12; // x23
  UnityEngine_Material_o *v13; // x22
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *v16; // x20
  System_String_o *v17; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v18; // x22

  if ( (byte_4CB792F & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D___);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CharaFlashEffectComponent_EndCreateEffect__);
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    sub_1C6BA08(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_4915/*"Custom/Sprite-ScriptActionFigureFlash"*/);
    sub_1C6BA08(&StringLiteral_16229/*"_Gradation"*/);
    sub_1C6BA08(&StringLiteral_13632/*"Talk/"*/);
    sub_1C6BA08(&StringLiteral_4898/*"Custom/BackFlashSheder"*/);
    byte_4CB792F = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40765532(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  this->fields.bodySize = UIStandFigureRender__GetBodySize(figure, 0);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_30;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_311C2F8 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v11 = (UnityEngine_Texture_o *)Object_object;
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4898/*"Custom/BackFlashSheder"*/, 0);
  v13 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0);
  if ( !backFlashMesh )
    goto LABEL_30;
  ExUIMeshRenderer__set_material(backFlashMesh, v13, 0);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  ExUIMeshRenderer__SetImage((ExUIMeshRenderer_o *)figure, v11, 0);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float, float, float, float))figure->klass->vtable._39_SetTweenColor.methodPtr)(
    figure,
    figure->klass->vtable._39_SetTweenColor.method,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0);
  if ( !figure )
    goto LABEL_30;
  if ( UnityEngine_Material__HasProperty_71525148(
         (UnityEngine_Material_o *)figure,
         (System_String_o *)StringLiteral_16229/*"_Gradation"*/,
         0) )
  {
    figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
    if ( figure )
    {
      figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0);
      if ( figure )
      {
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)figure, (System_String_o *)StringLiteral_16229/*"_Gradation"*/, 0.2, 0);
        goto LABEL_18;
      }
    }
LABEL_30:
    sub_1C6BC60(figure, v7);
  }
LABEL_18:
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4915/*"Custom/Sprite-ScriptActionFigureFlash"*/, 0);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetWipeTexture(figure, v11, 0);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetFilterColor(figure, this->fields.flashColor, 0);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetGradation(figure, 0.2, 0);
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, const MethodInfo *, float))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    1.2039);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    v16 = this->fields.subEffectBase;
    v17 = System_String__Concat_63966792((System_String_o *)StringLiteral_13632/*"Talk/"*/, this->fields.subEffectName, 0);
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C6BC54(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v18,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndCreateEffect__,
      0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_43999448(v16, v17, v18, 0, 0, 0, 0);
  }
  else
  {
    CharaFlashEffectComponent__EndCreateEffect(this, 0, v15);
  }
}


void CharaFlashEffectComponent__FlashStart(
        CharaFlashEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UIStandFigureRender_o **p_figure; // x20
  _BOOL4 isSkip; // w8
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_4CB792E & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CharaFlashEffectComponent_EndLoadWipe__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ScriptManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_15656/*"Wipe/"*/);
    sub_1C6BA08(&StringLiteral_24924/*"white"*/);
    byte_4CB792E = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__Fade((System_String_o *)StringLiteral_24924/*"white"*/, 0, 0.0, 0);
    if ( !*p_figure )
      sub_1C6BC60(0, v8);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0);
    this->fields.figure = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.figure, 0, v9, v10);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
  }
  else
  {
    v12 = System_String__Concat_63966792((System_String_o *)StringLiteral_15656/*"Wipe/"*/, this->fields.wipeName, 0);
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_CharaFlashEffectComponent_EndLoadWipe__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v12, v13, 1, 0);
  }
}


void CharaFlashEffectComponent__OnDestroy(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *backFlashMesh; // x0
  struct AssetData_o **p_wipeData; // x20
  UnityEngine_Object_o *material; // x21
  AssetData_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *figure; // x20
  CGThumbnailListItem_o *p_figure; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB7932 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7932 = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      goto LABEL_17;
    p_wipeData = &this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(material, 0);
    v6 = *p_wipeData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40765532(v6, 0);
    *p_wipeData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.wipeData, 0, v7, v8);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    p_figure = (CGThumbnailListItem_o *)&this->fields.figure;
    backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
    if ( p_figure->klass )
    {
      UIStandFigureRender__RecoverSharder((UIStandFigureRender_o *)backFlashMesh, 0);
      backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
      if ( p_figure->klass )
      {
        UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)backFlashMesh, 0.0, 0);
        p_figure->klass = 0;
        sub_1C6B9AC(p_figure, 0, v11, v12);
        return;
      }
    }
LABEL_17:
    sub_1C6BC60(backFlashMesh, method);
  }
}


void CharaFlashEffectComponent__OnEndEffect(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4CB7931 & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    sub_1C6BA08(&ScriptManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_24924/*"white"*/);
    byte_4CB7931 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__Fade((System_String_o *)StringLiteral_24924/*"white"*/, 0, 1.0, 0);
  this->fields.isWaitEndEffect = 1;
}


void CharaFlashEffectComponent__OnUpdate(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB7933 & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ScriptManager_TypeInfo);
    byte_4CB7933 = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0);
  if ( this->fields.isWaitEndEffect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !ScriptManager__IsBusyFade(0) )
    {
      subEffectBase = this->fields.subEffectBase;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      if ( !CommonEffectManager__IsBusy(subEffectBase, 0) )
      {
        this->fields.isWaitEndEffect = 0;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676(gameObject, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaFlashEffectComponent__Resume(CharaFlashEffectComponent_o *this, bool isSkip, const MethodInfo *method)
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
void CharaFlashEffectComponent__SetTweenColor(
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
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  figure = this->fields.figure;
  if ( !figure
    || ((*(void (__fastcall **)(void *, _QWORD, long double, long double, long double, long double))(*(_QWORD *)figure + 936LL))(
          figure,
          *(_QWORD *)(*(_QWORD *)figure + 944LL),
          *(long double *)&c,
          v5,
          v4,
          v3),
        (figure = this->fields.backFlashMesh) == 0) )
  {
    sub_1C6BC60(figure, v8);
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
void CharaFlashEffectComponent__SetTweenVolume(CharaFlashEffectComponent_o *this, float v, const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  long double v5; // q8

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure
    || (v5 = *(long double *)&v,
        UIStandFigureRender__SetVolume(figure, v, 0),
        (figure = (UIStandFigureRender_o *)this->fields.backFlashMesh) == 0) )
  {
    sub_1C6BC60(figure, method);
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double))figure->klass->vtable._41_SetTweenVolume.methodPtr)(
    figure,
    figure->klass->vtable._41_SetTweenVolume.method,
    v5);
}