void __fastcall CharaCutEffectComponent___ctor(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CharaCutEffectComponent__CutinResume(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  long double v2; // q9
  __int64 v4; // x1
  __int64 v5; // x1
  float duration; // s0
  UIImageRender_o *image; // x0
  float v8; // s8
  AssetData_o *wipeData; // x0
  UIImageRender_o *v10; // x20
  _BOOL4 isSkip; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UIImageRender_o *v13; // x20
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
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB5A86 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_Texture2D___, method);
    sub_1C13D24(&StringLiteral_10074/*"OnDragOut"*/, v4);
    sub_1C13D24(&StringLiteral_5050/*"Custom/Sprite-ScriptActionFigureCrossFade"*/, v5);
    byte_4BB5A86 = 1;
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
  v8 = fmaxf(this->fields.mgd, 0.0);
  this->fields.addVolume = v8;
  if ( !image )
    goto LABEL_19;
  UIImageRender__SetSharder(image, (System_String_o *)StringLiteral_5050/*"Custom/Sprite-ScriptActionFigureCrossFade"*/, 0LL);
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    v10 = (UIImageRender_o *)this->fields.image;
    image = (UIImageRender_o *)AssetData__GetObject_object_(
                                 wipeData,
                                 (const MethodInfo_2F71428 *)Method_AssetData_GetObject_Texture2D___);
    if ( !v10 )
      goto LABEL_19;
    UIImageRender__SetWipeTexture(v10, (UnityEngine_Texture_o *)image, 0LL);
  }
  image = (UIImageRender_o *)this->fields.image;
  if ( !image
    || (v28.fields.r = 1.0,
        v28.fields.g = 1.0,
        v28.fields.b = 1.0,
        v28.fields.a = 1.0,
        UIImageRender__SetFilterColor(image, v28, 0LL),
        (image = (UIImageRender_o *)this->fields.image) == 0LL) )
  {
LABEL_19:
    sub_1C13F80(image, method);
  }
  *(float *)&v2 = v8 + 1.0039;
  UIImageRender__SetGradation(image, v8, 0LL);
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
      v13 = image;
      LODWORD(image->fields.leftAnchor) = 1;
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v13->fields.mTrans = (struct UnityEngine_Transform_o *)v14;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v13->fields.mTrans, (int64_t)v14, v15, v16, v17, v18, v19, v20);
      v21 = StringLiteral_10074/*"OnDragOut"*/;
      v13->fields.mChildren = (struct BetterList_UIRect__o *)StringLiteral_10074/*"OnDragOut"*/;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v13->fields.mChildren, v21, v22, v23, v24, v25, v26, v27);
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
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4BB5A84 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, image);
    sub_1C13D24(&Method_CharaCutEffectComponent_EndLoadWipe__, v13);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1C13D24(&StringLiteral_15903/*"Window/FilterList/CancelButton"*/, v15);
    byte_4BB5A84 = 1;
  }
  this->fields.isCutBusy = 1;
  this->fields.image = image;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.image,
    (int64_t)image,
    (int64_t)wipeName,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.mgd = mgd;
  v16 = System_String__Concat_62967944((System_String_o *)StringLiteral_15903/*"Window/FilterList/CancelButton"*/, wipeName, 0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_CharaCutEffectComponent_EndLoadWipe__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v17, 1, 0LL);
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
  UnityEngine_GameObject_o *v9; // x0
  TweenRenderVolume_o *v10; // x0
  __int64 v11; // x1
  TweenRenderVolume_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *gameObject; // x19

  v7 = isSkip;
  if ( (byte_4BB5A87 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isSkip);
    sub_1C13D24(&StringLiteral_10075/*"OnDragOver"*/, v8);
    byte_4BB5A87 = 1;
  }
  this->fields.duration = time;
  this->fields.isSkip = v7;
  if ( time <= 0.0 || isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
  }
  else
  {
    this->fields.isCutBusy = 1;
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v10 = TweenRenderVolume__Begin(v9, this->fields.duration, 0.0, 0LL);
    if ( !v10 )
      sub_1C13F80(0LL, v11);
    v12 = v10;
    v10->fields.method = 1;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12->fields.eventReceiver = v13;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v12->fields.eventReceiver, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = StringLiteral_10075/*"OnDragOver"*/;
    v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10075/*"OnDragOver"*/;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v12->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_4BB5A85 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, data);
    byte_4BB5A85 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38935320(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.wipeData, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  image = (UIImageRender_o *)this->fields.image;
  if ( !image )
    sub_1C13F80(0LL, v11);
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
  __int64 v3; // x1
  AssetData_o *wipeData; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_Object_o *image; // x20
  __int64 v12; // x1
  PartyOrganizationUtility_o *p_image; // x19
  UIImageRender_o *klass; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BB5A89 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB5A89 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38935320(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.wipeData, 0LL, v5, v6, v7, v8, v9, v10);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    p_image = (PartyOrganizationUtility_o *)&this->fields.image;
    klass = (UIImageRender_o *)p_image->klass;
    if ( !p_image->klass
      || (UIImageRender__RecoverSharder(klass, 0LL), (klass = (UIImageRender_o *)p_image->klass) == 0LL) )
    {
      sub_1C13F80(klass, v12);
    }
    UIImageRender__SetAlpha(klass, 0.0, 0LL);
    p_image->klass = 0LL;
    sub_1C13CC8(p_image, 0LL, v15, v16, v17, v18, v19, v20);
  }
}


void __fastcall CharaCutEffectComponent__OnEndCutinEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isCutBusy = 0;
}


void __fastcall CharaCutEffectComponent__OnEndCutoutEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BB5A88 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB5A88 = 1;
  }
  this->fields.isCutBusy = 0;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
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
    sub_1C13F80(0LL, v8);
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
    sub_1C13F80(0LL, method);
  UIImageRender__SetVolume(image, v, 0LL);
}