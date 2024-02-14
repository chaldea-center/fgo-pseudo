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

  if ( (byte_42129C9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42129C9 = 1;
  }
  this->fields.mDepthBase = 30;
  this->fields.mEasingType = 17;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mHideSeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mDispSeName, v10, v11, v12, v13, v14, v15, v16);
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
  CStateManager_QAASpotStateController_IMapSpot__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CStateManager_MapGimmickComponent__o *mFSM; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  MapGimmickComponent_StateNone_o *v21; // x22
  __int64 v22; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  MapGimmickComponent_StateMapMain_o *v26; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  MapGimmickComponent_StateHideAnim_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  MapGimmickComponent_StateDispAnim_o *v34; // x21
  const MethodInfo *v35; // x3

  if ( (byte_42129B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_MapGimmickComponent___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_MapGimmickComponent__add__, v4);
    sub_B0D8A4(&CStateManager_MapGimmickComponent__TypeInfo, v5);
    sub_B0D8A4(&MapGimmickComponent_StateDispAnim_TypeInfo, v6);
    sub_B0D8A4(&MapGimmickComponent_StateHideAnim_TypeInfo, v7);
    sub_B0D8A4(&MapGimmickComponent_StateMapMain_TypeInfo, v8);
    sub_B0D8A4(&MapGimmickComponent_StateNone_TypeInfo, v9);
    byte_42129B8 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v11 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_MapGimmickComponent__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v11,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2AAF784 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v11;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    mFSM = this->fields.mFSM;
    v21 = (MapGimmickComponent_StateNone_o *)sub_B0D974(MapGimmickComponent_StateNone_TypeInfo, v19, v20);
    MapGimmickComponent_StateNone___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_2AAF850 *)Method_CStateManager_MapGimmickComponent__add__);
    v23 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v26 = (MapGimmickComponent_StateMapMain_o *)sub_B0D974(MapGimmickComponent_StateMapMain_TypeInfo, v24, v25);
    MapGimmickComponent_StateMapMain___ctor(v26, 0LL);
    if ( !v23 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v23,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_2AAF850 *)Method_CStateManager_MapGimmickComponent__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v30 = (MapGimmickComponent_StateHideAnim_o *)sub_B0D974(MapGimmickComponent_StateHideAnim_TypeInfo, v28, v29);
    MapGimmickComponent_StateHideAnim___ctor(v30, 0LL);
    if ( !v27
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v27,
            2,
            (IState_T__o *)v30,
            (const MethodInfo_2AAF850 *)Method_CStateManager_MapGimmickComponent__add__),
          v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v34 = (MapGimmickComponent_StateDispAnim_o *)sub_B0D974(MapGimmickComponent_StateDispAnim_TypeInfo, v32, v33),
          MapGimmickComponent_StateDispAnim___ctor(v34, 0LL),
          !v31) )
    {
LABEL_9:
      sub_B0D97C(v22);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      3,
      (IState_T__o *)v34,
      (const MethodInfo_2AAF850 *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v35);
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
    sub_B0D97C(mMapCtrl_MapGimmickInfo);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Component_srcLineSprite; // x22
  MapEffectComponent_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_42129BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, prefab);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___, v9);
    this = (MapGimmickComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_42129BF = 1;
  }
  if ( !prefab )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        prefab,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
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
                                      (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v12, gameObject, mapCamera, 0LL);
      return (CommonEffectComponent_o *)v12;
    }
