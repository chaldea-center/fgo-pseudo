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

  if ( (byte_40FB5CF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FB5CF = 1;
  }
  this->fields.mDepthBase = 30;
  this->fields.mEasingType = 17;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  v9 = (System_Int32_array **)StringLiteral_1;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mHideSeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mDispSeName, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CStateManager_MapGimmickComponent__o *mFSM; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  MapGimmickComponent_StateNone_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  MapGimmickComponent_StateMapMain_o *v31; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  MapGimmickComponent_StateHideAnim_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  MapGimmickComponent_StateDispAnim_o *v43; // x21
  const MethodInfo *v44; // x3

  if ( (byte_40FB5C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MapGimmickComponent___ctor__, method);
    sub_B16FFC(&Method_CStateManager_MapGimmickComponent__add__, v6);
    sub_B16FFC(&CStateManager_MapGimmickComponent__TypeInfo, v7);
    sub_B16FFC(&MapGimmickComponent_StateDispAnim_TypeInfo, v8);
    sub_B16FFC(&MapGimmickComponent_StateHideAnim_TypeInfo, v9);
    sub_B16FFC(&MapGimmickComponent_StateMapMain_TypeInfo, v10);
    sub_B16FFC(&MapGimmickComponent_StateNone_TypeInfo, v11);
    byte_40FB5C2 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_MapGimmickComponent__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v13,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    mFSM = this->fields.mFSM;
    v25 = (MapGimmickComponent_StateNone_o *)sub_B170CC(MapGimmickComponent_StateNone_TypeInfo, v21, v22, v23, v24);
    MapGimmickComponent_StateNone___ctor(v25, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v25,
      (const MethodInfo_2907FBC *)Method_CStateManager_MapGimmickComponent__add__);
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v31 = (MapGimmickComponent_StateMapMain_o *)sub_B170CC(
                                                  MapGimmickComponent_StateMapMain_TypeInfo,
                                                  v27,
                                                  v28,
                                                  v29,
                                                  v30);
    MapGimmickComponent_StateMapMain___ctor(v31, 0LL);
    if ( !v26 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_2907FBC *)Method_CStateManager_MapGimmickComponent__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v37 = (MapGimmickComponent_StateHideAnim_o *)sub_B170CC(
                                                   MapGimmickComponent_StateHideAnim_TypeInfo,
                                                   v33,
                                                   v34,
                                                   v35,
                                                   v36);
    MapGimmickComponent_StateHideAnim___ctor(v37, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            2,
            (IState_T__o *)v37,
            (const MethodInfo_2907FBC *)Method_CStateManager_MapGimmickComponent__add__),
          v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v43 = (MapGimmickComponent_StateDispAnim_o *)sub_B170CC(
                                                         MapGimmickComponent_StateDispAnim_TypeInfo,
                                                         v39,
                                                         v40,
                                                         v41,
                                                         v42),
          MapGimmickComponent_StateDispAnim___ctor(v43, 0LL),
          !v38) )
    {
LABEL_9:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v38,
      3,
      (IState_T__o *)v43,
      (const MethodInfo_2907FBC *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v44);
  }
}


float __fastcall MapGimmickComponent__GetAnimTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  MapGimmickEntity_o *Mine; // x0
  int actionAnimTime; // w8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo || (Mine = MapControl_MapGimmickInfo__GetMine(mMapCtrl_MapGimmickInfo, 0LL)) == 0LL )
    sub_B170D4();
  actionAnimTime = Mine->fields.actionAnimTime;
  if ( (actionAnimTime & 0x80000000) != 0 )
    return this->fields.mAnimTime;
  else
    return (float)actionAnimTime / 1000.0;
}


CommonEffectComponent_o *__fastcall MapGimmickComponent__GetCommonEffectComponent(
        MapGimmickComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        MapCamera_o *mapCamera,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Component_srcLineSprite; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x0
  MapEffectComponent_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x20
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40FB5C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, prefab);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FB5C7 = 1;
  }
  if ( !prefab )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        prefab,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
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
    v12 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            Component_srcLineSprite,
            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( v12 )
    {
      v13 = (MapEffectComponent_o *)v12;
      v12[3].fields.m_CachedPtr = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      MapEffectComponent__Setup(v13, gameObject, mapCamera, v15);
      return (CommonEffectComponent_o *)v13;
    }
