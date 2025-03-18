void __fastcall FlashEffectComponent___ctor(FlashEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4C23414 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18320/*"down"*/, method);
    byte_4C23414 = 1;
  }
  *(_QWORD *)&this->fields.flashColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.flashColor.fields.b = 0LL;
  v9 = StringLiteral_18320/*"down"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_18320/*"down"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.wipeName, v9, v2, v3, v4, v5, v6, v7);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C23410 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_10088/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/, method);
    byte_4C23410 = 1;
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
    sub_1C3B9C0(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1C3B708((PartyOrganizationUtility_o *)&v7->fields.eventReceiver, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_10088/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10088/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  AssetData_o *wipeData; // x22
  ExUIMeshRenderer_o *material; // x0
  const MethodInfo *v16; // x1
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v19; // x20
  UnityEngine_Shader_o *v20; // x23
  UnityEngine_Material_o *v21; // x22
  _BOOL4 isPause; // w8

  if ( (byte_4C2340F & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_Texture2D___, data);
    sub_1C3B764(&AssetManager_TypeInfo, v10);
    sub_1C3B764(&UnityEngine_Material_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_16552/*"arg7"*/, v12);
    sub_1C3B764(&StringLiteral_5037/*"DataSetName"*/, v13);
    byte_4C2340F = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39213104(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.wipeData, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_19;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2FD1BC4 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v19 = (UnityEngine_Texture_o *)Object_object;
  v20 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5037/*"DataSetName"*/, 0LL);
  v21 = (UnityEngine_Material_o *)sub_1C3B9B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v21, v20, 0LL);
  if ( !backFlashMesh )
    goto LABEL_19;
  ExUIMeshRenderer__set_material(backFlashMesh, v21, 0LL);
  material = this->fields.backFlashMesh;
  if ( !material )
    goto LABEL_19;
  ExUIMeshRenderer__SetImage(material, v19, 0LL);
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
  if ( !UnityEngine_Material__HasProperty_70988928(
          (UnityEngine_Material_o *)material,
          (System_String_o *)StringLiteral_16552/*"arg7"*/,
          0LL) )
    goto LABEL_17;
  material = this->fields.backFlashMesh;
  if ( !material || (material = (ExUIMeshRenderer_o *)ExUIMeshRenderer__get_material(material, 0LL)) == 0LL )
LABEL_19:
    sub_1C3B9C0(material, v16);
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16552/*"arg7"*/, 0.2, 0LL);
LABEL_17:
  isPause = this->fields.isPause;
  this->fields.isStart = 1;
  if ( !isPause )
    FlashEffectComponent__EffectResume(this, v16);
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
  AssetLoader_LoadEndDataHandler_o *v12; // x21

  if ( (byte_4C2340E & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&Method_FlashEffectComponent_EndLoadWipe__, v3);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&ScriptManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_15969/*"_RandomTexture"*/, v7);
    sub_1C3B764(&StringLiteral_25203, v8);
    byte_4C2340E = 1;
  }
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__Fade((System_String_o *)StringLiteral_25203, 0, 0.0, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
  else
  {
    v11 = System_String__Concat_63368612((System_String_o *)StringLiteral_15969/*"_RandomTexture"*/, this->fields.wipeName, 0LL);
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_FlashEffectComponent_EndLoadWipe__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v11, v12, 1, 0LL);
  }
}


void __fastcall FlashEffectComponent__OnDestroy(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ExUIMeshRenderer_o *backFlashMesh; // x0
  PartyOrganizationUtility_o *p_wipeData; // x19
  UnityEngine_Object_o *material; // x20
  AssetData_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C23412 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C23412 = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      sub_1C3B9C0(0LL, method);
    p_wipeData = (PartyOrganizationUtility_o *)&this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(material, 0LL);
    klass = (AssetData_o *)p_wipeData->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39213104(klass, 0LL);
    p_wipeData->klass = 0LL;
    sub_1C3B708(p_wipeData, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall FlashEffectComponent__OnEndEffect(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C23411 & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_25203, v3);
    byte_4C23411 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__Fade((System_String_o *)StringLiteral_25203, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall FlashEffectComponent__OnUpdate(FlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float totalTime; // s8
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C23413 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&ScriptManager_TypeInfo, v3);
    byte_4C23413 = 1;
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
      UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
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
    sub_1C3B9C0(0LL, v8);
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
    sub_1C3B9C0(0LL, method);
  ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer))backFlashMesh->klass->vtable._41_SetTweenVolume.method)(
    backFlashMesh,
    backFlashMesh->klass->vtable._42_GetTweenVolume.methodPtr);
}