LABEL_23:
    sub_B0D97C(this);
  }
  v14 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    prefab,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v14,
                                      (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v16 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_31184716(v15, v16, 0LL);
      return (CommonEffectComponent_o *)v12;
    }
    goto LABEL_23;
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
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21

  if ( (byte_42129BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, effectPrefabName);
    this = (MapGimmickComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_42129BE = 1;
  }
  if ( !assetData )
    sub_B0D97C(this);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             effectPrefabName,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = id;
  if ( (byte_42129B7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8964/*"MapGimmick_"*/, method);
    sub_B0D8A4(&StringLiteral_969/*"00"*/, v2);
    byte_42129B7 = 1;
  }
  v3 = System_Int32__ToString_38473032((int32_t)&v5, (System_String_o *)StringLiteral_969/*"00"*/, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_8964/*"MapGimmick_"*/, v3, 0LL);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  const MethodInfo *v6; // x1

  if ( (byte_42129C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42129C0 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !prefab )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      prefab,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Component_srcLineSprite )
LABEL_15:
    sub_B0D97C(v4);
  return MapGimmickRandomEffectComponent__GetRandomElement(
           (MapGimmickRandomEffectComponent_o *)Component_srcLineSprite,
           v6);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_42129C1 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_B0D8A4(&Method_CStateManager_MapGimmickComponent__getState__, method);
    byte_42129C1 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v19; // x8
  struct System_String_o *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_GameObject_o *v29; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v30; // x0
  struct UISprite_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42129BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UISprite___, method);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v9);
    sub_B0D8A4(&string_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_13044/*"Sprite"*/, v11);
    byte_42129BA = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mHideSeName,
    (System_Int32_array **)Empty,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = string_TypeInfo->static_fields;
  v20 = v19->Empty;
  this->fields.mDispSeName = v19->Empty;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mDispSeName,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v29 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, v27, v28);
  UnityEngine_GameObject___ctor(v29, (System_String_o *)StringLiteral_13044/*"Sprite"*/, 0LL);
  GameObjectExtensions__SetParent(v29, (UnityEngine_Component_o *)this, 0LL);
  if ( !v29
    || (v30 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                v29,
                (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_B0D97C(v30);
  }
  v31 = (struct UISprite_o *)v30;
  UIWidget__SetDimensions((UIWidget_o *)v30, 64, 64, 0LL);
  this->fields.mSprite = v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mSprite,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


bool __fastcall MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v4; // x0
  struct CommonEffectComponent_o *v5; // x8

  if ( (byte_42129BC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42129BC = 1;
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
  v5 = this->fields.commonEffectComponent;
  if ( !v5 )
    sub_B0D97C(v4);
  return v5->fields.isTouched;
}


void __fastcall MapGimmickComponent__OnGimmickTouched(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  ClientMissionManager_o *Instance; // x21
  MapControl_WarInfo_o *EventId; // x0
  WarEntity_c *klass; // x8
  __int64 v11; // x8

  if ( (byte_42129BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, mapGimmickEntity);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    byte_42129BD = 1;
  }
  Instance = (ClientMissionManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v7);
    byte_421083D = 1;
  }
  EventId = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    EventId = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = EventId[3].fields.mine->klass;
  if ( !klass
    || (v11 = *(_QWORD *)&klass->_2.static_fields_size) == 0
    || (EventId = *(MapControl_WarInfo_o **)(v11 + 328)) == 0LL
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), !mapGimmickEntity)
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(Instance, (int32_t)EventId, mapGimmickEntity->fields.id, 0LL),
        (EventId = (MapControl_WarInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(EventId);
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
  MapGimmickComponent__SetDispAnim_20944800(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_20944800(this, is_disp, 0.0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim_20944800(
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  struct CommonEffectComponent_o *v32; // x20
  System_Action_o *v33; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x8
  System_String_o *v45; // x21
  System_Action_o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  EasingObject_o *v49; // x24
  System_Action_o *v50; // x25
  struct CommonEffectComponent_o *v51; // x20
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_42129C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, is_disp);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B0D8A4(&Method_MapGimmickComponent_StateDispAnimEnd__, v10);
    sub_B0D8A4(&Method_MapGimmickComponent_StateHideAnimEnd__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&SoundManager_TypeInfo, v13);
    sub_B0D8A4(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__, v14);
    sub_B0D8A4(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__, v15);
    sub_B0D8A4(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo, v16);
    byte_42129C4 = 1;
  }
  v17 = sub_B0D974(MapGimmickComponent___c__DisplayClass38_0_TypeInfo, is_disp, is_play_se);
  MapGimmickComponent___c__DisplayClass38_0___ctor((MapGimmickComponent___c__DisplayClass38_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_39;
  *(_QWORD *)(v17 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  MapGimmickComponent__StartActionEffect(this, v25);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v26);
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
                                                  (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v17 + 32) = Component_UIWidget;
    sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), Component_UIWidget, v36, v37, v38, v39, v40, v41);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_39;
    *(float *)(v17 + 28) = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&mSprite->klass[1]._1.this_arg.bits)(
                             mSprite,
                             mSprite->klass[1]._1.element_class);
    *(_DWORD *)(v17 + 24) = is_disp;
    if ( is_disp )
      v44 = 56LL;
    else
      v44 = 48LL;
    v45 = *(System_String_o **)((char *)&this->klass + v44);
    v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v42, v43);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v46, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      v49 = *(EasingObject_o **)(v17 + 32);
      v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v17,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0LL);
      if ( !v49 )
        goto LABEL_39;
      EasingObject__Play(v49, time, v50, v46, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v45, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v45, 0LL);
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
    v32 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v32 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v32->klass->vtable._6_ForceStart.method)(
          v32,
          1LL,
          v33,
          v32->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_39:
      sub_B0D97C(mSprite);
    }
    if ( !v32 )
      goto LABEL_39;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v51 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v51 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0LL);
      if ( !mSprite )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v53);
    }
    else
    {
      v52 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
      System_Action___ctor(v52, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v51 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v51->klass->vtable._8_Stop.method)(
                                             v51,
                                             0LL,
                                             v52,
                                             v51->klass->vtable._9_ForceStop.methodPtr);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_39;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
}


