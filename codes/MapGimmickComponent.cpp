void __fastcall MapGimmickComponent___ctor(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1EC44 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1EC44 = 1;
  }
  this->fields.mDepthBase = 30;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  this->fields.mEasingType = 17;
  v9 = StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mHideSeName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mDispSeName, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x20
  Il2CppObject *v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_4C1EC31 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_MapGimmickComponent___ctor__, method);
    sub_1C3B764(&Method_CStateManager_MapGimmickComponent__add__, v3);
    sub_1C3B764(&CStateManager_MapGimmickComponent__TypeInfo, v4);
    sub_1C3B764(&MapGimmickComponent_StateDispAnim_TypeInfo, v5);
    sub_1C3B764(&MapGimmickComponent_StateHideAnim_TypeInfo, v6);
    sub_1C3B764(&MapGimmickComponent_StateMapMain_TypeInfo, v7);
    sub_1C3B764(&MapGimmickComponent_StateNone_TypeInfo, v8);
    byte_4C1EC31 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_T__o *)sub_1C3B9B0(CStateManager_MapGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3225B48 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v10;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v18 = (Il2CppObject *)sub_1C3B9B0(MapGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_3225BF0 *)Method_CStateManager_MapGimmickComponent__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1C3B9B0(MapGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_9;
    CStateManager_object___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_3225BF0 *)Method_CStateManager_MapGimmickComponent__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1C3B9B0(MapGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23
      || (CStateManager_object___add(
            v23,
            2,
            (IState_T__o *)v24,
            (const MethodInfo_3225BF0 *)Method_CStateManager_MapGimmickComponent__add__),
          v25 = (CStateManager_T__o *)*p_mFSM,
          v26 = (Il2CppObject *)sub_1C3B9B0(MapGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v26, 0LL),
          !v25) )
    {
LABEL_9:
      sub_1C3B9C0(v19, v20);
    }
    CStateManager_object___add(
      v25,
      3,
      (IState_T__o *)v26,
      (const MethodInfo_3225BF0 *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v27);
  }
}


float __fastcall MapGimmickComponent__GetAnimTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  void *mMapCtrl_MapGimmickInfo; // x0
  int v4; // w8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo
    || (mMapCtrl_MapGimmickInfo = MapControl_MapGimmickInfo__GetMine(
                                    (MapControl_MapGimmickInfo_o *)mMapCtrl_MapGimmickInfo,
                                    method)) == 0LL )
  {
    sub_1C3B9C0(mMapCtrl_MapGimmickInfo, method);
  }
  v4 = *((_DWORD *)mMapCtrl_MapGimmickInfo + 24);
  if ( (v4 & 0x80000000) != 0 )
    return this->fields.mAnimTime;
  else
    return (float)v4 / 1000.0;
}


CommonEffectComponent_o *__fastcall MapGimmickComponent__GetCommonEffectComponent(
        MapGimmickComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        MapCamera_o *mapCamera,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22
  MapEffectComponent_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x0
  const MethodInfo *v18; // x2

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4C1EC38 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, prefab);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___, v7);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v8);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___, v9);
    this = (MapGimmickComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1EC38 = 1;
  }
  if ( !prefab )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      Component_object,
                                      (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v12, gameObject, mapCamera, v14);
      return (CommonEffectComponent_o *)v12;
    }
LABEL_19:
    sub_1C3B9C0(this, prefab);
  }
  v15 = UnityEngine_GameObject__GetComponent_object_(
          prefab,
          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      v15,
                                      (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v17 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_34969340(v16, v17, v18);
      return (CommonEffectComponent_o *)v12;
    }
    goto LABEL_19;
  }
  return (CommonEffectComponent_o *)v12;
}


UnityEngine_GameObject_o *__fastcall MapGimmickComponent__GetEffectPrefab(
        MapGimmickComponent_o *this,
        System_String_o *effectPrefabName,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  __int64 v8; // x1
  Il2CppObject *Object_object__50142412; // x21

  if ( (byte_4C1EC37 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, effectPrefabName);
    this = (MapGimmickComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    byte_4C1EC37 = 1;
  }
  if ( !assetData )
    sub_1C3B9C0(this, effectPrefabName);
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              assetData,
                              effectPrefabName,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL) )
  {
    if ( !multiAssetData )
      return 0LL;
    Object_object__50142412 = AssetData__GetObject_object__50142412(
                                multiAssetData,
                                effectPrefabName,
                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_object__50142412;
}


System_String_o *__fastcall MapGimmickComponent__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = id;
  if ( (byte_4C1EC30 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_9059/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, method);
    sub_1C3B764(&StringLiteral_1199/*"1.2.840.10045.2.1"*/, v2);
    byte_4C1EC30 = 1;
  }
  v3 = System_Int32__ToString_64174220((int32_t)&v5, (System_String_o *)StringLiteral_1199/*"1.2.840.10045.2.1"*/, 0LL);
  return System_String__Concat_63368612((System_String_o *)StringLiteral_9059/*"NONSELECT_NOT_CLEAR_CONDITIONS"*/, v3, 0LL);
}


MapControl_MapGimmickInfo_o *__fastcall MapGimmickComponent__GetMapCtrl_MapGimmickInfo(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_MapGimmickInfo;
}