LABEL_23:
    sub_B170D4();
  }
  v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    prefab,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       v16,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( v17 )
    {
      v13 = (MapEffectComponent_o *)v17;
      v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
      v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SafeSetParent_27425996(v18, v19, 0LL);
      return (CommonEffectComponent_o *)v13;
    }
    goto LABEL_23;
  }
  return (CommonEffectComponent_o *)v13;
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

  if ( (byte_40FB5C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, effectPrefabName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FB5C6 = 1;
  }
  if ( !assetData )
    sub_B170D4();
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             effectPrefabName,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
  if ( (byte_40FB5C1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8911, method);
    sub_B16FFC(&StringLiteral_960, v2);
    byte_40FB5C1 = 1;
  }
  v3 = System_Int32__ToString_38275808((int32_t)&v5, (System_String_o *)StringLiteral_960, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_8911, v3, 0LL);
}


MapControl_MapGimmickInfo_o *__fastcall MapGimmickComponent__GetMapCtrl_MapGimmickInfo(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_MapGimmickInfo;
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  if ( (byte_40FB5C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MapGimmickComponent__getState__, method);
    byte_40FB5C8 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  __int64 v29; // x3
  __int64 v30; // x4
  UnityEngine_GameObject_o *v31; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v32; // x0
  struct UISprite_o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FB5C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UISprite___, method);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v9);
    sub_B16FFC(&string_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_12944, v11);
    byte_40FB5C4 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mDispSeName,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v31 = (UnityEngine_GameObject_o *)sub_B170CC(UnityEngine_GameObject_TypeInfo, v27, v28, v29, v30);
  UnityEngine_GameObject___ctor(v31, (System_String_o *)StringLiteral_12944, 0LL);
  GameObjectExtensions__SetParent(v31, (UnityEngine_Component_o *)this, 0LL);
  if ( !v31
    || (v32 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                v31,
                (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_B170D4();
  }
  v33 = (struct UISprite_o *)v32;
  UIWidget__SetDimensions((UIWidget_o *)v32, 64, 64, 0LL);
  this->fields.mSprite = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSprite,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim(MapGimmickComponent_o *this, bool is_disp, const MethodInfo *method)
{
  float AnimTime; // s0
  const MethodInfo *v6; // x3

  AnimTime = MapGimmickComponent__GetAnimTime(this, (const MethodInfo *)is_disp);
  MapGimmickComponent__SetDispAnim_27698548(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_27698548(this, is_disp, 0.0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim_27698548(
        MapGimmickComponent_o *this,
        bool is_disp,
        float time,
        bool is_play_se,
        const MethodInfo *method)
{
  __int64 v5; // x4
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x22
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
  __int64 v30; // x3
  __int64 v31; // x4
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct CommonEffectComponent_o *v38; // x20
  System_Action_o *v39; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UISprite_o *mSprite; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x8
  System_String_o *v54; // x21
  System_Action_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  EasingObject_o *v60; // x24
  System_Action_o *v61; // x25
  struct CommonEffectComponent_o *v62; // x20
  System_Action_o *v63; // x21
  UnityEngine_GameObject_o *v64; // x0
  const MethodInfo *v65; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_40FB5CB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, is_disp);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v10);
    sub_B16FFC(&Method_MapGimmickComponent_StateDispAnimEnd__, v11);
    sub_B16FFC(&Method_MapGimmickComponent_StateHideAnimEnd__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&SoundManager_TypeInfo, v14);
    sub_B16FFC(&Method_MapGimmickComponent___c__DisplayClass35_0__SetDispAnim_b__0__, v15);
    sub_B16FFC(&Method_MapGimmickComponent___c__DisplayClass35_0__SetDispAnim_b__1__, v16);
    sub_B16FFC(&MapGimmickComponent___c__DisplayClass35_0_TypeInfo, v17);
    byte_40FB5CB = 1;
  }
  v18 = sub_B170CC(MapGimmickComponent___c__DisplayClass35_0_TypeInfo, is_disp, is_play_se, method, v5);
  MapGimmickComponent___c__DisplayClass35_0___ctor((MapGimmickComponent___c__DisplayClass35_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_39;
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  MapGimmickComponent__StartActionEffect(this, v25);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v26);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  gameObject,
                                                  (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v18 + 32) = Component_UIWidget;
    sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), Component_UIWidget, v42, v43, v44, v45, v46, v47);
    mSprite = this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_39;
    *(float *)(v18 + 28) = ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))mSprite->klass->vtable._7_get_alpha.method)(
                             mSprite,
                             mSprite->klass->vtable._8_set_alpha.methodPtr);
    *(_DWORD *)(v18 + 24) = is_disp;
    if ( is_disp )
      v53 = 56LL;
    else
      v53 = 48LL;
    v54 = *(System_String_o **)((char *)&this->klass + v53);
    v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v49, v50, v51, v52);
    System_Action___ctor(
      v55,
      (Il2CppObject *)v18,
      Method_MapGimmickComponent___c__DisplayClass35_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v55, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      v60 = *(EasingObject_o **)(v18 + 32);
      v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
      System_Action___ctor(
        v61,
        (Il2CppObject *)v18,
        Method_MapGimmickComponent___c__DisplayClass35_0__SetDispAnim_b__1__,
        0LL);
      if ( !v60 )
        goto LABEL_39;
      EasingObject__Play(v60, time, v61, v55, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v54, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v54, 0LL);
    }
    return;
  }
  if ( is_disp )
  {
    v32 = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !v32 )
      goto LABEL_39;
    v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
    if ( !v33 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v33, 1, 0LL);
    v38 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v38 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v38->klass->vtable._6_ForceStart.method)(
          v38,
          1LL,
          v39,
          v38->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_39:
      sub_B170D4();
    }
    if ( !v38 )
      goto LABEL_39;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v62 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v62 )
        goto LABEL_39;
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.commonEffectComponent, 0LL);
      if ( !v64 )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive(v64, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v65);
    }
    else
    {
      v63 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
      System_Action___ctor(v63, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v62 )
        goto LABEL_39;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v62->klass->vtable._8_Stop.method)(
        v62,
        0LL,
        v63,
        v62->klass->vtable._9_ForceStop.methodPtr);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_39;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
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
  __int64 v6; // x4
  float z; // s9
  float y; // s10
  float x; // s11
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
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
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  EasingObject_o *v50; // x22
  System_Action_o *v51; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_40FB5CC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&easeType);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v14);
    sub_B16FFC(&Method_MapGimmickComponent___c__DisplayClass36_0__SetMoveAnim_b__0__, v15);
    sub_B16FFC(&Method_MapGimmickComponent___c__DisplayClass36_0__SetMoveAnim_b__1__, v16);
    sub_B16FFC(&MapGimmickComponent___c__DisplayClass36_0_TypeInfo, v17);
    byte_40FB5CC = 1;
  }
  v18 = sub_B170CC(MapGimmickComponent___c__DisplayClass36_0_TypeInfo, *(_QWORD *)&easeType, callback, method, v6);
  MapGimmickComponent___c__DisplayClass36_0___ctor((MapGimmickComponent___c__DisplayClass36_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 40) = callback;
  *(float *)(v18 + 24) = x;
  *(float *)(v18 + 28) = y;
  *(float *)(v18 + 32) = z;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v18 + 64) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 64), Component_UIWidget, v33, v34, v35, v36, v37, v38);
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v39 )
    goto LABEL_10;
  transform = UnityEngine_GameObject__get_transform(v39, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v18 + 48) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v18,
    Method_MapGimmickComponent___c__DisplayClass36_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v50 = *(EasingObject_o **)(v18 + 64);
    v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v18,
      Method_MapGimmickComponent___c__DisplayClass36_0__SetMoveAnim_b__1__,
      0LL);
    if ( v50 )
    {
      EasingObject__Play(v50, time, v51, v45, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  ActionExtensions__Call(v45, 0LL);
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

  if ( (byte_40FB5C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MapGimmickComponent__setState__, *(_QWORD *)&state);
    byte_40FB5C9 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B16F98(
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
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v12,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_MapGimmickComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x20

  if ( (byte_40FB5CE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, enabled);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB5CE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Collider__set_enabled(Component_srcLineSprite, enabled, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
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
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
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
  __int64 v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **Mine; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  MapGimmickEntity_o **v51; // x23
  const MethodInfo *v52; // x1
  MapGimmickEntity_o *v53; // x0
  System_String_o *v54; // x27
  UISprite_o **p_mSprite; // x19
  UISprite_o *mSprite; // x26
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  UISprite_o *v59; // x28
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UISprite_o *v61; // x26
  UnityEngine_Object_o *mAtlas; // x28
  bool v63; // w0
  const MethodInfo *v64; // x1
  System_String_o *ColorCodeFromScript; // x0
  System_String_o *v66; // x26
  AssetData_o *v67; // x28
  const MethodInfo *v68; // x1
  bool IsMonoColorRect; // w0
  UISprite_o *v70; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  const MethodInfo *v74; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  UnityEngine_Component_o **p_commonEffectComponent; // x25
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  UnityEngine_Object_o *v86; // x26
  TerminalSceneComponent_c *v87; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  MapControl_WarInfo_o *mMapInfo; // x0
  int32_t EventId; // w26
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  UnityEngine_GameObject_o *v94; // x26
  QuestTree_o *v95; // x0
  bool v96; // w0
  bool v97; // w1
  UnityEngine_GameObject_o *v98; // x0
  UIWidget_o *v99; // x0
  float v100; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v102; // q0
  float v103; // s0
  float v104; // s1
  float v105; // s2
  float v106; // s9
  float v107; // s8
  float v108; // s10
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_Object_o *v113; // x24
  const MethodInfo *v114; // x1
  UnityEngine_GameObject_o *v115; // x0
  __int64 v116; // x1
  TerminalSceneComponent_c *v117; // x0
  struct TerminalSceneComponent_o *v118; // x8
  struct ScrTerminalMap_o *v119; // x8
  MapControl_WarInfo_o *v120; // x0
  int32_t v121; // w26
  WebViewManager_o *v122; // x0
  DataManager_o *v123; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v124; // x0
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  WarQuestSelectionMaster_o *v132; // x0
  const MethodInfo *v133; // x1
  EventMissionMaster_o *v134; // x25
  System_Collections_Generic_List_int__o *EventMissionIdList; // x0
  System_Int32_array **EventMissionList_26590520; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  System_Collections_Generic_List_EventDelegate__o *klass; // x24
  EventDelegate_Callback_o *v148; // x25
  MapGimmickEntity_o *v149; // x0
  int32_t v150; // w0
  int actionEffectId; // t1
  System_String_o *v152; // x0
  System_String_o *v153; // x0
  const MethodInfo *v154; // x4
  UnityEngine_GameObject_o *v155; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v156; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  UnityEngine_Component_o *actionEffect; // x0
  UnityEngine_GameObject_o *v165; // x20
  UnityEngine_GameObject_o *v166; // x0
  UnityEngine_Component_o *v167; // x0
  UnityEngine_GameObject_o *v168; // x0
  const MethodInfo *v169; // x1
  int32_t UseAnimFromScript; // w0
  UnityEngine_Color_o color; // [xsp+10h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB5C5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, mg_inf);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&EventDelegate_TypeInfo, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v18);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UIButton___, v19);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v20);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v21);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v22);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v23);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v27);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v28);
    sub_B16FFC(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__, v29);
    sub_B16FFC(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo, v30);
    sub_B16FFC(&StringLiteral_23181, v31);
    sub_B16FFC(&StringLiteral_964, v32);
    sub_B16FFC(&StringLiteral_18988, v33);
    sub_B16FFC(&StringLiteral_8894, v34);
    sub_B16FFC(&StringLiteral_1, v35);
    sub_B16FFC(&StringLiteral_8893, v36);
    byte_40FB5C5 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  v37 = sub_B170CC(MapGimmickComponent___c__DisplayClass23_0_TypeInfo, mg_inf, mapCamera, atlases, assetData);
  MapGimmickComponent___c__DisplayClass23_0___ctor((MapGimmickComponent___c__DisplayClass23_0_o *)v37, 0LL);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (System_Int32_array **)mg_inf,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_140;
  Mine = (System_Int32_array **)MapControl_MapGimmickInfo__GetMine(mg_inf, 0LL);
  if ( !v37 )
    goto LABEL_140;
  *(_QWORD *)(v37 + 16) = Mine;
  v51 = (MapGimmickEntity_o **)(v37 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v37 + 16), Mine, v45, v46, v47, v48, v49, v50);
  v53 = *(MapGimmickEntity_o **)(v37 + 16);
  if ( !v53 )
    goto LABEL_140;
  if ( MapGimmickEntity__IsMonoColorRect(v53, v52) )
  {
    v54 = (System_String_o *)StringLiteral_23181;
    p_mSprite = &this->fields.mSprite;
    mSprite = this->fields.mSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*v51 )
      goto LABEL_140;
    v57 = System_Int32__ToString_38275808((unsigned int)*v51 + 24, (System_String_o *)StringLiteral_964, 0LL);
    v58 = System_String__Concat_43743732((System_String_o *)StringLiteral_18988, v57, 0LL);
    p_mSprite = &this->fields.mSprite;
    v59 = this->fields.mSprite;
    v54 = v58;
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(atlases, v58, 0LL);
    if ( !v59 )
      goto LABEL_140;
    UISprite__set_atlas(v59, UIAtlasBySpriteName, 0LL);
  }
  v61 = *p_mSprite;
  if ( !*p_mSprite )
    goto LABEL_140;
  mAtlas = (UnityEngine_Object_o *)v61->fields.mAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v63 = UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v61, v63, 0LL);
  if ( !*v51 )
    goto LABEL_140;
  ColorCodeFromScript = MapGimmickEntity__GetColorCodeFromScript(*v51, v64);
  if ( !*p_mSprite )
    goto LABEL_140;
  v66 = ColorCodeFromScript;
  v67 = assetData;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)*p_mSprite, 0LL) )
  {
    if ( !*p_mSprite )
      goto LABEL_140;
    UISprite__set_spriteName(*p_mSprite, v54, 0LL);
    if ( !*v51 )
      goto LABEL_140;
    IsMonoColorRect = MapGimmickEntity__IsMonoColorRect(*v51, v68);
    v70 = *p_mSprite;
    if ( IsMonoColorRect )
    {
      if ( !mapCamera )
        goto LABEL_140;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v70 )
        goto LABEL_140;
      UIWidget__SetDimensions((UIWidget_o *)*p_mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v70 )
        goto LABEL_140;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v70->klass->vtable._33_MakePixelPerfect.method)(
        *p_mSprite,
        v70->klass->vtable._34_get_minWidth.methodPtr);
    }
    if ( !*v51 )
      goto LABEL_140;
    v99 = (UIWidget_o *)this->fields.mSprite;
    if ( !v99 )
      goto LABEL_140;
    UIWidget__set_depth(v99, (*v51)->fields.depthOffset + this->fields.mDepthBase, 0LL);
    if ( !*v51 || !*p_mSprite )
      goto LABEL_140;
    v100 = this->fields.mScaleBase * (float)((float)(*v51)->fields.scale / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_mSprite, 0LL);
    GameObjectExtensions__SetLocalScale_27422124(gameObject, v100, 0LL);
    if ( !System_String__IsNullOrEmpty(v66, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v66, &color, 0LL);
      if ( !*p_mSprite )
        goto LABEL_140;
      UIWidget__set_color((UIWidget_o *)*p_mSprite, color, 0LL);
    }
    if ( !*p_mSprite )
      goto LABEL_140;
    LODWORD(v102) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v102 = 0.0;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer, long double))(*p_mSprite)->klass->vtable._8_set_alpha.method)(
      *p_mSprite,
      (*p_mSprite)->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v102);
  }
  else
  {
    if ( !*v51 )
      goto LABEL_140;
    v72 = System_Int32__ToString((unsigned int)*v51 + 24, 0LL);
    v73 = System_String__Concat_43743732((System_String_o *)StringLiteral_8894, v72, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab(
                     (MapGimmickComponent_o *)v73,
                     v73,
                     assetData,
                     multiAssetData,
                     v74);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v77);
      p_commonEffectComponent = (UnityEngine_Component_o **)&this->fields.commonEffectComponent;
      this->fields.commonEffectComponent = CommonEffectComponent;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.commonEffectComponent,
        (System_Int32_array **)CommonEffectComponent,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      v86 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v76);
          byte_40F6042 = 1;
        }
        v87 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v87 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = v87->static_fields->mInstance;
        if ( !mInstance )
          goto LABEL_140;
        mTerminalMap = mInstance->fields.mTerminalMap;
        if ( !mTerminalMap )
          goto LABEL_140;
        mMapInfo = (MapControl_WarInfo_o *)mTerminalMap->fields.mMapInfo;
        if ( !mMapInfo )
          goto LABEL_140;
        EventId = MapControl_WarInfo__GetEventId(mMapInfo, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_140;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_140;
        DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          EventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          v94 = UnityEngine_Component__get_gameObject(*p_commonEffectComponent, 0LL);
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v95 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !v95 )
            goto LABEL_140;
          v96 = QuestTree__CheckMapGimmickCond_21527492(v95, mg_inf, 0LL);
          if ( !v94 )
            goto LABEL_140;
          v97 = v96;
          v98 = v94;
        }
        else
        {
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          v98 = UnityEngine_Component__get_gameObject(*p_commonEffectComponent, 0LL);
          if ( !v98 )
            goto LABEL_140;
          v97 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive(v98, v97, 0LL);
        if ( !*v51 )
          goto LABEL_140;
        UseAnimFromScript = MapGimmickEntity__GetUseAnimFromScript(*v51, v169);
        if ( UseAnimFromScript >= 1 )
        {
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          LODWORD((*p_commonEffectComponent)[5].monitor) = UseAnimFromScript;
        }
        if ( !*p_commonEffectComponent )
          goto LABEL_140;
        CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)*p_commonEffectComponent, 0LL);
      }
    }
  }
  if ( !*v51 )
    goto LABEL_140;
  *(UnityEngine_Vector3_o *)&v103 = MapGimmickEntity__GetTouchSize(*v51, v76);
  if ( v103 <= 0.0 )
    goto LABEL_112;
  v106 = v104;
  if ( v104 <= 0.0 )
    goto LABEL_112;
  v107 = v103;
  v108 = v105;
  v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v109 )
    goto LABEL_140;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v109,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v111 )
      goto LABEL_140;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                        v111,
                                                        (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_140;
  v174.fields.x = v107;
  v174.fields.y = v106;
  v174.fields.z = v108;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, v174, 0LL);
  v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v112 )
    goto LABEL_140;
  v113 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v112,
                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v113, 0LL, 0LL) )
  {
    v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v115 )
      goto LABEL_140;
    v113 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     v115,
                                     (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  if ( !*v51 )
LABEL_140:
    sub_B170D4();
  if ( MapGimmickEntity__GetScriptType(*v51, v114) == 1 )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v116);
      byte_40F6042 = 1;
    }
    v117 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v117 = TerminalSceneComponent_TypeInfo;
    }
    v118 = v117->static_fields->mInstance;
    if ( !v118 )
      goto LABEL_140;
    v119 = v118->fields.mTerminalMap;
    if ( !v119 )
      goto LABEL_140;
    v120 = (MapControl_WarInfo_o *)v119->fields.mMapInfo;
    if ( !v120 )
      goto LABEL_140;
    v121 = MapControl_WarInfo__GetEventId(v120, 0LL);
    v122 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v122 )
      goto LABEL_140;
    v123 = (DataManager_o *)v122;
    v124 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)v122,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !v124 )
      goto LABEL_140;
    v125 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v124,
                                    v121,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v37 + 24) = v125;
    sub_B16F98((BattleServantConfConponent_o *)(v37 + 24), v125, v126, v127, v128, v129, v130, v131);
    v132 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             v123,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !*(_QWORD *)(v37 + 16) )
      goto LABEL_140;
    v134 = (EventMissionMaster_o *)v132;
    EventMissionIdList = MapGimmickEntity__GetEventMissionIdList(*(MapGimmickEntity_o **)(v37 + 16), v133);
    if ( !v134 )
      goto LABEL_140;
    EventMissionList_26590520 = (System_Int32_array **)EventMissionMaster__getEventMissionList_26590520(
                                                         v134,
                                                         EventMissionIdList,
                                                         0LL);
    *(_QWORD *)(v37 + 32) = EventMissionList_26590520;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v37 + 32),
      EventMissionList_26590520,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
    if ( !v113 )
      goto LABEL_140;
    klass = (System_Collections_Generic_List_EventDelegate__o *)v113[8].klass;
    v148 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v143, v144, v145, v146);
    EventDelegate_Callback___ctor(
      v148,
      (Il2CppObject *)v37,
      Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
      0LL);
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Add(klass, v148, 0LL);
  }
