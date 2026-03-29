void FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D3207D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18109/*"circleIn"*/);
    byte_4D3207D = 1;
  }
  *(_QWORD *)&this->fields.flashColor.fields.r = 0;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0;
  v9 = StringLiteral_18109/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_18109/*"circleIn"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.wipeName, v9, v2, v3, v4, v5, v6, v7);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void FlashEffectComponent__EffectResume(FlashEffectComponent_o *this, const MethodInfo *method)
{
  FlashEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D32079 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9957/*"OnEndEffect"*/);
    byte_4D32079 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(FlashEffectComponent_o *, const MethodInfo *, float))klass->vtable._41_SetTweenVolume.methodPtr)(
    this,
    klass->vtable._41_SetTweenVolume.method,
    1.2039);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0);
  if ( !v5 )
    sub_1C93D2C(0, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7->fields.eventReceiver = v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_9957/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9957/*"OnEndEffect"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
}


void FlashEffectComponent__EndLoadWipe(FlashEffectComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *wipeData; // x22
  ExUIMeshRenderer_o *material; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x23
  UnityEngine_Material_o *v17; // x22
  _BOOL4 isPause; // w8

  if ( (byte_4D32078 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D___);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&StringLiteral_16336/*"_Gradation"*/);
    sub_1C93AD4(&StringLiteral_4928/*"Custom/BackFlashSheder"*/);
    byte_4D32078 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_19;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_3185994 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v15 = (UnityEngine_Texture_o *)Object_object;
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4928/*"Custom/BackFlashSheder"*/, 0);
  v17 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0);
  if ( !backFlashMesh )
    goto LABEL_19;
  ExUIMeshRenderer__set_material(backFlashMesh, v17, 0);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  ExUIMeshRenderer__SetImage(material, v15, 0);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  ((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *, float, float, float, float))material->klass->vtable._39_SetTweenColor.methodPtr)(
    material,
    material->klass->vtable._39_SetTweenColor.method,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0);
  if ( !material )
    goto LABEL_19;
  if ( !UnityEngine_Material__HasProperty_71985380(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16336/*"_Gradation"*/,
          0) )
    goto LABEL_17;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0)) == 0 )
LABEL_19:
    sub_1C93D2C(material, v12);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16336/*"_Gradation"*/, 0.2, 0);
LABEL_17:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v12);
}


void FlashEffectComponent__FlashStart(FlashEffectComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isSkip; // w8
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v5; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21

  if ( (byte_4D32077 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_FlashEffectComponent_EndLoadWipe__);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_15759/*"Wipe/"*/);
    sub_1C93AD4(&StringLiteral_25138/*"white"*/);
    byte_4D32077 = 1;
  }
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__Fade((System_String_o *)StringLiteral_25138/*"white"*/, 0, 0.0, 0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
  }
  else
  {
    v5 = System_String__Concat_64425724((System_String_o *)StringLiteral_15759/*"Wipe/"*/, this->fields.wipeName, 0);
    v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v6, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v5, v6, 1, 0);
  }
}


void FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *backFlashMesh; // x0
  GrandQuestFolderBoardItem_o *p_wipeData; // x19
  UnityEngine_Object_o *material; // x20
  AssetData_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D3207B & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3207B = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_1C93D2C(0, method);
    p_wipeData = (GrandQuestFolderBoardItem_o *)&this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(material, 0);
    klass = (AssetData_o *)p_wipeData->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(klass, 0);
    p_wipeData->klass = 0;
    sub_1C93A78(p_wipeData, 0, v7, v8, v9, v10, v11, v12);
  }
}


void FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D3207A & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25138/*"white"*/);
    byte_4D3207A = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__Fade((System_String_o *)StringLiteral_25138/*"white"*/, 0, 1.0, 0);
  this->fields.isWaitEndEffect = 1;
}


void FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D3207C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    byte_4D3207C = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0);
  if ( this->fields.isWaitEndEffect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !ScriptManager__IsBusyFade(0) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FlashEffectComponent__Resume(FlashEffectComponent_o *this, bool isSkip, const MethodInfo *method)
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
void FlashEffectComponent__SetTweenColor(FlashEffectComponent_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  __int64 v8; // x1
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  backFlashMesh = this->fields.backFlashMesh;
  if ( !backFlashMesh )
    sub_1C93D2C(0, v8);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, const MethodInfo *, long double, long double, long double, long double))backFlashMesh->klass->vtable._39_SetTweenColor.methodPtr)(
    backFlashMesh,
    backFlashMesh->klass->vtable._39_SetTweenColor.method,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void FlashEffectComponent__SetTweenVolume(FlashEffectComponent_o *this, float v, const MethodInfo *method)
{
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  backFlashMesh = this->fields.backFlashMesh;
  this->fields.volume = v;
  if ( !backFlashMesh )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, const MethodInfo *))backFlashMesh->klass->vtable._41_SetTweenVolume.methodPtr)(
    backFlashMesh,
    backFlashMesh->klass->vtable._41_SetTweenVolume.method);
}