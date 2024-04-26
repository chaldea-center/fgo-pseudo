void __fastcall MapGimmickComponent___ctor(MapGimmickComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4354D71 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354D71 = 1;
  }
  this->fields.mDepthBase = 30;
  this->fields.mEasingType = 17;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.mHideSeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.mDispSeName, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_MapGimmickComponent__o *mFSM; // x21
  MapGimmickComponent_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  MapGimmickComponent_StateMapMain_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  MapGimmickComponent_StateHideAnim_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x20
  MapGimmickComponent_StateDispAnim_o *v20; // x21
  const MethodInfo *v21; // x3

  if ( (byte_4354D5F & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MapGimmickComponent___ctor__);
    sub_B70694(&Method_CStateManager_MapGimmickComponent__add__);
    sub_B70694(&CStateManager_MapGimmickComponent__TypeInfo);
    sub_B70694(&MapGimmickComponent_StateDispAnim_TypeInfo);
    sub_B70694(&MapGimmickComponent_StateHideAnim_TypeInfo);
    sub_B70694(&MapGimmickComponent_StateMapMain_TypeInfo);
    sub_B70694(&MapGimmickComponent_StateNone_TypeInfo);
    byte_4354D5F = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_MapGimmickComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2C7FFDC *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v4;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (MapGimmickComponent_StateNone_o *)sub_B70764(MapGimmickComponent_StateNone_TypeInfo);
    MapGimmickComponent_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MapGimmickComponent__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (MapGimmickComponent_StateMapMain_o *)sub_B70764(MapGimmickComponent_StateMapMain_TypeInfo);
    MapGimmickComponent_StateMapMain___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MapGimmickComponent__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (MapGimmickComponent_StateHideAnim_o *)sub_B70764(MapGimmickComponent_StateHideAnim_TypeInfo);
    MapGimmickComponent_StateHideAnim___ctor(v18, 0LL);
    if ( !v17
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_2C800A8 *)Method_CStateManager_MapGimmickComponent__add__),
          v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v20 = (MapGimmickComponent_StateDispAnim_o *)sub_B70764(MapGimmickComponent_StateDispAnim_TypeInfo),
          MapGimmickComponent_StateDispAnim___ctor(v20, 0LL),
          !v19) )
    {
LABEL_9:
      sub_B7076C(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v21);
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
                                    0LL)) == 0LL )
  {
    sub_B7076C(mMapCtrl_MapGimmickInfo, method);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Component_srcLineSprite; // x22
  MapEffectComponent_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4354D66 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    this = (MapGimmickComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D66 = 1;
  }
  if ( !prefab )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        prefab,
                                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Component_srcLineSprite,
                                      (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v8 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v8, gameObject, mapCamera, 0LL);
      return (CommonEffectComponent_o *)v8;
    }
LABEL_23:
    sub_B7076C(this, prefab);
  }
  v10 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    prefab,
                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v10,
                                      (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v8 = (MapEffectComponent_o *)this;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v12 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_32503456(v11, v12, 0LL);
      return (CommonEffectComponent_o *)v8;
    }
    goto LABEL_23;
  }
  return (CommonEffectComponent_o *)v8;
}


UnityEngine_GameObject_o *__fastcall MapGimmickComponent__GetEffectPrefab(
        MapGimmickComponent_o *this,
        System_String_o *effectPrefabName,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21

  if ( (byte_4354D65 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    this = (MapGimmickComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D65 = 1;
  }
  if ( !assetData )
    sub_B7076C(this, effectPrefabName);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             effectPrefabName,
                                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    if ( !multiAssetData )
      return 0LL;
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               multiAssetData,
                                                               effectPrefabName,
                                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
}


System_String_o *__fastcall MapGimmickComponent__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = id;
  if ( (byte_4354D5E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9049/*"MapGimmick_"*/);
    sub_B70694(&StringLiteral_987/*"00"*/);
    byte_4354D5E = 1;
  }
  v2 = System_Int32__ToString_39283984((int32_t)&v4, (System_String_o *)StringLiteral_987/*"00"*/, 0LL);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_9049/*"MapGimmick_"*/, v2, 0LL);
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
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_4354D67 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D67 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL);
  if ( v3 )
    return 0LL;
  if ( !prefab )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      prefab,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( v3 )
    return 0LL;
  if ( !Component_srcLineSprite )
