void FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_5971F8E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18762/*"circleIn"*/);
    byte_5971F8E = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_18762/*"circleIn"*/;
  *(_QWORD *)&this->fields.flashColor.fields.r = 0;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0;
  this->fields.wipeName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.wipeName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void FlashEffectComponent__EffectResume(FlashEffectComponent_o *this, const MethodInfo *method)
{
  FlashEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5971F8A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10303/*"OnEndEffect"*/);
    byte_5971F8A = 1;
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
    sub_2213CDC(0, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7->fields.eventReceiver = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_10303/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10303/*"OnEndEffect"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
}


void FlashEffectComponent__EndLoadWipe(FlashEffectComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *wipeData; // x21
  ExUIMeshRenderer_o *material; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x23
  UnityEngine_Material_o *v17; // x22
  _BOOL4 isPause; // w8

  if ( (byte_5971F89 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D___);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&StringLiteral_16885/*"_Gradation"*/);
    sub_2213A60(&StringLiteral_5091/*"Custom/BackFlashSheder"*/);
    byte_5971F89 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
    AssetManager__releaseAsset_47496972(wipeData, 0);
  }
  this->fields.wipeData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.wipeData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_19;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v15 = (UnityEngine_Texture_o *)Object_object;
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5091/*"Custom/BackFlashSheder"*/, 0);
  v17 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
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
  if ( !UnityEngine_Material__HasProperty_83277340(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16885/*"_Gradation"*/,
          0) )
    goto LABEL_17;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0)) == 0 )
LABEL_19:
    sub_2213CDC(material, v12);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16885/*"_Gradation"*/, 0.2, 0);
LABEL_17:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v12);
}


void FlashEffectComponent__FlashStart(FlashEffectComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isSkip; // w8
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v6; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21
  __int64 v8; // x1

  if ( (byte_5971F88 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_FlashEffectComponent_EndLoadWipe__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&StringLiteral_16277/*"Wipe/"*/);
    sub_2213A60(&StringLiteral_26191/*"white"*/);
    byte_5971F88 = 1;
  }
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
    ScriptManager__Fade((System_String_o *)StringLiteral_26191/*"white"*/, 0, 0.0, 0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  else
  {
    v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_16277/*"Wipe/"*/, this->fields.wipeName, 0);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
    AssetManager__loadAssetStorage(v6, v7, 1, 0, 0);
  }
}


void FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_5971F8C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F8C = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_2213CDC(0, method);
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83459800(material, 0);
    wipeData = this->fields.wipeData;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    AssetManager__releaseAsset_47496972(wipeData, 0);
    this->fields.wipeData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.wipeData, 0, v8, v9, v10, v11, v12, v13);
  }
}


void FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5971F8B & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&StringLiteral_26191/*"white"*/);
    byte_5971F8B = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__Fade((System_String_o *)StringLiteral_26191/*"white"*/, 0, 1.0, 0);
  this->fields.isWaitEndEffect = 1;
}


void FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  float totalTime; // s8
  __int64 v4; // x1
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5971F8D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_5971F8D = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4);
    if ( !ScriptManager__IsBusyFade(0) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
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


void FlashEffectComponent__SetTweenColor(FlashEffectComponent_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  backFlashMesh = this->fields.backFlashMesh;
  if ( !backFlashMesh )
    sub_2213CDC(0, v8);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, const MethodInfo *, float, float, float, float))backFlashMesh->klass->vtable._39_SetTweenColor.methodPtr)(
    backFlashMesh,
    backFlashMesh->klass->vtable._39_SetTweenColor.method,
    r,
    g,
    b,
    a);
}


void FlashEffectComponent__SetTweenVolume(FlashEffectComponent_o *this, float v, const MethodInfo *method)
{
  struct ExUIMeshRenderer_o *backFlashMesh; // x0

  backFlashMesh = this->fields.backFlashMesh;
  this->fields.volume = v;
  if ( !backFlashMesh )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, const MethodInfo *))backFlashMesh->klass->vtable._41_SetTweenVolume.methodPtr)(
    backFlashMesh,
    backFlashMesh->klass->vtable._41_SetTweenVolume.method);
}