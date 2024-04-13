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

  if ( (byte_42EBAEF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBAEF = 1;
  }
  this->fields.mDepthBase = 30;
  this->fields.mEasingType = 17;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mHideSeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mDispSeName, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CStateManager_MapGimmickComponent__o *mFSM; // x21
  MapGimmickComponent_StateNone_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  MapGimmickComponent_StateMapMain_o *v36; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v37; // x21
  MapGimmickComponent_StateHideAnim_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x20
  MapGimmickComponent_StateDispAnim_o *v40; // x21
  const MethodInfo *v41; // x3

  if ( (byte_42EBADD & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MapGimmickComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_MapGimmickComponent__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_MapGimmickComponent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MapGimmickComponent_StateDispAnim_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&MapGimmickComponent_StateHideAnim_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&MapGimmickComponent_StateMapMain_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&MapGimmickComponent_StateNone_TypeInfo, v20, v21, v22);
    byte_42EBADD = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_MapGimmickComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v24,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v24;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    mFSM = this->fields.mFSM;
    v32 = (MapGimmickComponent_StateNone_o *)sub_B5D694(MapGimmickComponent_StateNone_TypeInfo);
    MapGimmickComponent_StateNone___ctor(v32, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MapGimmickComponent__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v36 = (MapGimmickComponent_StateMapMain_o *)sub_B5D694(MapGimmickComponent_StateMapMain_TypeInfo);
    MapGimmickComponent_StateMapMain___ctor(v36, 0LL);
    if ( !v35 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MapGimmickComponent__add__);
    v37 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v38 = (MapGimmickComponent_StateHideAnim_o *)sub_B5D694(MapGimmickComponent_StateHideAnim_TypeInfo);
    MapGimmickComponent_StateHideAnim___ctor(v38, 0LL);
    if ( !v37
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v37,
            2,
            (IState_T__o *)v38,
            (const MethodInfo_2BB26FC *)Method_CStateManager_MapGimmickComponent__add__),
          v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v40 = (MapGimmickComponent_StateDispAnim_o *)sub_B5D694(MapGimmickComponent_StateDispAnim_TypeInfo),
          MapGimmickComponent_StateDispAnim___ctor(v40, 0LL),
          !v39) )
    {
LABEL_9:
      sub_B5D69C(v33, v34);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v39,
      3,
      (IState_T__o *)v40,
      (const MethodInfo_2BB26FC *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v41);
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
    sub_B5D69C(mMapCtrl_MapGimmickInfo, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *Component_srcLineSprite; // x22
  MapEffectComponent_o *v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x0

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_42EBAE4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___,
      (_DWORD)prefab,
      (_DWORD)mapCamera,
      method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___, v13, v14, v15);
    this = (MapGimmickComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42EBAE4 = 1;
  }
  if ( !prefab )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        prefab,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
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
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v20 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v20, gameObject, mapCamera, 0LL);
      return (CommonEffectComponent_o *)v20;
    }
LABEL_23:
    sub_B5D69C(this, prefab);
  }
  v22 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    prefab,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v22,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v20 = (MapEffectComponent_o *)this;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v24 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_32436524(v23, v24, 0LL);
      return (CommonEffectComponent_o *)v20;
    }
    goto LABEL_23;
  }
  return (CommonEffectComponent_o *)v20;
}