LABEL_15:
    sub_B7076C(v3, v4);
  return MapGimmickRandomEffectComponent__GetRandomElement(
           (MapGimmickRandomEffectComponent_o *)Component_srcLineSprite,
           v4);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4354D68 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_B70694(&Method_CStateManager_MapGimmickComponent__getState__);
    byte_4354D68 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall MapGimmickComponent__InitDefaultParam(MapGimmickComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v16; // x8
  struct System_String_o *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *v24; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v25; // x0
  __int64 v26; // x1
  struct UISprite_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4354D61 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_UISprite___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_13179/*"Sprite"*/);
    byte_4354D61 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mHideSeName,
    (System_Int32_array **)Empty,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = string_TypeInfo->static_fields;
  v17 = v16->Empty;
  this->fields.mDispSeName = v16->Empty;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mDispSeName,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v24 = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v24, (System_String_o *)StringLiteral_13179/*"Sprite"*/, 0LL);
  GameObjectExtensions__SetParent(v24, (UnityEngine_Component_o *)this, 0LL);
  if ( !v24
    || (v25 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                v24,
                (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_B7076C(v25, v26);
  }
  v27 = (struct UISprite_o *)v25;
  UIWidget__SetDimensions((UIWidget_o *)v25, 64, 64, 0LL);
  this->fields.mSprite = v27;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mSprite,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


bool __fastcall MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *Master_WarQuestSelectionMaster; // x0
  __int64 v3; // x8
  __int64 v4; // x8
  int32_t EventId; // w0
  int32_t v6; // w19

  if ( (byte_4354D70 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4354D70 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Master_WarQuestSelectionMaster = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v3 = *(_QWORD *)Master_WarQuestSelectionMaster[2].fields.createdDateTime;
  if ( !v3 )
    goto LABEL_22;
  v4 = *(_QWORD *)(v3 + 256);
  if ( !v4 )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = *(MapControl_WarInfo_o **)(v4 + 328);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  EventId = MapControl_WarInfo__GetEventId(Master_WarQuestSelectionMaster, 0LL);
  if ( EventId < 1 )
    return 0;
  v6 = EventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapControl_WarInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_22:
    sub_B7076C(Master_WarQuestSelectionMaster, method);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Master_WarQuestSelectionMaster, v6, 0, 0LL, 0LL);
}


bool __fastcall MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct CommonEffectComponent_o *v6; // x8

  if ( (byte_4354D63 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D63 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v6 = this->fields.commonEffectComponent;
  if ( !v6 )
    sub_B7076C(v4, v5);
  return v6->fields.isTouched;
}


void __fastcall MapGimmickComponent__OnGimmickTouched(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  ClientMissionManager_o *Instance; // x21
  MapControl_WarInfo_o *EventId; // x0
  __int64 v9; // x8
  __int64 v10; // x8

  if ( (byte_4354D64 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4354D64 = 1;
  }
  Instance = (ClientMissionManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  EventId = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    EventId = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = *(_QWORD *)EventId[2].fields.createdDateTime;
  if ( !v9
    || (v10 = *(_QWORD *)(v9 + 256)) == 0
    || (EventId = *(MapControl_WarInfo_o **)(v10 + 328)) == 0LL
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), !mapGimmickEntity)
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(Instance, (int32_t)EventId, mapGimmickEntity->fields.id, 0LL),
        (EventId = (MapControl_WarInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(EventId, v6);
  }
  ClientMissionManager__SendRequest((ClientMissionManager_o *)EventId, touchCallback, 0LL);
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
  MapGimmickComponent__SetDispAnim_30927476(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_30927476(this, is_disp, 0.0, 0, v3);
}


void __fastcall MapGimmickComponent__SetDispAnim_30927476(
        MapGimmickComponent_o *this,
        bool is_disp,
        float time,
        bool is_play_se,
        const MethodInfo *method)
{
  __int64 v9; // x22
  UnityEngine_Component_o *mSprite; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  struct CommonEffectComponent_o *v21; // x20
  System_Action_o *v22; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  System_String_o *v32; // x21
  System_Action_o *v33; // x23
  EasingObject_o *v34; // x24
  System_Action_o *v35; // x25
  struct CommonEffectComponent_o *v36; // x20
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4354D6B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&Method_MapGimmickComponent_StateDispAnimEnd__);
    sub_B70694(&Method_MapGimmickComponent_StateHideAnimEnd__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__);
    sub_B70694(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__);
    sub_B70694(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
    byte_4354D6B = 1;
  }
  v9 = sub_B70764(MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass38_0___ctor((MapGimmickComponent___c__DisplayClass38_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_39;
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  MapGimmickComponent__StartActionEffect(this, v18);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v19);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( ((unsigned __int8)mSprite & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  gameObject,
                                                  (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v9 + 32) = Component_UIWidget;
    sub_B70630((BattleServantConfConponent_o *)(v9 + 32), Component_UIWidget, v25, v26, v27, v28, v29, v30);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_39;
    *(float *)(v9 + 28) = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&mSprite->klass[1]._1.this_arg.bits)(
                            mSprite,
                            mSprite->klass[1]._1.element_class);
    *(_DWORD *)(v9 + 24) = is_disp;
    if ( is_disp )
      v31 = 56LL;
    else
      v31 = 48LL;
    v32 = *(System_String_o **)((char *)&this->klass + v31);
    v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v9,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v33, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      v34 = *(EasingObject_o **)(v9 + 32);
      v35 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v9,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0LL);
      if ( !v34 )
        goto LABEL_39;
      EasingObject__Play(v34, time, v35, v33, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v32, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v32, 0LL);
    }
    return;
  }
  if ( is_disp )
  {
    mSprite = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !mSprite )
      goto LABEL_39;
    mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mSprite, 0LL);
    if ( !mSprite )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 1, 0LL);
    v21 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v22 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v21 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v21->klass->vtable._6_ForceStart.method)(
          v21,
          1LL,
          v22,
          v21->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_39:
      sub_B7076C(mSprite, v11);
    }
    if ( !v21 )
      goto LABEL_39;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v36 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v36 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0LL);
      if ( !mSprite )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v38);
    }
    else
    {
      v37 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v36 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v36->klass->vtable._8_Stop.method)(
                                             v36,
                                             0LL,
                                             v37,
                                             v36->klass->vtable._9_ForceStop.methodPtr);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_39;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
}


