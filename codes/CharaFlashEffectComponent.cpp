void CharaFlashEffectComponent___ctor(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_5939D1E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18724/*"circleIn"*/);
    byte_5939D1E = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_18724/*"circleIn"*/;
  *(_QWORD *)&this->fields.flashColor.fields.r = 0;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0;
  this->fields.wipeName = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.wipeName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CharaFlashEffectComponent__EffectResume(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  CharaFlashEffectComponent_c *klass; // x8
  float volume; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v6; // x0
  __int64 v7; // x1
  TweenRenderVolume_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5939D1A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10290/*"OnEndEffect"*/);
    byte_5939D1A = 1;
  }
  klass = this->klass;
  volume = this->fields.volume;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v8 = v6;
  v6->fields.method = 1;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8->fields.eventReceiver = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.eventReceiver, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_10290/*"OnEndEffect"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10290/*"OnEndEffect"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.callWhenFinished, v16, v17, v18, v19, v20, v21, v22);
}


void CharaFlashEffectComponent__EndCreateEffect(
        CharaFlashEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  _BOOL4 isPause; // w8

  this->fields.childEffect = effect;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.childEffect,
    (int32_t)effect,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *wipeData; // x21
  __int64 v11; // x1
  UIStandFigureRender_o *figure; // x0
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x23
  UnityEngine_Material_o *v17; // x22
  __int64 v18; // x1
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *v21; // x20
  System_String_o *v22; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v23; // x22
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  const MethodInfo *v26; // x6

  if ( (byte_5939D19 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D___);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CharaFlashEffectComponent_EndCreateEffect__);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5101/*"Custom/Sprite-ScriptActionFigureFlash"*/);
    sub_21FFC50(&StringLiteral_16850/*"_Gradation"*/);
    sub_21FFC50(&StringLiteral_14162/*"Talk/"*/);
    sub_21FFC50(&StringLiteral_5083/*"Custom/BackFlashSheder"*/);
    byte_5939D19 = 1;
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
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  this->fields.bodySize = UIStandFigureRender__GetBodySize(figure, 0);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_30;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_379EFEC *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v15 = (UnityEngine_Texture_o *)Object_object;
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5083/*"Custom/BackFlashSheder"*/, 0);
  v17 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
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
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)figure,
         (System_String_o *)StringLiteral_16850/*"_Gradation"*/,
         0) )
  {
    figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
    if ( figure )
    {
      figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0);
      if ( figure )
      {
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)figure, (System_String_o *)StringLiteral_16850/*"_Gradation"*/, 0.2, 0);
        goto LABEL_18;
      }
    }
LABEL_30:
    sub_21FFECC(figure, v11);
  }
LABEL_18:
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_5101/*"Custom/Sprite-ScriptActionFigureFlash"*/, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0) )
  {
    v21 = this->fields.subEffectBase;
    v22 = System_String__Concat_75438412((System_String_o *)StringLiteral_14162/*"Talk/"*/, this->fields.subEffectName, 0);
    v23 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_21FFEBC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v23,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndCreateEffect__,
      v24);
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v25);
    CommonEffectManager__Create_50652356(v21, v22, v23, 0, 0, 0, v26);
  }
  else
  {
    CharaFlashEffectComponent__EndCreateEffect(this, 0, v20);
  }
}


void CharaFlashEffectComponent__FlashStart(
        CharaFlashEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  _BOOL4 isSkip; // w8
  __int64 v12; // x1
  UIStandFigureRender_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v22; // x20
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  __int64 v24; // x1

  if ( (byte_5939D18 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CharaFlashEffectComponent_EndLoadWipe__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16245/*"Wipe/"*/);
    sub_21FFC50(&StringLiteral_26140/*"white"*/);
    byte_5939D18 = 1;
  }
  this->fields.figure = figure;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.figure,
    (int32_t)figure,
    (System_String_o *)method,
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
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v10);
    ScriptManager__Fade((System_String_o *)StringLiteral_26140/*"white"*/, 0, 0.0, 0);
    v13 = (UIStandFigureRender_o *)this->fields.figure;
    if ( !v13 )
      sub_21FFECC(0, v12);
    UIStandFigureRender__SetAlpha(v13, 0.0, 0);
    this->fields.figure = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.figure, 0, v14, v15, v16, v17, v18, v19);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  else
  {
    v22 = System_String__Concat_75438412((System_String_o *)StringLiteral_16245/*"Wipe/"*/, this->fields.wipeName, 0);
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_CharaFlashEffectComponent_EndLoadWipe__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24);
    AssetManager__loadAssetStorage(v22, v23, 1, 0, 0);
  }
}