void __fastcall MapGimmickComponent__SetDisplayByRaidProgress(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  struct MapControl_MapGimmickInfo_o *v11; // x8
  int32_t dispType; // w8
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x3
  int32_t v15; // w1

  if ( (byte_42129C8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__, v3);
    sub_B0D8A4(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__, v4);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v6);
    byte_42129C8 = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_18;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             0LL);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_18;
  if ( !MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, v8) )
    return;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_MapGimmickInfo
    || (mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_21487076(
                                                                   (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                   this->fields.mMapCtrl_MapGimmickInfo,
                                                                   0LL),
        (v11 = this->fields.mMapCtrl_MapGimmickInfo) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(mMapCtrl_MapGimmickInfo);
  }
  dispType = v11->fields.dispType;
  if ( dispType == 0 && ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) != 0 )
  {
    v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__, 0LL);
    v15 = 3;
LABEL_16:
    MapGimmickComponent__SetState(this, v15, v13, v14);
    return;
  }
  if ( dispType == 1 && (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) != 0 )
  {
    v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__, 0LL);
    v15 = 2;
    goto LABEL_16;
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
  sub_B0D840(
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  UnityEngine_GameObject_o *transform; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  EasingObject_o *v44; // x22
  System_Action_o *v45; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_42129C5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&easeType);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_B0D8A4(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__, v14);
    sub_B0D8A4(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__, v15);
    sub_B0D8A4(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo, v16);
    byte_42129C5 = 1;
  }
  v17 = sub_B0D974(MapGimmickComponent___c__DisplayClass39_0_TypeInfo, *(_QWORD *)&easeType, callback);
  MapGimmickComponent___c__DisplayClass39_0___ctor((MapGimmickComponent___c__DisplayClass39_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v17 + 40) = callback;
  *(float *)(v17 + 24) = x;
  *(float *)(v17 + 28) = y;
  *(float *)(v17 + 32) = z;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 64) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 64), Component_UIWidget, v33, v34, v35, v36, v37, v38);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v17 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v17,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v44 = *(EasingObject_o **)(v17 + 64);
    v45 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v42, v43);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0LL);
    if ( v44 )
    {
      EasingObject__Play(v44, time, v45, v41, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(transform);
  }
  ActionExtensions__Call(v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x0

  if ( (byte_42129C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_MapGimmickComponent__setState__, *(_QWORD *)&state);
    byte_42129C2 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_mStateEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)*(p_mStateEndAct - 6);
  if ( !v12 )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v12,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_MapGimmickComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42129C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, enabled);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42129C7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B0D97C(gameObject);
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
  __int64 v14; // x1
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
  MapGimmickEntity_o *IsMonoColorRect; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **Mine; // x0
  __int64 v63; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x1
  System_String_o *v71; // x27
  UnityEngine_Behaviour_o **p_mSprite; // x19
  UISprite_o *mSprite; // x26
  AssetData_o *v74; // x20
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  UISprite_o *v77; // x28
  UnityEngine_Behaviour_o *v78; // x26
  UnityEngine_Object_o *klass; // x28
  bool v80; // w0
  const MethodInfo *v81; // x1
  System_String_o *v82; // x26
  AssetData_o *v83; // x28
  AssetData_o *v84; // x20
  const MethodInfo *v85; // x1
  UnityEngine_Behaviour_o *v86; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  const MethodInfo *v90; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  const MethodInfo *v92; // x1
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v94; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  UnityEngine_Object_o *v103; // x26
  __int64 v104; // x8
  __int64 v105; // x8
  int32_t EventId; // w26
  UnityEngine_GameObject_o *v107; // x26
  bool v108; // w1
  float v109; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v111; // q0
  const MethodInfo *v112; // x1
  struct CommonEffectComponent_o *v113; // x24
  __int64 v114; // x1
  __int64 v115; // x2
  System_Action_o *v116; // x25
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  float v123; // s0
  float v124; // s1
  float v125; // s2
  float v126; // s9
  float v127; // s8
  float v128; // s10
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *v130; // x24
  const MethodInfo *v131; // x1
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x25
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  __int64 v141; // x1
  __int64 v142; // x8
  __int64 v143; // x8
  int32_t v144; // w26
  DataManager_o *v145; // x23
  System_Int32_array **v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  const MethodInfo *v153; // x1
  __int64 v154; // x8
  EventMissionMaster_o *v155; // x23
  System_Int32_array **EventMissionList_25200748; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  __int64 v163; // x1
  __int64 v164; // x2
  System_Collections_Generic_List_EventDelegate__o *v165; // x23
  EventDelegate_Callback_o *v166; // x24
  int32_t v167; // w0
  int actionEffectId; // t1
  System_String_o *v169; // x0
  System_String_o *v170; // x0
  const MethodInfo *v171; // x4
  UnityEngine_Object_o *v172; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v173; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v174; // x0
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  UnityEngine_GameObject_o *v181; // x20
  UnityEngine_GameObject_o *v182; // x0
  UnityEngine_Color_o color; // [xsp+10h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42129BB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, mg_inf);
    sub_B0D8A4(&AtlasManager_TypeInfo, v14);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v17);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v18);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v19);
    sub_B0D8A4(&EventDelegate_TypeInfo, v20);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v21);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UIButton___, v22);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v23);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v24);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v25);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v26);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v29);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v30);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v31);
    sub_B0D8A4(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__, v32);
    sub_B0D8A4(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo, v33);
    sub_B0D8A4(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v34);
    sub_B0D8A4(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v35);
    sub_B0D8A4(&StringLiteral_23353/*"white00"*/, v36);
    sub_B0D8A4(&StringLiteral_973/*"000000"*/, v37);
    sub_B0D8A4(&StringLiteral_19118/*"gimmick_"*/, v38);
    sub_B0D8A4(&StringLiteral_8946/*"MapGimmickEffect_"*/, v39);
    sub_B0D8A4(&StringLiteral_1/*""*/, v40);
    sub_B0D8A4(&StringLiteral_8945/*"MapGimmickActionEffect_"*/, v41);
    byte_42129BB = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  v42 = sub_B0D974(MapGimmickComponent___c__DisplayClass23_0_TypeInfo, mg_inf, mapCamera);
  MapGimmickComponent___c__DisplayClass23_0___ctor((MapGimmickComponent___c__DisplayClass23_0_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_149;
  *(_QWORD *)(v42 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v42 + 16), (System_Int32_array **)this, v44, v45, v46, v47, v48, v49);
  *(_QWORD *)(v42 + 32) = touchCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v42 + 32),
    (System_Int32_array **)touchCallback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (System_Int32_array **)mg_inf,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_149;
  Mine = (System_Int32_array **)MapControl_MapGimmickInfo__GetMine(mg_inf, 0LL);
  *(_QWORD *)(v42 + 24) = Mine;
  v63 = v42 + 24;
  sub_B0D840((BattleServantConfConponent_o *)(v42 + 24), Mine, v64, v65, v66, v67, v68, v69);
  IsMonoColorRect = *(MapGimmickEntity_o **)(v42 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, v70);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    v71 = (System_String_o *)StringLiteral_23353/*"white00"*/;
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    mSprite = this->fields.mSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v74 = multiAssetData;
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)v63 )
      goto LABEL_149;
    v74 = multiAssetData;
    v75 = System_Int32__ToString_38473032((unsigned int)*(_QWORD *)v63 + 24, (System_String_o *)StringLiteral_973/*"000000"*/, 0LL);
    v76 = System_String__Concat_43849904((System_String_o *)StringLiteral_19118/*"gimmick_"*/, v75, 0LL);
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    v77 = this->fields.mSprite;
    v71 = v76;
    IsMonoColorRect = (MapGimmickEntity_o *)UIAtlas__GetUIAtlasBySpriteName(atlases, v76, 0LL);
    if ( !v77 )
      goto LABEL_149;
    UISprite__set_atlas(v77, (UIAtlas_o *)IsMonoColorRect, 0LL);
  }
  v78 = *p_mSprite;
  if ( !*p_mSprite )
    goto LABEL_149;
  klass = (UnityEngine_Object_o *)v78[19].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v80 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v78, v80, 0LL);
  IsMonoColorRect = *(MapGimmickEntity_o **)v63;
  if ( !*(_QWORD *)v63 )
    goto LABEL_149;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetColorCodeFromScript(IsMonoColorRect, v81);
  if ( !*p_mSprite )
    goto LABEL_149;
  v82 = (System_String_o *)IsMonoColorRect;
  v83 = v74;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Behaviour__get_enabled(*p_mSprite, 0LL);
  v84 = assetData;
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v71, 0LL);
    IsMonoColorRect = *(MapGimmickEntity_o **)v63;
    if ( !*(_QWORD *)v63 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, v85);
    v86 = *p_mSprite;
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_149;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v86 )
        goto LABEL_149;
      UIWidget__SetDimensions((UIWidget_o *)*p_mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v86 )
        goto LABEL_149;
      IsMonoColorRect = (MapGimmickEntity_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v86->klass[2]._1.typeMetadataHandle)(
                                                *p_mSprite,
                                                v86->klass[2]._1.interopData);
    }
    if ( !*(_QWORD *)v63 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_149;
    UIWidget__set_depth(
      (UIWidget_o *)IsMonoColorRect,
      *(_DWORD *)(*(_QWORD *)v63 + 36LL) + this->fields.mDepthBase,
      0LL);
    if ( !*(_QWORD *)v63 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    v109 = this->fields.mScaleBase * (float)((float)*(int *)(*(_QWORD *)v63 + 80LL) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
    GameObjectExtensions__SetLocalScale_31180844(gameObject, v109, 0LL);
    if ( !System_String__IsNullOrEmpty(v82, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v82, &color, 0LL);
      IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
      if ( !*p_mSprite )
        goto LABEL_149;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, color, 0LL);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    LODWORD(v111) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v111 = 0.0;
    (*(void (__fastcall **)(MapGimmickEntity_o *, void *, long double))&IsMonoColorRect->klass[1]._1.byval_arg.bits)(
      IsMonoColorRect,
      IsMonoColorRect->klass[1]._1.this_arg.data,
      v111);
  }
  else
  {
    if ( !*(_QWORD *)v63 )
      goto LABEL_149;
    v88 = System_Int32__ToString((unsigned int)*(_QWORD *)v63 + 24, 0LL);
    v89 = System_String__Concat_43849904((System_String_o *)StringLiteral_8946/*"MapGimmickEffect_"*/, v88, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab((MapGimmickComponent_o *)v89, v89, assetData, v83, v90);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v92);
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
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v94);
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      this->fields.commonEffectComponent = CommonEffectComponent;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.commonEffectComponent,
        (System_Int32_array **)CommonEffectComponent,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      v103 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v92);
          byte_421083D = 1;
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
        EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)IsMonoColorRect, 0LL);
        IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)IsMonoColorRect,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)IsMonoColorRect,
          &entity,
          EventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          IsMonoColorRect = (MapGimmickEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_149;
          IsMonoColorRect = (MapGimmickEntity_o *)QuestTree__CheckMapGimmickCond_21487076(
                                                    (QuestTree_o *)IsMonoColorRect,
                                                    mg_inf,
                                                    0LL);
          if ( !v107 )
            goto LABEL_149;
          v108 = (unsigned __int8)IsMonoColorRect & 1;
          IsMonoColorRect = (MapGimmickEntity_o *)v107;
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
          v108 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v108, 0LL);
        IsMonoColorRect = *(MapGimmickEntity_o **)v63;
        if ( !*(_QWORD *)v63 )
          goto LABEL_149;
        IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetUseAnimFromScript(IsMonoColorRect, v112);
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
        v113 = *p_commonEffectComponent;
        v116 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v114, v115);
        System_Action___ctor(
          v116,
          (Il2CppObject *)v42,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v113 )
          goto LABEL_149;
        v113->fields.touchCallback = v116;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v113->fields.touchCallback,
          (System_Int32_array **)v116,
          v117,
          v118,
          v119,
          v120,
          v121,
          v122);
      }
    }
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v63;
  if ( !*(_QWORD *)v63 )
    goto LABEL_149;
  *(UnityEngine_Vector3_o *)&v123 = MapGimmickEntity__GetTouchSize(IsMonoColorRect, v92);
  if ( v123 <= 0.0 )
    goto LABEL_130;
  v126 = v124;
  if ( v124 <= 0.0 )
    goto LABEL_130;
  v127 = v123;
  v128 = v125;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)IsMonoColorRect,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_srcLineSprite = (UnityEngine_Object_o *)IsMonoColorRect;
  }
  if ( !Component_srcLineSprite )
    goto LABEL_149;
  v186.fields.x = v127;
  v186.fields.y = v126;
  v186.fields.z = v128;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, v186, 0LL);
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  v130 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)IsMonoColorRect,
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v130, 0LL, 0LL) )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v130 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)IsMonoColorRect,
                                     (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v63;
  if ( !*(_QWORD *)v63 )
LABEL_149:
    sub_B0D97C(IsMonoColorRect);
  if ( MapGimmickEntity__GetScriptType(IsMonoColorRect, v131) == 1 )
  {
    v134 = sub_B0D974(MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v132, v133);
    MapGimmickComponent___c__DisplayClass23_1___ctor((MapGimmickComponent___c__DisplayClass23_1_o *)v134, 0LL);
    if ( !v134 )
      goto LABEL_149;
    *(_QWORD *)(v134 + 32) = v42;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v134 + 32),
      (System_Int32_array **)v42,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v141);
      byte_421083D = 1;
    }
    IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    v142 = **(_QWORD **)&IsMonoColorRect[1].fields.scale;
    if ( !v142 )
      goto LABEL_149;
    v143 = *(_QWORD *)(v142 + 256);
    if ( !v143 )
      goto LABEL_149;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v143 + 328);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v144 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)IsMonoColorRect, 0LL);
    IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v145 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsMonoColorRect,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v146 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)IsMonoColorRect,
                                    v144,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v134 + 16) = v146;
    sub_B0D840((BattleServantConfConponent_o *)(v134 + 16), v146, v147, v148, v149, v150, v151, v152);
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v145,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v154 = *(_QWORD *)(v134 + 32);
    if ( !v154 )
      goto LABEL_149;
    v155 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v154 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetEventMissionIdList(IsMonoColorRect, v153);
    if ( !v155 )
      goto LABEL_149;
    EventMissionList_25200748 = (System_Int32_array **)EventMissionMaster__getEventMissionList_25200748(
                                                         v155,
                                                         (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                                         0LL);
    *(_QWORD *)(v134 + 24) = EventMissionList_25200748;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v134 + 24),
      EventMissionList_25200748,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162);
    if ( !v130 )
      goto LABEL_149;
    v165 = (System_Collections_Generic_List_EventDelegate__o *)v130[8].klass;
    v166 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v163, v164);
    EventDelegate_Callback___ctor(
      v166,
      (Il2CppObject *)v134,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Add(v165, v166, 0LL);
  }
