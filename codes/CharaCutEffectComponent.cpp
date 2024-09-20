void __fastcall CharaCutEffectComponent___ctor(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CharaCutEffectComponent__CutinResume(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  long double v2; // q9
  float duration; // s0
  UIImageRender_o *image; // x0
  float v6; // s8
  AssetData_o *wipeData; // x0
  UIImageRender_o *v8; // x20
  _BOOL4 isSkip; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UIImageRender_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5C47B & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D___);
    sub_1B885B0(&StringLiteral_9893/*"OnEndCutinEffect"*/);
    sub_1B885B0(&StringLiteral_4961/*"Custom/Sprite-ScriptActionFigureCut"*/);
    byte_4A5C47B = 1;
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
  UIImageRender__SetSharder(image, (System_String_o *)StringLiteral_4961/*"Custom/Sprite-ScriptActionFigureCut"*/, 0LL);
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    v8 = (UIImageRender_o *)this->fields.image;
    image = (UIImageRender_o *)AssetData__GetObject_object_(
                                 wipeData,
                                 (const MethodInfo_2E61D74 *)Method_AssetData_GetObject_Texture2D___);
    if ( !v8 )
      goto LABEL_19;
    UIImageRender__SetWipeTexture(v8, (UnityEngine_Texture_o *)image, 0LL);
  }
  image = (UIImageRender_o *)this->fields.image;
  if ( !image
    || (v18.fields.r = 1.0,
        v18.fields.g = 1.0,
        v18.fields.b = 1.0,
        v18.fields.a = 1.0,
        UIImageRender__SetFilterColor(image, v18, 0LL),
        (image = (UIImageRender_o *)this->fields.image) == 0LL) )
  {
LABEL_19:
    sub_1B8880C(image, method);
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
      v11 = image;
      LODWORD(image->fields.leftAnchor) = 1;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v11->fields.mTrans = (struct UnityEngine_Transform_o *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.mTrans, (int32_t)v12, v13, v14);
      v15 = StringLiteral_9893/*"OnEndCutinEffect"*/;
      v11->fields.mChildren = (struct BetterList_UIRect__o *)StringLiteral_9893/*"OnEndCutinEffect"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.mChildren, v15, v16, v17);
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
  System_String_o *v9; // x20
  AssetLoader_LoadEndDataHandler_o *v10; // x21

  if ( (byte_4A5C479 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CharaCutEffectComponent_EndLoadWipe__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_15660/*"Wipe/"*/);
    byte_4A5C479 = 1;
  }
  this->fields.isCutBusy = 1;
  this->fields.image = image;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.image,
    (int32_t)image,
    (int32_t)wipeName,
    (int32_t)method);
  this->fields.mgd = mgd;
  v9 = System_String__Concat_61707032((System_String_o *)StringLiteral_15660/*"Wipe/"*/, wipeName, 0LL);
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_CharaCutEffectComponent_EndLoadWipe__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, v10, 1, 0LL);
}


void __fastcall CharaCutEffectComponent__CutoutStart(
        CharaCutEffectComponent_o *this,
        float time,
        bool isSkip,
        const MethodInfo *method)
{
  bool v7; // w21
  UnityEngine_GameObject_o *v8; // x0
  TweenRenderVolume_o *v9; // x0
  __int64 v10; // x1
  TweenRenderVolume_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *gameObject; // x19

  v7 = isSkip;
  if ( (byte_4A5C47C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_9894/*"OnEndCutoutEffect"*/);
    byte_4A5C47C = 1;
  }
  this->fields.duration = time;
  this->fields.isSkip = v7;
  if ( time <= 0.0 || isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  else
  {
    this->fields.isCutBusy = 1;
    v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v9 = TweenRenderVolume__Begin(v8, this->fields.duration, 0.0, 0LL);
    if ( !v9 )
      sub_1B8880C(0LL, v10);
    v11 = v9;
    v9->fields.method = 1;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11->fields.eventReceiver = v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.eventReceiver, (int32_t)v12, v13, v14);
    v15 = StringLiteral_9894/*"OnEndCutoutEffect"*/;
    v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9894/*"OnEndCutoutEffect"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.callWhenFinished, v15, v16, v17);
  }
}


void __fastcall CharaCutEffectComponent__EndLoadWipe(
        CharaCutEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssetData_o *wipeData; // x22
  __int64 v7; // x1
  UIImageRender_o *image; // x0
  const MethodInfo *v9; // x1
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  _BOOL4 isPause; // w8

  if ( (byte_4A5C47A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5C47A = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  image = (UIImageRender_o *)this->fields.image;
  if ( !image )
    sub_1B8880C(0LL, v7);
  BodySize = UIImageRender__GetBodySize(image, 0LL);
  isPause = this->fields.isPause;
  this->fields.bodySize = BodySize;
  this->fields.isStart = 1;
  if ( isPause )
    this->fields.isCutBusy = 0;
  else
    CharaCutEffectComponent__CutinResume(this, v9);
}


bool __fastcall CharaCutEffectComponent__IsBusyCut(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isCutBusy;
}


void __fastcall CharaCutEffectComponent__OnDestroy(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *image; // x20
  __int64 v7; // x1
  ServantStatusBattleListViewItem_o *p_image; // x19
  UIImageRender_o *klass; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5C47E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C47E = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, 0, v4, v5);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    p_image = (ServantStatusBattleListViewItem_o *)&this->fields.image;
    klass = (UIImageRender_o *)p_image->klass;
    if ( !p_image->klass
      || (UIImageRender__RecoverSharder(klass, 0LL), (klass = (UIImageRender_o *)p_image->klass) == 0LL) )
    {
      sub_1B8880C(klass, v7);
    }
    UIImageRender__SetAlpha(klass, 0.0, 0LL);
    p_image->klass = 0LL;
    sub_1B88554(p_image, 0, v10, v11);
  }
}


void __fastcall CharaCutEffectComponent__OnEndCutinEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isCutBusy = 0;
}


void __fastcall CharaCutEffectComponent__OnEndCutoutEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5C47D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C47D = 1;
  }
  this->fields.isCutBusy = 0;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
    sub_1B8880C(0LL, v8);
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
    sub_1B8880C(0LL, method);
  UIImageRender__SetVolume(image, v, 0LL);
}