LABEL_112:
  v149 = *v51;
  if ( !*v51 )
    goto LABEL_140;
  actionEffectId = v149->fields.actionEffectId;
  v150 = (_DWORD)v149 + 100;
  if ( actionEffectId >= 1 )
  {
    v152 = System_Int32__ToString(v150, 0LL);
    v153 = System_String__Concat_43743732((System_String_o *)StringLiteral_8893, v152, 0LL);
    v155 = MapGimmickComponent__GetEffectPrefab((MapGimmickComponent_o *)v153, v153, v67, multiAssetData, v154);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v155, 0LL, 0LL) )
    {
      if ( !v155 )
        goto LABEL_140;
      v156 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v155,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v156, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v157 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 v156,
                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v157;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.actionEffect,
          (System_Int32_array **)v157,
          v158,
          v159,
          v160,
          v161,
          v162,
          v163);
        actionEffect = (UnityEngine_Component_o *)this->fields.actionEffect;
        if ( actionEffect )
        {
          v165 = UnityEngine_Component__get_gameObject(actionEffect, 0LL);
          v166 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_27425996(v165, v166, 0LL);
          v167 = (UnityEngine_Component_o *)this->fields.actionEffect;
          if ( v167 )
          {
            v168 = UnityEngine_Component__get_gameObject(v167, 0LL);
            if ( v168 )
            {
              UnityEngine_GameObject__SetActive(v168, 0, 0LL);
              return;
            }
          }
        }
        goto LABEL_140;
      }
    }
  }
}