LABEL_130:
  IsMonoColorRect = *(MapGimmickEntity_o **)v63;
  if ( !*(_QWORD *)v63 )
    goto LABEL_149;
  actionEffectId = IsMonoColorRect->fields.actionEffectId;
  v167 = (_DWORD)IsMonoColorRect + 100;
  if ( actionEffectId >= 1 )
  {
    v169 = System_Int32__ToString(v167, 0LL);
    v170 = System_String__Concat_43849904((System_String_o *)StringLiteral_8945/*"MapGimmickActionEffect_"*/, v169, 0LL);
    v172 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     (MapGimmickComponent_o *)v170,
                                     v170,
                                     v84,
                                     v83,
                                     v171);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(v172, 0LL, 0LL);
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !v172 )
        goto LABEL_149;
      v173 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v172,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v173, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v174 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 v173,
                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v174;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.actionEffect,
          (System_Int32_array **)v174,
          v175,
          v176,
          v177,
          v178,
          v179,
          v180);
        IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v181 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          v182 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_31184716(v181, v182, 0LL);
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
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42129C3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42129C3 = 1;
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
      sub_B0D97C(gameObject);
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

  if ( (byte_42129C6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42129C6 = 1;
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
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v6);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v4);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o *mFSM; // x0

  if ( (byte_42129B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_MapGimmickComponent__update__, method);
    byte_42129B9 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B0D97C(this);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v1; // x1

  if ( (byte_42126FF & 1) == 0 )
  {
    sub_B0D8A4(&MapGimmickComponent_StateMapMain_TypeInfo, v1);
    byte_42126FF = 1;
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
  __int64 v6; // x1
  int64_t Instance; // x0
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v9; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v11; // x8
  struct MapGimmickComponent_o *v12; // x8
  int32_t v13; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct MapGimmickComponent_o *v15; // x8

  if ( (byte_42126FE & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v5);
    sub_B0D8A4(&MapGimmickComponent_StateMapMain_TypeInfo, v6);
    byte_42126FE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  mThat = this->fields.mThat;
  if ( !mThat )
    goto LABEL_32;
  v9 = Instance;
  mOldDispTime = mThat->fields.mOldDispTime;
  Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
  if ( (BYTE3(MapGimmickComponent_StateMapMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo);
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
  }
  if ( v9 - mOldDispTime >= **(int **)(Instance + 184) )
  {
    v11 = this->fields.mThat;
    if ( !v11 )
      goto LABEL_32;
    if ( !v11->fields.isForceNotActive )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      v12 = this->fields.mThat;
      if ( !v12 || !Instance )
        goto LABEL_32;
      Instance = QuestTree__CheckMapGimmickCond_21487076(
                   (QuestTree_o *)Instance,
                   v12->fields.mMapCtrl_MapGimmickInfo,
                   0LL);
      v11 = this->fields.mThat;
      if ( (Instance & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_32;
        v13 = 3;
        goto LABEL_28;
      }
      if ( !v11 )
        goto LABEL_32;
    }
    if ( v11->fields.isForceLoop )
    {
      mMapCtrl_MapGimmickInfo = v11->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        goto LABEL_32;
      mMapCtrl_MapGimmickInfo->fields.dispType = 0;
      goto LABEL_29;
    }
    v13 = 2;
LABEL_28:
    MapGimmickComponent__SetState(v11, v13, 0LL, 0LL);
LABEL_29:
    v15 = this->fields.mThat;
    if ( v15 )
    {
      v15->fields.mOldDispTime = v9;
      return;
    }
LABEL_32:
    sub_B0D97C(Instance);
  }
}


void __fastcall MapGimmickComponent_StateMapMain__begin(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  this->fields.mThat = that;
  sub_B0D840(&this->fields, that);
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
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MapGimmickEntity_o *Instance; // x0
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v8; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v9; // x8
  System_String_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *_9__2; // x25
  System_String_o *v14; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23

  if ( (byte_42126FC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__, v5);
    byte_42126FC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  v8 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v9 = this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_14;
  v10 = (System_String_o *)Instance;
  Instance = v9->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v14 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
LABEL_14:
    sub_B0D97C(Instance);
  CommonUI__OpenEventMissionListDialog(v8, v10, v14, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
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
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventMissionEntity_array *eventMissionEntList; // x9
  EventMissionEntity_o *v9; // x9
  int32_t id; // w21
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct EventDetailEntity_o *v12; // x8
  __int64 v13; // x1
  int v14; // w8
  MapGimmickComponent___c__DisplayClass23_1_o *v15; // x21
  unsigned int v16; // w23
  MapGimmickComponent___c__DisplayClass23_1_c **v17; // x8
  MapGimmickComponent___c__DisplayClass23_1_c *v18; // x22
  int32_t name_high; // w21
  struct EventDetailEntity_o *v20; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  struct EventDetailEntity_o *v23; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v25; // x19
  __int64 v26; // x0

  v2 = this;
  if ( (byte_42126FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, method);
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_42126FD = 1;
  }
  if ( !byte_421277D )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_421277D = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v2->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
  {
LABEL_31:
    v26 = sub_B0D9A8(this);
    sub_B0D948(v26, 0LL);
  }
  v9 = eventMissionEntList->m_Items[0];
  if ( !v9 )
    goto LABEL_30;
  id = v9->fields.id;
  if ( !byte_421277E )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_421277E = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  }
  (*p_static_fields)->_MissionId_k__BackingField = id;
  eventDetailEnt = v2->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
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
  v14 = (int)this->fields.eventMissionEntList;
  v15 = this;
  if ( v14 < 1 )
  {
LABEL_21:
    name_high = 0;
  }
  else
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v14 )
        goto LABEL_31;
      v17 = &v15->klass + (int)v16;
      v18 = v17[4];
      if ( !v18 )
        goto LABEL_30;
      this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneEntity__IsEventMission(
                                                              (EventRewardSceneEntity_o *)v17[4],
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v14 = (int)v15->fields.eventMissionEntList;
      if ( (int)++v16 >= v14 )
        goto LABEL_21;
    }
    name_high = HIDWORD(v18->_1.name);
  }
  if ( !byte_4211434 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, v13);
    byte_4211434 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v20 = v2->fields.eventDetailEnt;
  if ( !v20
    || (EventRewardSaveData__SaveCurrentEventData(v20->fields.eventId, 0LL), (v23 = v2->fields.eventDetailEnt) == 0LL)
    || (eventId = v23->fields.eventId,
        v25 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v21, v22),
        SceneJumpInfo___ctor_16651652(v25, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v25)
    || (SceneJumpInfo__SetReturnNowScene(v25, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_B0D97C(this);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v25, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(_4__this);
  }
  v11 = (float)(v8 - z) * v10;
  v12 = vadd_f32(v5, vmul_n_f32(vsub_f32(v7, v5), v10)).n64_u64[0];
  v13 = z + v11;
  v14 = HIDWORD(v12);
  UnityEngine_Transform__set_localPosition(v9, *(UnityEngine_Vector3_o *)&v12, 0LL);
}