MapGimmickRandomEffectElementComponent_o *__fastcall MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4C1EC39 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1EC39 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !prefab )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Component_object )
LABEL_13:
    sub_1C3B9C0(v4, v5);
  return MapGimmickRandomEffectComponent__GetRandomElement((MapGimmickRandomEffectComponent_o *)Component_object, v5);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C1EC3A & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_1C3B764(&Method_CStateManager_MapGimmickComponent__getState__, method);
    byte_4C1EC3A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C3B9C0(this, method);
  return mFSM->fields.m_state;
}


void __fastcall MapGimmickComponent__InitDefaultParam(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v19; // x8
  struct System_String_o *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *v27; // x20
  const MethodInfo *v28; // x2
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  struct UISprite_o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4C1EC33 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_UISprite___, method);
    sub_1C3B764(&UnityEngine_GameObject_TypeInfo, v9);
    sub_1C3B764(&string_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_13199/*"TRIGGER EXIT 2D"*/, v11);
    byte_4C1EC33 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mHideSeName, (int64_t)Empty, v2, v3, v4, v5, v6, v7);
  v19 = string_TypeInfo->static_fields;
  v20 = v19->Empty;
  this->fields.mDispSeName = v19->Empty;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mDispSeName, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v27 = (UnityEngine_GameObject_o *)sub_1C3B9B0(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v27, (System_String_o *)StringLiteral_13199/*"TRIGGER EXIT 2D"*/, 0LL);
  GameObjectExtensions__SetParent(v27, (UnityEngine_Component_o *)this, v28);
  if ( !v27
    || (v29 = UnityEngine_GameObject__AddComponent_object_(
                v27,
                (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_1C3B9C0(v29, v30);
  }
  v31 = (struct UISprite_o *)v29;
  UIWidget__SetDimensions((UIWidget_o *)v29, 64, 64, 0LL);
  this->fields.mSprite = v31;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mSprite, (int64_t)v31, v32, v33, v34, v35, v36, v37);
}


bool __fastcall MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  void *Mine; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  int32_t v7; // w19

  if ( (byte_4C1EC42 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v2);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v3);
    byte_4C1EC42 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v5 = **((_QWORD **)Mine + 23);
  if ( !v5 )
    goto LABEL_20;
  v6 = *(_QWORD *)(v5 + 264);
  if ( !v6 )
    goto LABEL_20;
  Mine = *(void **)(v6 + 344);
  if ( !Mine )
    goto LABEL_20;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, method);
  if ( !Mine )
    goto LABEL_20;
  v7 = *((_DWORD *)Mine + 24);
  if ( v7 < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Mine = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Mine )
LABEL_20:
    sub_1C3B9C0(Mine, method);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Mine, v7, 0, 0LL, 0LL);
}


bool __fastcall MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct CommonEffectComponent_o *v6; // x8

  if ( (byte_4C1EC35 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EC35 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v6 = this->fields.commonEffectComponent;
  if ( !v6 )
    sub_1C3B9C0(v4, v5);
  return v6->fields.isTouched;
}


void __fastcall MapGimmickComponent__OnGimmickTouched(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x21
  void *Mine; // x0
  __int64 v10; // x8
  __int64 v11; // x8

  if ( (byte_4C1EC36 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, mapGimmickEntity);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v6);
    byte_4C1EC36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v7);
    byte_4C1CAE3 = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v10 = **((_QWORD **)Mine + 23);
  if ( !v10
    || (v11 = *(_QWORD *)(v10 + 264)) == 0
    || (Mine = *(void **)(v11 + 344)) == 0LL
    || (Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, v7)) == 0LL
    || !mapGimmickEntity
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(
          (ClientMissionManager_o *)Instance,
          *((_DWORD *)Mine + 24),
          mapGimmickEntity->fields.id,
          0LL),
        (Mine = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Mine, v7);
  }
  ClientMissionManager__SendRequest((ClientMissionManager_o *)Mine, touchCallback, 0LL);
}