UnityEngine_GameObject_o *__fastcall MapGimmickComponent__GetEffectPrefab(
        MapGimmickComponent_o *this,
        System_String_o *effectPrefabName,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21

  if ( (byte_42EBAE3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_AssetData_GetObject_GameObject____68807504,
      (_DWORD)effectPrefabName,
      (_DWORD)assetData,
      multiAssetData);
    this = (MapGimmickComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EBAE3 = 1;
  }
  if ( !assetData )
    sub_B5D69C(this, effectPrefabName);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             effectPrefabName,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-4h] BYREF

  v9 = id;
  if ( (byte_42EBADC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9034/*"MapGimmick_"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v4, v5, v6);
    byte_42EBADC = 1;
  }
  v7 = System_Int32__ToString_39741776((int32_t)&v9, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_9034/*"MapGimmick_"*/, v7, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42EBAE5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBAE5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL);
  if ( v8 )
    return 0LL;
  if ( !prefab )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      prefab,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( v8 )
    return 0LL;
  if ( !Component_srcLineSprite )
LABEL_15:
    sub_B5D69C(v8, v9);
  return MapGimmickRandomEffectComponent__GetRandomElement(
           (MapGimmickRandomEffectComponent_o *)Component_srcLineSprite,
           v9);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapGimmickComponent_o *v4; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v4 = this;
  if ( (byte_42EBAE6 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_B5D5C4(
                                      &Method_CStateManager_MapGimmickComponent__getState__,
                                      (_DWORD)method,
                                      v2,
                                      v3);
    byte_42EBAE6 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v25; // x8
  struct System_String_o *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v34; // x0
  __int64 v35; // x1
  struct UISprite_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42EBADF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UISprite___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&string_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13156/*"Sprite"*/, v15, v16, v17);
    byte_42EBADF = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mHideSeName,
    (System_Int32_array **)Empty,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v25 = string_TypeInfo->static_fields;
  v26 = v25->Empty;
  this->fields.mDispSeName = v25->Empty;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mDispSeName,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v33 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v33, (System_String_o *)StringLiteral_13156/*"Sprite"*/, 0LL);
  GameObjectExtensions__SetParent(v33, (UnityEngine_Component_o *)this, 0LL);
  if ( !v33
    || (v34 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                v33,
                (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_B5D69C(v34, v35);
  }
  v36 = (struct UISprite_o *)v34;
  UIWidget__SetDimensions((UIWidget_o *)v34, 64, 64, 0LL);
  this->fields.mSprite = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSprite,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


bool __fastcall MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  MapControl_WarInfo_o *Master_WarQuestSelectionMaster; // x0
  WarEntity_c *klass; // x8
  __int64 v12; // x8
  int32_t EventId; // w0
  int32_t v14; // w19

  if ( (byte_42EBAEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v7, v8, v9);
    byte_42EBAEE = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  Master_WarQuestSelectionMaster = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (MapControl_WarInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_WarQuestSelectionMaster[3].fields.mine->klass;
  if ( !klass )
    goto LABEL_22;
  v12 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v12 )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = *(MapControl_WarInfo_o **)(v12 + 328);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  EventId = MapControl_WarInfo__GetEventId(Master_WarQuestSelectionMaster, 0LL);
  if ( EventId < 1 )
    return 0;
  v14 = EventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapControl_WarInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_22:
    sub_B5D69C(Master_WarQuestSelectionMaster, method);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Master_WarQuestSelectionMaster, v14, 0, 0LL);
}


bool __fastcall MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_42EBAE1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBAE1 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this->fields.commonEffectComponent;
  if ( !v8 )
    sub_B5D69C(v6, v7);
  return v8->fields.isTouched;
}


void __fastcall MapGimmickComponent__OnGimmickTouched(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  int v10; // w2
  __int64 v11; // x3
  ClientMissionManager_o *Instance; // x21
  MapControl_WarInfo_o *EventId; // x0
  WarEntity_c *klass; // x8
  __int64 v15; // x8

  if ( (byte_42EBAE2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__,
      (_DWORD)mapGimmickEntity,
      (_DWORD)touchCallback,
      method);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v6, v7, v8);
    byte_42EBAE2 = 1;
  }
  Instance = (ClientMissionManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v9, v10, v11);
    byte_42E4B1E = 1;
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
    || (v15 = *(_QWORD *)&klass->_2.static_fields_size) == 0
    || (EventId = *(MapControl_WarInfo_o **)(v15 + 328)) == 0LL
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), !mapGimmickEntity)
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(Instance, (int32_t)EventId, mapGimmickEntity->fields.id, 0LL),
        (EventId = (MapControl_WarInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(EventId, v9);
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
  MapGimmickComponent__SetDispAnim_30977136(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_30977136(this, is_disp, 0.0, 0, v3);
}


void __fastcall MapGimmickComponent__SetDispAnim_30977136(
        MapGimmickComponent_o *this,
        bool is_disp,
        float time,
        bool is_play_se,
        const MethodInfo *method)
{
  char v9; // w1
  char v10; // w2
  __int64 v11; // x3
  char v12; // w1
  char v13; // w2
  __int64 v14; // x3
  char v15; // w1
  char v16; // w2
  __int64 v17; // x3
  char v18; // w1
  char v19; // w2
  __int64 v20; // x3
  char v21; // w1
  char v22; // w2
  __int64 v23; // x3
  char v24; // w1
  char v25; // w2
  __int64 v26; // x3
  char v27; // w1
  char v28; // w2
  __int64 v29; // x3
  char v30; // w1
  char v31; // w2
  __int64 v32; // x3
  __int64 v33; // x22
  UnityEngine_Component_o *mSprite; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  struct CommonEffectComponent_o *v45; // x20
  System_Action_o *v46; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x8
  System_String_o *v56; // x21
  System_Action_o *v57; // x23
  EasingObject_o *v58; // x24
  System_Action_o *v59; // x25
  struct CommonEffectComponent_o *v60; // x20
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_42EBAE9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, is_disp, is_play_se, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10, v11);
    sub_B5D5C4(&Method_MapGimmickComponent_StateDispAnimEnd__, v12, v13, v14);
    sub_B5D5C4(&Method_MapGimmickComponent_StateHideAnimEnd__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SoundManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__, v27, v28, v29);
    sub_B5D5C4(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo, v30, v31, v32);
    byte_42EBAE9 = 1;
  }
  v33 = sub_B5D694(MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass38_0___ctor((MapGimmickComponent___c__DisplayClass38_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_39;
  *(_QWORD *)(v33 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  MapGimmickComponent__StartActionEffect(this, v42);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v43);
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
                                                  (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v33 + 32) = Component_UIWidget;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 32), Component_UIWidget, v49, v50, v51, v52, v53, v54);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_39;
    *(float *)(v33 + 28) = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&mSprite->klass[1]._1.this_arg.bits)(
                             mSprite,
                             mSprite->klass[1]._1.element_class);
    *(_DWORD *)(v33 + 24) = is_disp;
    if ( is_disp )
      v55 = 56LL;
    else
      v55 = 48LL;
    v56 = *(System_String_o **)((char *)&this->klass + v55);
    v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v33,
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
      v58 = *(EasingObject_o **)(v33 + 32);
      v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v33,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0LL);
      if ( !v58 )
        goto LABEL_39;
      EasingObject__Play(v58, time, v59, v57, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v56, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v56, 0LL);
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
    v45 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v45 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v45->klass->vtable._6_ForceStart.method)(
          v45,
          1LL,
          v46,
          v45->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_39:
      sub_B5D69C(mSprite, v35);
    }
    if ( !v45 )
      goto LABEL_39;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v60 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v60 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0LL);
      if ( !mSprite )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v62);
    }
    else
    {
      v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v61, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v60 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v60->klass->vtable._8_Stop.method)(
                                             v60,
                                             0LL,
                                             v61,
                                             v60->klass->vtable._9_ForceStop.methodPtr);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_39;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
}


