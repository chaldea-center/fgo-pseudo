void __fastcall MapGimmickComponent___ctor(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49F92E9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F92E9 = 1;
  }
  this->fields.mDepthBase = 30;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  this->fields.mEasingType = 17;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mHideSeName, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mDispSeName, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  CStateManager_T__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x21
  const MethodInfo *v31; // x3

  if ( (byte_49F92D7 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_MapGimmickComponent___ctor__, method);
    sub_1B640C8(&Method_CStateManager_MapGimmickComponent__add__, v4);
    sub_1B640C8(&CStateManager_MapGimmickComponent__TypeInfo, v5);
    sub_1B640C8(&MapGimmickComponent_StateDispAnim_TypeInfo, v6);
    sub_1B640C8(&MapGimmickComponent_StateHideAnim_TypeInfo, v7);
    sub_1B640C8(&MapGimmickComponent_StateMapMain_TypeInfo, v8);
    sub_1B640C8(&MapGimmickComponent_StateNone_TypeInfo, v9);
    byte_49F92D7 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v11 = (CStateManager_T__o *)sub_1B64314(CStateManager_MapGimmickComponent__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v11,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30612BC *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v11, v12, v13);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1B64314(MapGimmickComponent_StateNone_TypeInfo, v15, v16);
    System_Object___ctor(v17, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_3061364 *)Method_CStateManager_MapGimmickComponent__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1B64314(MapGimmickComponent_StateMapMain_TypeInfo, v20, v21);
    System_Object___ctor(v22, 0LL);
    if ( !v19 )
      goto LABEL_9;
    CStateManager_object___add(
      v19,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_3061364 *)Method_CStateManager_MapGimmickComponent__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B64314(MapGimmickComponent_StateHideAnim_TypeInfo, v24, v25);
    System_Object___ctor(v26, 0LL);
    if ( !v23
      || (CStateManager_object___add(
            v23,
            2,
            (IState_T__o *)v26,
            (const MethodInfo_3061364 *)Method_CStateManager_MapGimmickComponent__add__),
          v27 = (CStateManager_T__o *)*p_mFSM,
          v30 = (Il2CppObject *)sub_1B64314(MapGimmickComponent_StateDispAnim_TypeInfo, v28, v29),
          System_Object___ctor(v30, 0LL),
          !v27) )
    {
LABEL_9:
      sub_1B64324(v18);
    }
    CStateManager_object___add(
      v27,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_3061364 *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v31);
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
    sub_1B64324(mMapCtrl_MapGimmickInfo);
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

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_49F92DE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, prefab);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___, v9);
    this = (MapGimmickComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49F92DE = 1;
  }
  if ( !prefab )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      Component_object,
                                      (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.mOldDispTime) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v12, gameObject, mapCamera, v14);
      return (CommonEffectComponent_o *)v12;
    }