void __fastcall MapGimmickComponent__ResetOldDispTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.mOldDispTime = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim(MapGimmickComponent_o *this, bool is_disp, const MethodInfo *method)
{
  float AnimTime; // s0
  const MethodInfo *v6; // x3

  AnimTime = MapGimmickComponent__GetAnimTime(this, (const MethodInfo *)is_disp);
  MapGimmickComponent__SetDispAnim_35029400(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_35029400(this, is_disp, 0.0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim_35029400(
        MapGimmickComponent_o *this,
        bool is_disp,
        float time,
        bool is_play_se,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  UnityEngine_Component_o *mSprite; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  struct CommonEffectComponent_o *v29; // x20
  System_Action_o *v30; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  System_String_o *v40; // x21
  System_Action_o *v41; // x23
  EasingObject_o *v42; // x24
  System_Action_o *v43; // x25
  struct CommonEffectComponent_o *v44; // x20
  System_Action_o *v45; // x21
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  const MethodInfo *v48; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4C1EC3D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, is_disp);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_1C3B764(&Method_MapGimmickComponent_SetDispAnim__, v10);
    sub_1C3B764(&Method_MapGimmickComponent_StateDispAnimEnd__, v11);
    sub_1C3B764(&Method_MapGimmickComponent_StateHideAnimEnd__, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__, v14);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__, v15);
    sub_1C3B764(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo, v16);
    byte_4C1EC3D = 1;
  }
  v17 = sub_1C3B9B0(MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_37;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  MapGimmickComponent__StartActionEffect(this, v26);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v27);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( ((unsigned __int8)mSprite & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v17 + 32) = Component_object;
    sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)Component_object, v33, v34, v35, v36, v37, v38);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_37;
    *(float *)(v17 + 28) = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&mSprite->klass[1]._1.this_arg.bits)(
                             mSprite,
                             mSprite->klass[1]._1.element_class);
    *(_DWORD *)(v17 + 24) = is_disp;
    if ( is_disp )
      v39 = 64LL;
    else
      v39 = 56LL;
    v40 = *(System_String_o **)((char *)&this->klass + v39);
    v41 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v41, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      v42 = *(EasingObject_o **)(v17 + 32);
      v43 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        (Il2CppObject *)v17,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0LL);
      if ( !v42 )
        goto LABEL_37;
      EasingObject__Play(v42, time, v43, v41, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v40, 0LL) )
    {
      v46 = Method_MapGimmickComponent_SetDispAnim__;
      if ( (*((_BYTE *)Method_MapGimmickComponent_SetDispAnim__ + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_1C3B77C(Method_MapGimmickComponent_SetDispAnim__);
      v47 = (System_Reflection_MethodBase_o *)sub_1C3B748(v46, v46[4]);
      OverwriteAssetSoundName__PlaySe(v47, v40, 0, 0LL);
    }
    return;
  }
  if ( is_disp )
  {
    mSprite = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !mSprite )
      goto LABEL_37;
    mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mSprite, 0LL);
    if ( !mSprite )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 1, 0LL);
    v29 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v30 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v29 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v29->klass->vtable._6_ForceStart.method)(
          v29,
          1LL,
          v30,
          v29->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_37:
      sub_1C3B9C0(mSprite, v19);
    }
    if ( !v29 )
      goto LABEL_37;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v44 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v44 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0LL);
      if ( !mSprite )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v48);
    }
    else
    {
      v45 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v44 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v44->klass->vtable._8_Stop.method)(
                                             v44,
                                             0LL,
                                             v45,
                                             v44->klass->vtable._9_ForceStop.methodPtr);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_37;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
}


void __fastcall MapGimmickComponent__SetDisplayByRaidProgress(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct MapControl_MapGimmickInfo_o *v9; // x8
  int32_t dispType; // w8
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x3
  int32_t v13; // w1

  if ( (byte_4C1EC41 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__, v3);
    sub_1C3B764(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__, v4);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_4C1EC41 = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             method);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  v7 = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, 0LL);
  if ( v7 && !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)v7, v8) )
  {
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_35438980(
                                                                 (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                 this->fields.mMapCtrl_MapGimmickInfo,
                                                                 0LL);
      v9 = this->fields.mMapCtrl_MapGimmickInfo;
      if ( v9 )
      {
        dispType = v9->fields.dispType;
        if ( dispType != 0 || ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) == 0 )
        {
          if ( dispType != 1 || (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) == 0 )
            return;
          v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__,
            0LL);
          v13 = 2;
        }
        else
        {
          v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__,
            0LL);
          v13 = 3;
        }
        MapGimmickComponent__SetState(this, v13, v11, v12);
        return;
      }
    }
LABEL_16:
    sub_1C3B9C0(mMapCtrl_MapGimmickInfo, method);
  }
}


