void __fastcall FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B175E1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18154/*"circleIn"*/, method, v2);
    byte_4B175E1 = 1;
  }
  *(_QWORD *)&this->fields.flashColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0LL;
  v9 = StringLiteral_18154/*"circleIn"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_18154/*"circleIn"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wipeName, v9, v2, v3, v4, v5, v6, v7);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall FlashEffectComponent__EffectResume(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FlashEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v6; // x0
  __int64 v7; // x1
  TweenRenderVolume_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B175DD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10028/*"OnEndEffect"*/, method, v2);
    byte_4B175DD = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(FlashEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  v8 = v6;
  v6->fields.method = 1;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8->fields.eventReceiver = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.eventReceiver, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_10028/*"OnEndEffect"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10028/*"OnEndEffect"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.callWhenFinished, v16, v17, v18, v19, v20, v21, v22);
}


void __fastcall FlashEffectComponent__EndLoadWipe(
        FlashEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  AssetData_o *wipeData; // x22
  ExUIMeshRenderer_o *material; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v23; // x20
  UnityEngine_Shader_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  UnityEngine_Material_o *v28; // x22
  _BOOL4 isPause; // w8

  if ( (byte_4B175DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, data, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_16404/*"_Gradation"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5016/*"Custom/BackFlashSheder"*/, v16, v17);
    byte_4B175DC = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
    AssetManager__releaseAsset_38505704(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wipeData, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_19;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v23 = (UnityEngine_Texture_o *)Object_object;
  v24 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5016/*"Custom/BackFlashSheder"*/, 0LL);
  v28 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v25, v26, v27);
  UnityEngine_Material___ctor(v28, v24, 0LL);
  if ( !backFlashMesh )
    goto LABEL_19;
  ExUIMeshRenderer__set_material(backFlashMesh, v28, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  ExUIMeshRenderer__SetImage(material, v23, 0LL);
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
  if ( !UnityEngine_Material__HasProperty_70020424(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16404/*"_Gradation"*/,
          0LL) )
    goto LABEL_17;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL)) == 0LL )
LABEL_19:
    sub_1BCAA3C(material, v20);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16404/*"_Gradation"*/, 0.2, 0LL);
LABEL_17:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v20);
}


void __fastcall FlashEffectComponent__FlashStart(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _BOOL4 isSkip; // w8
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  __int64 v24; // x1

  if ( (byte_4B175DB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FlashEffectComponent_EndLoadWipe__, v4, v5);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15827/*"Wipe/"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24945/*"white"*/, v14, v15);
    byte_4B175DB = 1;
  }
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
    ScriptManager__Fade((System_String_o *)StringLiteral_24945/*"white"*/, 0, 0.0, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  else
  {
    v19 = System_String__Concat_62401220((System_String_o *)StringLiteral_15827/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22);
    AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24);
    AssetManager__loadAssetStorage(v19, v23, 1, 0LL);
  }
}


void __fastcall FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ExUIMeshRenderer_o *backFlashMesh; // x0
  PartyOrganizationUtility_o *p_wipeData; // x19
  __int64 v8; // x1
  UnityEngine_Object_o *material; // x20
  __int64 v10; // x1
  AssetData_o *klass; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B175DF & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B175DF = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_1BCAA3C(0LL, method);
    p_wipeData = (PartyOrganizationUtility_o *)&this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(material, 0LL);
    klass = (AssetData_o *)p_wipeData->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
    AssetManager__releaseAsset_38505704(klass, 0LL);
    p_wipeData->klass = 0LL;
    sub_1BCA784(p_wipeData, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B175DE & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24945/*"white"*/, v4, v5);
    byte_4B175DE = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__Fade((System_String_o *)StringLiteral_24945/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float totalTime; // s8
  __int64 v7; // x1
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B175E0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v4, v5);
    byte_4B175E0 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
    if ( !ScriptManager__IsBusyFade(0LL) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    sub_1BCAA3C(0LL, v8);
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
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer))backFlashMesh->klass->vtable._41_SetTweenVolume.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._42_GetTweenVolume.methodPtr);
}