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

  if ( (byte_4B12F83 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12F83 = 1;
  }
  this->fields.mDepthBase = 30;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  this->fields.mEasingType = 17;
  v9 = StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mHideSeName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mDispSeName, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_T__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  Il2CppObject *v41; // x22
  CStateManager_T__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  Il2CppObject *v46; // x21
  const MethodInfo *v47; // x3

  if ( (byte_4B12F70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MapGimmickComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_MapGimmickComponent__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_MapGimmickComponent__TypeInfo, v7, v8);
    sub_1BCA7E0(&MapGimmickComponent_StateDispAnim_TypeInfo, v9, v10);
    sub_1BCA7E0(&MapGimmickComponent_StateHideAnim_TypeInfo, v11, v12);
    sub_1BCA7E0(&MapGimmickComponent_StateMapMain_TypeInfo, v13, v14);
    sub_1BCA7E0(&MapGimmickComponent_StateNone_TypeInfo, v15, v16);
    byte_4B12F70 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v18 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_MapGimmickComponent__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v29 = (Il2CppObject *)sub_1BCAA2C(MapGimmickComponent_StateNone_TypeInfo, v26, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_313FC6C *)Method_CStateManager_MapGimmickComponent__add__);
    v32 = (CStateManager_T__o *)*p_mFSM;
    v36 = (Il2CppObject *)sub_1BCAA2C(MapGimmickComponent_StateMapMain_TypeInfo, v33, v34, v35);
    System_Object___ctor(v36, 0LL);
    if ( !v32 )
      goto LABEL_9;
    CStateManager_object___add(
      v32,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_313FC6C *)Method_CStateManager_MapGimmickComponent__add__);
    v37 = (CStateManager_T__o *)*p_mFSM;
    v41 = (Il2CppObject *)sub_1BCAA2C(MapGimmickComponent_StateHideAnim_TypeInfo, v38, v39, v40);
    System_Object___ctor(v41, 0LL);
    if ( !v37
      || (CStateManager_object___add(
            v37,
            2,
            (IState_T__o *)v41,
            (const MethodInfo_313FC6C *)Method_CStateManager_MapGimmickComponent__add__),
          v42 = (CStateManager_T__o *)*p_mFSM,
          v46 = (Il2CppObject *)sub_1BCAA2C(MapGimmickComponent_StateDispAnim_TypeInfo, v43, v44, v45),
          System_Object___ctor(v46, 0LL),
          !v42) )
    {
LABEL_9:
      sub_1BCAA3C(v30, v31);
    }
    CStateManager_object___add(
      v42,
      3,
      (IState_T__o *)v46,
      (const MethodInfo_313FC6C *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v47);
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
    sub_1BCAA3C(mMapCtrl_MapGimmickInfo, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22
  __int64 v17; // x1
  MapEffectComponent_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  Il2CppObject *v22; // x20
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  const MethodInfo *v26; // x2

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4B12F77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, prefab, mapCamera);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___, v11, v12);
    this = (MapGimmickComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B12F77 = 1;
  }
  if ( !prefab )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      Component_object,
                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v18 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v18, gameObject, mapCamera, v20);
      return (CommonEffectComponent_o *)v18;
    }
LABEL_19:
    sub_1BCAA3C(this, prefab);
  }
  v22 = UnityEngine_GameObject__GetComponent_object_(
          prefab,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  v18 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      v22,
                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v18 = (MapEffectComponent_o *)this;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v25 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_34336992(v24, v25, v26);
      return (CommonEffectComponent_o *)v18;
    }
    goto LABEL_19;
  }
  return (CommonEffectComponent_o *)v18;
}