LABEL_19:
    sub_1B64324(this);
  }
  v15 = UnityEngine_GameObject__GetComponent_object_(
          prefab,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      v15,
                                      (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v17 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_33381252(v16, v17, 0LL);
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
  Il2CppObject *Object_object__48347676; // x21

  if ( (byte_49F92DD & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, effectPrefabName);
    this = (MapGimmickComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49F92DD = 1;
  }
  if ( !assetData )
    sub_1B64324(this);
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              assetData,
                              effectPrefabName,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
  {
    if ( !multiAssetData )
      return 0LL;
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                multiAssetData,
                                effectPrefabName,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_object__48347676;
}


System_String_o *__fastcall MapGimmickComponent__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = id;
  if ( (byte_49F92D6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8831/*"MapGimmick_"*/, method);
    sub_1B640C8(&StringLiteral_1222/*"00"*/, v2);
    byte_49F92D6 = 1;
  }
  v3 = System_Int32__ToString_62180668((int32_t)&v5, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_8831/*"MapGimmick_"*/, v3, 0LL);
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
  Il2CppObject *Component_object; // x19
  const MethodInfo *v6; // x1

  if ( (byte_49F92DF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F92DF = 1;
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
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Component_object )
LABEL_13:
    sub_1B64324(v4);
  return MapGimmickRandomEffectComponent__GetRandomElement((MapGimmickRandomEffectComponent_o *)Component_object, v6);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_49F92E0 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_1B640C8(&Method_CStateManager_MapGimmickComponent__getState__, method);
    byte_49F92E0 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
  return mFSM->fields.m_state;
}


void __fastcall MapGimmickComponent__InitDefaultParam(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v15; // x8
  struct System_String_o *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *v21; // x20
  Il2CppObject *v22; // x0
  struct UISprite_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49F92D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UISprite___, method);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v5);
    sub_1B640C8(&string_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_12845/*"Sprite"*/, v7);
    byte_49F92D9 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mHideSeName, (int32_t)Empty, v2, v3);
  v15 = string_TypeInfo->static_fields;
  v16 = v15->Empty;
  this->fields.mDispSeName = v15->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mDispSeName, (int32_t)v16, v17, v18);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v21 = (UnityEngine_GameObject_o *)sub_1B64314(UnityEngine_GameObject_TypeInfo, v19, v20);
  UnityEngine_GameObject___ctor(v21, (System_String_o *)StringLiteral_12845/*"Sprite"*/, 0LL);
  GameObjectExtensions__SetParent(v21, (UnityEngine_Component_o *)this, 0LL);
  if ( !v21
    || (v22 = UnityEngine_GameObject__AddComponent_object_(
                v21,
                (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_1B64324(v22);
  }
  v23 = (struct UISprite_o *)v22;
  UIWidget__SetDimensions((UIWidget_o *)v22, 64, 64, 0LL);
  this->fields.mSprite = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mSprite, (int32_t)v23, v24, v25);
}


bool __fastcall MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  void *Mine; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  int32_t v7; // w19

  if ( (byte_49F92E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v3);
    byte_49F92E8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
  Mine = *(void **)(v6 + 336);
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
  Mine = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Mine )
LABEL_20:
    sub_1B64324(Mine);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Mine, v7, 0, 0LL, 0LL);
}


bool __fastcall MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v4; // x0
  struct CommonEffectComponent_o *v5; // x8

  if ( (byte_49F92DB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F92DB = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v5 = this->fields.commonEffectComponent;
  if ( !v5 )
    sub_1B64324(v4);
  return v5->fields.isTouched;
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

  if ( (byte_49F92DC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, mapGimmickEntity);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v6);
    byte_49F92DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v7);
    byte_49F76BD = 1;
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
    || (Mine = *(void **)(v11 + 336)) == 0LL
    || (Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, v7)) == 0LL
    || !mapGimmickEntity
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(
          (ClientMissionManager_o *)Instance,
          *((_DWORD *)Mine + 24),
          mapGimmickEntity->fields.id,
          0LL),
        (Mine = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Mine);
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
  MapGimmickComponent__SetDispAnim_33509680(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_33509680(this, is_disp, 0.0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim_33509680(
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
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  struct CommonEffectComponent_o *v28; // x20
  System_Action_o *v29; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x8
  System_String_o *v37; // x21
  System_Action_o *v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  EasingObject_o *v41; // x24
  System_Action_o *v42; // x25
  struct CommonEffectComponent_o *v43; // x20
  System_Action_o *v44; // x21
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_49F92E3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, is_disp);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_1B640C8(&Method_MapGimmickComponent_SetDispAnim__, v10);
    sub_1B640C8(&Method_MapGimmickComponent_StateDispAnimEnd__, v11);
    sub_1B640C8(&Method_MapGimmickComponent_StateHideAnimEnd__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__, v14);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__, v15);
    sub_1B640C8(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo, v16);
    byte_49F92E3 = 1;
  }
  v17 = sub_1B64314(MapGimmickComponent___c__DisplayClass38_0_TypeInfo, is_disp, is_play_se);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_37;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  MapGimmickComponent__StartActionEffect(this, v21);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v22);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( ((unsigned __int8)mSprite & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v17 + 32) = Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)Component_object, v32, v33);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_37;
    *(float *)(v17 + 28) = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&mSprite->klass[1]._1.this_arg.bits)(
                             mSprite,
                             mSprite->klass[1]._1.element_class);
    *(_DWORD *)(v17 + 24) = is_disp;
    if ( is_disp )
      v36 = 64LL;
    else
      v36 = 56LL;
    v37 = *(System_String_o **)((char *)&this->klass + v36);
    v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v38, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      v41 = *(EasingObject_o **)(v17 + 32);
      v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v39, v40);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v17,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0LL);
      if ( !v41 )
        goto LABEL_37;
      EasingObject__Play(v41, time, v42, v38, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v37, 0LL) )
    {
      v45 = Method_MapGimmickComponent_SetDispAnim__;
      if ( (*((_BYTE *)Method_MapGimmickComponent_SetDispAnim__ + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1B640E0(Method_MapGimmickComponent_SetDispAnim__);
      v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v45, v45[4]);
      OverwriteAssetSoundName__PlaySe(v46, v37, 0LL);
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
    v28 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v28 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v28->klass->vtable._6_ForceStart.method)(
          v28,
          1LL,
          v29,
          v28->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_37:
      sub_1B64324(mSprite);
    }
    if ( !v28 )
      goto LABEL_37;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v43 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v43 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0LL);
      if ( !mSprite )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v47);
    }
    else
    {
      v44 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
      System_Action___ctor(v44, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v43 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v43->klass->vtable._8_Stop.method)(
                                             v43,
                                             0LL,
                                             v44,
                                             v43->klass->vtable._9_ForceStop.methodPtr);
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
  __int64 v9; // x1
  __int64 v10; // x2
  struct MapControl_MapGimmickInfo_o *v11; // x8
  int32_t dispType; // w8
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x3
  int32_t v15; // w1

  if ( (byte_49F92E7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__, v3);
    sub_1B640C8(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__, v4);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_49F92E7 = 1;
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
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_33828248(
                                                                 (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                 this->fields.mMapCtrl_MapGimmickInfo,
                                                                 0LL);
      v11 = this->fields.mMapCtrl_MapGimmickInfo;
      if ( v11 )
      {
        dispType = v11->fields.dispType;
        if ( dispType != 0 || ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) == 0 )
        {
          if ( dispType != 1 || (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) == 0 )
            return;
          v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
          System_Action___ctor(
            v13,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__,
            0LL);
          v15 = 2;
        }
        else
        {
          v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
          System_Action___ctor(
            v13,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__,
            0LL);
          v15 = 3;
        }
        MapGimmickComponent__SetState(this, v15, v13, v14);
        return;
      }
    }
LABEL_16:
    sub_1B64324(mMapCtrl_MapGimmickInfo);
  }
}


