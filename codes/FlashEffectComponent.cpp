void __fastcall FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4213261 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17486/*"circleIn"*/, method);
    byte_4213261 = 1;
  }
  this->fields.flashColor = UnityEngine_Color__get_clear(0LL);
  v3 = (System_Int32_array **)StringLiteral_17486/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17486/*"circleIn"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.wipeName, v3, v4, v5, v6, v7, v8, v9);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall FlashEffectComponent__EffectResume(FlashEffectComponent_o *this, const MethodInfo *method)
{
  FlashEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  TweenRenderVolume_o *v6; // x20
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_421325D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10023/*"OnEndEffect"*/, method);
    byte_421325D = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(FlashEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v5 )
    sub_B0D97C(0LL);
  v6 = v5;
  v5->fields.style = 1;
  v7 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v7;
  sub_B0D840((BattleServantConfConponent_o *)&v6->fields.eventReceiver, v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Int32_array **)StringLiteral_10023/*"OnEndEffect"*/;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10023/*"OnEndEffect"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v6->fields.callWhenFinished, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall FlashEffectComponent__EndLoadWipe(
        FlashEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  AssetData_o *wipeData; // x22
  ExUIMeshRenderer_o *material; // x0
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v18; // x20
  UnityEngine_Shader_o *v19; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Material_o *v22; // x22
  const MethodInfo *v23; // x1
  _BOOL4 isPause; // w8

  if ( (byte_421325C & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D___, data);
    sub_B0D8A4(&AssetManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_16043/*"_Gradation"*/, v12);
    sub_B0D8A4(&StringLiteral_4530/*"Custom/BackFlashSheder"*/, v13);
    byte_421325C = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.wipeData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_20;
  Object_Texture2D = AssetData__GetObject_Texture2D_(
                       data,
                       (const MethodInfo_1700CCC *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v18 = (UnityEngine_Texture_o *)Object_Texture2D;
  v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4530/*"Custom/BackFlashSheder"*/, 0LL);
  v22 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v20, v21);
  UnityEngine_Material___ctor(v22, v19, 0LL);
  if ( !backFlashMesh )
    goto LABEL_20;
  ExUIMeshRenderer__set_material(backFlashMesh, v22, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_20;
  ExUIMeshRenderer__SetImage(material, v18, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_20;
  ((void (__fastcall *)(ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))material->klass->vtable._39_SetTweenColor.method)(
    material,
    material->klass->vtable._40_GetTweenColor.methodPtr,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_20;
  material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL);
  if ( !material )
    goto LABEL_20;
  if ( !UnityEngine_Material__HasProperty_40813076(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16043/*"_Gradation"*/,
          0LL) )
    goto LABEL_18;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL)) == 0LL )
LABEL_20:
    sub_B0D97C(material);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16043/*"_Gradation"*/, 0.2, 0LL);
LABEL_18:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v23);
}


void __fastcall FlashEffectComponent__FlashStart(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL4 isSkip; // w8
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_421325B & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_FlashEffectComponent_EndLoadWipe__, v3);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&ScriptManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_15543/*"Wipe/"*/, v7);
    sub_B0D8A4(&StringLiteral_23352/*"white"*/, v8);
    byte_421325B = 1;
  }
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__Fade((System_String_o *)StringLiteral_23352/*"white"*/, 0, 0.0, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  else
  {
    v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_15543/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
    AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v11, v14, 1, 0LL);
  }
}


void __fastcall FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ExUIMeshRenderer_o *backFlashMesh; // x0
  BattleServantConfConponent_o *p_wipeData; // x19
  UnityEngine_Object_o *material; // x20
  AssetData_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_421325F & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421325F = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_B0D97C(0LL);
    p_wipeData = (BattleServantConfConponent_o *)&this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(material, 0LL);
    klass = (AssetData_o *)p_wipeData->klass;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(klass, 0LL);
    p_wipeData->klass = 0LL;
    sub_B0D840(p_wipeData, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_421325E & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_23352/*"white"*/, v3);
    byte_421325E = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__Fade((System_String_o *)StringLiteral_23352/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4213260 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&ScriptManager_TypeInfo, v3);
    byte_4213260 = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0LL);
  if ( this->fields.isWaitEndEffect )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    if ( !ScriptManager__IsBusyFade(0LL) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlashEffectComponent__Resume(FlashEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      FlashEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlashEffectComponent__SetTweenColor(
        FlashEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  backFlashMesh = this->fields.backFlashMesh;
  if ( !backFlashMesh )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, long double, long double, long double, long double))backFlashMesh->klass->vtable._39_SetTweenColor.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall FlashEffectComponent__SetTweenVolume(FlashEffectComponent_o *this, float v, const MethodInfo *method)
{
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  backFlashMesh = this->fields.backFlashMesh;
  this->fields.volume = v;
  if ( !backFlashMesh )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer))backFlashMesh->klass->vtable._41_SetTweenVolume.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._42_GetTweenVolume.methodPtr);
}