UnityEngine_GameObject_o *__fastcall MapGimmickComponent__GetEffectPrefab(
        MapGimmickComponent_o *this,
        System_String_o *effectPrefabName,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Object_object__49237568; // x21
  __int64 v12; // x1

  if ( (byte_4B12F76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, effectPrefabName, assetData);
    this = (MapGimmickComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B12F76 = 1;
  }
  if ( !assetData )
    sub_1BCAA3C(this, effectPrefabName);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              effectPrefabName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
  {
    if ( !multiAssetData )
      return 0LL;
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                multiAssetData,
                                effectPrefabName,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_object__49237568;
}


System_String_o *__fastcall MapGimmickComponent__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = id;
  if ( (byte_4B12F6F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9002/*"MapGimmick_"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v3, v4);
    byte_4B12F6F = 1;
  }
  v5 = System_Int32__ToString_63206828((int32_t)&v7, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_9002/*"MapGimmick_"*/, v5, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B12F78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12F78 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL);
  if ( v6 )
    return 0LL;
  if ( !prefab )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v6 )
    return 0LL;
  if ( !Component_object )
LABEL_13:
    sub_1BCAA3C(v6, v7);
  return MapGimmickRandomEffectComponent__GetRandomElement((MapGimmickRandomEffectComponent_o *)Component_object, v7);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapGimmickComponent_o *v3; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B12F79 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_1BCA7E0(&Method_CStateManager_MapGimmickComponent__getState__, method, v2);
    byte_4B12F79 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v22; // x8
  struct System_String_o *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  UnityEngine_GameObject_o *v33; // x20
  const MethodInfo *v34; // x2
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  struct UISprite_o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B12F72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UISprite___, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v9, v10);
    sub_1BCA7E0(&string_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_13069/*"Sprite"*/, v13, v14);
    byte_4B12F72 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mHideSeName, (int64_t)Empty, v2, v3, v4, v5, v6, v7);
  v22 = string_TypeInfo->static_fields;
  v23 = v22->Empty;
  this->fields.mDispSeName = v22->Empty;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mDispSeName, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v33 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, v30, v31, v32);
  UnityEngine_GameObject___ctor(v33, (System_String_o *)StringLiteral_13069/*"Sprite"*/, 0LL);
  GameObjectExtensions__SetParent(v33, (UnityEngine_Component_o *)this, v34);
  if ( !v33
    || (v35 = UnityEngine_GameObject__AddComponent_object_(
                v33,
                (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_1BCAA3C(v35, v36);
  }
  v37 = (struct UISprite_o *)v35;
  UIWidget__SetDimensions((UIWidget_o *)v35, 64, 64, 0LL);
  this->fields.mSprite = v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mSprite, (int64_t)v37, v38, v39, v40, v41, v42, v43);
}


bool __fastcall MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  void *Mine; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  int32_t v10; // w19

  if ( (byte_4B12F81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v5, v6);
    byte_4B12F81 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v8 = **((_QWORD **)Mine + 23);
  if ( !v8 )
    goto LABEL_20;
  v9 = *(_QWORD *)(v8 + 264);
  if ( !v9 )
    goto LABEL_20;
  Mine = *(void **)(v9 + 344);
  if ( !Mine )
    goto LABEL_20;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, method);
  if ( !Mine )
    goto LABEL_20;
  v10 = *((_DWORD *)Mine + 24);
  if ( v10 < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Mine = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Mine )
LABEL_20:
    sub_1BCAA3C(Mine, method);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Mine, v10, 0, 0LL, 0LL);
}


