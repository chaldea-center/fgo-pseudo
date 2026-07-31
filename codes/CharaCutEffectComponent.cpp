void CharaCutEffectComponent___ctor(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaCutEffectComponent__CutinResume(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  float duration; // s0
  UIImageRender_o *image; // x0
  float v5; // s8
  AssetData_o *wipeData; // x0
  UIImageRender_o *v7; // x20
  _BOOL4 isSkip; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UIImageRender_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5939D08 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D___);
    sub_21FFC50(&StringLiteral_10288/*"OnEndCutinEffect"*/);
    sub_21FFC50(&StringLiteral_5098/*"Custom/Sprite-ScriptActionFigureCut"*/);
    byte_5939D08 = 1;
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
  v5 = fmaxf(this->fields.mgd, 0.0);
  this->fields.addVolume = v5;
  if ( !image )
    goto LABEL_19;
  UIImageRender__SetSharder(image, (System_String_o *)StringLiteral_5098/*"Custom/Sprite-ScriptActionFigureCut"*/, 0);
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    v7 = (UIImageRender_o *)this->fields.image;
    image = (UIImageRender_o *)AssetData__GetObject_object_(
                                 wipeData,
                                 (const MethodInfo_379EFEC *)Method_AssetData_GetObject_Texture2D___);
    if ( !v7 )
      goto LABEL_19;
    UIImageRender__SetWipeTexture(v7, (UnityEngine_Texture_o *)image, 0);
  }
  image = (UIImageRender_o *)this->fields.image;
  if ( !image
    || (v25.fields.r = 1.0,
        v25.fields.g = 1.0,
        v25.fields.b = 1.0,
        v25.fields.a = 1.0,
        UIImageRender__SetFilterColor(image, v25, 0),
        (image = (UIImageRender_o *)this->fields.image) == 0) )
  {
LABEL_19:
    sub_21FFECC(image, method);
  }
  UIImageRender__SetGradation(image, v5, 0);
  isSkip = this->fields.isSkip;
  this->fields.isStart = 1;
  if ( !isSkip && this->fields.duration > 0.0 )
  {
    ((void (__fastcall *)(CharaCutEffectComponent_o *, const MethodInfo *, double))this->klass->vtable._41_SetTweenVolume.methodPtr)(
      this,
      this->klass->vtable._41_SetTweenVolume.method,
      0.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    image = (UIImageRender_o *)TweenRenderVolume__Begin(gameObject, this->fields.duration, v5 + 1.0039, 0);
    if ( image )
    {
      v10 = image;
      LODWORD(image->fields.leftAnchor) = 1;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v10->fields.mTrans = (struct UnityEngine_Transform_o *)v11;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.mTrans, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      v18 = StringLiteral_10288/*"OnEndCutinEffect"*/;
      v10->fields.mChildren = (struct BetterList_UIRect__o *)StringLiteral_10288/*"OnEndCutinEffect"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.mChildren, v18, v19, v20, v21, v22, v23, v24);
      return;
    }
    goto LABEL_19;
  }
  ((void (__fastcall *)(CharaCutEffectComponent_o *, const MethodInfo *, float))this->klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    this->klass->vtable._41_SetTweenVolume.method,
    v5 + 1.0039);
  this->fields.isCutBusy = 0;
}


void CharaCutEffectComponent__CutinStart(
        CharaCutEffectComponent_o *this,
        UIImageM_o *image,
        System_String_o *wipeName,
        float mgd,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  __int64 v16; // x1

  if ( (byte_5939D06 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CharaCutEffectComponent_EndLoadWipe__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&StringLiteral_16245/*"Wipe/"*/);
    byte_5939D06 = 1;
  }
  this->fields.isCutBusy = 1;
  this->fields.image = image;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.image,
    (int32_t)image,
    wipeName,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  v13 = (System_String_o *)StringLiteral_16245/*"Wipe/"*/;
  this->fields.mgd = mgd;
  v14 = System_String__Concat_75438412(v13, wipeName, 0);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)this, Method_CharaCutEffectComponent_EndLoadWipe__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
  AssetManager__loadAssetStorage(v14, v15, 1, 0, 0);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_Object_o *gameObject; // x19

  v7 = isSkip;
  if ( (byte_5939D09 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10289/*"OnEndCutoutEffect"*/);
    byte_5939D09 = 1;
  }
  this->fields.duration = time;
  this->fields.isSkip = v7;
  if ( time <= 0.0 || isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  else
  {
    this->fields.isCutBusy = 1;
    v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v9 = TweenRenderVolume__Begin(v8, this->fields.duration, 0.0, 0);
    if ( !v9 )
      sub_21FFECC(0, v10);
    v11 = v9;
    v9->fields.method = 1;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v11->fields.eventReceiver = v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v11->fields.eventReceiver,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = StringLiteral_10289/*"OnEndCutoutEffect"*/;
    v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10289/*"OnEndCutoutEffect"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
  }
}


void CharaCutEffectComponent__EndLoadWipe(CharaCutEffectComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *wipeData; // x21
  __int64 v11; // x1
  UIImageRender_o *image; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  _BOOL4 isPause; // w8

  if ( (byte_5939D07 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5939D07 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
    AssetManager__releaseAsset_47465556(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.wipeData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  image = (UIImageRender_o *)this->fields.image;
  if ( !image )
    sub_21FFECC(0, v11);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_Object_o *image; // x20
  __int64 v11; // x1
  UIImageRender_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5939D0B & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D0B = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47465556(wipeData, 0);
    this->fields.wipeData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.wipeData, 0, v4, v5, v6, v7, v8, v9);
  }
  image = (UnityEngine_Object_o *)this->fields.image;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    v12 = (UIImageRender_o *)this->fields.image;
    if ( !v12 || (UIImageRender__RecoverSharder(v12, 0), (v12 = (UIImageRender_o *)this->fields.image) == 0) )
      sub_21FFECC(v12, v11);
    UIImageRender__SetAlpha(v12, 0.0, 0);
    this->fields.image = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.image, 0, v13, v14, v15, v16, v17, v18);
  }
}


void CharaCutEffectComponent__OnEndCutinEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isCutBusy = 0;
}


void CharaCutEffectComponent__OnEndCutoutEffect(CharaCutEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5939D0A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D0A = 1;
  }
  this->fields.isCutBusy = 0;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
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


void CharaCutEffectComponent__SetTweenColor(
        CharaCutEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  struct UIImageM_o *image; // x0

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  image = this->fields.image;
  if ( !image )
    sub_21FFECC(0, v8);
  ((void (__fastcall *)(struct UIImageM_o *, const MethodInfo *, float, float, float, float))image->klass->vtable._39_SetTweenColor.methodPtr)(
    image,
    image->klass->vtable._39_SetTweenColor.method,
    r,
    g,
    b,
    a);
}


void CharaCutEffectComponent__SetTweenVolume(CharaCutEffectComponent_o *this, float v, const MethodInfo *method)
{
  UIImageRender_o *image; // x0

  image = (UIImageRender_o *)this->fields.image;
  this->fields.volume = v;
  if ( !image )
    sub_21FFECC(0, method);
  UIImageRender__SetVolume(image, v, 0);
}