void CharaFlashEffectComponent__OnDestroy(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *backFlashMesh; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *material; // x20
  __int64 v6; // x1
  AssetData_o *wipeData; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *figure; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5939D1C & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D1C = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      goto LABEL_17;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83246496(material, 0);
    wipeData = this->fields.wipeData;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    AssetManager__releaseAsset_47465556(wipeData, 0);
    this->fields.wipeData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.wipeData, 0, v8, v9, v10, v11, v12, v13);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(figure, 0, 0) )
  {
    backFlashMesh = (ExUIMeshRenderer_o *)this->fields.figure;
    if ( backFlashMesh )
    {
      UIStandFigureRender__RecoverSharder((UIStandFigureRender_o *)backFlashMesh, 0);
      backFlashMesh = (ExUIMeshRenderer_o *)this->fields.figure;
      if ( backFlashMesh )
      {
        UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)backFlashMesh, 0.0, 0);
        this->fields.figure = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.figure, 0, v15, v16, v17, v18, v19, v20);
        return;
      }
    }
LABEL_17:
    sub_21FFECC(backFlashMesh, method);
  }
}


void CharaFlashEffectComponent__OnEndEffect(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v5; // x1

  if ( (byte_5939D1B & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26140/*"white"*/);
    byte_5939D1B = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0, v2);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5);
  ScriptManager__Fade((System_String_o *)StringLiteral_26140/*"white"*/, 0, 1.0, 0);
  this->fields.isWaitEndEffect = 1;
}


void CharaFlashEffectComponent__OnUpdate(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5939D1D & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    byte_5939D1D = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0);
  if ( this->fields.isWaitEndEffect )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v3);
    if ( !ScriptManager__IsBusyFade(0) )
    {
      subEffectBase = this->fields.subEffectBase;
      if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v4);
      if ( !CommonEffectManager__IsBusy(subEffectBase, v4) )
      {
        this->fields.isWaitEndEffect = 0;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        UnityEngine_Object__Destroy_83246496(gameObject, 0);
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


void CharaFlashEffectComponent__SetTweenColor(
        CharaFlashEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  void *figure; // x0

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  figure = this->fields.figure;
  if ( !figure
    || ((*(void (__fastcall **)(void *, _QWORD, float, float, float, float))(*(_QWORD *)figure + 936LL))(
          figure,
          *(_QWORD *)(*(_QWORD *)figure + 944LL),
          r,
          g,
          b,
          a),
        (figure = this->fields.backFlashMesh) == 0) )
  {
    sub_21FFECC(figure, v8);
  }
  (*(void (__fastcall **)(void *, _QWORD, float, float, float, float))(*(_QWORD *)figure + 936LL))(
    figure,
    *(_QWORD *)(*(_QWORD *)figure + 944LL),
    r,
    g,
    b,
    a);
}


void CharaFlashEffectComponent__SetTweenVolume(CharaFlashEffectComponent_o *this, float v, const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure
    || (UIStandFigureRender__SetVolume(figure, v, 0), (figure = (UIStandFigureRender_o *)this->fields.backFlashMesh) == 0) )
  {
    sub_21FFECC(figure, method);
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, const MethodInfo *, float))figure->klass->vtable._41_SetTweenVolume.methodPtr)(
    figure,
    figure->klass->vtable._41_SetTweenVolume.method,
    v);
}