bool __fastcall MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct CommonEffectComponent_o *v7; // x8

  if ( (byte_4B12F74 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F74 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( !v5 )
    return 0;
  v7 = this->fields.commonEffectComponent;
  if ( !v7 )
    sub_1BCAA3C(v5, v6);
  return v7->fields.isTouched;
}


void __fastcall MapGimmickComponent__OnGimmickTouched(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x21
  void *Mine; // x0
  __int64 v12; // x8
  __int64 v13; // x8

  if ( (byte_4B12F75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, mapGimmickEntity, touchCallback);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    byte_4B12F75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B10F83 = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v12 = **((_QWORD **)Mine + 23);
  if ( !v12
    || (v13 = *(_QWORD *)(v12 + 264)) == 0
    || (Mine = *(void **)(v13 + 344)) == 0LL
    || (Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, v8)) == 0LL
    || !mapGimmickEntity
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(
          (ClientMissionManager_o *)Instance,
          *((_DWORD *)Mine + 24),
          mapGimmickEntity->fields.id,
          0LL),
        (Mine = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Mine, v8);
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
  MapGimmickComponent__SetDispAnim_34396952(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_34396952(this, is_disp, 0.0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim_34396952(
        MapGimmickComponent_o *this,
        bool is_disp,
        float time,
        bool is_play_se,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x22
  UnityEngine_Component_o *mSprite; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  UnityEngine_Object_o *commonEffectComponent; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x2
  __int64 v41; // x3
  struct CommonEffectComponent_o *v42; // x20
  System_Action_o *v43; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x8
  System_String_o *v56; // x21
  System_Action_o *v57; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  EasingObject_o *v61; // x24
  System_Action_o *v62; // x25
  struct CommonEffectComponent_o *v63; // x20
  System_Action_o *v64; // x21
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  const MethodInfo *v67; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4B12F7C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, is_disp, is_play_se);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10);
    sub_1BCA7E0(&Method_MapGimmickComponent_SetDispAnim__, v11, v12);
    sub_1BCA7E0(&Method_MapGimmickComponent_StateDispAnimEnd__, v13, v14);
    sub_1BCA7E0(&Method_MapGimmickComponent_StateHideAnimEnd__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__, v19, v20);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__, v21, v22);
    sub_1BCA7E0(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo, v23, v24);
    byte_4B12F7C = 1;
  }
  v25 = sub_1BCAA2C(MapGimmickComponent___c__DisplayClass38_0_TypeInfo, is_disp, is_play_se, method);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_37;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  MapGimmickComponent__StartActionEffect(this, v34);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v35);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  mSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( ((unsigned __int8)mSprite & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v25 + 32) = Component_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)Component_object, v46, v47, v48, v49, v50, v51);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_37;
    *(float *)(v25 + 28) = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&mSprite->klass[1]._1.this_arg.bits)(
                             mSprite,
                             mSprite->klass[1]._1.element_class);
    *(_DWORD *)(v25 + 24) = is_disp;
    if ( is_disp )
      v55 = 64LL;
    else
      v55 = 56LL;
    v56 = *(System_String_o **)((char *)&this->klass + v55);
    v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v25,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v57, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      v61 = *(EasingObject_o **)(v25 + 32);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
      System_Action___ctor(
        v62,
        (Il2CppObject *)v25,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0LL);
      if ( !v61 )
        goto LABEL_37;
      EasingObject__Play(v61, time, v62, v57, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v56, 0LL) )
    {
      v65 = Method_MapGimmickComponent_SetDispAnim__;
      if ( (*((_BYTE *)Method_MapGimmickComponent_SetDispAnim__ + 83) & 2) != 0 )
        v65 = (_QWORD *)sub_1BCA7F8(Method_MapGimmickComponent_SetDispAnim__);
      v66 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v65, v65[4]);
      OverwriteAssetSoundName__PlaySe(v66, v56, 0LL);
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
    v42 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v40, v41);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v42 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v42->klass->vtable._6_ForceStart.method)(
          v42,
          1LL,
          v43,
          v42->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_37:
      sub_1BCAA3C(mSprite, v27);
    }
    if ( !v42 )
      goto LABEL_37;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v63 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v63 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0LL);
      if ( !mSprite )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v67);
    }
    else
    {
      v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v38, v39);
      System_Action___ctor(v64, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v63 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v63->klass->vtable._8_Stop.method)(
                                             v63,
                                             0LL,
                                             v64,
                                             v63->klass->vtable._9_ForceStop.methodPtr);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_37;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
}


void __fastcall MapGimmickComponent__SetDisplayByRaidProgress(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  struct MapControl_MapGimmickInfo_o *v15; // x8
  int32_t dispType; // w8
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x3
  int32_t v19; // w1

  if ( (byte_4B12F80 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__, v4, v5);
    sub_1BCA7E0(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v8, v9);
    byte_4B12F80 = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             method);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  v11 = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, 0LL);
  if ( v11 && !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)v11, v12) )
  {
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_34730552(
                                                                 (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                 this->fields.mMapCtrl_MapGimmickInfo,
                                                                 0LL);
      v15 = this->fields.mMapCtrl_MapGimmickInfo;
      if ( v15 )
      {
        dispType = v15->fields.dispType;
        if ( dispType != 0 || ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) == 0 )
        {
          if ( dispType != 1 || (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) == 0 )
            return;
          v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v13, v14);
          System_Action___ctor(
            v17,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__,
            0LL);
          v19 = 2;
        }
        else
        {
          v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v13, v14);
          System_Action___ctor(
            v17,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__,
            0LL);
          v19 = 3;
        }
        MapGimmickComponent__SetState(this, v19, v17, v18);
        return;
      }
    }