void __fastcall MapGimmickComponent__SetMapGimmickInfo(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mMapCtrl_MapGimmickInfo = mapGimmickInfo;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (int64_t)mapGimmickInfo,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetMoveAnim(
        MapGimmickComponent_o *this,
        UnityEngine_Vector3_o posTo,
        float time,
        int32_t easeType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_o *v40; // x21
  EasingObject_o *v41; // x22
  System_Action_o *v42; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_4C1EC3E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&easeType);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__, v14);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__, v15);
    sub_1C3B764(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo, v16);
    byte_4C1EC3E = 1;
  }
  v17 = sub_1C3B9B0(MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(float *)(v17 + 24) = x;
  *(float *)(v17 + 28) = y;
  *(float *)(v17 + 32) = z;
  *(_QWORD *)(v17 + 40) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)callback, v26, v27, v28, v29, v30, v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 64) = Component_object;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 64), (int64_t)Component_object, v34, v35, v36, v37, v38, v39);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v17 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v17,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v41 = *(EasingObject_o **)(v17 + 64);
    v42 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0LL);
    if ( v41 )
    {
      EasingObject__Play(v41, time, v42, v40, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(transform, v19);
  }
  ActionExtensions__Call(v40, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetState(
        MapGimmickComponent_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_4C1EC3B & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_MapGimmickComponent__setState__, *(_QWORD *)&state);
    byte_4C1EC3B = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)p_mStateEndAct,
    (int64_t)end_act,
    (int64_t)end_act,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_mStateEndAct - 6);
  if ( !v13 )
    sub_1C3B9C0(0LL, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_3225C7C *)Method_CStateManager_MapGimmickComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4C1EC40 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, enabled);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1EC40 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, enabled, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(gameObject, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetUseAnimNum(
        MapGimmickComponent_o *this,
        int32_t num,
        bool isUpdateName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x22
  __int64 v8; // x1
  CommonEffectComponent_o *v9; // x0

  if ( (byte_4C1EC43 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&num);
    byte_4C1EC43 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    v9 = this->fields.commonEffectComponent;
    if ( !v9 )
      sub_1C3B9C0(0LL, v8);
    CommonEffectComponent__SetUseAnimNum(v9, num, isUpdateName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__Setup(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mg_inf,
        MapCamera_o *mapCamera,
        System_Collections_Generic_List_UIAtlas__o *atlases,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  int64_t v42; // x23
  __int64 IsMonoColorRect; // x0
  const MethodInfo *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  MapGimmickEntity_o *Mine; // x0
  __int64 *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  UISprite_o *mSprite; // x26
  System_String_o *v72; // x27
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  UISprite_o *v75; // x28
  UnityEngine_Behaviour_o *v76; // x26
  UnityEngine_Object_o *monitor; // x28
  bool v78; // w0
  System_String_o *v79; // x26
  struct UISprite_o *v80; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v82; // x0
  MapGimmickComponent_o *v83; // x0
  const MethodInfo *v84; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v87; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  UnityEngine_Object_o *v96; // x26
  __int64 v97; // x8
  __int64 v98; // x8
  int32_t v99; // w26
  UnityEngine_GameObject_o *v100; // x26
  bool v101; // w1
  float v102; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v104; // x1
  long double v105; // q0
  int32_t UseAnimFromScript; // w0
  struct CommonEffectComponent_o *v107; // x24
  System_Action_o *v108; // x25
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  float v115; // s0
  float v116; // s1
  float v117; // s2
  float v118; // s9
  float v119; // s8
  float v120; // s10
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *v122; // x24
  __int64 v123; // x25
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x8
  __int64 v131; // x8
  int32_t v132; // w26
  DataManager_o *v133; // x23
  Il2CppObject *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  __int64 v141; // x8
  EventMissionMaster_o *v142; // x23
  EventMissionEntity_array *EventMissionList_40623892; // x0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  System_Collections_Generic_List_EventDelegate__o *v150; // x23
  EventDelegate_Callback_o *v151; // x24
  int32_t v152; // w0
  int v153; // t1
  System_String_o *v154; // x0
  MapGimmickComponent_o *v155; // x0
  const MethodInfo *v156; // x4
  UnityEngine_Object_o *v157; // x20
  Il2CppObject *v158; // x20
  Il2CppObject *v159; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  UnityEngine_GameObject_o *v166; // x20
  UnityEngine_GameObject_o *v167; // x0
  const MethodInfo *v168; // x2
  UnityEngine_Color_o v169; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1EC34 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, mg_inf);
    sub_1C3B764(&AtlasManager_TypeInfo, v15);
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMissionMaster___, v18);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v20);
    sub_1C3B764(&EventDelegate_TypeInfo, v21);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v22);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_UIButton___, v23);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v24);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v25);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v26);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v27);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v28);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v30);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v31);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__, v32);
    sub_1C3B764(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo, v33);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v34);
    sub_1C3B764(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v35);
    sub_1C3B764(&StringLiteral_25205, v36);
    sub_1C3B764(&StringLiteral_1203/*"1.2.840.10045.3.1.4"*/, v37);
    sub_1C3B764(&StringLiteral_20216/*"img_txt_framerate"*/, v38);
    sub_1C3B764(&StringLiteral_9041/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v39);
    sub_1C3B764(&StringLiteral_1/*""*/, v40);
    sub_1C3B764(&StringLiteral_9040/*"NEXT_SVT"*/, v41);
    byte_4C1EC34 = 1;
  }
  *(_QWORD *)&v169.fields.r = 0LL;
  *(_QWORD *)&v169.fields.b = 0LL;
  entity = 0LL;
  v42 = sub_1C3B9B0(MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_133;
  *(_QWORD *)(v42 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)this, v45, v46, v47, v48, v49, v50);
  *(_QWORD *)(v42 + 32) = touchCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)touchCallback, v51, v52, v53, v54, v55, v56);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (int64_t)mg_inf,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_133;
  Mine = MapControl_MapGimmickInfo__GetMine(mg_inf, v44);
  *(_QWORD *)(v42 + 24) = Mine;
  v64 = (__int64 *)(v42 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v42 + 24), (int64_t)Mine, v65, v66, v67, v68, v69, v70);
  IsMonoColorRect = *(_QWORD *)(v42 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    mSprite = this->fields.mSprite;
    v72 = (System_String_o *)StringLiteral_25205;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*v64 )
      goto LABEL_133;
    v73 = System_Int32__ToString_64174220((unsigned int)*v64 + 24, (System_String_o *)StringLiteral_1203/*"1.2.840.10045.3.1.4"*/, 0LL);
    v74 = System_String__Concat_63368612((System_String_o *)StringLiteral_20216/*"img_txt_framerate"*/, v73, 0LL);
    v75 = this->fields.mSprite;
    v72 = v74;
    IsMonoColorRect = (__int64)UIAtlas__GetUIAtlasBySpriteName(atlases, v74, 0LL);
    if ( !v75 )
      goto LABEL_133;
    UISprite__set_atlas(v75, (UIAtlas_o *)IsMonoColorRect, 0LL);
  }
  v76 = (UnityEngine_Behaviour_o *)this->fields.mSprite;
  if ( !v76 )
    goto LABEL_133;
  monitor = (UnityEngine_Object_o *)v76[19].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v78 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v76, v78, 0LL);
  IsMonoColorRect = *v64;
  if ( !*v64 )
    goto LABEL_133;
  IsMonoColorRect = (__int64)MapGimmickEntity__GetColorCodeFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( !this->fields.mSprite )
    goto LABEL_133;
  v79 = (System_String_o *)IsMonoColorRect;
  IsMonoColorRect = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.mSprite, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v72, 0LL);
    IsMonoColorRect = *v64;
    if ( !*v64 )
      goto LABEL_133;
    IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    v80 = this->fields.mSprite;
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_133;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v80 )
        goto LABEL_133;
      UIWidget__SetDimensions((UIWidget_o *)this->fields.mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v80 )
        goto LABEL_133;
      IsMonoColorRect = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v80->klass->vtable._33_MakePixelPerfect.method)(
                          this->fields.mSprite,
                          v80->klass->vtable._34_get_minWidth.methodPtr);
    }
    if ( !*v64 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UIWidget__set_depth((UIWidget_o *)IsMonoColorRect, *(_DWORD *)(*v64 + 36) + this->fields.mDepthBase, 0LL);
    if ( !*v64 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v102 = this->fields.mScaleBase * (float)((float)*(int *)(*v64 + 80) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
    GameObjectExtensions__SetLocalScale_34965512(gameObject, v102, v104);
    if ( !System_String__IsNullOrEmpty(v79, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v79, &v169, 0LL);
      IsMonoColorRect = (__int64)this->fields.mSprite;
      if ( !IsMonoColorRect )
        goto LABEL_133;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, v169, 0LL);
    }
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    LODWORD(v105) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v105 = 0.0;
    (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)IsMonoColorRect + 440LL))(
      IsMonoColorRect,
      *(_QWORD *)(*(_QWORD *)IsMonoColorRect + 448LL),
      v105);
  }
  else
  {
    if ( !*v64 )
      goto LABEL_133;
    v82 = System_Int32__ToString((unsigned int)*v64 + 24, 0LL);
    v83 = (MapGimmickComponent_o *)System_String__Concat_63368612((System_String_o *)StringLiteral_9041/*"NEXT_TOTAL_LOGIN_BONUS_DAYS"*/, v82, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab(v83, (System_String_o *)v83, assetData, multiAssetData, v84);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v44);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsMonoColorRect = UnityEngine_Object__op_Inequality(MapGimmickRandomEffectElementComponent, 0LL, 0LL);
      if ( (IsMonoColorRect & 1) != 0 )
      {
        if ( !MapGimmickRandomEffectElementComponent )
          goto LABEL_133;
        EffectPrefab = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)MapGimmickRandomEffectElementComponent,
                         0LL);
      }
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v87);
      this->fields.commonEffectComponent = CommonEffectComponent;
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.commonEffectComponent,
        (int64_t)CommonEffectComponent,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
      v96 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C1CAE3 )
        {
          sub_1C3B764(&TerminalSceneComponent_TypeInfo, v44);
          byte_4C1CAE3 = 1;
        }
        IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v97 = **(_QWORD **)(IsMonoColorRect + 184);
        if ( !v97 )
          goto LABEL_133;
        v98 = *(_QWORD *)(v97 + 264);
        if ( !v98 )
          goto LABEL_133;
        IsMonoColorRect = *(_QWORD *)(v98 + 344);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v44);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        v99 = *(_DWORD *)(IsMonoColorRect + 96);
        IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)IsMonoColorRect,
                                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
          &entity,
          v99,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          IsMonoColorRect = (__int64)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          IsMonoColorRect = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_133;
          IsMonoColorRect = QuestTree__CheckMapGimmickCond_35438980((QuestTree_o *)IsMonoColorRect, mg_inf, 0LL);
          if ( !v100 )
            goto LABEL_133;
          v101 = IsMonoColorRect & 1;
          IsMonoColorRect = (__int64)v100;
        }
        else
        {
          IsMonoColorRect = (__int64)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)IsMonoColorRect,
                                       0LL);
          if ( !IsMonoColorRect )
            goto LABEL_133;
          v101 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v101, 0LL);
        IsMonoColorRect = *v64;
        if ( !*v64 )
          goto LABEL_133;
        UseAnimFromScript = MapGimmickEntity__GetUseAnimFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
        if ( UseAnimFromScript >= 1 )
        {
          v44 = (const MethodInfo *)(unsigned int)UseAnimFromScript;
          IsMonoColorRect = (__int64)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsMonoColorRect, (int32_t)v44, 0, 0LL);
        }
        IsMonoColorRect = (__int64)*p_commonEffectComponent;
        if ( !*p_commonEffectComponent )
          goto LABEL_133;
        CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)IsMonoColorRect, 0LL);
        v107 = *p_commonEffectComponent;
        v108 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          v108,
          (Il2CppObject *)v42,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v107 )
          goto LABEL_133;
        v107->fields.touchCallback = v108;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&v107->fields.touchCallback,
          (int64_t)v108,
          v109,
          v110,
          v111,
          v112,
          v113,
          v114);
      }
    }
  }
  IsMonoColorRect = *v64;
  if ( !*v64 )
    goto LABEL_133;
  *(UnityEngine_Vector3_o *)&v115 = MapGimmickEntity__GetTouchSize((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( v115 <= 0.0 )
    goto LABEL_117;
  v118 = v116;
  if ( v116 <= 0.0 )
    goto LABEL_117;
  v119 = v115;
  v120 = v117;
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)IsMonoColorRect,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsMonoColorRect = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)UnityEngine_GameObject__AddComponent_object_(
                                 (UnityEngine_GameObject_o *)IsMonoColorRect,
                                 (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_object = (Il2CppObject *)IsMonoColorRect;
  }
  if ( !Component_object )
    goto LABEL_133;
  v171.fields.x = v119;
  v171.fields.y = v118;
  v171.fields.z = v120;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v171, 0LL);
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  v122 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)IsMonoColorRect,
                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v122, 0LL, 0LL) )
  {
    IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v122 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                     (UnityEngine_GameObject_o *)IsMonoColorRect,
                                     (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *v64;
  if ( !*v64 )
LABEL_133:
    sub_1C3B9C0(IsMonoColorRect, v44);
  if ( MapGimmickEntity__IsEventMissionScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL) )
  {
    v123 = sub_1C3B9B0(MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v123, 0LL);
    if ( !v123 )
      goto LABEL_133;
    *(_QWORD *)(v123 + 32) = v42;
    sub_1C3B708((PartyOrganizationUtility_o *)(v123 + 32), v42, v124, v125, v126, v127, v128, v129);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v44);
      byte_4C1CAE3 = 1;
    }
    IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v130 = **(_QWORD **)(IsMonoColorRect + 184);
    if ( !v130 )
      goto LABEL_133;
    v131 = *(_QWORD *)(v130 + 264);
    if ( !v131 )
      goto LABEL_133;
    IsMonoColorRect = *(_QWORD *)(v131 + 344);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v44);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v132 = *(_DWORD *)(IsMonoColorRect + 96);
    IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v133 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)IsMonoColorRect,
                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v134 = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
             v132,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v123 + 16) = v134;
    sub_1C3B708((PartyOrganizationUtility_o *)(v123 + 16), (int64_t)v134, v135, v136, v137, v138, v139, v140);
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 v133,
                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v141 = *(_QWORD *)(v123 + 32);
    if ( !v141 )
      goto LABEL_133;
    v142 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(_QWORD *)(v141 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapGimmickEntity__GetEventMissionIdList((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    if ( !v142 )
      goto LABEL_133;
    EventMissionList_40623892 = EventMissionMaster__getEventMissionList_40623892(
                                  v142,
                                  (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                  0LL);
    *(_QWORD *)(v123 + 24) = EventMissionList_40623892;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)(v123 + 24),
      (int64_t)EventMissionList_40623892,
      v144,
      v145,
      v146,
      v147,
      v148,
      v149);
    if ( !v122 )
      goto LABEL_133;
    v150 = (System_Collections_Generic_List_EventDelegate__o *)v122[8].monitor;
    v151 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v151,
      (Il2CppObject *)v123,
      (intptr_t)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(v150, v151, 0LL);
  }
LABEL_117:
  IsMonoColorRect = *v64;
  if ( !*v64 )
    goto LABEL_133;
  v153 = *(_DWORD *)(IsMonoColorRect + 100);
  v152 = IsMonoColorRect + 100;
  if ( v153 >= 1 )
  {
    v154 = System_Int32__ToString(v152, 0LL);
    v155 = (MapGimmickComponent_o *)System_String__Concat_63368612((System_String_o *)StringLiteral_9040/*"NEXT_SVT"*/, v154, 0LL);
    v157 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     v155,
                                     (System_String_o *)v155,
                                     assetData,
                                     multiAssetData,
                                     v156);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsMonoColorRect = UnityEngine_Object__op_Inequality(v157, 0LL, 0LL);
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !v157 )
        goto LABEL_133;
      v158 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v157,
               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v158, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v159 = UnityEngine_Object__Instantiate_object_(
                 v158,
                 (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v159;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.actionEffect,
          (int64_t)v159,
          v160,
          v161,
          v162,
          v163,
          v164,
          v165);
        IsMonoColorRect = (__int64)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v166 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          v167 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_34969340(v166, v167, v168);
          IsMonoColorRect = (__int64)this->fields.actionEffect;
          if ( IsMonoColorRect )
          {
            IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsMonoColorRect,
                                         0LL);
            if ( IsMonoColorRect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, 0, 0LL);
              return;
            }
          }
        }
        goto LABEL_133;
      }
    }
  }
}


