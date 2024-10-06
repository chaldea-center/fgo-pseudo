void __fastcall CharaFlashEffectComponent___ctor(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A711A5 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_17999/*"circleIn"*/, method);
    byte_4A711A5 = 1;
  }
  *(_QWORD *)&this->fields.flashColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0LL;
  v5 = StringLiteral_17999/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17999/*"circleIn"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.wipeName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CharaFlashEffectComponent__EffectResume(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  CharaFlashEffectComponent_c *klass; // x8
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

  if ( (byte_4A711A1 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_9901/*"OnEndEffect"*/, method);
    byte_4A711A1 = 1;
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
    sub_1B9026C(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9901/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9901/*"OnEndEffect"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void __fastcall CharaFlashEffectComponent__EndCreateEffect(
        CharaFlashEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  _BOOL4 isPause; // w8

  this->fields.childEffect = effect;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    CharaFlashEffectComponent__EffectResume(this, v5);
}


void __fastcall CharaFlashEffectComponent__EndLoadWipe(
        CharaFlashEffectComponent_o *this,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  AssetData_o *wipeData; // x22
  __int64 v17; // x1
  UIStandFigureRender_o *figure; // x0
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v21; // x20
  UnityEngine_Shader_o *v22; // x23
  UnityEngine_Material_o *v23; // x22
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v25; // x2
  UnityEngine_GameObject_o *v26; // x20
  System_String_o *v27; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v28; // x22
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x6

  if ( (byte_4A711A0 & 1) == 0 )
  {
    sub_1B90010(&Method_AssetData_GetObject_Texture2D___, data);
    sub_1B90010(&AssetManager_TypeInfo, v6);
    sub_1B90010(&Method_CharaFlashEffectComponent_EndCreateEffect__, v7);
    sub_1B90010(&CommonEffectManager_TypeInfo, v8);
    sub_1B90010(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v9);
    sub_1B90010(&UnityEngine_Material_TypeInfo, v10);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    sub_1B90010(&StringLiteral_4965/*"Custom/Sprite-ScriptActionFigureFlash"*/, v12);
    sub_1B90010(&StringLiteral_16260/*"_Gradation"*/, v13);
    sub_1B90010(&StringLiteral_13561/*"Talk/"*/, v14);
    sub_1B90010(&StringLiteral_4948/*"Custom/BackFlashSheder"*/, v15);
    byte_4A711A0 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37842776(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  this->fields.bodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_30;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2E70688 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v21 = (UnityEngine_Texture_o *)Object_object;
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4948/*"Custom/BackFlashSheder"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_1B9025C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v23, v22, 0LL);
  if ( !backFlashMesh )
    goto LABEL_30;
  ExUIMeshRenderer__set_material(backFlashMesh, v23, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  ExUIMeshRenderer__SetImage((ExUIMeshRenderer_o *)figure, v21, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  ((void (__fastcall *)(UIStandFigureRender_o *, Il2CppMethodPointer, float, float, float, float))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0LL);
  if ( !figure )
    goto LABEL_30;
  if ( UnityEngine_Material__HasProperty_69405708(
         (UnityEngine_Material_o *)figure,
         (System_String_o *)StringLiteral_16260/*"_Gradation"*/,
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
          (System_String_o *)StringLiteral_16260/*"_Gradation"*/,
          0.2,
          0LL);
        goto LABEL_18;
      }
    }
LABEL_30:
    sub_1B9026C(figure, v17);
  }
LABEL_18:
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4965/*"Custom/Sprite-ScriptActionFigureFlash"*/, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetWipeTexture(figure, v21, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetFilterColor(figure, this->fields.flashColor, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v26 = this->fields.subEffectBase;
    v27 = System_String__Concat_61787092((System_String_o *)StringLiteral_13561/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v28 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B9025C(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v28,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndCreateEffect__,
      v29);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_40674676(v26, v27, v28, 0, 0, 0, v30);
  }
  else
  {
    CharaFlashEffectComponent__EndCreateEffect(this, 0LL, v25);
  }
}


void __fastcall CharaFlashEffectComponent__FlashStart(
        CharaFlashEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UIStandFigureRender_o **p_figure; // x20
  _BOOL4 isSkip; // w8
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v18; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4A7119F & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, figure);
    sub_1B90010(&Method_CharaFlashEffectComponent_EndLoadWipe__, v6);
    sub_1B90010(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v8);
    sub_1B90010(&ScriptManager_TypeInfo, v9);
    sub_1B90010(&StringLiteral_15685/*"Wipe/"*/, v10);
    sub_1B90010(&StringLiteral_24730/*"white"*/, v11);
    byte_4A7119F = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__Fade((System_String_o *)StringLiteral_24730/*"white"*/, 0, 0.0, 0LL);
    if ( !*p_figure )
      sub_1B9026C(0LL, v14);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.figure, 0, v15, v16);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
  }
  else
  {
    v18 = System_String__Concat_61787092((System_String_o *)StringLiteral_15685/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B9025C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v19,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndLoadWipe__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v18, v19, 1, 0LL);
  }
}


void __fastcall CharaFlashEffectComponent__OnDestroy(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ExUIMeshRenderer_o *backFlashMesh; // x0
  struct AssetData_o **p_wipeData; // x20
  UnityEngine_Object_o *material; // x21
  AssetData_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *figure; // x20
  ServantStatusBattleListViewItem_o *p_figure; // x19
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A711A3 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A711A3 = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      goto LABEL_17;
    p_wipeData = &this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(material, 0LL);
    v7 = *p_wipeData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37842776(v7, 0LL);
    *p_wipeData = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, 0, v8, v9);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (ServantStatusBattleListViewItem_o *)&this->fields.figure;
    backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
    if ( p_figure->klass )
    {
      UIStandFigureRender__RecoverSharder((UIStandFigureRender_o *)backFlashMesh, 0LL);
      backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
      if ( p_figure->klass )
      {
        UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)backFlashMesh, 0.0, 0LL);
        p_figure->klass = 0LL;
        sub_1B8FFB4(p_figure, 0, v12, v13);
        return;
      }
    }
LABEL_17:
    sub_1B9026C(backFlashMesh, method);
  }
}


void __fastcall CharaFlashEffectComponent__OnEndEffect(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4A711A2 & 1) == 0 )
  {
    sub_1B90010(&CommonEffectManager_TypeInfo, method);
    sub_1B90010(&ScriptManager_TypeInfo, v4);
    sub_1B90010(&StringLiteral_24730/*"white"*/, v5);
    byte_4A711A2 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v2);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__Fade((System_String_o *)StringLiteral_24730/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaFlashEffectComponent__OnUpdate(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float totalTime; // s8
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A711A4 & 1) == 0 )
  {
    sub_1B90010(&CommonEffectManager_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    sub_1B90010(&ScriptManager_TypeInfo, v4);
    byte_4A711A4 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !ScriptManager__IsBusyFade(0LL) )
    {
      subEffectBase = this->fields.subEffectBase;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      if ( !CommonEffectManager__IsBusy(subEffectBase, v8) )
      {
        this->fields.isWaitEndEffect = 0;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
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
    sub_1B9026C(figure, v8);
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
    sub_1B9026C(figure, method);
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, Il2CppMethodPointer, long double))figure->klass->vtable._41_SetTweenVolume.method)(
    figure,
    figure->klass->vtable._42_GetTweenVolume.methodPtr,
    v5);
}