LABEL_16:
    sub_1BCAA3C(mMapCtrl_MapGimmickInfo, method);
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
  sub_1BCA784(
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  EasingObject_o *v51; // x22
  System_Action_o *v52; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_4B12F7D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&easeType, callback);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13, v14);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__, v15, v16);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__, v17, v18);
    sub_1BCA7E0(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo, v19, v20);
    byte_4B12F7D = 1;
  }
  v21 = sub_1BCAA2C(MapGimmickComponent___c__DisplayClass39_0_TypeInfo, *(_QWORD *)&easeType, callback, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_10;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(float *)(v21 + 24) = x;
  *(float *)(v21 + 28) = y;
  *(float *)(v21 + 32) = z;
  *(_QWORD *)(v21 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v21 + 64) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 64), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v21 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v21,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v51 = *(EasingObject_o **)(v21 + 64);
    v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v21,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0LL);
    if ( v51 )
    {
      EasingObject__Play(v51, time, v52, v47, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(transform, v23);
  }
  ActionExtensions__Call(v47, 0LL);
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

  if ( (byte_4B12F7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MapGimmickComponent__setState__, *(_QWORD *)&state, end_act);
    byte_4B12F7A = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_MapGimmickComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B12F7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, enabled, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B12F7F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
    sub_1BCAA3C(gameObject, v8);
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

  if ( (byte_4B12F82 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&num, isUpdateName);
    byte_4B12F82 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&num);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    v9 = this->fields.commonEffectComponent;
    if ( !v9 )
      sub_1BCAA3C(0LL, v8);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  int64_t v69; // x23
  __int64 IsMonoColorRect; // x0
  const MethodInfo *v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  MapGimmickEntity_o *Mine; // x0
  __int64 *v91; // x22
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  UISprite_o *mSprite; // x26
  System_String_o *v99; // x27
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  UISprite_o *v102; // x28
  UnityEngine_Behaviour_o *v103; // x26
  UnityEngine_Object_o *monitor; // x28
  bool v105; // w0
  System_String_o *v106; // x26
  struct UISprite_o *v107; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v109; // x0
  MapGimmickComponent_o *v110; // x0
  const MethodInfo *v111; // x4
  __int64 v112; // x1
  UnityEngine_GameObject_o *EffectPrefab; // x26
  __int64 v114; // x1
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v116; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  __int64 v125; // x1
  UnityEngine_Object_o *v126; // x26
  __int64 v127; // x2
  __int64 v128; // x8
  __int64 v129; // x8
  int32_t v130; // w26
  UnityEngine_GameObject_o *v131; // x26
  bool v132; // w1
  float v133; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v135; // x1
  long double v136; // q0
  int32_t UseAnimFromScript; // w0
  struct CommonEffectComponent_o *v138; // x24
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  System_Action_o *v142; // x25
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  float v149; // s0
  float v150; // s1
  float v151; // s2
  float v152; // s9
  float v153; // s8
  float v154; // s10
  __int64 v155; // x1
  Il2CppObject *Component_object; // x24
  __int64 v157; // x1
  UnityEngine_Object_o *v158; // x24
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x25
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  __int64 v168; // x2
  __int64 v169; // x8
  __int64 v170; // x8
  int32_t v171; // w26
  DataManager_o *v172; // x23
  Il2CppObject *v173; // x0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  __int64 v180; // x8
  EventMissionMaster_o *v181; // x23
  EventMissionEntity_array *EventMissionList_39908356; // x0
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  __int64 v189; // x2
  __int64 v190; // x3
  System_Collections_Generic_List_EventDelegate__o *v191; // x23
  EventDelegate_Callback_o *v192; // x24
  __int64 v193; // x1
  int32_t v194; // w0
  int v195; // t1
  System_String_o *v196; // x0
  MapGimmickComponent_o *v197; // x0
  const MethodInfo *v198; // x4
  __int64 v199; // x1
  UnityEngine_Object_o *v200; // x20
  __int64 v201; // x1
  Il2CppObject *v202; // x20
  __int64 v203; // x1
  Il2CppObject *v204; // x0
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  UnityEngine_GameObject_o *v211; // x20
  UnityEngine_GameObject_o *v212; // x0
  const MethodInfo *v213; // x2
  UnityEngine_Color_o v214; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12F73 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mg_inf, mapCamera);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v25, v26);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v29, v30);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UIButton___, v31, v32);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v33, v34);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v35, v36);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v37, v38);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v39, v40);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v45, v46);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__, v49, v50);
    sub_1BCA7E0(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v53, v54);
    sub_1BCA7E0(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v55, v56);
    sub_1BCA7E0(&StringLiteral_24947/*"white00"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_1221/*"000000"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_20029/*"gimmick_"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_8984/*"MapGimmickEffect_"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_8983/*"MapGimmickActionEffect_"*/, v67, v68);
    byte_4B12F73 = 1;
  }
  *(_QWORD *)&v214.fields.r = 0LL;
  *(_QWORD *)&v214.fields.b = 0LL;
  entity = 0LL;
  v69 = sub_1BCAA2C(MapGimmickComponent___c__DisplayClass23_0_TypeInfo, mg_inf, mapCamera, atlases);
  System_Object___ctor((Il2CppObject *)v69, 0LL);
  if ( !v69 )
    goto LABEL_133;
  *(_QWORD *)(v69 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 16), (int64_t)this, v72, v73, v74, v75, v76, v77);
  *(_QWORD *)(v69 + 32) = touchCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 32), (int64_t)touchCallback, v78, v79, v80, v81, v82, v83);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (int64_t)mg_inf,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_133;
  Mine = MapControl_MapGimmickInfo__GetMine(mg_inf, v71);
  *(_QWORD *)(v69 + 24) = Mine;
  v91 = (__int64 *)(v69 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 24), (int64_t)Mine, v92, v93, v94, v95, v96, v97);
  IsMonoColorRect = *(_QWORD *)(v69 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    mSprite = this->fields.mSprite;
    v99 = (System_String_o *)StringLiteral_24947/*"white00"*/;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*v91 )
      goto LABEL_133;
    v100 = System_Int32__ToString_63206828((unsigned int)*v91 + 24, (System_String_o *)StringLiteral_1221/*"000000"*/, 0LL);
    v101 = System_String__Concat_62401220((System_String_o *)StringLiteral_20029/*"gimmick_"*/, v100, 0LL);
    v102 = this->fields.mSprite;
    v99 = v101;
    IsMonoColorRect = (__int64)UIAtlas__GetUIAtlasBySpriteName(atlases, v101, 0LL);
    if ( !v102 )
      goto LABEL_133;
    UISprite__set_atlas(v102, (UIAtlas_o *)IsMonoColorRect, 0LL);
  }
  v103 = (UnityEngine_Behaviour_o *)this->fields.mSprite;
  if ( !v103 )
    goto LABEL_133;
  monitor = (UnityEngine_Object_o *)v103[19].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71);
  v105 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v103, v105, 0LL);
  IsMonoColorRect = *v91;
  if ( !*v91 )
    goto LABEL_133;
  IsMonoColorRect = (__int64)MapGimmickEntity__GetColorCodeFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( !this->fields.mSprite )
    goto LABEL_133;
  v106 = (System_String_o *)IsMonoColorRect;
  IsMonoColorRect = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.mSprite, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v99, 0LL);
    IsMonoColorRect = *v91;
    if ( !*v91 )
      goto LABEL_133;
    IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    v107 = this->fields.mSprite;
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_133;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v107 )
        goto LABEL_133;
      UIWidget__SetDimensions((UIWidget_o *)this->fields.mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v107 )
        goto LABEL_133;
      IsMonoColorRect = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v107->klass->vtable._33_MakePixelPerfect.method)(
                          this->fields.mSprite,
                          v107->klass->vtable._34_get_minWidth.methodPtr);
    }
    if ( !*v91 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UIWidget__set_depth((UIWidget_o *)IsMonoColorRect, *(_DWORD *)(*v91 + 36) + this->fields.mDepthBase, 0LL);
    if ( !*v91 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v133 = this->fields.mScaleBase * (float)((float)*(int *)(*v91 + 80) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
    GameObjectExtensions__SetLocalScale_34333164(gameObject, v133, v135);
    if ( !System_String__IsNullOrEmpty(v106, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v106, &v214, 0LL);
      IsMonoColorRect = (__int64)this->fields.mSprite;
      if ( !IsMonoColorRect )
        goto LABEL_133;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, v214, 0LL);
    }
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    LODWORD(v136) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v136 = 0.0;
    (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)IsMonoColorRect + 440LL))(
      IsMonoColorRect,
      *(_QWORD *)(*(_QWORD *)IsMonoColorRect + 448LL),
      v136);
  }
  else
  {
    if ( !*v91 )
      goto LABEL_133;
    v109 = System_Int32__ToString((unsigned int)*v91 + 24, 0LL);
    v110 = (MapGimmickComponent_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_8984/*"MapGimmickEffect_"*/, v109, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab(v110, (System_String_o *)v110, assetData, multiAssetData, v111);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v112);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v71);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v114);
      IsMonoColorRect = UnityEngine_Object__op_Inequality(MapGimmickRandomEffectElementComponent, 0LL, 0LL);
      if ( (IsMonoColorRect & 1) != 0 )
      {
        if ( !MapGimmickRandomEffectElementComponent )
          goto LABEL_133;
        EffectPrefab = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)MapGimmickRandomEffectElementComponent,
                         0LL);
      }
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v116);
      this->fields.commonEffectComponent = CommonEffectComponent;
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.commonEffectComponent,
        (int64_t)CommonEffectComponent,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124);
      v126 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v125);
      if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v71);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v71, v127);
          byte_4B10F83 = 1;
        }
        IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v71);
          IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v128 = **(_QWORD **)(IsMonoColorRect + 184);
        if ( !v128 )
          goto LABEL_133;
        v129 = *(_QWORD *)(v128 + 264);
        if ( !v129 )
          goto LABEL_133;
        IsMonoColorRect = *(_QWORD *)(v129 + 344);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v71);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        v130 = *(_DWORD *)(IsMonoColorRect + 96);
        IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)IsMonoColorRect,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
          &entity,
          v130,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          IsMonoColorRect = (__int64)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          IsMonoColorRect = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_133;
          IsMonoColorRect = QuestTree__CheckMapGimmickCond_34730552((QuestTree_o *)IsMonoColorRect, mg_inf, 0LL);
          if ( !v131 )
            goto LABEL_133;
          v132 = IsMonoColorRect & 1;
          IsMonoColorRect = (__int64)v131;
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
          v132 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v132, 0LL);
        IsMonoColorRect = *v91;
        if ( !*v91 )
          goto LABEL_133;
        UseAnimFromScript = MapGimmickEntity__GetUseAnimFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
        if ( UseAnimFromScript >= 1 )
        {
          v71 = (const MethodInfo *)(unsigned int)UseAnimFromScript;
          IsMonoColorRect = (__int64)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsMonoColorRect, (int32_t)v71, 0, 0LL);
        }
        IsMonoColorRect = (__int64)*p_commonEffectComponent;
        if ( !*p_commonEffectComponent )
          goto LABEL_133;
        CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)IsMonoColorRect, 0LL);
        v138 = *p_commonEffectComponent;
        v142 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v139, v140, v141);
        System_Action___ctor(
          v142,
          (Il2CppObject *)v69,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v138 )
          goto LABEL_133;
        v138->fields.touchCallback = v142;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v138->fields.touchCallback,
          (int64_t)v142,
          v143,
          v144,
          v145,
          v146,
          v147,
          v148);
      }
    }
  }
  IsMonoColorRect = *v91;
  if ( !*v91 )
    goto LABEL_133;
  *(UnityEngine_Vector3_o *)&v149 = MapGimmickEntity__GetTouchSize((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( v149 <= 0.0 )
    goto LABEL_117;
  v152 = v150;
  if ( v150 <= 0.0 )
    goto LABEL_117;
  v153 = v149;
  v154 = v151;
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)IsMonoColorRect,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v155);
  IsMonoColorRect = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)UnityEngine_GameObject__AddComponent_object_(
                                 (UnityEngine_GameObject_o *)IsMonoColorRect,
                                 (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_object = (Il2CppObject *)IsMonoColorRect;
  }
  if ( !Component_object )
    goto LABEL_133;
  v216.fields.x = v153;
  v216.fields.y = v152;
  v216.fields.z = v154;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v216, 0LL);
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  v158 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)IsMonoColorRect,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v157);
  if ( UnityEngine_Object__op_Equality(v158, 0LL, 0LL) )
  {
    IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v158 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                     (UnityEngine_GameObject_o *)IsMonoColorRect,
                                     (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *v91;
  if ( !*v91 )
LABEL_133:
    sub_1BCAA3C(IsMonoColorRect, v71);
  if ( MapGimmickEntity__IsEventMissionScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL) )
  {
    v161 = sub_1BCAA2C(MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v71, v159, v160);
    System_Object___ctor((Il2CppObject *)v161, 0LL);
    if ( !v161 )
      goto LABEL_133;
    *(_QWORD *)(v161 + 32) = v69;
    sub_1BCA784((PartyOrganizationUtility_o *)(v161 + 32), v69, v162, v163, v164, v165, v166, v167);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v71);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v71, v168);
      byte_4B10F83 = 1;
    }
    IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v71);
      IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v169 = **(_QWORD **)(IsMonoColorRect + 184);
    if ( !v169 )
      goto LABEL_133;
    v170 = *(_QWORD *)(v169 + 264);
    if ( !v170 )
      goto LABEL_133;
    IsMonoColorRect = *(_QWORD *)(v170 + 344);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v71);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v171 = *(_DWORD *)(IsMonoColorRect + 96);
    IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v172 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)IsMonoColorRect,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v173 = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
             v171,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v161 + 16) = v173;
    sub_1BCA784((PartyOrganizationUtility_o *)(v161 + 16), (int64_t)v173, v174, v175, v176, v177, v178, v179);
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 v172,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v180 = *(_QWORD *)(v161 + 32);
    if ( !v180 )
      goto LABEL_133;
    v181 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(_QWORD *)(v180 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapGimmickEntity__GetEventMissionIdList((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    if ( !v181 )
      goto LABEL_133;
    EventMissionList_39908356 = EventMissionMaster__getEventMissionList_39908356(
                                  v181,
                                  (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                  0LL);
    *(_QWORD *)(v161 + 24) = EventMissionList_39908356;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v161 + 24),
      (int64_t)EventMissionList_39908356,
      v183,
      v184,
      v185,
      v186,
      v187,
      v188);
    if ( !v158 )
      goto LABEL_133;
    v191 = (System_Collections_Generic_List_EventDelegate__o *)v158[8].monitor;
    v192 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v71, v189, v190);
    EventDelegate_Callback___ctor(
      v192,
      (Il2CppObject *)v161,
      (intptr_t)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v193);
    EventDelegate__Add(v191, v192, 0LL);
  }