void __fastcall MapGimmickComponent__StartActionEffect(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actionEffect; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CommonEffectComponent_o *v6; // x0

  if ( (byte_40FB5CA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB5CA = 1;
  }
  actionEffect = (UnityEngine_Object_o *)this->fields.actionEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actionEffect, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.actionEffect;
    if ( !v4
      || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v6 = this->fields.actionEffect) == 0LL) )
    {
      sub_B170D4();
    }
    CommonEffectComponent__ForceStart(v6, 0LL);
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
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x2

  if ( (byte_40FB5CD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB5CD = 1;
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
    v5 = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !v5 || (gameObject = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v7);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v4);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o *mFSM; // x0

  if ( (byte_40FB5C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_MapGimmickComponent__update__, method);
    byte_40FB5C3 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_MapGimmickComponent__update__);
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

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40F694D & 1) == 0 )
  {
    sub_B16FFC(&MapGimmickComponent_StateMapMain_TypeInfo, v1);
    byte_40F694D = 1;
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
  WebViewManager_o *Instance; // x0
  int64_t Time; // x0
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v10; // x20
  int64_t mOldDispTime; // x21
  MapGimmickComponent_StateMapMain_c *v12; // x0
  struct MapGimmickComponent_o *v13; // x8
  QuestTree_o *v14; // x0
  struct MapGimmickComponent_o *v15; // x8
  bool v16; // w0
  int32_t v17; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct MapGimmickComponent_o *v19; // x8

  if ( (byte_40F694C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v5);
    sub_B16FFC(&MapGimmickComponent_StateMapMain_TypeInfo, v6);
    byte_40F694C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  mThat = this->fields.mThat;
  if ( !mThat )
    goto LABEL_32;
  v10 = Time;
  mOldDispTime = mThat->fields.mOldDispTime;
  v12 = MapGimmickComponent_StateMapMain_TypeInfo;
  if ( (BYTE3(MapGimmickComponent_StateMapMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo);
    v12 = MapGimmickComponent_StateMapMain_TypeInfo;
  }
  if ( v10 - mOldDispTime >= v12->static_fields->CHECK_DISP_ITVL_SEC )
  {
    v13 = this->fields.mThat;
    if ( !v13 )
      goto LABEL_32;
    if ( !v13->fields.isForceNotActive )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v14 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      v15 = this->fields.mThat;
      if ( !v15 || !v14 )
        goto LABEL_32;
      v16 = QuestTree__CheckMapGimmickCond_21527492(v14, v15->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v13 = this->fields.mThat;
      if ( v16 )
      {
        if ( !v13 )
          goto LABEL_32;
        v17 = 3;
        goto LABEL_28;
      }
      if ( !v13 )
        goto LABEL_32;
    }
    if ( v13->fields.isForceLoop )
    {
      mMapCtrl_MapGimmickInfo = v13->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        goto LABEL_32;
      mMapCtrl_MapGimmickInfo->fields.dispType = 0;
      goto LABEL_29;
    }
    v17 = 2;
LABEL_28:
    MapGimmickComponent__SetState(v13, v17, 0LL, 0LL);
LABEL_29:
    v19 = this->fields.mThat;
    if ( v19 )
    {
      v19->fields.mOldDispTime = v10;
      return;
    }
LABEL_32:
    sub_B170D4();
  }
}


void __fastcall MapGimmickComponent_StateMapMain__begin(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mThat = that;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)that,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v7; // x20
  System_String_o *TitleFromScript; // x0
  System_String_o *v9; // x21
  System_String_o *SubTitleFromScript; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *_9__1; // x25
  System_String_o *v16; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F694A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__1__, v5);
    byte_40F694A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this->fields.mg_ent )
    goto LABEL_12;
  v7 = (CommonUI_o *)Instance;
  TitleFromScript = MapGimmickEntity__GetTitleFromScript(this->fields.mg_ent, 0LL);
  if ( !this->fields.mg_ent )
    goto LABEL_12;
  v9 = TitleFromScript;
  SubTitleFromScript = MapGimmickEntity__GetSubTitleFromScript(this->fields.mg_ent, 0LL);
  _9__1 = this->fields.__9__1;
  v16 = SubTitleFromScript;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v7 )