void __fastcall MapGimmickComponent__StartActionEffect(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actionEffect; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C1EC3C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EC3C = 1;
  }
  actionEffect = (UnityEngine_Object_o *)this->fields.actionEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionEffect, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.actionEffect;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.actionEffect) == 0LL) )
    {
      sub_1C3B9C0(gameObject, v4);
    }
    CommonEffectComponent__ForceStart((CommonEffectComponent_o *)gameObject, 0LL);
  }
}


void __fastcall MapGimmickComponent__StateDispAnimEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  MapGimmickComponent__SetState(this, 1, 0LL, v3);
}


void __fastcall MapGimmickComponent__StateHideAnimEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C1EC3F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EC3F = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1C3B9C0(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v7);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C1EC32 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_MapGimmickComponent__update__, method);
    byte_4C1EC32 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3225C58 *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1C3B9C0(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1C3B9C0(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void __fastcall MapGimmickComponent_StateDispAnim___ctor(
        MapGimmickComponent_StateDispAnim_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent_StateDispAnim__begin(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  int32_t dispType; // w8
  float AnimTime; // s0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1C3B9C0(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    MapGimmickComponent__SetState(that, 1, 0LL, v8);
  }
  else if ( !dispType )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_35029400(that, 1, AnimTime, 1, v7);
  }
}


void __fastcall MapGimmickComponent_StateDispAnim__end(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapGimmickComponent_StateDispAnim__update(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapGimmickComponent_StateHideAnim___ctor(
        MapGimmickComponent_StateHideAnim_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent_StateHideAnim__begin(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  int32_t dispType; // w8
  float AnimTime; // s0
  const MethodInfo *v7; // x3

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1C3B9C0(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_35029400(that, 0, AnimTime, 1, v7);
  }
  else if ( !dispType )
  {
    MapGimmickComponent__StateHideAnimEnd(that, (const MethodInfo *)that);
  }
}


void __fastcall MapGimmickComponent_StateHideAnim__end(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapGimmickComponent_StateHideAnim__update(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapGimmickComponent_StateMapMain___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1EC46 & 1) == 0 )
  {
    sub_1C3B764(&MapGimmickComponent_StateMapMain_TypeInfo, v1);
    byte_4C1EC46 = 1;
  }
  MapGimmickComponent_StateMapMain_TypeInfo->static_fields->CHECK_DISP_ITVL_SEC = 60;
}


void __fastcall MapGimmickComponent_StateMapMain___ctor(
        MapGimmickComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent_StateMapMain__CheckDispTime(
        MapGimmickComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  const MethodInfo *v7; // x1
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v9; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v11; // x8
  const MethodInfo *v12; // x3
  struct MapGimmickComponent_o *v13; // x8
  struct MapGimmickComponent_o *v14; // x8
  int32_t v15; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4C1EC45 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_1C3B764(&MapGimmickComponent_StateMapMain_TypeInfo, v5);
    byte_4C1EC45 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0LL);
    mThat = this->fields.mThat;
    if ( !mThat )
      goto LABEL_31;
    v9 = Instance;
    mOldDispTime = mThat->fields.mOldDispTime;
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    if ( !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo);
      Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    }
    if ( v9 - mOldDispTime >= **(int **)(Instance + 184) )
    {
      v11 = this->fields.mThat;
      if ( !v11 )
        goto LABEL_31;
      Instance = (int64_t)v11->fields.mMapCtrl_MapGimmickInfo;
      v11->fields.mOldDispTime = v9;
      if ( !Instance )
        goto LABEL_31;
      Instance = (int64_t)MapControl_MapGimmickInfo__GetMine((MapControl_MapGimmickInfo_o *)Instance, v7);
      if ( !Instance )
        goto LABEL_31;
      Instance = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)Instance, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_17;
      if ( !this->fields.mThat )
        goto LABEL_31;
      Instance = MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)Instance, v7);
      if ( (Instance & 1) == 0 )
      {
LABEL_17:
        v13 = this->fields.mThat;
        if ( !v13 )
          goto LABEL_31;
        if ( !v13->fields.isForceNotActive )
        {
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v14 = this->fields.mThat;
          if ( !v14 || !Instance )
            goto LABEL_31;
          Instance = QuestTree__CheckMapGimmickCond_35438980(
                       (QuestTree_o *)Instance,
                       v14->fields.mMapCtrl_MapGimmickInfo,
                       0LL);
          v13 = this->fields.mThat;
          if ( (Instance & 1) != 0 )
          {
            if ( v13 )
            {
              v15 = 3;
LABEL_30:
              MapGimmickComponent__SetState(v13, v15, 0LL, v12);
              return;
            }
            goto LABEL_31;
          }
          if ( !v13 )
            goto LABEL_31;
        }
        if ( !v13->fields.isForceLoop )
        {
          v15 = 2;
          goto LABEL_30;
        }
        mMapCtrl_MapGimmickInfo = v13->fields.mMapCtrl_MapGimmickInfo;
        if ( !mMapCtrl_MapGimmickInfo )
LABEL_31:
          sub_1C3B9C0(Instance, v7);
        mMapCtrl_MapGimmickInfo->fields.dispType = 0;
      }
    }
  }
}


