void CharaCutEffectComponent___ctor(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaCutEffectComponent__CutinResume(CharaCutEffectComponent_o *this, const MethodInfo *method)
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC8A47 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D___);
    sub_1C713B0(&StringLiteral_9900/*"OnEndCutinEffect"*/);
    sub_1C713B0(&StringLiteral_4915/*"Custom/Sprite-ScriptActionFigureCut"*/);
    byte_4CC8A47 = 1;
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
    UIImageRender__SetAlpha(image, 1.0, 0);
  }
  image = (UIImageRender_o *)this->fields.image;
  v6 = fmaxf(this->fields.mgd, 0.0);
  this->fields.addVolume = v6;
  if ( !image )
    goto LABEL_19;
  UIImageRender__SetSharder(image, (System_String_o *)StringLiteral_4915/*"Custom/Sprite-ScriptActionFigureCut"*/, 0);
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    v8 = (UIImageRender_o *)this->fields.image;
    image = (UIImageRender_o *)AssetData__GetObject_object_(
                                 wipeData,
                                 (const MethodInfo_312C09C *)Method_AssetData_GetObject_Texture2D___);
    if ( !v8 )
      goto LABEL_19;
    UIImageRender__SetWipeTexture(v8, (UnityEngine_Texture_o *)image, 0);
  }
  image = (UIImageRender_o *)this->fields.image;
  if ( !image
    || (v26.fields.r = 1.0,
        v26.fields.g = 1.0,
        v26.fields.b = 1.0,
        v26.fields.a = 1.0,
        UIImageRender__SetFilterColor(image, v26, 0),
        (image = (UIImageRender_o *)this->fields.image) == 0) )
  {
LABEL_19:
    sub_1C71608(image, method);
  }
  *(float *)&v2 = v6 + 1.0039;
  UIImageRender__SetGradation(image, v6, 0);
  isSkip = this->fields.isSkip;
  this->fields.isStart = 1;
  if ( !isSkip && this->fields.duration > 0.0 )
  {
    ((void (__fastcall *)(CharaCutEffectComponent_o *, const MethodInfo *, float))this->klass->vtable._41_SetTweenVolume.methodPtr)(
      this,
      this->klass->vtable._41_SetTweenVolume.method,
      0.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    image = (UIImageRender_o *)TweenRenderVolume__Begin(gameObject, this->fields.duration, *(float *)&v2, 0);
    if ( image )
    {
      v11 = image;
      LODWORD(image->fields.leftAnchor) = 1;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v11->fields.mTrans = (struct UnityEngine_Transform_o *)v12;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.mTrans, (int32_t)v12, v13, v14, v15, v16, v17, v18);
      v19 = StringLiteral_9900/*"OnEndCutinEffect"*/;
      v11->fields.mChildren = (struct BetterList_UIRect__o *)StringLiteral_9900/*"OnEndCutinEffect"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.mChildren, v19, v20, v21, v22, v23, v24, v25);
      return;
    }
    goto LABEL_19;
  }
  ((void (__fastcall *)(CharaCutEffectComponent_o *, const MethodInfo *, long double))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    v2);
  this->fields.isCutBusy = 0;
}


void CharaCutEffectComponent__CutinStart(
        CharaCutEffectComponent_o *this,
        UIImageM_o *image,
        System_String_o *wipeName,
        float mgd,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4CC8A45 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_CharaCutEffectComponent_EndLoadWipe__);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&StringLiteral_15663/*"Wipe/"*/);
    byte_4CC8A45 = 1;
  }
  this->fields.isCutBusy = 1;
  this->fields.image = image;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.image,
    (int32_t)image,
    (int32_t)wipeName,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.mgd = mgd;
  v13 = System_String__Concat_64031724((System_String_o *)StringLiteral_15663/*"Wipe/"*/, wipeName, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_CharaCutEffectComponent_EndLoadWipe__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v14, 1, 0);
}


void CharaCutEffectComponent__CutoutStart(
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Object_o *gameObject; // x19

  v7 = isSkip;
  if ( (byte_4CC8A48 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9901/*"OnEndCutoutEffect"*/);
    byte_4CC8A48 = 1;
  }
  this->fields.duration = time;
  this->fields.isSkip = v7;
  if ( time <= 0.0 || isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
  else
  {
    this->fields.isCutBusy = 1;
    v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v9 = TweenRenderVolume__Begin(v8, this->fields.duration, 0.0, 0);
    if ( !v9 )
      sub_1C71608(0, v10);
    v11 = v9;
    v9->fields.method = 1;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v11->fields.eventReceiver = v12;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.eventReceiver, (int32_t)v12, v13, v14, v15, v16, v17, v18);
    v19 = StringLiteral_9901/*"OnEndCutoutEffect"*/;
    v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9901/*"OnEndCutoutEffect"*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
  }
}


void CharaCutEffectComponent__EndLoadWipe(CharaCutEffectComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *wipeData; // x22
  __int64 v11; // x1
  UIImageRender_o *image; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  _BOOL4 isPause; // w8

  if ( (byte_4CC8A46 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC8A46 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40808072(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  image = (UIImageRender_o *)this->fields.image;
  if ( !image )
    sub_1C71608(0, v11);
  BodySize = UIImageRender__GetBodySize(image, 0);
  isPause = this->fields.isPause;
  this->fields.bodySize = BodySize;
  this->fields.isStart = 1;
  if ( isPause )
    this->fields.isCutBusy = 0;
  else
    CharaCutEffectComponent__CutinResume(this, v13);
}


bool CharaCutEffectComponent__IsBusyCut(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isCutBusy;
}


void CharaCutEffectComponent__OnDestroy(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *image; // x20
  __int64 v11; // x1
  GrandQuestFolderBoardItem_o *p_image; // x19
  UIImageRender_o *klass; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CC8A4A & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8A4A = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40808072(wipeData, 0);
    this->fields.wipeData = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.wipeData, 0, v4, v5, v6, v7, v8, v9);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    p_image = (GrandQuestFolderBoardItem_o *)&this->fields.image;
    klass = (UIImageRender_o *)p_image->klass;
    if ( !p_image->klass || (UIImageRender__RecoverSharder(klass, 0), (klass = (UIImageRender_o *)p_image->klass) == 0) )
      sub_1C71608(klass, v11);
    UIImageRender__SetAlpha(klass, 0.0, 0);
    p_image->klass = 0;
    sub_1C71354(p_image, 0, v14, v15, v16, v17, v18, v19);
  }
}


void CharaCutEffectComponent__OnEndCutinEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isCutBusy = 0;
}


void CharaCutEffectComponent__OnEndCutoutEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC8A49 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8A49 = 1;
  }
  this->fields.isCutBusy = 0;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaCutEffectComponent__Resume(CharaCutEffectComponent_o *this, bool isSkip, const MethodInfo *method)
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
void CharaCutEffectComponent__SetTweenColor(
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
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  image = this->fields.image;
  if ( !image )
    sub_1C71608(0, v8);
  ((void (__fastcall *)(struct UIImageM_o *, const MethodInfo *, long double, long double, long double, long double))image->klass->vtable._39_SetTweenColor.methodPtr)(
    image,
    image->klass->vtable._39_SetTweenColor.method,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void CharaCutEffectComponent__SetTweenVolume(CharaCutEffectComponent_o *this, float v, const MethodInfo *method)
{
  UIImageRender_o *image; // x0

  image = (UIImageRender_o *)this->fields.image;
  this->fields.volume = v;
  if ( !image )
    sub_1C71608(0, method);
  UIImageRender__SetVolume(image, v, 0);
}