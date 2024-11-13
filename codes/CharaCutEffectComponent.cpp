void __fastcall CharaCutEffectComponent___ctor(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CharaCutEffectComponent__CutinResume(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q9
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  float duration; // s0
  UIImageRender_o *image; // x0
  float v11; // s8
  AssetData_o *wipeData; // x0
  UIImageRender_o *v13; // x20
  _BOOL4 isSkip; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UIImageRender_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17546 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, method, v2);
    sub_1BCA7E0(&StringLiteral_10026/*"OnEndCutinEffect"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_5030/*"Custom/Sprite-ScriptActionFigureCut"*/, v7, v8);
    byte_4B17546 = 1;
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
  v11 = fmaxf(this->fields.mgd, 0.0);
  this->fields.addVolume = v11;
  if ( !image )
    goto LABEL_19;
  UIImageRender__SetSharder(image, (System_String_o *)StringLiteral_5030/*"Custom/Sprite-ScriptActionFigureCut"*/, 0LL);
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    v13 = (UIImageRender_o *)this->fields.image;
    image = (UIImageRender_o *)AssetData__GetObject_object_(
                                 wipeData,
                                 (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
    if ( !v13 )
      goto LABEL_19;
    UIImageRender__SetWipeTexture(v13, (UnityEngine_Texture_o *)image, 0LL);
  }
  image = (UIImageRender_o *)this->fields.image;
  if ( !image
    || (v31.fields.r = 1.0,
        v31.fields.g = 1.0,
        v31.fields.b = 1.0,
        v31.fields.a = 1.0,
        UIImageRender__SetFilterColor(image, v31, 0LL),
        (image = (UIImageRender_o *)this->fields.image) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(image, method);
  }
  *(float *)&v3 = v11 + 1.0039;
  UIImageRender__SetGradation(image, v11, 0LL);
  isSkip = this->fields.isSkip;
  this->fields.isStart = 1;
  if ( !isSkip && this->fields.duration > 0.0 )
  {
    ((void (__fastcall *)(CharaCutEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
      this,
      this->klass->vtable._42_GetTweenVolume.methodPtr,
      0.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    image = (UIImageRender_o *)TweenRenderVolume__Begin(gameObject, this->fields.duration, *(float *)&v3, 0LL);
    if ( image )
    {
      v16 = image;
      LODWORD(image->fields.leftAnchor) = 1;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v16->fields.mTrans = (struct UnityEngine_Transform_o *)v17;
      sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.mTrans, (int64_t)v17, v18, v19, v20, v21, v22, v23);
      v24 = StringLiteral_10026/*"OnEndCutinEffect"*/;
      v16->fields.mChildren = (struct BetterList_UIRect__o *)StringLiteral_10026/*"OnEndCutinEffect"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.mChildren, v24, v25, v26, v27, v28, v29, v30);
      return;
    }
    goto LABEL_19;
  }
  ((void (__fastcall *)(CharaCutEffectComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    v3);
  this->fields.isCutBusy = 0;
}


void __fastcall CharaCutEffectComponent__CutinStart(
        CharaCutEffectComponent_o *this,
        UIImageM_o *image,
        System_String_o *wipeName,
        float mgd,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  __int64 v24; // x1

  if ( (byte_4B17544 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, image, wipeName);
    sub_1BCA7E0(&Method_CharaCutEffectComponent_EndLoadWipe__, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_15827/*"Wipe/"*/, v17, v18);
    byte_4B17544 = 1;
  }
  this->fields.isCutBusy = 1;
  this->fields.image = image;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.image,
    (int64_t)image,
    (int64_t)wipeName,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.mgd = mgd;
  v19 = System_String__Concat_62401220((System_String_o *)StringLiteral_15827/*"Wipe/"*/, wipeName, 0LL);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22);
  AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_CharaCutEffectComponent_EndLoadWipe__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24);
  AssetManager__loadAssetStorage(v19, v23, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaCutEffectComponent__CutoutStart(
        CharaCutEffectComponent_o *this,
        float time,
        bool isSkip,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x0
  TweenRenderVolume_o *v11; // x0
  __int64 v12; // x1
  TweenRenderVolume_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  UnityEngine_Object_o *gameObject; // x19

  v7 = isSkip;
  if ( (byte_4B17547 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isSkip, method);
    sub_1BCA7E0(&StringLiteral_10027/*"OnEndCutoutEffect"*/, v8, v9);
    byte_4B17547 = 1;
  }
  this->fields.duration = time;
  this->fields.isSkip = v7;
  if ( time <= 0.0 || isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  else
  {
    this->fields.isCutBusy = 1;
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11 = TweenRenderVolume__Begin(v10, this->fields.duration, 0.0, 0LL);
    if ( !v11 )
      sub_1BCAA3C(0LL, v12);
    v13 = v11;
    v11->fields.method = 1;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13->fields.eventReceiver = v14;
    sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.eventReceiver, (int64_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = StringLiteral_10027/*"OnEndCutoutEffect"*/;
    v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10027/*"OnEndCutoutEffect"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
  }
}


void __fastcall CharaCutEffectComponent__EndLoadWipe(
        CharaCutEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetData_o *wipeData; // x22
  __int64 v11; // x1
  UIImageRender_o *image; // x0
  const MethodInfo *v13; // x1
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  _BOOL4 isPause; // w8

  if ( (byte_4B17545 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, data, method);
    byte_4B17545 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
    AssetManager__releaseAsset_38505704(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wipeData, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  image = (UIImageRender_o *)this->fields.image;
  if ( !image )
    sub_1BCAA3C(0LL, v11);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  AssetData_o *wipeData; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_Object_o *image; // x20
  __int64 v14; // x1
  PartyOrganizationUtility_o *p_image; // x19
  UIImageRender_o *klass; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B17549 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17549 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wipeData, 0LL, v7, v8, v9, v10, v11, v12);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    p_image = (PartyOrganizationUtility_o *)&this->fields.image;
    klass = (UIImageRender_o *)p_image->klass;
    if ( !p_image->klass
      || (UIImageRender__RecoverSharder(klass, 0LL), (klass = (UIImageRender_o *)p_image->klass) == 0LL) )
    {
      sub_1BCAA3C(klass, v14);
    }
    UIImageRender__SetAlpha(klass, 0.0, 0LL);
    p_image->klass = 0LL;
    sub_1BCA784(p_image, 0LL, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall CharaCutEffectComponent__OnEndCutinEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isCutBusy = 0;
}


void __fastcall CharaCutEffectComponent__OnEndCutoutEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B17548 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17548 = 1;
  }
  this->fields.isCutBusy = 0;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    sub_1BCAA3C(0LL, v8);
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
    sub_1BCAA3C(0LL, method);
  UIImageRender__SetVolume(image, v, 0LL);
}