void __fastcall MapGimmickComponent__SetDisplayByRaidProgress(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  struct MapControl_MapGimmickInfo_o *v6; // x8
  int32_t dispType; // w8
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3
  int32_t v10; // w1

  if ( (byte_4354D6F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__);
    sub_B70694(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    byte_4354D6F = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_19;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             0LL);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_19;
  v4 = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, method);
  if ( v4 && !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)v4, v5) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_22272832(
                                                                 (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                 this->fields.mMapCtrl_MapGimmickInfo,
                                                                 0LL);
      v6 = this->fields.mMapCtrl_MapGimmickInfo;
      if ( v6 )
      {
        dispType = v6->fields.dispType;
        if ( dispType != 0 || ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) == 0 )
        {
          if ( dispType != 1 || (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) == 0 )
            return;
          v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__,
            0LL);
          v10 = 2;
        }
        else
        {
          v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__,
            0LL);
          v10 = 3;
        }
        MapGimmickComponent__SetState(this, v10, v8, v9);
        return;
      }
    }
LABEL_19:
    sub_B7076C(mMapCtrl_MapGimmickInfo, method);
  }
}


void __fastcall MapGimmickComponent__SetMapGimmickInfo(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mMapCtrl_MapGimmickInfo = mapGimmickInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (System_Int32_array **)mapGimmickInfo,
    (System_String_array **)method,
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
  __int64 v13; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Action_o *v36; // x21
  EasingObject_o *v37; // x22
  System_Action_o *v38; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_4354D6C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__);
    sub_B70694(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__);
    sub_B70694(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
    byte_4354D6C = 1;
  }
  v13 = sub_B70764(MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass39_0___ctor((MapGimmickComponent___c__DisplayClass39_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = callback;
  *(float *)(v13 + 24) = x;
  *(float *)(v13 + 28) = y;
  *(float *)(v13 + 32) = z;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 64), Component_UIWidget, v30, v31, v32, v33, v34, v35);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v13 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v36 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v13,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v37 = *(EasingObject_o **)(v13 + 64);
    v38 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v13,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0LL);
    if ( v37 )
    {
      EasingObject__Play(v37, time, v38, v36, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_B7076C(transform, v15);
  }
  ActionExtensions__Call(v36, 0LL);
}


void __fastcall MapGimmickComponent__SetState(
        MapGimmickComponent_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x0

  if ( (byte_4354D69 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MapGimmickComponent__setState__);
    byte_4354D69 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B70630(
    (BattleServantConfConponent_o *)p_mStateEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)*(p_mStateEndAct - 6);
  if ( !v13 )
    sub_B7076C(0LL, v12);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v13,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_MapGimmickComponent__setState__);
}