void __fastcall MapGimmickComponent__SetMapGimmickInfo(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mMapCtrl_MapGimmickInfo = mapGimmickInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (int32_t)mapGimmickInfo,
    (int32_t)method,
    v3);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  EasingObject_o *v32; // x22
  System_Action_o *v33; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_49F92E4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&easeType);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__, v14);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__, v15);
    sub_1B640C8(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo, v16);
    byte_49F92E4 = 1;
  }
  v17 = sub_1B64314(MapGimmickComponent___c__DisplayClass39_0_TypeInfo, *(_QWORD *)&easeType, callback);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  *(float *)(v17 + 24) = x;
  *(float *)(v17 + 28) = y;
  *(float *)(v17 + 32) = z;
  *(_QWORD *)(v17 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)callback, v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 64) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 64), (int32_t)Component_object, v25, v26);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v17 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v17,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v32 = *(EasingObject_o **)(v17 + 64);
    v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0LL);
    if ( v32 )
    {
      EasingObject__Play(v32, time, v33, v29, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(transform);
  }
  ActionExtensions__Call(v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetState(
        MapGimmickComponent_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  CStateManager_T__o *v8; // x0

  if ( (byte_49F92E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_MapGimmickComponent__setState__, *(_QWORD *)&state);
    byte_49F92E1 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_mStateEndAct, (int32_t)end_act, (int32_t)end_act, (int32_t)method);
  v8 = (CStateManager_T__o *)*(p_mStateEndAct - 6);
  if ( !v8 )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    v8,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_MapGimmickComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_49F92E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, enabled);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F92E6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B64324(gameObject);
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
  __int64 v42; // x23
  __int64 IsMonoColorRect; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x1
  MapGimmickEntity_o *Mine; // x0
  __int64 *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  UISprite_o *mSprite; // x26
  System_String_o *v56; // x27
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  UISprite_o *v59; // x28
  UnityEngine_Behaviour_o *v60; // x26
  UnityEngine_Object_o *monitor; // x28
  bool v62; // w0
  System_String_o *v63; // x26
  struct UISprite_o *v64; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v66; // x0
  MapGimmickComponent_o *v67; // x0
  const MethodInfo *v68; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  const MethodInfo *v70; // x1
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v72; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  int32_t v75; // w2
  int32_t v76; // w3
  UnityEngine_Object_o *v77; // x26
  const MethodInfo *v78; // x1
  __int64 v79; // x8
  __int64 v80; // x8
  int32_t v81; // w26
  UnityEngine_GameObject_o *v82; // x26
  bool v83; // w1
  float v84; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v86; // q0
  CommonEffectComponent_o *v87; // x8
  struct CommonEffectComponent_o *v88; // x24
  __int64 v89; // x1
  __int64 v90; // x2
  System_Action_o *v91; // x25
  int32_t v92; // w2
  int32_t v93; // w3
  float v94; // s0
  float v95; // s1
  float v96; // s2
  float v97; // s9
  float v98; // s8
  float v99; // s10
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *v101; // x24
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x25
  int32_t v105; // w2
  int32_t v106; // w3
  const MethodInfo *v107; // x1
  __int64 v108; // x8
  __int64 v109; // x8
  int32_t v110; // w26
  DataManager_o *v111; // x23
  Il2CppObject *v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  __int64 v115; // x8
  EventMissionMaster_o *v116; // x23
  EventMissionEntity_array *EventMissionList_38867440; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  __int64 v120; // x1
  __int64 v121; // x2
  System_Collections_Generic_List_EventDelegate__o *v122; // x23
  EventDelegate_Callback_o *v123; // x24
  int32_t v124; // w0
  int v125; // t1
  System_String_o *v126; // x0
  MapGimmickComponent_o *v127; // x0
  const MethodInfo *v128; // x4
  UnityEngine_Object_o *v129; // x20
  Il2CppObject *v130; // x20
  Il2CppObject *v131; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  UnityEngine_GameObject_o *v134; // x20
  UnityEngine_GameObject_o *v135; // x0
  UnityEngine_Color_o v136; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F92DA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, mg_inf);
    sub_1B640C8(&AtlasManager_TypeInfo, v15);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v18);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v20);
    sub_1B640C8(&EventDelegate_TypeInfo, v21);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v22);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UIButton___, v23);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v24);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v25);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v26);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v27);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v30);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v31);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__, v32);
    sub_1B640C8(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo, v33);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v34);
    sub_1B640C8(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v35);
    sub_1B640C8(&StringLiteral_24594/*"white00"*/, v36);
    sub_1B640C8(&StringLiteral_1226/*"000000"*/, v37);
    sub_1B640C8(&StringLiteral_19742/*"gimmick_"*/, v38);
    sub_1B640C8(&StringLiteral_8813/*"MapGimmickEffect_"*/, v39);
    sub_1B640C8(&StringLiteral_1/*""*/, v40);
    sub_1B640C8(&StringLiteral_8812/*"MapGimmickActionEffect_"*/, v41);
    byte_49F92DA = 1;
  }
  *(_QWORD *)&v136.fields.r = 0LL;
  *(_QWORD *)&v136.fields.b = 0LL;
  entity = 0LL;
  v42 = sub_1B64314(MapGimmickComponent___c__DisplayClass23_0_TypeInfo, mg_inf, mapCamera);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_133;
  *(_QWORD *)(v42 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 16), (int32_t)this, v44, v45);
  *(_QWORD *)(v42 + 32) = touchCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)touchCallback, v46, v47);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mMapCtrl_MapGimmickInfo, (int32_t)mg_inf, v48, v49);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_133;
  Mine = MapControl_MapGimmickInfo__GetMine(mg_inf, v50);
  *(_QWORD *)(v42 + 24) = Mine;
  v52 = (__int64 *)(v42 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 24), (int32_t)Mine, v53, v54);
  IsMonoColorRect = *(_QWORD *)(v42 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    mSprite = this->fields.mSprite;
    v56 = (System_String_o *)StringLiteral_24594/*"white00"*/;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*v52 )
      goto LABEL_133;
    v57 = System_Int32__ToString_62180668((unsigned int)*v52 + 24, (System_String_o *)StringLiteral_1226/*"000000"*/, 0LL);
    v58 = System_String__Concat_61375396((System_String_o *)StringLiteral_19742/*"gimmick_"*/, v57, 0LL);
    v59 = this->fields.mSprite;
    v56 = v58;
    IsMonoColorRect = (__int64)UIAtlas__GetUIAtlasBySpriteName(atlases, v58, 0LL);
    if ( !v59 )
      goto LABEL_133;
    UISprite__set_atlas(v59, (UIAtlas_o *)IsMonoColorRect, 0LL);
  }
  v60 = (UnityEngine_Behaviour_o *)this->fields.mSprite;
  if ( !v60 )
    goto LABEL_133;
  monitor = (UnityEngine_Object_o *)v60[19].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v62 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v60, v62, 0LL);
  IsMonoColorRect = *v52;
  if ( !*v52 )
    goto LABEL_133;
  IsMonoColorRect = (__int64)MapGimmickEntity__GetColorCodeFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( !this->fields.mSprite )
    goto LABEL_133;
  v63 = (System_String_o *)IsMonoColorRect;
  IsMonoColorRect = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.mSprite, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v56, 0LL);
    IsMonoColorRect = *v52;
    if ( !*v52 )
      goto LABEL_133;
    IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    v64 = this->fields.mSprite;
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_133;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v64 )
        goto LABEL_133;
      UIWidget__SetDimensions((UIWidget_o *)this->fields.mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v64 )
        goto LABEL_133;
      IsMonoColorRect = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v64->klass->vtable._33_MakePixelPerfect.method)(
                          this->fields.mSprite,
                          v64->klass->vtable._34_get_minWidth.methodPtr);
    }
    if ( !*v52 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UIWidget__set_depth((UIWidget_o *)IsMonoColorRect, *(_DWORD *)(*v52 + 36) + this->fields.mDepthBase, 0LL);
    if ( !*v52 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v84 = this->fields.mScaleBase * (float)((float)*(int *)(*v52 + 80) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
    GameObjectExtensions__SetLocalScale_33377468(gameObject, v84, 0LL);
    if ( !System_String__IsNullOrEmpty(v63, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v63, &v136, 0LL);
      IsMonoColorRect = (__int64)this->fields.mSprite;
      if ( !IsMonoColorRect )
        goto LABEL_133;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, v136, 0LL);
    }
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    LODWORD(v86) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v86 = 0.0;
    (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)IsMonoColorRect + 440LL))(
      IsMonoColorRect,
      *(_QWORD *)(*(_QWORD *)IsMonoColorRect + 448LL),
      v86);
  }
  else
  {
    if ( !*v52 )
      goto LABEL_133;
    v66 = System_Int32__ToString((unsigned int)*v52 + 24, 0LL);
    v67 = (MapGimmickComponent_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_8813/*"MapGimmickEffect_"*/, v66, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab(v67, (System_String_o *)v67, assetData, multiAssetData, v68);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v70);
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
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v72);
      this->fields.commonEffectComponent = CommonEffectComponent;
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.commonEffectComponent,
        (int32_t)CommonEffectComponent,
        v75,
        v76);
      v77 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v78);
          byte_49F76BD = 1;
        }
        IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v79 = **(_QWORD **)(IsMonoColorRect + 184);
        if ( !v79 )
          goto LABEL_133;
        v80 = *(_QWORD *)(v79 + 264);
        if ( !v80 )
          goto LABEL_133;
        IsMonoColorRect = *(_QWORD *)(v80 + 336);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v78);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        v81 = *(_DWORD *)(IsMonoColorRect + 96);
        IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)IsMonoColorRect,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
          &entity,
          v81,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          IsMonoColorRect = (__int64)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          IsMonoColorRect = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_133;
          IsMonoColorRect = QuestTree__CheckMapGimmickCond_33828248((QuestTree_o *)IsMonoColorRect, mg_inf, 0LL);
          if ( !v82 )
            goto LABEL_133;
          v83 = IsMonoColorRect & 1;
          IsMonoColorRect = (__int64)v82;
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
          v83 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v83, 0LL);
        IsMonoColorRect = *v52;
        if ( !*v52 )
          goto LABEL_133;
        IsMonoColorRect = MapGimmickEntity__GetUseAnimFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
        v87 = *p_commonEffectComponent;
        if ( (int)IsMonoColorRect < 1 )
        {
          if ( !v87 )
            goto LABEL_133;
        }
        else
        {
          if ( !v87 )
            goto LABEL_133;
          v87->fields.useAnimNum = IsMonoColorRect;
        }
        CommonEffectComponent__ResetPrewarmParticleList(v87, 0LL);
        v88 = *p_commonEffectComponent;
        v91 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v89, v90);
        System_Action___ctor(
          v91,
          (Il2CppObject *)v42,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v88 )
          goto LABEL_133;
        v88->fields.touchCallback = v91;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v88->fields.touchCallback, (int32_t)v91, v92, v93);
      }
    }
  }
  IsMonoColorRect = *v52;
  if ( !*v52 )
    goto LABEL_133;
  *(UnityEngine_Vector3_o *)&v94 = MapGimmickEntity__GetTouchSize((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( v94 <= 0.0 )
    goto LABEL_117;
  v97 = v95;
  if ( v95 <= 0.0 )
    goto LABEL_117;
  v98 = v94;
  v99 = v96;
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)IsMonoColorRect,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                 (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_object = (Il2CppObject *)IsMonoColorRect;
  }
  if ( !Component_object )
    goto LABEL_133;
  v138.fields.x = v98;
  v138.fields.y = v97;
  v138.fields.z = v99;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v138, 0LL);
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  v101 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)IsMonoColorRect,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v101, 0LL, 0LL) )
  {
    IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v101 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                     (UnityEngine_GameObject_o *)IsMonoColorRect,
                                     (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *v52;
  if ( !*v52 )
LABEL_133:
    sub_1B64324(IsMonoColorRect);
  if ( MapGimmickEntity__IsEventMissionScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL) )
  {
    v104 = sub_1B64314(MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v102, v103);
    System_Object___ctor((Il2CppObject *)v104, 0LL);
    if ( !v104 )
      goto LABEL_133;
    *(_QWORD *)(v104 + 32) = v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v104 + 32), v42, v105, v106);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v107);
      byte_49F76BD = 1;
    }
    IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v108 = **(_QWORD **)(IsMonoColorRect + 184);
    if ( !v108 )
      goto LABEL_133;
    v109 = *(_QWORD *)(v108 + 264);
    if ( !v109 )
      goto LABEL_133;
    IsMonoColorRect = *(_QWORD *)(v109 + 336);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v107);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v110 = *(_DWORD *)(IsMonoColorRect + 96);
    IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v111 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)IsMonoColorRect,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v112 = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
             v110,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v104 + 16) = v112;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v104 + 16), (int32_t)v112, v113, v114);
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 v111,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v115 = *(_QWORD *)(v104 + 32);
    if ( !v115 )
      goto LABEL_133;
    v116 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(_QWORD *)(v115 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapGimmickEntity__GetEventMissionIdList((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    if ( !v116 )
      goto LABEL_133;
    EventMissionList_38867440 = EventMissionMaster__getEventMissionList_38867440(
                                  v116,
                                  (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                  0LL);
    *(_QWORD *)(v104 + 24) = EventMissionList_38867440;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v104 + 24), (int32_t)EventMissionList_38867440, v118, v119);
    if ( !v101 )
      goto LABEL_133;
    v122 = (System_Collections_Generic_List_EventDelegate__o *)v101[8].monitor;
    v123 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v120, v121);
    EventDelegate_Callback___ctor(
      v123,
      (Il2CppObject *)v104,
      (intptr_t)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(v122, v123, 0LL);
  }
LABEL_117:
  IsMonoColorRect = *v52;
  if ( !*v52 )
    goto LABEL_133;
  v125 = *(_DWORD *)(IsMonoColorRect + 100);
  v124 = IsMonoColorRect + 100;
  if ( v125 >= 1 )
  {
    v126 = System_Int32__ToString(v124, 0LL);
    v127 = (MapGimmickComponent_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_8812/*"MapGimmickActionEffect_"*/, v126, 0LL);
    v129 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     v127,
                                     (System_String_o *)v127,
                                     assetData,
                                     multiAssetData,
                                     v128);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsMonoColorRect = UnityEngine_Object__op_Inequality(v129, 0LL, 0LL);
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !v129 )
        goto LABEL_133;
      v130 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v129,
               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v130, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v131 = UnityEngine_Object__Instantiate_object_(
                 v130,
                 (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v131;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actionEffect, (int32_t)v131, v132, v133);
        IsMonoColorRect = (__int64)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_33381252(v134, v135, 0LL);
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
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_49F92E2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F92E2 = 1;
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
      sub_1B64324(gameObject);
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
  const MethodInfo *v4; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49F92E5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F92E5 = 1;
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
      sub_1B64324(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v6);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v4);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F92D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_MapGimmickComponent__update__, method);
    byte_49F92D8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30613CC *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1B64324(this);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1B64324(this);
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
    sub_1B64324(this);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    MapGimmickComponent__SetState(that, 1, 0LL, v8);
  }
  else if ( !dispType )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_33509680(that, 1, AnimTime, 1, v7);
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
    sub_1B64324(this);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_33509680(that, 0, AnimTime, 1, v7);
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

  if ( (byte_49F92EB & 1) == 0 )
  {
    sub_1B640C8(&MapGimmickComponent_StateMapMain_TypeInfo, v1);
    byte_49F92EB = 1;
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  struct MapGimmickComponent_o *v14; // x8
  struct MapGimmickComponent_o *v15; // x8
  int32_t v16; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_49F92EA & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_1B640C8(&MapGimmickComponent_StateMapMain_TypeInfo, v5);
    byte_49F92EA = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( !*(_QWORD *)(Instance + 56) )
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
      Instance = MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)Instance, v12);
      if ( (Instance & 1) == 0 )
      {
LABEL_17:
        v14 = this->fields.mThat;
        if ( !v14 )
          goto LABEL_31;
        if ( !v14->fields.isForceNotActive )
        {
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v15 = this->fields.mThat;
          if ( !v15 || !Instance )
            goto LABEL_31;
          Instance = QuestTree__CheckMapGimmickCond_33828248(
                       (QuestTree_o *)Instance,
                       v15->fields.mMapCtrl_MapGimmickInfo,
                       0LL);
          v14 = this->fields.mThat;
          if ( (Instance & 1) != 0 )
          {
            if ( v14 )
            {
              v16 = 3;
LABEL_30:
              MapGimmickComponent__SetState(v14, v16, 0LL, v13);
              return;
            }
            goto LABEL_31;
          }
          if ( !v14 )
            goto LABEL_31;
        }
        if ( !v14->fields.isForceLoop )
        {
          v16 = 2;
          goto LABEL_30;
        }
        mMapCtrl_MapGimmickInfo = v14->fields.mMapCtrl_MapGimmickInfo;
        if ( !mMapCtrl_MapGimmickInfo )
LABEL_31:
          sub_1B64324(Instance);
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

  this->fields.mThat = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
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
    sub_1B64324(this);
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
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v10; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v11; // x8
  System_String_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *_9__2; // x25
  System_String_o *v16; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49F92EC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v4);
    sub_1B640C8(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__, v5);
    byte_49F92EC = 1;
  }
  v6 = Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__;
  if ( (*((_BYTE *)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  v10 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v11 = this->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_13;
  v12 = (System_String_o *)Instance;
  Instance = v11->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v16 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v19, v20);
  }
  if ( !v10 )
LABEL_13:
    sub_1B64324(Instance);
  CommonUI__OpenEventMissionListDialog(v10, v12, v16, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x2
  struct EventDetailEntity_o *v22; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v24; // x19

  v2 = this;
  if ( (byte_49F92ED & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, method);
    sub_1B640C8(&SceneJumpInfo_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F92ED = 1;
  }
  if ( !byte_49F934D )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_49F934D = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v2->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
LABEL_31:
    sub_1B6432C(this, method);
  v9 = eventMissionEntList->m_Items[0];
  if ( !v9 )
    goto LABEL_30;
  id = v9->fields.id;
  if ( !byte_49F934E )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_49F934E = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
  }
  static_fields->_MissionId_k__BackingField = id;
  eventDetailEnt = v2->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
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
  if ( !byte_49F934F )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_49F934F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v19 = v2->fields.eventDetailEnt;
  if ( !v19
    || (EventRewardSaveData__SaveCurrentEventData(v19->fields.eventId, 0LL), (v22 = v2->fields.eventDetailEnt) == 0LL)
    || (eventId = v22->fields.eventId,
        v24 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v20, v21),
        SceneJumpInfo___ctor_38274744(v24, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v24)
    || (SceneJumpInfo__SetReturnNowScene(v24, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1B64324(this);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v24, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(_4__this);
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