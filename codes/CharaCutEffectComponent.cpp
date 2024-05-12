void __fastcall CharaCutEffectComponent___ctor(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaCutEffectComponent__CutinResume(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  long double v2; // q9
  float duration; // s0
  UIImageRender_o *image; // x0
  float v6; // s8
  AssetData_o *wipeData; // x0
  UIImageRender_o *v8; // x20
  UIImageRender_o *v9; // x20
  int v10; // s0
  _BOOL4 isSkip; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UIImageRender_o *v16; // x20
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_438E272 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D___);
    sub_B775C4(&StringLiteral_10179/*"OnEndCutinEffect"*/);
    sub_B775C4(&StringLiteral_4657/*"Custom/Sprite-ScriptActionFigureCut"*/);
    byte_438E272 = 1;
  }
  duration = this->fields.duration;
  this->fields.isPause = 0;
  this->fields.isCutBusy = 1;
  if ( duration <= 0.0 )
  {
    if ( duration < 0.0 )
      this->fields.duration = -duration;
  }
  else
  {
    image = (UIImageRender_o *)this->fields.image;
    if ( !image )
      goto LABEL_19;
    UIImageRender__SetAlpha(image, 1.0, 0LL);
  }
  image = (UIImageRender_o *)this->fields.image;
  v6 = fmaxf(this->fields.mgd, 0.0);
  this->fields.addVolume = v6;
  if ( !image )
    goto LABEL_19;
  UIImageRender__SetSharder(image, (System_String_o *)StringLiteral_4657/*"Custom/Sprite-ScriptActionFigureCut"*/, 0LL);
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    v8 = (UIImageRender_o *)this->fields.image;
    image = (UIImageRender_o *)AssetData__GetObject_Texture2D_(
                                 wipeData,
                                 (const MethodInfo_1C5FCD8 *)Method_AssetData_GetObject_Texture2D___);
    if ( !v8 )
      goto LABEL_19;
    UIImageRender__SetWipeTexture(v8, (UnityEngine_Texture_o *)image, 0LL);
  }
  v9 = (UIImageRender_o *)this->fields.image;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
  if ( !v9
    || (UIImageRender__SetFilterColor(v9, *(UnityEngine_Color_o *)&v10, 0LL),
        (image = (UIImageRender_o *)this->fields.image) == 0LL) )
  {
LABEL_19:
    sub_B7769C(image, method);
  }
  *(float *)&v2 = v6 + 1.0039;
  UIImageRender__SetGradation(image, v6, 0LL);
  isSkip = this->fields.isSkip;
  this->fields.isStart = 1;
  if ( !isSkip && this->fields.duration > 0.0 )
  {
    ((void (__fastcall *)(CharaCutEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
      this,
      this->klass->vtable._42_GetTweenVolume.methodPtr,
      0.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    image = (UIImageRender_o *)TweenRenderVolume__Begin(gameObject, this->fields.duration, *(float *)&v2, 0LL);
    if ( image )
    {
      v16 = image;
      LODWORD(image->fields.leftAnchor) = 1;
      v17 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v16->fields.mTrans = (struct UnityEngine_Transform_o *)v17;
      sub_B77560((BattleServantConfConponent_o *)&v16->fields.mTrans, v17, v18, v19, v20, v21, v22, v23);
      v24 = (System_Int32_array **)StringLiteral_10179/*"OnEndCutinEffect"*/;
      v16->fields.mChildren = (struct BetterList_UIRect__o *)StringLiteral_10179/*"OnEndCutinEffect"*/;
      sub_B77560((BattleServantConfConponent_o *)&v16->fields.mChildren, v24, v25, v26, v27, v28, v29, v30);
      return;
    }
    goto LABEL_19;
  }
  ((void (__fastcall *)(CharaCutEffectComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    v2);
  this->fields.isCutBusy = 0;
}


void __fastcall CharaCutEffectComponent__CutinStart(
        CharaCutEffectComponent_o *this,
        UIImageM_o *image,
        System_String_o *wipeName,
        float mgd,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_438E270 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_CharaCutEffectComponent_EndLoadWipe__);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&StringLiteral_15787/*"Wipe/"*/);
    byte_438E270 = 1;
  }
  this->fields.isCutBusy = 1;
  this->fields.image = image;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.image,
    (System_Int32_array **)image,
    (System_String_array **)wipeName,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.mgd = mgd;
  v13 = System_String__Concat_44901936((System_String_o *)StringLiteral_15787/*"Wipe/"*/, wipeName, 0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_CharaCutEffectComponent_EndLoadWipe__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v14, 1, 0LL);
}


void __fastcall CharaCutEffectComponent__CutoutStart(
        CharaCutEffectComponent_o *this,
        float time,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x0
  TweenRenderVolume_o *v8; // x0
  __int64 v9; // x1
  TweenRenderVolume_o *v10; // x20
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_438E273 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10180/*"OnEndCutoutEffect"*/);
    byte_438E273 = 1;
  }
  this->fields.duration = time;
  this->fields.isSkip = isSkip;
  if ( time <= 0.0 || isSkip )
  {
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
    this->fields.isCutBusy = 1;
    v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v8 = TweenRenderVolume__Begin(v7, this->fields.duration, 0.0, 0LL);
    if ( !v8 )
      sub_B7769C(0LL, v9);
    v10 = v8;
    v8->fields.style = 1;
    v11 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v11;
    sub_B77560((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v11, v12, v13, v14, v15, v16, v17);
    v18 = (System_Int32_array **)StringLiteral_10180/*"OnEndCutoutEffect"*/;
    v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10180/*"OnEndCutoutEffect"*/;
    sub_B77560((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v18, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall CharaCutEffectComponent__EndLoadWipe(
        CharaCutEffectComponent_o *this,
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
  UIImageRender_o *image; // x0
  const MethodInfo *v13; // x1
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  _BOOL4 isPause; // w8

  if ( (byte_438E271 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438E271 = 1;
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
  image = (UIImageRender_o *)this->fields.image;
  if ( !image )
    sub_B7769C(0LL, v11);
  BodySize = UIImageRender__GetBodySize(image, 0LL);
  isPause = this->fields.isPause;
  this->fields.bodySize = BodySize;
  this->fields.isStart = 1;
  if ( isPause )
    this->fields.isCutBusy = 0;
  else
    CharaCutEffectComponent__CutinResume(this, v13);
}


bool __fastcall CharaCutEffectComponent__IsBusyCut(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isCutBusy;
}


void __fastcall CharaCutEffectComponent__OnDestroy(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *image; // x20
  __int64 v11; // x1
  BattleServantConfConponent_o *p_image; // x19
  UIImageRender_o *klass; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438E275 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E275 = 1;
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
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    p_image = (BattleServantConfConponent_o *)&this->fields.image;
    klass = (UIImageRender_o *)p_image->klass;
    if ( !p_image->klass
      || (UIImageRender__RecoverSharder(klass, 0LL), (klass = (UIImageRender_o *)p_image->klass) == 0LL) )
    {
      sub_B7769C(klass, v11);
    }
    UIImageRender__SetAlpha(klass, 0.0, 0LL);
    p_image->klass = 0LL;
    sub_B77560(p_image, 0LL, v14, v15, v16, v17, v18, v19);
  }
}


void __fastcall CharaCutEffectComponent__OnEndCutinEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isCutBusy = 0;
}


void __fastcall CharaCutEffectComponent__OnEndCutoutEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_438E274 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E274 = 1;
  }
  this->fields.isCutBusy = 0;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaCutEffectComponent__Resume(CharaCutEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaCutEffectComponent__CutinResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaCutEffectComponent__SetTweenColor(
        CharaCutEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  __int64 v8; // x1
  struct UIImageM_o *image; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  image = this->fields.image;
  if ( !image )
    sub_B7769C(0LL, v8);
  ((void (__fastcall *)(struct UIImageM_o *, Il2CppMethodPointer, long double, long double, long double, long double))image->klass->vtable._39_SetTweenColor.method)(
    image,
    image->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaCutEffectComponent__SetTweenVolume(
        CharaCutEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIImageRender_o *image; // x0

  image = (UIImageRender_o *)this->fields.image;
  this->fields.volume = v;
  if ( !image )
    sub_B7769C(0LL, method);
  UIImageRender__SetVolume(image, v, 0LL);
}