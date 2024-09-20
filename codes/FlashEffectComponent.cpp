void __fastcall FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5C515 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17973/*"circleIn"*/);
    byte_4A5C515 = 1;
  }
  *(_QWORD *)&this->fields.flashColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0LL;
  v5 = StringLiteral_17973/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17973/*"circleIn"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wipeName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall FlashEffectComponent__EffectResume(FlashEffectComponent_o *this, const MethodInfo *method)
{
  FlashEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5C511 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9895/*"OnEndEffect"*/);
    byte_4A5C511 = 1;
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
    sub_1B8880C(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9895/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9895/*"OnEndEffect"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void __fastcall FlashEffectComponent__EndLoadWipe(
        FlashEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssetData_o *wipeData; // x22
  ExUIMeshRenderer_o *material; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v11; // x20
  UnityEngine_Shader_o *v12; // x23
  UnityEngine_Material_o *v13; // x22
  _BOOL4 isPause; // w8

  if ( (byte_4A5C510 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D___);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&StringLiteral_16235/*"_Gradation"*/);
    sub_1B885B0(&StringLiteral_4947/*"Custom/BackFlashSheder"*/);
    byte_4A5C510 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_19;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2E61D74 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v11 = (UnityEngine_Texture_o *)Object_object;
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4947/*"Custom/BackFlashSheder"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  if ( !backFlashMesh )
    goto LABEL_19;
  ExUIMeshRenderer__set_material(backFlashMesh, v13, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  ExUIMeshRenderer__SetImage(material, v11, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  ((void (__fastcall *)(ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))material->klass->vtable._39_SetTweenColor.method)(
    material,
    material->klass->vtable._40_GetTweenColor.methodPtr,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL);
  if ( !material )
    goto LABEL_19;
  if ( !UnityEngine_Material__HasProperty_69325648(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16235/*"_Gradation"*/,
          0LL) )
    goto LABEL_17;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL)) == 0LL )
LABEL_19:
    sub_1B8880C(material, v8);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16235/*"_Gradation"*/, 0.2, 0LL);
LABEL_17:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v8);
}


void __fastcall FlashEffectComponent__FlashStart(FlashEffectComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isSkip; // w8
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v5; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21

  if ( (byte_4A5C50F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_FlashEffectComponent_EndLoadWipe__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15660/*"Wipe/"*/);
    sub_1B885B0(&StringLiteral_24691/*"white"*/);
    byte_4A5C50F = 1;
  }
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__Fade((System_String_o *)StringLiteral_24691/*"white"*/, 0, 0.0, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  else
  {
    v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_15660/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v6, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v5, v6, 1, 0LL);
  }
}


void __fastcall FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *backFlashMesh; // x0
  ServantStatusBattleListViewItem_o *p_wipeData; // x19
  UnityEngine_Object_o *material; // x20
  AssetData_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C513 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C513 = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_1B8880C(0LL, method);
    p_wipeData = (ServantStatusBattleListViewItem_o *)&this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(material, 0LL);
    klass = (AssetData_o *)p_wipeData->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(klass, 0LL);
    p_wipeData->klass = 0LL;
    sub_1B88554(p_wipeData, 0, v7, v8);
  }
}


void __fastcall FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C512 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24691/*"white"*/);
    byte_4A5C512 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__Fade((System_String_o *)StringLiteral_24691/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  float totalTime; // s8
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5C514 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    byte_4A5C514 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !ScriptManager__IsBusyFade(0LL) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
    sub_1B8880C(0LL, v8);
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
    sub_1B8880C(0LL, method);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer))backFlashMesh->klass->vtable._41_SetTweenVolume.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._42_GetTweenVolume.methodPtr);
}