LABEL_117:
  IsMonoColorRect = *v91;
  if ( !*v91 )
    goto LABEL_133;
  v195 = *(_DWORD *)(IsMonoColorRect + 100);
  v194 = IsMonoColorRect + 100;
  if ( v195 >= 1 )
  {
    v196 = System_Int32__ToString(v194, 0LL);
    v197 = (MapGimmickComponent_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_8983/*"MapGimmickActionEffect_"*/, v196, 0LL);
    v200 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     v197,
                                     (System_String_o *)v197,
                                     assetData,
                                     multiAssetData,
                                     v198);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v199);
    IsMonoColorRect = UnityEngine_Object__op_Inequality(v200, 0LL, 0LL);
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !v200 )
        goto LABEL_133;
      v202 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v200,
               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v201);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v202, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v203);
        v204 = UnityEngine_Object__Instantiate_object_(
                 v202,
                 (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v204;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.actionEffect,
          (int64_t)v204,
          v205,
          v206,
          v207,
          v208,
          v209,
          v210);
        IsMonoColorRect = (__int64)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v211 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          v212 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_34336992(v211, v212, v213);
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
  __int64 v2; // x2
  UnityEngine_Object_o *actionEffect; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B12F7B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F7B = 1;
  }
  actionEffect = (UnityEngine_Object_o *)this->fields.actionEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(actionEffect, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.actionEffect;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.actionEffect) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4B12F7E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F7E = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v9);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v7);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12F71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MapGimmickComponent__update__, method, v2);
    byte_4B12F71 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1BCAA3C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    MapGimmickComponent__SetState(that, 1, 0LL, v8);
  }
  else if ( !dispType )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_34396952(that, 1, AnimTime, 1, v7);
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
    sub_1BCAA3C(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_34396952(that, 0, AnimTime, 1, v7);
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
  __int64 v2; // x2

  if ( (byte_4B12F85 & 1) == 0 )
  {
    sub_1BCA7E0(&MapGimmickComponent_StateMapMain_TypeInfo, v1, v2);
    byte_4B12F85 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v14; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v16; // x8
  const MethodInfo *v17; // x3
  struct MapGimmickComponent_o *v18; // x8
  struct MapGimmickComponent_o *v19; // x8
  int32_t v20; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4B12F84 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v6, v7);
    sub_1BCA7E0(&MapGimmickComponent_StateMapMain_TypeInfo, v8, v9);
    byte_4B12F84 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Instance = NetworkManager__getTime(0LL);
    mThat = this->fields.mThat;
    if ( !mThat )
      goto LABEL_31;
    v14 = Instance;
    mOldDispTime = mThat->fields.mOldDispTime;
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    if ( !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo, v11);
      Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    }
    if ( v14 - mOldDispTime >= **(int **)(Instance + 184) )
    {
      v16 = this->fields.mThat;
      if ( !v16 )
        goto LABEL_31;
      Instance = (int64_t)v16->fields.mMapCtrl_MapGimmickInfo;
      v16->fields.mOldDispTime = v14;
      if ( !Instance )
        goto LABEL_31;
      Instance = (int64_t)MapControl_MapGimmickInfo__GetMine((MapControl_MapGimmickInfo_o *)Instance, v11);
      if ( !Instance )
        goto LABEL_31;
      Instance = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)Instance, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_17;
      if ( !this->fields.mThat )
        goto LABEL_31;
      Instance = MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)Instance, v11);
      if ( (Instance & 1) == 0 )
      {
LABEL_17:
        v18 = this->fields.mThat;
        if ( !v18 )
          goto LABEL_31;
        if ( !v18->fields.isForceNotActive )
        {
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v19 = this->fields.mThat;
          if ( !v19 || !Instance )
            goto LABEL_31;
          Instance = QuestTree__CheckMapGimmickCond_34730552(
                       (QuestTree_o *)Instance,
                       v19->fields.mMapCtrl_MapGimmickInfo,
                       0LL);
          v18 = this->fields.mThat;
          if ( (Instance & 1) != 0 )
          {
            if ( v18 )
            {
              v20 = 3;
LABEL_30:
              MapGimmickComponent__SetState(v18, v20, 0LL, v17);
              return;
            }
            goto LABEL_31;
          }
          if ( !v18 )
            goto LABEL_31;
        }
        if ( !v18->fields.isForceLoop )
        {
          v20 = 2;
          goto LABEL_30;
        }
        mMapCtrl_MapGimmickInfo = v18->fields.mMapCtrl_MapGimmickInfo;
        if ( !mMapCtrl_MapGimmickInfo )
LABEL_31:
          sub_1BCAA3C(Instance, v11);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)that, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  MapGimmickEntity_o *Instance; // x0
  __int64 v13; // x1
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v15; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v16; // x8
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *_9__2; // x25
  System_String_o *v21; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B12F86 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v6, v7);
    sub_1BCA7E0(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__, v8, v9);
    byte_4B12F86 = 1;
  }
  v10 = Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__;
  if ( (*((_BYTE *)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  v15 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v16 = this->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_13;
  v17 = (System_String_o *)Instance;
  Instance = v16->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v21 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v18, v19);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v24, v25, v26, v27, v28, v29);
  }
  if ( !v15 )