void __fastcall MapGimmickComponent__SetDisplayByRaidProgress(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x1
  struct MapControl_MapGimmickInfo_o *v20; // x8
  int32_t dispType; // w8
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x3
  int32_t v24; // w1

  if ( (byte_42EBAED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__, v5, v6, v7);
    sub_B5D5C4(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v14, v15, v16);
    byte_42EBAED = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_19;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             0LL);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_19;
  v18 = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, method);
  if ( v18 && !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)v18, v19) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_22302164(
                                                                 (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                 this->fields.mMapCtrl_MapGimmickInfo,
                                                                 0LL);
      v20 = this->fields.mMapCtrl_MapGimmickInfo;
      if ( v20 )
      {
        dispType = v20->fields.dispType;
        if ( dispType != 0 || ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) == 0 )
        {
          if ( dispType != 1 || (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) == 0 )
            return;
          v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__,
            0LL);
          v24 = 2;
        }
        else
        {
          v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__,
            0LL);
          v24 = 3;
        }
        MapGimmickComponent__SetState(this, v24, v22, v23);
        return;
      }
    }
LABEL_19:
    sub_B5D69C(mMapCtrl_MapGimmickInfo, method);
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
  sub_B5D560(
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Action_o *v48; // x21
  EasingObject_o *v49; // x22
  System_Action_o *v50; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_42EBAEA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, easeType, (_DWORD)callback, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13, v14, v15);
    sub_B5D5C4(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__, v16, v17, v18);
    sub_B5D5C4(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__, v19, v20, v21);
    sub_B5D5C4(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo, v22, v23, v24);
    byte_42EBAEA = 1;
  }
  v25 = sub_B5D694(MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass39_0___ctor((MapGimmickComponent___c__DisplayClass39_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_10;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 40) = callback;
  *(float *)(v25 + 24) = x;
  *(float *)(v25 + 28) = y;
  *(float *)(v25 + 32) = z;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 40), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v25 + 64) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 64), Component_UIWidget, v42, v43, v44, v45, v46, v47);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v25 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v25,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v49 = *(EasingObject_o **)(v25 + 64);
    v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v25,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0LL);
    if ( v49 )
    {
      EasingObject__Play(v49, time, v50, v48, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(transform, v27);
  }
  ActionExtensions__Call(v48, 0LL);
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

  if ( (byte_42EBAE7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MapGimmickComponent__setState__, state, (_DWORD)end_act, method);
    byte_42EBAE7 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B5D560(
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
    sub_B5D69C(0LL, v12);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v13,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_MapGimmickComponent__setState__);
}


void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EBAEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, enabled, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EBAEC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B5D69C(gameObject, v10);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  __int64 v98; // x23
  MapGimmickEntity_o *IsMonoColorRect; // x0
  const MethodInfo *v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **Mine; // x0
  __int64 v120; // x22
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_String_o *v127; // x27
  UnityEngine_Behaviour_o **p_mSprite; // x19
  UISprite_o *mSprite; // x26
  AssetData_o *v130; // x20
  System_String_o *v131; // x0
  System_String_o *v132; // x0
  UISprite_o *v133; // x28
  UnityEngine_Behaviour_o *v134; // x26
  UnityEngine_Object_o *klass; // x28
  bool v136; // w0
  System_String_o *v137; // x26
  AssetData_o *v138; // x28
  AssetData_o *v139; // x20
  UnityEngine_Behaviour_o *v140; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v142; // x0
  System_String_o *v143; // x0
  const MethodInfo *v144; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v147; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  UnityEngine_Object_o *v156; // x26
  int v157; // w2
  __int64 v158; // x3
  __int64 v159; // x8
  __int64 v160; // x8
  int32_t EventId; // w26
  UnityEngine_GameObject_o *v162; // x26
  bool v163; // w1
  float v164; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v166; // q0
  struct CommonEffectComponent_o *v167; // x24
  System_Action_o *v168; // x25
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  float v175; // s0
  float v176; // s1
  float v177; // s2
  float v178; // s9
  float v179; // s8
  float v180; // s10
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *v182; // x24
  __int64 v183; // x25
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  int v190; // w2
  __int64 v191; // x3
  __int64 v192; // x8
  __int64 v193; // x8
  int32_t v194; // w26
  DataManager_o *v195; // x23
  System_Int32_array **v196; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  __int64 v203; // x8
  EventMissionMaster_o *v204; // x23
  System_Int32_array **EventMissionList_25993164; // x0
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Collections_Generic_List_EventDelegate__o *v212; // x23
  EventDelegate_Callback_o *v213; // x24
  int32_t v214; // w0
  int actionEffectId; // t1
  System_String_o *v216; // x0
  System_String_o *v217; // x0
  const MethodInfo *v218; // x4
  UnityEngine_Object_o *v219; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v220; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v221; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  UnityEngine_GameObject_o *v228; // x20
  UnityEngine_GameObject_o *v229; // x0
  UnityEngine_Color_o color; // [xsp+10h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v233; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAE0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)mg_inf, (_DWORD)mapCamera, atlases);
    sub_B5D5C4(&AtlasManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v29, v30, v31);
    sub_B5D5C4(&EventDelegate_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v35, v36, v37);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UIButton___, v38, v39, v40);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v41, v42, v43);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v44, v45, v46);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v47, v48, v49);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v50, v51, v52);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56, v57, v58);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v59, v60, v61);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__, v68, v69, v70);
    sub_B5D5C4(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v74, v75, v76);
    sub_B5D5C4(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_23586/*"white00"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_986/*"000000"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_19299/*"gimmick_"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_9016/*"MapGimmickEffect_"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_1/*""*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_9015/*"MapGimmickActionEffect_"*/, v95, v96, v97);
    byte_42EBAE0 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  v98 = sub_B5D694(MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass23_0___ctor((MapGimmickComponent___c__DisplayClass23_0_o *)v98, 0LL);
  if ( !v98 )
    goto LABEL_149;
  *(_QWORD *)(v98 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v98 + 16),
    (System_Int32_array **)this,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  *(_QWORD *)(v98 + 32) = touchCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v98 + 32),
    (System_Int32_array **)touchCallback,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (System_Int32_array **)mg_inf,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_149;
  Mine = (System_Int32_array **)MapControl_MapGimmickInfo__GetMine(mg_inf, 0LL);
  *(_QWORD *)(v98 + 24) = Mine;
  v120 = v98 + 24;
  sub_B5D560((BattleServantConfConponent_o *)(v98 + 24), Mine, v121, v122, v123, v124, v125, v126);
  IsMonoColorRect = *(MapGimmickEntity_o **)(v98 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, v100);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    v127 = (System_String_o *)StringLiteral_23586/*"white00"*/;
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    mSprite = this->fields.mSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v130 = multiAssetData;
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)v120 )
      goto LABEL_149;
    v130 = multiAssetData;
    v131 = System_Int32__ToString_39741776(
             (unsigned int)*(_QWORD *)v120 + 24,
             (System_String_o *)StringLiteral_986/*"000000"*/,
             0LL);
    v132 = System_String__Concat_44577788((System_String_o *)StringLiteral_19299/*"gimmick_"*/, v131, 0LL);
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    v133 = this->fields.mSprite;
    v127 = v132;
    IsMonoColorRect = (MapGimmickEntity_o *)UIAtlas__GetUIAtlasBySpriteName(atlases, v132, 0LL);
    if ( !v133 )
      goto LABEL_149;
    UISprite__set_atlas(v133, (UIAtlas_o *)IsMonoColorRect, 0LL);
  }
  v134 = *p_mSprite;
  if ( !*p_mSprite )
    goto LABEL_149;
  klass = (UnityEngine_Object_o *)v134[19].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v136 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v134, v136, 0LL);
  IsMonoColorRect = *(MapGimmickEntity_o **)v120;
  if ( !*(_QWORD *)v120 )
    goto LABEL_149;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetColorCodeFromScript(IsMonoColorRect, v100);
  if ( !*p_mSprite )
    goto LABEL_149;
  v137 = (System_String_o *)IsMonoColorRect;
  v138 = v130;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Behaviour__get_enabled(*p_mSprite, 0LL);
  v139 = assetData;
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v127, 0LL);
    IsMonoColorRect = *(MapGimmickEntity_o **)v120;
    if ( !*(_QWORD *)v120 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, v100);
    v140 = *p_mSprite;
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_149;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v140 )
        goto LABEL_149;
      UIWidget__SetDimensions((UIWidget_o *)*p_mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v140 )
        goto LABEL_149;
      IsMonoColorRect = (MapGimmickEntity_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v140->klass[2]._1.typeMetadataHandle)(
                                                *p_mSprite,
                                                v140->klass[2]._1.interopData);
    }
    if ( !*(_QWORD *)v120 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_149;
    UIWidget__set_depth(
      (UIWidget_o *)IsMonoColorRect,
      *(_DWORD *)(*(_QWORD *)v120 + 36LL) + this->fields.mDepthBase,
      0LL);
    if ( !*(_QWORD *)v120 )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    v164 = this->fields.mScaleBase * (float)((float)*(int *)(*(_QWORD *)v120 + 80LL) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
    GameObjectExtensions__SetLocalScale_32432652(gameObject, v164, 0LL);
    if ( !System_String__IsNullOrEmpty(v137, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v137, &color, 0LL);
      IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
      if ( !*p_mSprite )
        goto LABEL_149;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, color, 0LL);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    LODWORD(v166) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v166 = 0.0;
    (*(void (__fastcall **)(MapGimmickEntity_o *, void *, long double))&IsMonoColorRect->klass[1]._1.byval_arg.bits)(
      IsMonoColorRect,
      IsMonoColorRect->klass[1]._1.this_arg.data,
      v166);
  }
  else
  {
    if ( !*(_QWORD *)v120 )
      goto LABEL_149;
    v142 = System_Int32__ToString((unsigned int)*(_QWORD *)v120 + 24, 0LL);
    v143 = System_String__Concat_44577788((System_String_o *)StringLiteral_9016/*"MapGimmickEffect_"*/, v142, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab((MapGimmickComponent_o *)v143, v143, assetData, v138, v144);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v100);
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
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v147);
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      this->fields.commonEffectComponent = CommonEffectComponent;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.commonEffectComponent,
        (System_Int32_array **)CommonEffectComponent,
        v150,
        v151,
        v152,
        v153,
        v154,
        v155);
      v156 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v156, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v100, v157, v158);
          byte_42E4B1E = 1;
        }
        IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        }
        v159 = **(_QWORD **)&IsMonoColorRect[1].fields.scale;
        if ( !v159 )
          goto LABEL_149;
        v160 = *(_QWORD *)(v159 + 256);
        if ( !v160 )
          goto LABEL_149;
        IsMonoColorRect = *(MapGimmickEntity_o **)(v160 + 328);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)IsMonoColorRect, 0LL);
        IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)IsMonoColorRect,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_149;
        DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)IsMonoColorRect,
          &entity,
          EventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          v162 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          IsMonoColorRect = (MapGimmickEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_149;
          IsMonoColorRect = (MapGimmickEntity_o *)QuestTree__CheckMapGimmickCond_22302164(
                                                    (QuestTree_o *)IsMonoColorRect,
                                                    mg_inf,
                                                    0LL);
          if ( !v162 )
            goto LABEL_149;
          v163 = (unsigned __int8)IsMonoColorRect & 1;
          IsMonoColorRect = (MapGimmickEntity_o *)v162;
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
          v163 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v163, 0LL);
        IsMonoColorRect = *(MapGimmickEntity_o **)v120;
        if ( !*(_QWORD *)v120 )
          goto LABEL_149;
        IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetUseAnimFromScript(IsMonoColorRect, v100);
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
        v167 = *p_commonEffectComponent;
        v168 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v168,
          (Il2CppObject *)v98,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v167 )
          goto LABEL_149;
        v167->fields.touchCallback = v168;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v167->fields.touchCallback,
          (System_Int32_array **)v168,
          v169,
          v170,
          v171,
          v172,
          v173,
          v174);
      }
    }
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v120;
  if ( !*(_QWORD *)v120 )
    goto LABEL_149;
  *(UnityEngine_Vector3_o *)&v175 = MapGimmickEntity__GetTouchSize(IsMonoColorRect, v100);
  if ( v175 <= 0.0 )
    goto LABEL_130;
  v178 = v176;
  if ( v176 <= 0.0 )
    goto LABEL_130;
  v179 = v175;
  v180 = v177;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)IsMonoColorRect,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_srcLineSprite = (UnityEngine_Object_o *)IsMonoColorRect;
  }
  if ( !Component_srcLineSprite )
    goto LABEL_149;
  v233.fields.x = v179;
  v233.fields.y = v178;
  v233.fields.z = v180;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, v233, 0LL);
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_149;
  v182 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)IsMonoColorRect,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v182, 0LL, 0LL) )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v182 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)IsMonoColorRect,
                                     (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v120;
  if ( !*(_QWORD *)v120 )
LABEL_149:
    sub_B5D69C(IsMonoColorRect, v100);
  if ( MapGimmickEntity__GetScriptType(IsMonoColorRect, v100) == 1 )
  {
    v183 = sub_B5D694(MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    MapGimmickComponent___c__DisplayClass23_1___ctor((MapGimmickComponent___c__DisplayClass23_1_o *)v183, 0LL);
    if ( !v183 )
      goto LABEL_149;
    *(_QWORD *)(v183 + 32) = v98;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v183 + 32),
      (System_Int32_array **)v98,
      v184,
      v185,
      v186,
      v187,
      v188,
      v189);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v100, v190, v191);
      byte_42E4B1E = 1;
    }
    IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    v192 = **(_QWORD **)&IsMonoColorRect[1].fields.scale;
    if ( !v192 )
      goto LABEL_149;
    v193 = *(_QWORD *)(v192 + 256);
    if ( !v193 )
      goto LABEL_149;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v193 + 328);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v194 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)IsMonoColorRect, 0LL);
    IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v195 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsMonoColorRect,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    v196 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)IsMonoColorRect,
                                    v194,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v183 + 16) = v196;
    sub_B5D560((BattleServantConfConponent_o *)(v183 + 16), v196, v197, v198, v199, v200, v201, v202);
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v195,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v203 = *(_QWORD *)(v183 + 32);
    if ( !v203 )
      goto LABEL_149;
    v204 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v203 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_149;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetEventMissionIdList(IsMonoColorRect, v100);
    if ( !v204 )
      goto LABEL_149;
    EventMissionList_25993164 = (System_Int32_array **)EventMissionMaster__getEventMissionList_25993164(
                                                         v204,
                                                         (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                                         0LL);
    *(_QWORD *)(v183 + 24) = EventMissionList_25993164;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v183 + 24),
      EventMissionList_25993164,
      v206,
      v207,
      v208,
      v209,
      v210,
      v211);
    if ( !v182 )
      goto LABEL_149;
    v212 = (System_Collections_Generic_List_EventDelegate__o *)v182[8].klass;
    v213 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v213,
      (Il2CppObject *)v183,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Add(v212, v213, 0LL);
  }