void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_4354D6E & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D6E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_srcLineSprite, enabled, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(gameObject, v6);
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
  __int64 v14; // x23
  MapGimmickEntity_o *IsMonoColorRect; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **Mine; // x0
  __int64 v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *v43; // x27
  UnityEngine_Behaviour_o **p_mSprite; // x19
  UISprite_o *mSprite; // x26
  AssetData_o *v46; // x20
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  UISprite_o *v49; // x28
  UnityEngine_Behaviour_o *v50; // x26
  UnityEngine_Object_o *klass; // x28
  bool v52; // w0
  System_String_o *v53; // x26
  AssetData_o *v54; // x28
  AssetData_o *v55; // x20
  UnityEngine_Behaviour_o *v56; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  const MethodInfo *v60; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v63; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UnityEngine_Object_o *v72; // x26
  __int64 v73; // x8
  __int64 v74; // x8
  int32_t EventId; // w26
  UnityEngine_GameObject_o *v76; // x26
  bool v77; // w1
  float v78; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v80; // q0
  struct CommonEffectComponent_o *v81; // x24
  System_Action_o *v82; // x25
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  float v89; // s0
  float v90; // s1
  float v91; // s2
  float v92; // s9
  float v93; // s8
  float v94; // s10
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *v96; // x24
  __int64 v97; // x25
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x8
  __int64 v105; // x8
  int32_t v106; // w26
  DataManager_o *v107; // x23
  System_Int32_array **v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  __int64 v115; // x8
  EventMissionMaster_o *v116; // x23
  System_Int32_array **EventMissionList_25392596; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_List_EventDelegate__o *v124; // x23
  EventDelegate_Callback_o *v125; // x24
  int32_t v126; // w0
  int actionEffectId; // t1
  System_String_o *v128; // x0
  System_String_o *v129; // x0
  const MethodInfo *v130; // x4
  UnityEngine_Object_o *v131; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v132; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  UnityEngine_GameObject_o *v140; // x20
  UnityEngine_GameObject_o *v141; // x0
  UnityEngine_Color_o color; // [xsp+10h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4354D62 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_UIButton___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__);
    sub_B70694(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
    sub_B70694(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
    sub_B70694(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    sub_B70694(&StringLiteral_23658/*"white00"*/);
    sub_B70694(&StringLiteral_991/*"000000"*/);
    sub_B70694(&StringLiteral_19356/*"gimmick_"*/);
    sub_B70694(&StringLiteral_9031/*"MapGimmickEffect_"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_9030/*"MapGimmickActionEffect_"*/);
    byte_4354D62 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  v14 = sub_B70764(MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass23_0___ctor((MapGimmickComponent___c__DisplayClass23_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_149;
  *(_QWORD *)(v14 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 32) = touchCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v14 + 32),
    (System_Int32_array **)touchCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (System_Int32_array **)mg_inf,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_149;
  Mine = (System_Int32_array **)MapControl_MapGimmickInfo__GetMine(mg_inf, 0LL);
  *(_QWORD *)(v14 + 24) = Mine;
  v36 = v14 + 24;
  sub_B70630((BattleServantConfConponent_o *)(v14 + 24), Mine, v37, v38, v39, v40, v41, v42);
  IsMonoColorRect = *(MapGimmickEntity_o **)(v14 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, v16);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    v43 = (System_String_o *)StringLiteral_23658/*"white00"*/;
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    mSprite = this->fields.mSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v46 = multiAssetData;
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)v36 )
      goto LABEL_149;
    v46 = multiAssetData;
    v47 = System_Int32__ToString_39283984((unsigned int)*(_QWORD *)v36 + 24, (System_String_o *)StringLiteral_991/*"000000"*/, 0LL);
    v48 = System_String__Concat_44758168((System_String_o *)StringLiteral_19356/*"gimmick_"*/, v47, 0LL);
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    v49 = this->fields.mSprite;
    v43 = v48;
    IsMonoColorRect = (MapGimmickEntity_o *)UIAtlas__GetUIAtlasBySpriteName(atlases, v48, 0LL);
    if ( !v49 )
      goto LABEL_149;
    UISprite__set_atlas(v49, (UIAtlas_o *)IsMonoColorRect, 0LL);
  }
  v50 = *p_mSprite;
  if ( !*p_mSprite )
    goto LABEL_149;
  klass = (UnityEngine_Object_o *)v50[19].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v52 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v50, v52, 0LL);
  IsMonoColorRect = *(MapGimmickEntity_o **)v36;
  if ( !*(_QWORD *)v36 )
    goto LABEL_149;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetColorCodeFromScript(IsMonoColorRect, v16);
  if ( !*p_mSprite )
    goto LABEL_149;
  v53 = (System_String_o *)IsMonoColorRect;
  v54 = v46;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Behaviour__get_enabled(*p_mSprite, 0LL);
  v55 = assetData;
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v43, 0LL);
    IsMonoColorRect = *(MapGimmickEntity_o **)v36;
    if ( !*(_QWORD *)v36 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, v16);
    v56 = *p_mSprite;
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_149;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v56 )
        goto LABEL_149;
      UIWidget__SetDimensions((UIWidget_o *)*p_mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v56 )
        goto LABEL_149;
      IsMonoColorRect = (MapGimmickEntity_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v56->klass[2]._1.typeMetadataHandle)(
                                                *p_mSprite,
                                                v56->klass[2]._1.interopData);
    }
    if ( !*(_QWORD *)v36 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_149;
    UIWidget__set_depth(
      (UIWidget_o *)IsMonoColorRect,
      *(_DWORD *)(*(_QWORD *)v36 + 36LL) + this->fields.mDepthBase,
      0LL);
    if ( !*(_QWORD *)v36 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    v78 = this->fields.mScaleBase * (float)((float)*(int *)(*(_QWORD *)v36 + 80LL) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
    GameObjectExtensions__SetLocalScale_32499584(gameObject, v78, 0LL);
    if ( !System_String__IsNullOrEmpty(v53, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v53, &color, 0LL);
      IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
      if ( !*p_mSprite )
        goto LABEL_149;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, color, 0LL);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    LODWORD(v80) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v80 = 0.0;
    (*(void (__fastcall **)(MapGimmickEntity_o *, void *, long double))&IsMonoColorRect->klass[1]._1.byval_arg.bits)(
      IsMonoColorRect,
      IsMonoColorRect->klass[1]._1.this_arg.data,
      v80);
  }
  else
  {
    if ( !*(_QWORD *)v36 )
      goto LABEL_149;
    v58 = System_Int32__ToString((unsigned int)*(_QWORD *)v36 + 24, 0LL);
    v59 = System_String__Concat_44758168((System_String_o *)StringLiteral_9031/*"MapGimmickEffect_"*/, v58, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab((MapGimmickComponent_o *)v59, v59, assetData, v54, v60);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v16);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(
                                                MapGimmickRandomEffectElementComponent,
                                                0LL,
                                                0LL);
      if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
      {
        if ( !MapGimmickRandomEffectElementComponent )
          goto LABEL_149;
        EffectPrefab = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)MapGimmickRandomEffectElementComponent,
                         0LL);
      }
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v63);
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      this->fields.commonEffectComponent = CommonEffectComponent;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.commonEffectComponent,
        (System_Int32_array **)CommonEffectComponent,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      v72 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v72, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_434DEA1 )
        {
          sub_B70694(&TerminalSceneComponent_TypeInfo);
          byte_434DEA1 = 1;
        }
        IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        }
        v73 = **(_QWORD **)&IsMonoColorRect[1].fields.scale;
        if ( !v73 )
          goto LABEL_149;
        v74 = *(_QWORD *)(v73 + 256);
        if ( !v74 )
          goto LABEL_149;
        IsMonoColorRect = *(MapGimmickEntity_o **)(v74 + 328);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)IsMonoColorRect, 0LL);
        IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)IsMonoColorRect,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)IsMonoColorRect,
          &entity,
          EventId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          IsMonoColorRect = (MapGimmickEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_149;
          IsMonoColorRect = (MapGimmickEntity_o *)QuestTree__CheckMapGimmickCond_22272832(
                                                    (QuestTree_o *)IsMonoColorRect,
                                                    mg_inf,
                                                    0LL);
          if ( !v76 )
            goto LABEL_149;
          v77 = (unsigned __int8)IsMonoColorRect & 1;
          IsMonoColorRect = (MapGimmickEntity_o *)v76;
        }
        else
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsMonoColorRect,
                                                    0LL);
          if ( !IsMonoColorRect )
            goto LABEL_149;
          v77 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v77, 0LL);
        IsMonoColorRect = *(MapGimmickEntity_o **)v36;
        if ( !*(_QWORD *)v36 )
          goto LABEL_149;
        IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetUseAnimFromScript(IsMonoColorRect, v16);
        if ( (int)IsMonoColorRect >= 1 )
        {
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          (*p_commonEffectComponent)->fields.useAnimNum = (int)IsMonoColorRect;
        }
        IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
        if ( !*p_commonEffectComponent )
          goto LABEL_149;
        CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)IsMonoColorRect, 0LL);
        v81 = *p_commonEffectComponent;
        v82 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v82,
          (Il2CppObject *)v14,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v81 )
          goto LABEL_149;
        v81->fields.touchCallback = v82;
        sub_B70630(
          (BattleServantConfConponent_o *)&v81->fields.touchCallback,
          (System_Int32_array **)v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88);
      }
    }
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v36;
  if ( !*(_QWORD *)v36 )
    goto LABEL_149;
  *(UnityEngine_Vector3_o *)&v89 = MapGimmickEntity__GetTouchSize(IsMonoColorRect, v16);
  if ( v89 <= 0.0 )
    goto LABEL_130;
  v92 = v90;
  if ( v90 <= 0.0 )
    goto LABEL_130;
  v93 = v89;
  v94 = v91;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)IsMonoColorRect,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                              (UnityEngine_GameObject_o *)IsMonoColorRect,
                                              (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_srcLineSprite = (UnityEngine_Object_o *)IsMonoColorRect;
  }
  if ( !Component_srcLineSprite )
    goto LABEL_149;
  v145.fields.x = v93;
  v145.fields.y = v92;
  v145.fields.z = v94;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, v145, 0LL);
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  v96 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)IsMonoColorRect,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v96, 0LL, 0LL) )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v96 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                    (UnityEngine_GameObject_o *)IsMonoColorRect,
                                    (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v36;
  if ( !*(_QWORD *)v36 )
LABEL_149:
    sub_B7076C(IsMonoColorRect, v16);
  if ( MapGimmickEntity__GetScriptType(IsMonoColorRect, v16) == 1 )
  {
    v97 = sub_B70764(MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    MapGimmickComponent___c__DisplayClass23_1___ctor((MapGimmickComponent___c__DisplayClass23_1_o *)v97, 0LL);
    if ( !v97 )
      goto LABEL_149;
    *(_QWORD *)(v97 + 32) = v14;
    sub_B70630((BattleServantConfConponent_o *)(v97 + 32), (System_Int32_array **)v14, v98, v99, v100, v101, v102, v103);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    v104 = **(_QWORD **)&IsMonoColorRect[1].fields.scale;
    if ( !v104 )
      goto LABEL_149;
    v105 = *(_QWORD *)(v104 + 256);
    if ( !v105 )
      goto LABEL_149;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v105 + 328);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v106 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)IsMonoColorRect, 0LL);
    IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v107 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsMonoColorRect,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v108 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)IsMonoColorRect,
                                    v106,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v97 + 16) = v108;
    sub_B70630((BattleServantConfConponent_o *)(v97 + 16), v108, v109, v110, v111, v112, v113, v114);
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v107,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v115 = *(_QWORD *)(v97 + 32);
    if ( !v115 )
      goto LABEL_149;
    v116 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v115 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetEventMissionIdList(IsMonoColorRect, v16);
    if ( !v116 )
      goto LABEL_149;
    EventMissionList_25392596 = (System_Int32_array **)EventMissionMaster__getEventMissionList_25392596(
                                                         v116,
                                                         (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                                         0LL);
    *(_QWORD *)(v97 + 24) = EventMissionList_25392596;
    sub_B70630(
      (BattleServantConfConponent_o *)(v97 + 24),
      EventMissionList_25392596,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
    if ( !v96 )
      goto LABEL_149;
    v124 = (System_Collections_Generic_List_EventDelegate__o *)v96[8].klass;
    v125 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v125,
      (Il2CppObject *)v97,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Add(v124, v125, 0LL);
  }
LABEL_130:
  IsMonoColorRect = *(MapGimmickEntity_o **)v36;
  if ( !*(_QWORD *)v36 )
    goto LABEL_149;
  actionEffectId = IsMonoColorRect->fields.actionEffectId;
  v126 = (_DWORD)IsMonoColorRect + 100;
  if ( actionEffectId >= 1 )
  {
    v128 = System_Int32__ToString(v126, 0LL);
    v129 = System_String__Concat_44758168((System_String_o *)StringLiteral_9030/*"MapGimmickActionEffect_"*/, v128, 0LL);
    v131 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     (MapGimmickComponent_o *)v129,
                                     v129,
                                     v55,
                                     v54,
                                     v130);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(v131, 0LL, 0LL);
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !v131 )
        goto LABEL_149;
      v132 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v131,
                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v132, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v133 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 v132,
                 (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v133;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.actionEffect,
          (System_Int32_array **)v133,
          v134,
          v135,
          v136,
          v137,
          v138,
          v139);
        IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_32503456(v140, v141, 0LL);
          IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
          if ( IsMonoColorRect )
          {
            IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)IsMonoColorRect,
                                                      0LL);
            if ( IsMonoColorRect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, 0, 0LL);
              return;
            }
          }
        }
        goto LABEL_149;
      }
    }
  }
}


