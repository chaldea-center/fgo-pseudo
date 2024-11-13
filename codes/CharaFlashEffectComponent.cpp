void __fastcall CharaFlashEffectComponent___ctor(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B1755C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18154/*"circleIn"*/, method, v2);
    byte_4B1755C = 1;
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


void __fastcall CharaFlashEffectComponent__EffectResume(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CharaFlashEffectComponent_c *klass; // x8
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

  if ( (byte_4B17558 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10028/*"OnEndEffect"*/, method, v2);
    byte_4B17558 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
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


void __fastcall CharaFlashEffectComponent__EndCreateEffect(
        CharaFlashEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  _BOOL4 isPause; // w8

  this->fields.childEffect = effect;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.childEffect,
    (int64_t)effect,
    (int64_t)method,
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


void __fastcall CharaFlashEffectComponent__EndLoadWipe(
        CharaFlashEffectComponent_o *this,
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  AssetData_o *wipeData; // x22
  __int64 v31; // x1
  UIStandFigureRender_o *figure; // x0
  Il2CppObject *Object_object; // x0
  ExUIMeshRenderer_o *backFlashMesh; // x21
  UnityEngine_Texture_o *v35; // x20
  UnityEngine_Shader_o *v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  UnityEngine_Material_o *v40; // x22
  __int64 v41; // x1
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v43; // x2
  UnityEngine_GameObject_o *v44; // x20
  System_String_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  CommonEffectLoadComponent_LoadEndHandler_o *v49; // x22
  const MethodInfo *v50; // x3
  __int64 v51; // x1
  const MethodInfo *v52; // x6

  if ( (byte_4B17557 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, data, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_CharaFlashEffectComponent_EndCreateEffect__, v12, v13);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_5033/*"Custom/Sprite-ScriptActionFigureFlash"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_16404/*"_Gradation"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_13699/*"Talk/"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_5016/*"Custom/BackFlashSheder"*/, v28, v29);
    byte_4B17557 = 1;
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
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  this->fields.bodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  this->fields.addVolume = 0.2;
  if ( !data )
    goto LABEL_30;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
  backFlashMesh = this->fields.backFlashMesh;
  v35 = (UnityEngine_Texture_o *)Object_object;
  v36 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5016/*"Custom/BackFlashSheder"*/, 0LL);
  v40 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v37, v38, v39);
  UnityEngine_Material___ctor(v40, v36, 0LL);
  if ( !backFlashMesh )
    goto LABEL_30;
  ExUIMeshRenderer__set_material(backFlashMesh, v40, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  ExUIMeshRenderer__SetImage((ExUIMeshRenderer_o *)figure, v35, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  ((void (__fastcall *)(UIStandFigureRender_o *, Il2CppMethodPointer, float, float, float, float))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    this->fields.flashColor.fields.r,
    this->fields.flashColor.fields.g,
    this->fields.flashColor.fields.b,
    this->fields.flashColor.fields.a);
  figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
  if ( !figure )
    goto LABEL_30;
  figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0LL);
  if ( !figure )
    goto LABEL_30;
  if ( UnityEngine_Material__HasProperty_70020424(
         (UnityEngine_Material_o *)figure,
         (System_String_o *)StringLiteral_16404/*"_Gradation"*/,
         0LL) )
  {
    figure = (UIStandFigureRender_o *)this->fields.backFlashMesh;
    if ( figure )
    {
      figure = (UIStandFigureRender_o *)ExUIMeshRenderer__get_material((ExUIMeshRenderer_o *)figure, 0LL);
      if ( figure )
      {
        UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)figure,
          (System_String_o *)StringLiteral_16404/*"_Gradation"*/,
          0.2,
          0LL);
        goto LABEL_18;
      }
    }
LABEL_30:
    sub_1BCAA3C(figure, v31);
  }
LABEL_18:
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_5033/*"Custom/Sprite-ScriptActionFigureFlash"*/, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetWipeTexture(figure, v35, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetFilterColor(figure, this->fields.flashColor, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_30;
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
  ((void (__fastcall *)(CharaFlashEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v44 = this->fields.subEffectBase;
    v45 = System_String__Concat_62401220((System_String_o *)StringLiteral_13699/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v49 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BCAA2C(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v46,
                                                          v47,
                                                          v48);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v49,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndCreateEffect__,
      v50);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v51);
    CommonEffectManager__Create_41360948(v44, v45, v49, 0, 0, 0, v52);
  }
  else
  {
    CharaFlashEffectComponent__EndCreateEffect(this, 0LL, v43);
  }
}


void __fastcall CharaFlashEffectComponent__FlashStart(
        CharaFlashEffectComponent_o *this,
        UIStandFigureM_o *figure,
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UIStandFigureRender_o **p_figure; // x20
  __int64 v23; // x1
  _BOOL4 isSkip; // w8
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  __int64 v39; // x1

  if ( (byte_4B17556 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, figure, method);
    sub_1BCA7E0(&Method_CharaFlashEffectComponent_EndLoadWipe__, v10, v11);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_15827/*"Wipe/"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_24945/*"white"*/, v20, v21);
    byte_4B17556 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.figure, (int64_t)figure, (int64_t)method, v3, v4, v5, v6, v7);
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v23);
    ScriptManager__Fade((System_String_o *)StringLiteral_24945/*"white"*/, 0, 0.0, 0LL);
    if ( !*p_figure )
      sub_1BCAA3C(0LL, v25);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.figure, 0LL, v26, v27, v28, v29, v30, v31);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  else
  {
    v34 = System_String__Concat_62401220((System_String_o *)StringLiteral_15827/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v35, v36, v37);
    AssetLoader_LoadEndDataHandler___ctor(
      v38,
      (Il2CppObject *)this,
      Method_CharaFlashEffectComponent_EndLoadWipe__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v39);
    AssetManager__loadAssetStorage(v34, v38, 1, 0LL);
  }
}


