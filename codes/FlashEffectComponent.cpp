void __fastcall FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AE9DD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17555/*"circleIn"*/);
    byte_42AE9DD = 1;
  }
  this->fields.flashColor = UnityEngine_Color__get_clear(0LL);
  v3 = (System_Int32_array **)StringLiteral_17555/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17555/*"circleIn"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.wipeName, v3, v4, v5, v6, v7, v8, v9);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall FlashEffectComponent__EffectResume(FlashEffectComponent_o *this, const MethodInfo *method)
{
  FlashEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42AE9D9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10063/*"OnEndEffect"*/);
    byte_42AE9D9 = 1;
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
    sub_B52A5C(0LL, v6);
  v7 = v5;
  v5->fields.style = 1;
  v8 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v8;
  sub_B52920((BattleServantConfConponent_o *)&v7->fields.eventReceiver, v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Int32_array **)StringLiteral_10063/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10063/*"OnEndEffect"*/;
  sub_B52920((BattleServantConfConponent_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
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
  AssetData_o *wipeData; // x22
  ExUIMeshRenderer_o *material; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x23
  UnityEngine_Material_o *v17; // x22
  _BOOL4 isPause; // w8

  if ( (byte_42AE9D8 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D___);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&StringLiteral_16102/*"_Gradation"*/);
    sub_B52984(&StringLiteral_4553/*"Custom/BackFlashSheder"*/);
    byte_42AE9D8 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30359936(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_B52920(
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
                       (const MethodInfo_1A3B800 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v15 = (UnityEngine_Texture_o *)Object_Texture2D;
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4553/*"Custom/BackFlashSheder"*/, 0LL);
  v17 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0LL);
  if ( !backFlashMesh )
    goto LABEL_20;
  ExUIMeshRenderer__set_material(backFlashMesh, v17, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_20;
  ExUIMeshRenderer__SetImage(material, v15, 0LL);
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
  if ( !UnityEngine_Material__HasProperty_41519220(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16102/*"_Gradation"*/,
          0LL) )
    goto LABEL_18;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL)) == 0LL )
LABEL_20:
    sub_B52A5C(material, v12);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16102/*"_Gradation"*/, 0.2, 0LL);
LABEL_18:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v12);
}


void __fastcall FlashEffectComponent__FlashStart(FlashEffectComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isSkip; // w8
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v5; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21

  if ( (byte_42AE9D7 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_FlashEffectComponent_EndLoadWipe__);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&StringLiteral_15601/*"Wipe/"*/);
    sub_B52984(&StringLiteral_23467/*"white"*/);
    byte_42AE9D7 = 1;
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
    ScriptManager__Fade((System_String_o *)StringLiteral_23467/*"white"*/, 0, 0.0, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  else
  {
    v5 = System_String__Concat_44568316((System_String_o *)StringLiteral_15601/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v6, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v5, v6, 1, 0LL);
  }
}


void __fastcall FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *backFlashMesh; // x0
  BattleServantConfConponent_o *p_wipeData; // x19
  UnityEngine_Object_o *material; // x20
  AssetData_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42AE9DB & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE9DB = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_B52A5C(0LL, method);
    p_wipeData = (BattleServantConfConponent_o *)&this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(material, 0LL);
    klass = (AssetData_o *)p_wipeData->klass;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30359936(klass, 0LL);
    p_wipeData->klass = 0LL;
    sub_B52920(p_wipeData, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42AE9DA & 1) == 0 )
  {
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&StringLiteral_23467/*"white"*/);
    byte_42AE9DA = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__Fade((System_String_o *)StringLiteral_23467/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AE9DC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    byte_42AE9DC = 1;
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
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
  __int64 v8; // x1
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  backFlashMesh = this->fields.backFlashMesh;
  if ( !backFlashMesh )
    sub_B52A5C(0LL, v8);
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
    sub_B52A5C(0LL, method);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer))backFlashMesh->klass->vtable._41_SetTweenVolume.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._42_GetTweenVolume.methodPtr);
}