void __fastcall MapGimmickComponent__StartActionEffect(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actionEffect; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4354D6A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D6A = 1;
  }
  actionEffect = (UnityEngine_Object_o *)this->fields.actionEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actionEffect, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.actionEffect;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.actionEffect) == 0LL) )
    {
      sub_B7076C(gameObject, v4);
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

  if ( (byte_4354D6D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354D6D = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B7076C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v7);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o *mFSM; // x0

  if ( (byte_4354D60 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MapGimmickComponent__update__);
    byte_4354D60 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2C80124 *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B7076C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B7076C(this, method);
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

  if ( !that
    || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo,
        this = (MapGimmickComponent_StateDispAnim_o *)that,
        !mMapCtrl_MapGimmickInfo) )
  {
    sub_B7076C(this, that);
  }
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    MapGimmickComponent__StateDispAnimEnd(that, 0LL);
  }
  else if ( !dispType )
  {
    MapGimmickComponent__SetDispAnim(that, 1, 0LL);
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

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_B7076C(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    MapGimmickComponent__SetDispAnim(that, 0, 0LL);
  }
  else if ( !dispType )
  {
    MapGimmickComponent__StateHideAnimEnd(that, 0LL);
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
  if ( (byte_434F3BF & 1) == 0 )
  {
    sub_B70694(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_434F3BF = 1;
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
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v6; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v8; // x8
  struct MapGimmickComponent_o *v9; // x8
  struct MapGimmickComponent_o *v10; // x8
  struct MapGimmickComponent_o *v11; // x8
  int32_t v12; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_434F3BE & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_434F3BE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    mThat = this->fields.mThat;
    if ( !mThat )
      goto LABEL_37;
    v6 = Instance;
    mOldDispTime = mThat->fields.mOldDispTime;
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    if ( (BYTE3(MapGimmickComponent_StateMapMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo);
      Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    }
    if ( v6 - mOldDispTime >= **(int **)(Instance + 184) )
    {
      v8 = this->fields.mThat;
      if ( !v8 )
        goto LABEL_37;
      v8->fields.mOldDispTime = v6;
      v9 = this->fields.mThat;
      if ( !v9 )
        goto LABEL_37;
      Instance = (int64_t)v9->fields.mMapCtrl_MapGimmickInfo;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)MapControl_MapGimmickInfo__GetMine((MapControl_MapGimmickInfo_o *)Instance, v4);
      if ( !Instance )
        goto LABEL_37;
      Instance = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)Instance, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_20;
      Instance = (int64_t)this->fields.mThat;
      if ( !Instance )
        goto LABEL_37;
      Instance = MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)Instance, 0LL);
      if ( (Instance & 1) == 0 )
      {
LABEL_20:
        v10 = this->fields.mThat;
        if ( !v10 )
          goto LABEL_37;
        if ( !v10->fields.isForceNotActive )
        {
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v11 = this->fields.mThat;
          if ( !v11 || !Instance )
            goto LABEL_37;
          Instance = QuestTree__CheckMapGimmickCond_22272832(
                       (QuestTree_o *)Instance,
                       v11->fields.mMapCtrl_MapGimmickInfo,
                       0LL);
          v10 = this->fields.mThat;
          if ( (Instance & 1) != 0 )
          {
            if ( v10 )
            {
              v12 = 3;
LABEL_36:
              MapGimmickComponent__SetState(v10, v12, 0LL, 0LL);
              return;
            }
            goto LABEL_37;
          }
          if ( !v10 )
            goto LABEL_37;
        }
        if ( !v10->fields.isForceLoop )
        {
          v12 = 2;
          goto LABEL_36;
        }
        mMapCtrl_MapGimmickInfo = v10->fields.mMapCtrl_MapGimmickInfo;
        if ( !mMapCtrl_MapGimmickInfo )
LABEL_37:
          sub_B7076C(Instance, v4);
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
  this->fields.mThat = that;
  sub_B70630(&this->fields);
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
  MapGimmickComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  MapGimmickComponent__OnGimmickTouched(_4__this, this->fields.mg_ent, this->fields.touchCallback, 0LL);
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
  MapGimmickEntity_o *Instance; // x0
  __int64 v4; // x1
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v6; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v7; // x8
  System_String_o *v8; // x21
  System_Action_o *_9__2; // x25
  System_String_o *v10; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23

  if ( (byte_434F3BC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__);
    byte_434F3BC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  v6 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v7 = this->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_14;
  v8 = (System_String_o *)Instance;
  Instance = v7->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v10 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B70630(&this->fields.__9__2);
  }
  if ( !v6 )
LABEL_14:
    sub_B7076C(Instance, v4);
  CommonUI__OpenEventMissionListDialog(v6, v8, v10, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_1___Setup_b__2(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  MapGimmickComponent___c__DisplayClass23_1_o *v2; // x19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventMissionEntity_array *eventMissionEntList; // x9
  EventMissionEntity_o *v5; // x9
  int32_t id; // w21
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct EventDetailEntity_o *v8; // x8
  int v9; // w8
  MapGimmickComponent___c__DisplayClass23_1_o *v10; // x21
  unsigned int v11; // w23
  MapGimmickComponent___c__DisplayClass23_1_c **v12; // x8
  MapGimmickComponent___c__DisplayClass23_1_c *v13; // x22
  int32_t name_high; // w21
  struct EventDetailEntity_o *v15; // x8
  struct EventDetailEntity_o *v16; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v18; // x19
  __int64 v19; // x0

  v2 = this;
  if ( (byte_434F3BD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_434F3BD = 1;
  }
  if ( !byte_434F41B )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_434F41B = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v2->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
  {
LABEL_31:
    v19 = sub_B70798(this);
    sub_B70738(v19, 0LL);
  }
  v5 = eventMissionEntList->m_Items[0];
  if ( !v5 )
    goto LABEL_30;
  id = v5->fields.id;
  if ( !byte_434F41C )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_434F41C = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  }
  (*p_static_fields)->_MissionId_k__BackingField = id;
  eventDetailEnt = v2->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  v8 = v2->fields.eventDetailEnt;
  if ( !v8 )
    goto LABEL_30;
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneMaster__GetEntityList(
                                                          (EventRewardSceneMaster_o *)this,
                                                          v8->fields.eventId,
                                                          0LL);
  if ( !this )
    goto LABEL_30;
  v9 = (int)this->fields.eventMissionEntList;
  v10 = this;
  if ( v9 < 1 )
  {
LABEL_21:
    name_high = 0;
  }
  else
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        goto LABEL_31;
      v12 = &v10->klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        goto LABEL_30;
      this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneEntity__IsEventMission(
                                                              (EventRewardSceneEntity_o *)v12[4],
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v9 = (int)v10->fields.eventMissionEntList;
      if ( (int)++v11 >= v9 )
        goto LABEL_21;
    }
    name_high = HIDWORD(v13->_1.name);
  }
  if ( !byte_434E9FC )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_434E9FC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v15 = v2->fields.eventDetailEnt;
  if ( !v15
    || (EventRewardSaveData__SaveCurrentEventData(v15->fields.eventId, 0LL), (v16 = v2->fields.eventDetailEnt) == 0LL)
    || (eventId = v16->fields.eventId,
        v18 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_17523760(v18, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v18)
    || (SceneJumpInfo__SetReturnNowScene(v18, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_B7076C(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v18, 0LL);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MapGimmickComponent___c__DisplayClass38_0_o *)_4__this->fields.mSprite) == 0LL)
    || (((void (__fastcall *)(MapGimmickComponent___c__DisplayClass38_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          (float)v3->fields.to),
        (this = (MapGimmickComponent___c__DisplayClass38_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_B7076C(this, method);
  }
  MapGimmickComponent__StateDispAnimEnd((MapGimmickComponent_o *)this, 0LL);
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
    sub_B7076C(this, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))mSprite->klass->vtable._8_set_alpha.method)(
    mSprite,
    mSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    this->fields.from + (float)(eo->fields.mStartTime * (float)((float)this->fields.to - this->fields.from)));
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
    sub_B7076C(_4__this, method);
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
  float32x2_t v5; // d8
  float z; // s9
  float32x2_t v7; // d11
  float v8; // s10
  UnityEngine_Transform_o *v9; // x20
  float v10; // s0
  float v11; // s2
  unsigned __int64 v12; // d0 OVERLAPPED
  float v13; // s2
  int v14; // s1

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL);
  if ( !_4__this )
    goto LABEL_6;
  _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  eo = this->fields.eo;
  if ( !eo
    || (v5.n64_u64[0] = *(unsigned __int64 *)&this->fields.posFrom.fields.x,
        z = this->fields.posFrom.fields.z,
        v7.n64_u64[0] = *(unsigned __int64 *)&this->fields.posTo.fields.x,
        v8 = this->fields.posTo.fields.z,
        v9 = (UnityEngine_Transform_o *)_4__this,
        v10 = UnityEngine_Mathf__Clamp01(eo->fields.mStartTime, 0LL),
        !v9) )
  {
LABEL_6:
    sub_B7076C(_4__this, method);
  }
  v11 = (float)(v8 - z) * v10;
  v12 = vadd_f32(v5, vmul_n_f32(vsub_f32(v7, v5), v10)).n64_u64[0];
  v13 = z + v11;
  v14 = HIDWORD(v12);
  UnityEngine_Transform__set_localPosition(v9, *(UnityEngine_Vector3_o *)&v12, 0LL);
}