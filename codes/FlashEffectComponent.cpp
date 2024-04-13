void __fastcall FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array **v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E69ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17649/*"circleIn"*/, (_DWORD)method, v2, v3);
    byte_42E69ED = 1;
  }
  this->fields.flashColor = UnityEngine_Color__get_clear(0LL);
  v5 = (System_Int32_array **)StringLiteral_17649/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17649/*"circleIn"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.wipeName, v5, v6, v7, v8, v9, v10, v11);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall FlashEffectComponent__EffectResume(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FlashEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v7; // x0
  __int64 v8; // x1
  TweenRenderVolume_o *v9; // x20
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E69E9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10105/*"OnEndEffect"*/, (_DWORD)method, v2, v3);
    byte_42E69E9 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(FlashEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  v9 = v7;
  v7->fields.style = 1;
  v10 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v10;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_10105/*"OnEndEffect"*/;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10105/*"OnEndEffect"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v17, v18, v19, v20, v21, v22, v23);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  AssetData_o *wipeData; // x22
  ExUIMeshRenderer_o *material; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v27; // x20
  UnityEngine_Shader_o *v28; // x23
  UnityEngine_Material_o *v29; // x22
  _BOOL4 isPause; // w8

  if ( (byte_42E69E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16187/*"_Gradation"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_4586/*"Custom/BackFlashSheder"*/, v19, v20, v21);
    byte_42E69E8 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_B5D560(
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
                       (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v27 = (UnityEngine_Texture_o *)Object_Texture2D;
  v28 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4586/*"Custom/BackFlashSheder"*/, 0LL);
  v29 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v29, v28, 0LL);
  if ( !backFlashMesh )
    goto LABEL_20;
  ExUIMeshRenderer__set_material(backFlashMesh, v29, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_20;
  ExUIMeshRenderer__SetImage(material, v27, 0LL);
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
  if ( !UnityEngine_Material__HasProperty_41623368(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16187/*"_Gradation"*/,
          0LL) )
    goto LABEL_18;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL)) == 0LL )
LABEL_20:
    sub_B5D69C(material, v24);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16187/*"_Gradation"*/, 0.2, 0LL);
LABEL_18:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v24);
}


void __fastcall FlashEffectComponent__FlashStart(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  _BOOL4 isSkip; // w8
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21

  if ( (byte_42E69E7 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FlashEffectComponent_EndLoadWipe__, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ScriptManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15686/*"Wipe/"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23585/*"white"*/, v20, v21, v22);
    byte_42E69E7 = 1;
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
    ScriptManager__Fade((System_String_o *)StringLiteral_23585/*"white"*/, 0, 0.0, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  else
  {
    v25 = System_String__Concat_44577788((System_String_o *)StringLiteral_15686/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v26, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v25, v26, 1, 0LL);
  }
}


void __fastcall FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ExUIMeshRenderer_o *backFlashMesh; // x0
  BattleServantConfConponent_o *p_wipeData; // x19
  UnityEngine_Object_o *material; // x20
  AssetData_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E69EB & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E69EB = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_B5D69C(0LL, method);
    p_wipeData = (BattleServantConfConponent_o *)&this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(material, 0LL);
    klass = (AssetData_o *)p_wipeData->klass;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(klass, 0LL);
    p_wipeData->klass = 0LL;
    sub_B5D560(p_wipeData, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E69EA & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23585/*"white"*/, v5, v6, v7);
    byte_42E69EA = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__Fade((System_String_o *)StringLiteral_23585/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E69EC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_TypeInfo, v5, v6, v7);
    byte_42E69EC = 1;
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
    sub_B5D69C(0LL, v8);
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
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer))backFlashMesh->klass->vtable._41_SetTweenVolume.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._42_GetTweenVolume.methodPtr);
}