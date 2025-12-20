void CharaFlashEffectComponent___ctor(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2DEFA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18061/*"circleIn"*/);
    byte_4D2DEFA = 1;
  }
  *(_QWORD *)&this->fields.flashColor.fields.r = 0;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0;
  v9 = StringLiteral_18061/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_18061/*"circleIn"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.wipeName, v9, v2, v3, v4, v5, v6, v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D2DEF6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9923/*"OnEndEffect"*/);
    byte_4D2DEF6 = 1;
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
    sub_1C942F0(0, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7->fields.eventReceiver = v8;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_9923/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9923/*"OnEndEffect"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
}


void CharaFlashEffectComponent__EndCreateEffect(
        CharaFlashEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1
  _BOOL4 isPause; // w8

  this->fields.childEffect = effect;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.childEffect,
    (int32_t)effect,
    (int32_t)method,
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


void CharaFlashEffectComponent__EndLoadWipe(
        CharaFlashEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *wipeData; // x22
  __int64 v11; // x1
  UIStandFigureRender_o *figure; // x0
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x23
  UnityEngine_Material_o *v17; // x22
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  System_String_o *v21; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v22; // x22

  if ( (byte_4D2DEF5 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D___);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_CharaFlashEffectComponent_EndCreateEffect__);
    sub_1C94098(&CommonEffectManager_TypeInfo);
    sub_1C94098(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_4928/*"Custom/Sprite-ScriptActionFigureFlash"*/);
    sub_1C94098(&StringLiteral_16292/*"_Gradation"*/);
    sub_1C94098(&StringLiteral_13685/*"Talk/"*/);
    sub_1C94098(&StringLiteral_4911/*"Custom/BackFlashSheder"*/);
    byte_4D2DEF5 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41285308(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  this->fields.bodySize = UIStandFigureRender__GetBodySize(figure, 0);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_30;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_317D284 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v15 = (UnityEngine_Texture_o *)Object_object;
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4911/*"Custom/BackFlashSheder"*/, 0);
  v17 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0);
  if ( !backFlashMesh )
    goto LABEL_30;
  ExUIMeshRenderer__set_material(backFlashMesh, v17, 0);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  ExUIMeshRenderer__SetImage((ExUIMeshRenderer_o *)figure, v15, 0);
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
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)figure,
         (System_String_o *)StringLiteral_16292/*"_Gradation"*/,
         0) )
  {
    figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
    if ( figure )
    {
      figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0);
      if ( figure )
      {
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)figure, (System_String_o *)StringLiteral_16292/*"_Gradation"*/, 0.2, 0);
        goto LABEL_18;
      }
    }
LABEL_30:
    sub_1C942F0(figure, v11);
  }
LABEL_18:
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4928/*"Custom/Sprite-ScriptActionFigureFlash"*/, 0);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetWipeTexture(figure, v15, 0);
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
    v20 = this->fields.subEffectBase;
    v21 = System_String__Concat_64417744((System_String_o *)StringLiteral_13685/*"Talk/"*/, this->fields.subEffectName, 0);
    v22 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C942E4(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndCreateEffect__,
      0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_44542236(v20, v21, v22, 0, 0, 0, 0);
  }
  else
  {
    CharaFlashEffectComponent__EndCreateEffect(this, 0, v19);
  }
}


void CharaFlashEffectComponent__FlashStart(
        CharaFlashEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UIStandFigureRender_o **p_figure; // x20
  _BOOL4 isSkip; // w8
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4D2DEF4 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_CharaFlashEffectComponent_EndLoadWipe__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ScriptManager_TypeInfo);
    sub_1C94098(&StringLiteral_15716/*"Wipe/"*/);
    sub_1C94098(&StringLiteral_25066/*"white"*/);
    byte_4D2DEF4 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3, v4, v5, v6, v7);
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__Fade((System_String_o *)StringLiteral_25066/*"white"*/, 0, 0.0, 0);
    if ( !*p_figure )
      sub_1C942F0(0, v12);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0);
    this->fields.figure = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.figure, 0, v13, v14, v15, v16, v17, v18);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
  }
  else
  {
    v20 = System_String__Concat_64417744((System_String_o *)StringLiteral_15716/*"Wipe/"*/, this->fields.wipeName, 0);
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_CharaFlashEffectComponent_EndLoadWipe__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v20, v21, 1, 0);
  }
}


void CharaFlashEffectComponent__OnDestroy(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *backFlashMesh; // x0
  struct AssetData_o **p_wipeData; // x20
  UnityEngine_Object_o *material; // x21
  AssetData_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Object_o *figure; // x20
  GrandQuestFolderBoardItem_o *p_figure; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D2DEF8 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DEF8 = 1;
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
    UnityEngine_Object__Destroy_72110972(material, 0);
    v6 = *p_wipeData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41285308(v6, 0);
    *p_wipeData = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.wipeData, 0, v7, v8, v9, v10, v11, v12);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    p_figure = (GrandQuestFolderBoardItem_o *)&this->fields.figure;
    backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
    if ( p_figure->klass )
    {
      UIStandFigureRender__RecoverSharder((UIStandFigureRender_o *)backFlashMesh, 0);
      backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
      if ( p_figure->klass )
      {
        UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)backFlashMesh, 0.0, 0);
        p_figure->klass = 0;
        sub_1C9403C(p_figure, 0, v15, v16, v17, v18, v19, v20);
        return;
      }
    }
LABEL_17:
    sub_1C942F0(backFlashMesh, method);
  }
}


void CharaFlashEffectComponent__OnEndEffect(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4D2DEF7 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectManager_TypeInfo);
    sub_1C94098(&ScriptManager_TypeInfo);
    sub_1C94098(&StringLiteral_25066/*"white"*/);
    byte_4D2DEF7 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__Fade((System_String_o *)StringLiteral_25066/*"white"*/, 0, 1.0, 0);
  this->fields.isWaitEndEffect = 1;
}


void CharaFlashEffectComponent__OnUpdate(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2DEF9 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D2DEF9 = 1;
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
        UnityEngine_Object__Destroy_72110972(gameObject, 0);
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
    sub_1C942F0(figure, v8);
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
    sub_1C942F0(figure, method);
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, long double))figure->klass->vtable._41_SetTweenVolume.methodPtr)(
    figure,
    figure->klass->vtable._41_SetTweenVolume.method,
    v5);
}