LABEL_13:
    sub_1BCAA3C(Instance, v13);
  CommonUI__OpenEventMissionListDialog(v15, v17, v21, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_1___Setup_b__2(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MapGimmickComponent___c__DisplayClass23_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct EventMissionEntity_array *eventMissionEntList; // x9
  EventMissionEntity_o *v14; // x9
  int32_t id; // w21
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct EventDetailEntity_o *v17; // x8
  __int64 v18; // x2
  int v19; // w8
  MapGimmickComponent___c__DisplayClass23_1_o *v20; // x21
  unsigned int v21; // w23
  MapGimmickComponent___c__DisplayClass23_1_c **v22; // x8
  MapGimmickComponent___c__DisplayClass23_1_c *v23; // x22
  int32_t name_high; // w21
  struct EventDetailEntity_o *v25; // x8
  __int64 v26; // x2
  __int64 v27; // x3
  struct EventDetailEntity_o *v28; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v30; // x19

  v3 = this;
  if ( (byte_4B12F87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, method, v2);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B12F87 = 1;
  }
  if ( !byte_4B12FA9 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B12FA9 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v3->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
LABEL_31:
    sub_1BCAA44(this, method);
  v14 = eventMissionEntList->m_Items[0];
  if ( !v14 )
    goto LABEL_30;
  id = v14->fields.id;
  if ( !byte_4B12FAA )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B12FAA = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
  }
  static_fields->_MissionId_k__BackingField = id;
  eventDetailEnt = v3->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  v17 = v3->fields.eventDetailEnt;
  if ( !v17 )
    goto LABEL_30;
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneMaster__GetEntityList(
                                                          (EventRewardSceneMaster_o *)this,
                                                          v17->fields.eventId,
                                                          0LL);
  if ( !this )
    goto LABEL_30;
  v19 = (int)this->fields.eventMissionEntList;
  v20 = this;
  if ( v19 < 1 )
  {
LABEL_21:
    name_high = 0;
  }
  else
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        goto LABEL_31;
      v22 = &v20->klass + (int)v21;
      v23 = v22[4];
      if ( !v23 )
        goto LABEL_30;
      this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneEntity__IsEventMission(
                                                              (EventRewardSceneEntity_o *)v22[4],
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v19 = (int)v20->fields.eventMissionEntList;
      if ( (int)++v21 >= v19 )
        goto LABEL_21;
    }
    name_high = HIDWORD(v23->_1.name);
  }
  if ( !byte_4B11132 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v18);
    byte_4B11132 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v25 = v3->fields.eventDetailEnt;
  if ( !v25
    || (EventRewardSaveData__SaveCurrentEventData(v25->fields.eventId, 0LL), (v28 = v3->fields.eventDetailEnt) == 0LL)
    || (eventId = v28->fields.eventId,
        v30 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, method, v26, v27),
        SceneJumpInfo___ctor_39380884(v30, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v30)
    || (SceneJumpInfo__SetReturnNowScene(v30, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v30, 0LL);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(_4__this, method);
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