void __fastcall CharaFlashEffectComponent__OnDestroy(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ExUIMeshRenderer_o *backFlashMesh; // x0
  struct AssetData_o **p_wipeData; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *material; // x21
  __int64 v10; // x1
  AssetData_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *figure; // x20
  PartyOrganizationUtility_o *p_figure; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1755A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1755A = 1;
  }
  if ( this->fields.wipeData )
  {
    backFlashMesh = this->fields.backFlashMesh;
    if ( !backFlashMesh )
      goto LABEL_17;
    p_wipeData = &this->fields.wipeData;
    material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(backFlashMesh, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(material, 0LL);
    v11 = *p_wipeData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
    AssetManager__releaseAsset_38505704(v11, 0LL);
    *p_wipeData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wipeData, 0LL, v12, v13, v14, v15, v16, v17);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (PartyOrganizationUtility_o *)&this->fields.figure;
    backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
    if ( p_figure->klass )
    {
      UIStandFigureRender__RecoverSharder((UIStandFigureRender_o *)backFlashMesh, 0LL);
      backFlashMesh = (ExUIMeshRenderer_o *)p_figure->klass;
      if ( p_figure->klass )
      {
        UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)backFlashMesh, 0.0, 0LL);
        p_figure->klass = 0LL;
        sub_1BCA784(p_figure, 0LL, v20, v21, v22, v23, v24, v25);
        return;
      }
    }
LABEL_17:
    sub_1BCAA3C(backFlashMesh, method);
  }
}


void __fastcall CharaFlashEffectComponent__OnEndEffect(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v10; // x1

  if ( (byte_4B17559 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_24945/*"white"*/, v7, v8);
    byte_4B17559 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v3);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v10);
  ScriptManager__Fade((System_String_o *)StringLiteral_24945/*"white"*/, 0, 1.0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaFlashEffectComponent__OnUpdate(CharaFlashEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float totalTime; // s8
  __int64 v9; // x1
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1755B & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v6, v7);
    byte_4B1755B = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v9);
    if ( !ScriptManager__IsBusyFade(0LL) )
    {
      subEffectBase = this->fields.subEffectBase;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v12);
      if ( !CommonEffectManager__IsBusy(subEffectBase, v12) )
      {
        this->fields.isWaitEndEffect = 0;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaFlashEffectComponent__Resume(
        CharaFlashEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaFlashEffectComponent__SetTweenColor(
        CharaFlashEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  __int64 v8; // x1
  void *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure
    || ((*(void (__fastcall **)(void *, _QWORD, long double, long double, long double, long double))(*(_QWORD *)figure + 936LL))(
          figure,
          *(_QWORD *)(*(_QWORD *)figure + 944LL),
          *(long double *)&c,
          v5,
          v4,
          v3),
        (figure = this->fields.backFlashMesh) == 0LL) )
  {
    sub_1BCAA3C(figure, v8);
  }
  (*(void (__fastcall **)(void *, _QWORD, long double, long double, long double, long double))(*(_QWORD *)figure + 936LL))(
    figure,
    *(_QWORD *)(*(_QWORD *)figure + 944LL),
    *(long double *)&c,
    v5,
    v4,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaFlashEffectComponent__SetTweenVolume(
        CharaFlashEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  long double v5; // q8

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure
    || (v5 = *(long double *)&v,
        UIStandFigureRender__SetVolume(figure, v, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.backFlashMesh) == 0LL) )
  {
    sub_1BCAA3C(figure, method);
  }
  ((void (__fastcall *)(UIStandFigureRender_o *, Il2CppMethodPointer, long double))figure->klass->vtable._41_SetTweenVolume.method)(
    figure,
    figure->klass->vtable._42_GetTweenVolume.methodPtr,
    v5);
}