LABEL_130:
  IsMonoColorRect = *(MapGimmickEntity_o **)v120;
  if ( !*(_QWORD *)v120 )
    goto LABEL_149;
  actionEffectId = IsMonoColorRect->fields.actionEffectId;
  v214 = (_DWORD)IsMonoColorRect + 100;
  if ( actionEffectId >= 1 )
  {
    v216 = System_Int32__ToString(v214, 0LL);
    v217 = System_String__Concat_44577788((System_String_o *)StringLiteral_9015/*"MapGimmickActionEffect_"*/, v216, 0LL);
    v219 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     (MapGimmickComponent_o *)v217,
                                     v217,
                                     v139,
                                     v138,
                                     v218);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(v219, 0LL, 0LL);
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !v219 )
        goto LABEL_149;
      v220 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v219,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v220, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v221 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 v220,
                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v221;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.actionEffect,
          (System_Int32_array **)v221,
          v222,
          v223,
          v224,
          v225,
          v226,
          v227);
        IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v228 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          v229 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_32436524(v228, v229, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *actionEffect; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42EBAE8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBAE8 = 1;
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
      sub_B5D69C(gameObject, v6);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v9; // x2

  if ( (byte_42EBAEB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBAEB = 1;
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
      sub_B5D69C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v9);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v7);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_MapGimmickComponent__o *mFSM; // x0

  if ( (byte_42EBADE & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_MapGimmickComponent__update__, (_DWORD)method, v2, v3);
    byte_42EBADE = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B5D69C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, that);
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
    sub_B5D69C(this, that);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5F22 & 1) == 0 )
  {
    sub_B5D5C4(&MapGimmickComponent_StateMapMain_TypeInfo, v1, v2, v3);
    byte_42E5F22 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int64_t Instance; // x0
  const MethodInfo *v18; // x1
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v20; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v22; // x8
  struct MapGimmickComponent_o *v23; // x8
  struct MapGimmickComponent_o *v24; // x8
  struct MapGimmickComponent_o *v25; // x8
  int32_t v26; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_42E5F21 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&MapGimmickComponent_StateMapMain_TypeInfo, v14, v15, v16);
    byte_42E5F21 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
    v20 = Instance;
    mOldDispTime = mThat->fields.mOldDispTime;
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    if ( (BYTE3(MapGimmickComponent_StateMapMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo);
      Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    }
    if ( v20 - mOldDispTime >= **(int **)(Instance + 184) )
    {
      v22 = this->fields.mThat;
      if ( !v22 )
        goto LABEL_37;
      v22->fields.mOldDispTime = v20;
      v23 = this->fields.mThat;
      if ( !v23 )
        goto LABEL_37;
      Instance = (int64_t)v23->fields.mMapCtrl_MapGimmickInfo;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)MapControl_MapGimmickInfo__GetMine((MapControl_MapGimmickInfo_o *)Instance, v18);
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
        v24 = this->fields.mThat;
        if ( !v24 )
          goto LABEL_37;
        if ( !v24->fields.isForceNotActive )
        {
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v25 = this->fields.mThat;
          if ( !v25 || !Instance )
            goto LABEL_37;
          Instance = QuestTree__CheckMapGimmickCond_22302164(
                       (QuestTree_o *)Instance,
                       v25->fields.mMapCtrl_MapGimmickInfo,
                       0LL);
          v24 = this->fields.mThat;
          if ( (Instance & 1) != 0 )
          {
            if ( v24 )
            {
              v26 = 3;
LABEL_36:
              MapGimmickComponent__SetState(v24, v26, 0LL, 0LL);
              return;
            }
            goto LABEL_37;
          }
          if ( !v24 )
            goto LABEL_37;
        }
        if ( !v24->fields.isForceLoop )
        {
          v26 = 2;
          goto LABEL_36;
        }
        mMapCtrl_MapGimmickInfo = v24->fields.mMapCtrl_MapGimmickInfo;
        if ( !mMapCtrl_MapGimmickInfo )
LABEL_37:
          sub_B5D69C(Instance, v18);
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
  sub_B5D560(&this->fields);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  MapGimmickEntity_o *Instance; // x0
  __int64 v15; // x1
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v17; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v18; // x8
  System_String_o *v19; // x21
  System_Action_o *_9__2; // x25
  System_String_o *v21; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23

  if ( (byte_42E5F1F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__, v11, v12, v13);
    byte_42E5F1F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  v17 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v18 = this->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_14;
  v19 = (System_String_o *)Instance;
  Instance = v18->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v21 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v17 )
LABEL_14:
    sub_B5D69C(Instance, v15);
  CommonUI__OpenEventMissionListDialog(v17, v19, v21, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_1___Setup_b__2(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapGimmickComponent___c__DisplayClass23_1_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventMissionEntity_array *eventMissionEntList; // x9
  EventMissionEntity_o *v19; // x9
  int32_t id; // w21
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct EventDetailEntity_o *v22; // x8
  int v23; // w2
  __int64 v24; // x3
  int v25; // w8
  MapGimmickComponent___c__DisplayClass23_1_o *v26; // x21
  unsigned int v27; // w23
  MapGimmickComponent___c__DisplayClass23_1_c **v28; // x8
  MapGimmickComponent___c__DisplayClass23_1_c *v29; // x22
  int32_t name_high; // w21
  struct EventDetailEntity_o *v31; // x8
  struct EventDetailEntity_o *v32; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v34; // x19
  __int64 v35; // x0

  v4 = this;
  if ( (byte_42E5F20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E5F20 = 1;
  }
  if ( !byte_42E5F9D )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B5D5C4(
                                                            &EventRewardSaveData_TypeInfo,
                                                            (_DWORD)method,
                                                            v2,
                                                            v3);
    byte_42E5F9D = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v4->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
  {
LABEL_31:
    v35 = sub_B5D6C8(this);
    sub_B5D668(v35, 0LL);
  }
  v19 = eventMissionEntList->m_Items[0];
  if ( !v19 )
    goto LABEL_30;
  id = v19->fields.id;
  if ( !byte_42E5F9E )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B5D5C4(
                                                            &EventRewardSaveData_TypeInfo,
                                                            (_DWORD)method,
                                                            v2,
                                                            v3);
    byte_42E5F9E = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  }
  (*p_static_fields)->_MissionId_k__BackingField = id;
  eventDetailEnt = v4->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  v22 = v4->fields.eventDetailEnt;
  if ( !v22 )
    goto LABEL_30;
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneMaster__GetEntityList(
                                                          (EventRewardSceneMaster_o *)this,
                                                          v22->fields.eventId,
                                                          0LL);
  if ( !this )
    goto LABEL_30;
  v25 = (int)this->fields.eventMissionEntList;
  v26 = this;
  if ( v25 < 1 )
  {
LABEL_21:
    name_high = 0;
  }
  else
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= v25 )
        goto LABEL_31;
      v28 = &v26->klass + (int)v27;
      v29 = v28[4];
      if ( !v29 )
        goto LABEL_30;
      this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneEntity__IsEventMission(
                                                              (EventRewardSceneEntity_o *)v28[4],
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v25 = (int)v26->fields.eventMissionEntList;
      if ( (int)++v27 >= v25 )
        goto LABEL_21;
    }
    name_high = HIDWORD(v29->_1.name);
  }
  if ( !byte_42E563B )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B5D5C4(
                                                            &EventRewardSaveData_TypeInfo,
                                                            (_DWORD)method,
                                                            v23,
                                                            v24);
    byte_42E563B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v31 = v4->fields.eventDetailEnt;
  if ( !v31
    || (EventRewardSaveData__SaveCurrentEventData(v31->fields.eventId, 0LL), (v32 = v4->fields.eventDetailEnt) == 0LL)
    || (eventId = v32->fields.eventId,
        v34 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_17509080(v34, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v34)
    || (SceneJumpInfo__SetReturnNowScene(v34, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v34, 0LL);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(_4__this, method);
  }
  v11 = (float)(v8 - z) * v10;
  v12 = vadd_f32(v5, vmul_n_f32(vsub_f32(v7, v5), v10)).n64_u64[0];
  v13 = z + v11;
  v14 = HIDWORD(v12);
  UnityEngine_Transform__set_localPosition(v9, *(UnityEngine_Vector3_o *)&v12, 0LL);
}