LABEL_12:
    sub_B170D4();
  CommonUI__OpenEventMissionListDialog(v7, v9, v16, eventDetailEnt, eventMissionEntList, _9__1, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_0___Setup_b__1(
        MapGimmickComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MapGimmickComponent___c__DisplayClass23_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventMissionEntity_array *eventMissionEntList; // x9
  EventMissionEntity_o *v10; // x9
  int32_t id; // w21
  struct EventDetailEntity_o *eventDetailEnt; // x8
  WebViewManager_o *Instance; // x0
  EventRewardSceneMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventDetailEntity_o *v15; // x8
  int v16; // w8
  MapGimmickComponent___c__DisplayClass23_0_o *v17; // x21
  unsigned int v18; // w23
  MapGimmickComponent___c__DisplayClass23_0_c **v19; // x8
  MapGimmickComponent___c__DisplayClass23_0_c *v20; // x22
  int32_t name_high; // w21
  struct EventDetailEntity_o *v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct EventDetailEntity_o *v27; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v29; // x19
  AvalonSceneManager_o *v30; // x0

  v3 = this;
  if ( (byte_40F694B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, method);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (MapGimmickComponent___c__DisplayClass23_0_o *)sub_B16FFC(&StringLiteral_1, v7);
    byte_40F694B = 1;
  }
  if ( !byte_40F6975 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_0_o *)sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40F6975 = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v3->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
  {
LABEL_31:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v10 = eventMissionEntList->m_Items[0];
  if ( !v10 )
    goto LABEL_30;
  id = v10->fields.id;
  if ( !byte_40F6976 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40F6976 = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  }
  (*p_static_fields)->_MissionId_k__BackingField = id;
  eventDetailEnt = v3->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  v15 = v3->fields.eventDetailEnt;
  if ( !v15 )
    goto LABEL_30;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_0_o *)EventRewardSceneMaster__GetEntityList(
                                                          MasterData_WarQuestSelectionMaster,
                                                          v15->fields.eventId,
                                                          0LL);
  if ( !this )
    goto LABEL_30;
  v16 = (int)this->fields.eventDetailEnt;
  v17 = this;
  if ( v16 < 1 )
  {
LABEL_21:
    name_high = 0;
  }
  else
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v16 )
        goto LABEL_31;
      v19 = &v17->klass + (int)v18;
      v20 = v19[4];
      if ( !v20 )
        goto LABEL_30;
      this = (MapGimmickComponent___c__DisplayClass23_0_o *)EventRewardSceneEntity__IsEventMission(
                                                              (EventRewardSceneEntity_o *)v19[4],
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v16 = (int)v17->fields.eventDetailEnt;
      if ( (int)++v18 >= v16 )
        goto LABEL_21;
    }
    name_high = HIDWORD(v20->_1.name);
  }
  if ( !byte_40F6253 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40F6253 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v22 = v3->fields.eventDetailEnt;
  if ( !v22
    || (EventRewardSaveData__SaveCurrentEventData(v22->fields.eventId, 0LL), (v27 = v3->fields.eventDetailEnt) == 0LL)
    || (eventId = v27->fields.eventId,
        v29 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v23, v24, v25, v26),
        SceneJumpInfo___ctor_29748028(v29, (System_String_o *)StringLiteral_1, eventId, 0LL),
        !v29)
    || (SceneJumpInfo__SetReturnNowScene(v29, 0LL),
        (v30 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_B170D4();
  }
  AvalonSceneManager__transitionScene(v30, 72, 1, (Il2CppObject *)v29, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass35_0___ctor(
        MapGimmickComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass35_0___SetDispAnim_b__0(
        MapGimmickComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *_4__this; // x8
  struct UISprite_o *mSprite; // x0
  MapGimmickComponent_o *v5; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mSprite = _4__this->fields.mSprite) == 0LL
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))mSprite->klass->vtable._8_set_alpha.method)(
          mSprite,
          mSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          (float)this->fields.to),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  MapGimmickComponent__StateDispAnimEnd(v5, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass35_0___SetDispAnim_b__1(
        MapGimmickComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x9
  struct MapGimmickComponent_o *_4__this; // x8
  struct UISprite_o *mSprite; // x8

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0LL || (mSprite = _4__this->fields.mSprite) == 0LL )
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))mSprite->klass->vtable._8_set_alpha.method)(
    mSprite,
    mSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    this->fields.from + (float)(eo->fields.mStartTime * (float)((float)this->fields.to - this->fields.from)));
}