void __fastcall MapGimmickComponent_StateMapMain__begin(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mThat = that;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)that, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall MapGimmickComponent_StateMapMain__end(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall MapGimmickComponent_StateMapMain__update(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  MapGimmickComponent_StateMapMain__CheckDispTime(this, (const MethodInfo *)that);
}


void __fastcall MapGimmickComponent_StateNone___ctor(MapGimmickComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent_StateNone__begin(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapGimmickComponent_StateNone__end(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapGimmickComponent_StateNone__update(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapGimmickComponent___c__DisplayClass23_0___ctor(
        MapGimmickComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_0___Setup_b__0(
        MapGimmickComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, method);
  MapGimmickComponent__OnGimmickTouched(
    (MapGimmickComponent_o *)this,
    this->fields.mg_ent,
    this->fields.touchCallback,
    v2);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_1___ctor(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_1___Setup_b__1(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  MapGimmickEntity_o *Instance; // x0
  __int64 v9; // x1
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v11; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v12; // x8
  System_String_o *v13; // x21
  System_Action_o *_9__2; // x25
  System_String_o *v15; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4C1EC47 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v4);
    sub_1C3B764(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__, v5);
    byte_4C1EC47 = 1;
  }
  v6 = Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__;
  if ( (*((_BYTE *)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3B77C(Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  v11 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v12 = this->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_13;
  v13 = (System_String_o *)Instance;
  Instance = v12->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v15 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v18, v19, v20, v21, v22, v23);
  }
  if ( !v11 )
LABEL_13:
    sub_1C3B9C0(Instance, v9);
  CommonUI__OpenEventMissionListDialog(v11, v13, v15, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_1___Setup_b__2(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  MapGimmickComponent___c__DisplayClass23_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct EventMissionEntity_array *eventMissionEntList; // x9
  EventMissionEntity_o *v9; // x9
  int32_t id; // w21
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct EventDetailEntity_o *v12; // x8
  int v13; // w8
  MapGimmickComponent___c__DisplayClass23_1_o *v14; // x21
  unsigned int v15; // w23
  MapGimmickComponent___c__DisplayClass23_1_c **v16; // x8
  MapGimmickComponent___c__DisplayClass23_1_c *v17; // x22
  int32_t name_high; // w21
  struct EventDetailEntity_o *v19; // x8
  struct EventDetailEntity_o *v20; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v22; // x19

  v2 = this;
  if ( (byte_4C1EC48 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, method);
    sub_1C3B764(&SceneJumpInfo_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C1EC48 = 1;
  }
  if ( !byte_4C1EC6A )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C3B764(&EventRewardSaveData_TypeInfo, method);
    byte_4C1EC6A = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v2->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
LABEL_31:
    sub_1C3B9C8(this, method);
  v9 = eventMissionEntList->m_Items[0];
  if ( !v9 )
    goto LABEL_30;
  id = v9->fields.id;
  if ( !byte_4C1EC6B )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C3B764(&EventRewardSaveData_TypeInfo, method);
    byte_4C1EC6B = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
  }
  static_fields->_MissionId_k__BackingField = id;
  eventDetailEnt = v2->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  v12 = v2->fields.eventDetailEnt;
  if ( !v12 )
    goto LABEL_30;
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneMaster__GetEntityList(
                                                          (EventRewardSceneMaster_o *)this,
                                                          v12->fields.eventId,
                                                          0LL);
  if ( !this )
    goto LABEL_30;
  v13 = (int)this->fields.eventMissionEntList;
  v14 = this;
  if ( v13 < 1 )
  {
LABEL_21:
    name_high = 0;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        goto LABEL_31;
      v16 = &v14->klass + (int)v15;
      v17 = v16[4];
      if ( !v17 )
        goto LABEL_30;
      this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneEntity__IsEventMission(
                                                              (EventRewardSceneEntity_o *)v16[4],
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v13 = (int)v14->fields.eventMissionEntList;
      if ( (int)++v15 >= v13 )
        goto LABEL_21;
    }
    name_high = HIDWORD(v17->_1.name);
  }
  if ( !byte_4C1CCC1 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C3B764(&EventRewardSaveData_TypeInfo, method);
    byte_4C1CCC1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v19 = v2->fields.eventDetailEnt;
  if ( !v19
    || (EventRewardSaveData__SaveCurrentEventData(v19->fields.eventId, 0LL), (v20 = v2->fields.eventDetailEnt) == 0LL)
    || (eventId = v20->fields.eventId,
        v22 = (SceneJumpInfo_o *)sub_1C3B9B0(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_40098300(v22, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v22)
    || (SceneJumpInfo__SetReturnNowScene(v22, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1C3B9C0(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v22, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass38_0___ctor(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass38_0___SetDispAnim_b__0(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *_4__this; // x8
  MapGimmickComponent___c__DisplayClass38_0_o *v3; // x19
  MapGimmickComponent_o *v4; // x19
  const MethodInfo *v5; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MapGimmickComponent___c__DisplayClass38_0_o *)_4__this->fields.mSprite) == 0LL)
    || (this = (MapGimmickComponent___c__DisplayClass38_0_o *)((__int64 (__fastcall *)(MapGimmickComponent___c__DisplayClass38_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                                                this,
                                                                this->klass[1]._1.declaringType,
                                                                (float)v3->fields.to),
        (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1C3B9C0(this, method);
  }
  ActionExtensions__Call(v4->fields.mStateEndAct, 0LL);
  MapGimmickComponent__SetState(v4, 1, 0LL, v5);
}


void __fastcall MapGimmickComponent___c__DisplayClass38_0___SetDispAnim_b__1(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x9
  struct MapGimmickComponent_o *_4__this; // x8
  struct UISprite_o *mSprite; // x8

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0LL || (mSprite = _4__this->fields.mSprite) == 0LL )
    sub_1C3B9C0(this, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))mSprite->klass->vtable._8_set_alpha.method)(
    mSprite,
    mSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    this->fields.from + (float)(eo->fields.mNow * (float)((float)this->fields.to - this->fields.from)));
}


void __fastcall MapGimmickComponent___c__DisplayClass39_0___ctor(
        MapGimmickComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass39_0___SetMoveAnim_b__0(
        MapGimmickComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)_4__this,
                                                0LL)) == 0LL )
  {
    sub_1C3B9C0(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)_4__this, this->fields.posTo, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent___c__DisplayClass39_0___SetMoveAnim_b__1(
        MapGimmickComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  struct EasingObject_o *eo; // x8
  float mNow; // s0
  float v6; // s1
  bool v7; // nf
  float v8; // s0
  float z; // s2
  float v10; // s3
  unsigned __int64 v11; // d0 OVERLAPPED
  float v12; // s2
  int v13; // s1

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL);
  if ( !_4__this )
    goto LABEL_8;
  _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_8;
  mNow = eo->fields.mNow;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !_4__this )
LABEL_8:
    sub_1C3B9C0(_4__this, method);
  z = this->fields.posFrom.fields.z;
  v10 = v8 * (float)(this->fields.posTo.fields.z - z);
  v11 = vadd_f32(
          *(float32x2_t *)&this->fields.posFrom.fields.x,
          vmul_n_f32(
            vsub_f32(*(float32x2_t *)&this->fields.posTo.fields.x, *(float32x2_t *)&this->fields.posFrom.fields.x),
            v8)).n64_u64[0];
  v12 = z + v10;
  v13 = HIDWORD(v11);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)_4__this, *(UnityEngine_Vector3_o *)&v11, 0LL);
}