void __fastcall CharaWipeTimeReverseEffectComponent___ctor(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B17571 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18155/*"circleOut"*/, method, v2);
    byte_4B17571 = 1;
  }
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0LL;
  v9 = StringLiteral_18155/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_18155/*"circleOut"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wipeName, v9, v2, v3, v4, v5, v6, v7);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CharaWipeTimeReverseEffectComponent__EffectResume(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaWipeTimeReverseEffectComponent_c *klass; // x8
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

  if ( (byte_4B1756D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10028/*"OnEndEffect"*/, method, v2);
    byte_4B1756D = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeTimeReverseEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TweenRenderVolume__Begin(gameObject, this->fields.duration, this->fields.maxAlpha, 0LL);
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


void __fastcall CharaWipeTimeReverseEffectComponent__EndCreateEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.isStart = 1;
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
  if ( !this->fields.isPause )
    CharaWipeTimeReverseEffectComponent__EffectResume(this, v9);
}


void __fastcall CharaWipeTimeReverseEffectComponent__EndLoadWipe(
        CharaWipeTimeReverseEffectComponent_o *this,
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
  AssetData_o *wipeData; // x22
  __int64 v25; // x1
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Vector2_o BodySize; // kr00_8
  float v28; // s0
  UIStandFigureRender_o *v29; // x21
  __int64 v30; // x1
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v32; // x2
  UnityEngine_GameObject_o *v33; // x20
  System_String_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  CommonEffectLoadComponent_LoadEndHandler_o *v38; // x22
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  const MethodInfo *v41; // x6

  if ( (byte_4B1756C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, data, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__, v12, v13);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_13699/*"Talk/"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_5046/*"Custom/Sprite-ScriptActionFigureWipe"*/, v22, v23);
    byte_4B1756C = 1;
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
    goto LABEL_22;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  this->fields.bodySize.fields.x = BodySize.fields.x;
  figure = (UIStandFigureRender_o *)this->fields.figure;
  v28 = 1.2039 - this->fields.effectRange;
  this->fields.bodySize.fields.y = BodySize.fields.y;
  this->fields.maxAlpha = v28;
  this->fields.addVolume = 0.2;
  if ( !figure )
    goto LABEL_22;
  UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_5046/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL);
  if ( !data )
    goto LABEL_22;
  v29 = (UIStandFigureRender_o *)this->fields.figure;
  figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                      data,
                                      (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v29
    || (UIStandFigureRender__SetWipeTexture(v29, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetGradation(figure, 0.2, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(figure, v25);
  }
  UIStandFigureRender__SetAlpha(figure, 1.0, 0LL);
  ((void (__fastcall *)(CharaWipeTimeReverseEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    0.0);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v33 = this->fields.subEffectBase;
    v34 = System_String__Concat_62401220((System_String_o *)StringLiteral_13699/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v38 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BCAA2C(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v35,
                                                          v36,
                                                          v37);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v38,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndCreateEffect__,
      v39);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v40);
    CommonEffectManager__Create_41360948(v33, v34, v38, 0, 0, 0, v41);
  }
  else
  {
    CharaWipeTimeReverseEffectComponent__EndCreateEffect(this, 0LL, v32);
  }
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnDestroy(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  AssetData_o *wipeData; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_Object_o *figure; // x20
  __int64 v14; // x1
  PartyOrganizationUtility_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B1756F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1756F = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wipeData, 0LL, v7, v8, v9, v10, v11, v12);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (PartyOrganizationUtility_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_1BCAA3C(klass, v14);
    }
    UIStandFigureRender__SetAlpha(klass, 1.0, 0LL);
    p_figure->klass = 0LL;
    sub_1BCA784(p_figure, 0LL, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnEndEffect(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4B1756E & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    byte_4B1756E = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v3);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaWipeTimeReverseEffectComponent__OnUpdate(
        CharaWipeTimeReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float totalTime; // s8
  const MethodInfo *v7; // x1
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  UnityEngine_GameObject_o *subEffectBase; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B17570 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17570 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v7);
    if ( !CommonEffectManager__IsBusy(subEffectBase, v7) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeTimeReverseEffectComponent__Resume(
        CharaWipeTimeReverseEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaWipeTimeReverseEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeTimeReverseEffectComponent__SetTweenColor(
        CharaWipeTimeReverseEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  __int64 v8; // x1
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_1BCAA3C(0LL, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaWipeTimeReverseEffectComponent__SetTweenVolume(
        CharaWipeTimeReverseEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_1BCAA3C(0LL, method);
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeTimeReverseEffectComponent__WipeStart(
        CharaWipeTimeReverseEffectComponent_o *this,
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
  UIStandFigureRender_o **p_figure; // x21
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  __int64 v33; // x1

  if ( (byte_4B1756B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, figure, method);
    sub_1BCA7E0(&Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__, v10, v11);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_15827/*"Wipe/"*/, v16, v17);
    byte_4B1756B = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.figure, (int64_t)figure, (int64_t)method, v3, v4, v5, v6, v7);
  if ( this->fields.isSkip )
  {
    if ( !*p_figure )
      sub_1BCAA3C(0LL, v19);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.figure, 0LL, v20, v21, v22, v23, v24, v25);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  else
  {
    v28 = System_String__Concat_62401220((System_String_o *)StringLiteral_15827/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31);
    AssetLoader_LoadEndDataHandler___ctor(
      v32,
      (Il2CppObject *)this,
      Method_CharaWipeTimeReverseEffectComponent_EndLoadWipe__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
    AssetManager__loadAssetStorage(v28, v32, 1, 0LL);
  }
}