void __fastcall MapGimmickComponent___c__DisplayClass36_0___ctor(
        MapGimmickComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass36_0___SetMoveAnim_b__0(
        MapGimmickComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localPosition(transform, this->fields.posTo, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent___c__DisplayClass36_0___SetMoveAnim_b__1(
        MapGimmickComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  struct EasingObject_o *eo; // x8
  float32x2_t v7; // d8
  float z; // s9
  float32x2_t v9; // d11
  float v10; // s10
  UnityEngine_Transform_o *v11; // x20
  float v12; // s0
  float v13; // s2
  unsigned __int64 v14; // d0 OVERLAPPED
  float v15; // s2
  int v16; // s1

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  eo = this->fields.eo;
  if ( !eo
    || (v7.n64_u64[0] = *(unsigned __int64 *)&this->fields.posFrom.fields.x,
        z = this->fields.posFrom.fields.z,
        v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.posTo.fields.x,
        v10 = this->fields.posTo.fields.z,
        v11 = transform,
        v12 = UnityEngine_Mathf__Clamp01(eo->fields.mStartTime, 0LL),
        !v11) )
  {
LABEL_6:
    sub_B170D4();
  }
  v13 = (float)(v10 - z) * v12;
  v14 = vadd_f32(v7, vmul_n_f32(vsub_f32(v9, v7), v12)).n64_u64[0];
  v15 = z + v13;
  v16 = HIDWORD(v14);
  UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v14, 0LL);
}