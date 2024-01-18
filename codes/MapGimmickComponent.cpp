void __fastcall MapGimmickComponent___ctor(MapGimmickComponent_o *this, const MethodInfo *method)
{
  void *v3; // x1
  void *v4; // x1

  if ( (byte_418588D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418588D = 1;
  }
  this->fields.mDepthBase = 30;
  this->fields.mEasingType = 17;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  v3 = StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.mHideSeName, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.mDispSeName, v4);
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
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
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

  if ( (byte_418587D & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MapGimmickComponent___ctor__, method);
    sub_B2C35C(&Method_CStateManager_MapGimmickComponent__add__, v3);
    sub_B2C35C(&CStateManager_MapGimmickComponent__TypeInfo, v4);
    sub_B2C35C(&MapGimmickComponent_StateDispAnim_TypeInfo, v5);
    sub_B2C35C(&MapGimmickComponent_StateHideAnim_TypeInfo, v6);
    sub_B2C35C(&MapGimmickComponent_StateMapMain_TypeInfo, v7);
    sub_B2C35C(&MapGimmickComponent_StateNone_TypeInfo, v8);
    byte_418587D = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_MapGimmickComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2A08354 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v10;
    sub_B2C2F8(&this->fields.mFSM, v10);
    mFSM = this->fields.mFSM;
    v12 = (MapGimmickComponent_StateNone_o *)sub_B2C42C(MapGimmickComponent_StateNone_TypeInfo);
    MapGimmickComponent_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2A08420 *)Method_CStateManager_MapGimmickComponent__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (MapGimmickComponent_StateMapMain_o *)sub_B2C42C(MapGimmickComponent_StateMapMain_TypeInfo);
    MapGimmickComponent_StateMapMain___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2A08420 *)Method_CStateManager_MapGimmickComponent__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (MapGimmickComponent_StateHideAnim_o *)sub_B2C42C(MapGimmickComponent_StateHideAnim_TypeInfo);
    MapGimmickComponent_StateHideAnim___ctor(v18, 0LL);
    if ( !v17
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_2A08420 *)Method_CStateManager_MapGimmickComponent__add__),
          v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v20 = (MapGimmickComponent_StateDispAnim_o *)sub_B2C42C(MapGimmickComponent_StateDispAnim_TypeInfo),
          MapGimmickComponent_StateDispAnim___ctor(v20, 0LL),
          !v19) )
    {
LABEL_9:
      sub_B2C434(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2A08420 *)Method_CStateManager_MapGimmickComponent__add__);
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
    sub_B2C434(mMapCtrl_MapGimmickInfo, method);
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
  if ( (byte_4185883 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, prefab);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___, v9);
    this = (MapGimmickComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4185883 = 1;
  }
  if ( !prefab )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        prefab,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
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
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v12, gameObject, mapCamera, 0LL);
      return (CommonEffectComponent_o *)v12;
    }
LABEL_23:
    sub_B2C434(this, prefab);
  }
  v14 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    prefab,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v16 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_31331952(v15, v16, 0LL);
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

  if ( (byte_4185882 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, effectPrefabName);
    this = (MapGimmickComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4185882 = 1;
  }
  if ( !assetData )
    sub_B2C434(this, effectPrefabName);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             effectPrefabName,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
  if ( (byte_418587C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8941/*"MapGimmick_"*/, method);
    sub_B2C35C(&StringLiteral_962/*"00"*/, v2);
    byte_418587C = 1;
  }
  v3 = System_Int32__ToString_38381416((int32_t)&v5, (System_String_o *)StringLiteral_962/*"00"*/, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_8941/*"MapGimmick_"*/, v3, 0LL);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_4185884 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185884 = 1;
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
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
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
    sub_B2C434(v4, v5);
  return MapGimmickRandomEffectComponent__GetRandomElement(
           (MapGimmickRandomEffectComponent_o *)Component_srcLineSprite,
           v5);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4185885 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_B2C35C(&Method_CStateManager_MapGimmickComponent__getState__, method);
    byte_4185885 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
  return mFSM->fields.m_state;
}


void __fastcall MapGimmickComponent__InitDefaultParam(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v13; // x8
  struct System_String_o *v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v16; // x0
  __int64 v17; // x1
  struct UISprite_o *v18; // x20

  if ( (byte_418587F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UISprite___, method);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_13000/*"Sprite"*/, v5);
    byte_418587F = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_B2C2F8(&this->fields.mHideSeName, Empty);
  v13 = string_TypeInfo->static_fields;
  v14 = v13->Empty;
  this->fields.mDispSeName = v13->Empty;
  sub_B2C2F8(&this->fields.mDispSeName, v14);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v15 = (UnityEngine_GameObject_o *)sub_B2C42C(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v15, (System_String_o *)StringLiteral_13000/*"Sprite"*/, 0LL);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)this, 0LL);
  if ( !v15
    || (v16 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                v15,
                (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_B2C434(v16, v17);
  }
  v18 = (struct UISprite_o *)v16;
  UIWidget__SetDimensions((UIWidget_o *)v16, 64, 64, 0LL);
  this->fields.mSprite = v18;
  sub_B2C2F8(&this->fields.mSprite, v18);
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

  if ( (byte_4185881 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, mapGimmickEntity);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v6);
    byte_4185881 = 1;
  }
  Instance = (ClientMissionManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v7);
    byte_4183C65 = 1;
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
        (EventId = (MapControl_WarInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(EventId, v7);
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
  MapGimmickComponent__SetDispAnim_20992324(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_20992324(this, is_disp, 0.0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetDispAnim_20992324(
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
  MapGimmickComponent___c__DisplayClass37_0_o *v17; // x22
  UnityEngine_Component_o *mSprite; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  struct CommonEffectComponent_o *v23; // x20
  System_Action_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  long double v27; // q0
  __int64 v28; // x8
  System_String_o *v29; // x21
  System_Action_o *v30; // x23
  EasingObject_o *eo; // x24
  System_Action_o *v32; // x25
  struct CommonEffectComponent_o *v33; // x20
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4185888 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, is_disp);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B2C35C(&Method_MapGimmickComponent_StateDispAnimEnd__, v10);
    sub_B2C35C(&Method_MapGimmickComponent_StateHideAnimEnd__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    sub_B2C35C(&Method_MapGimmickComponent___c__DisplayClass37_0__SetDispAnim_b__0__, v14);
    sub_B2C35C(&Method_MapGimmickComponent___c__DisplayClass37_0__SetDispAnim_b__1__, v15);
    sub_B2C35C(&MapGimmickComponent___c__DisplayClass37_0_TypeInfo, v16);
    byte_4185888 = 1;
  }
  v17 = (MapGimmickComponent___c__DisplayClass37_0_o *)sub_B2C42C(MapGimmickComponent___c__DisplayClass37_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass37_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_39;
  v17->fields.__4__this = this;
  sub_B2C2F8(&v17->fields, this);
  MapGimmickComponent__StartActionEffect(this, v20);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v21);
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
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           gameObject,
                           (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    v17->fields.eo = (struct EasingObject_o *)Component_UIWidget;
    *(__n128 *)&v27 = sub_B2C2F8(&v17->fields.eo, Component_UIWidget);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_39;
    v17->fields.from = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *, long double))&mSprite->klass[1]._1.this_arg.bits)(
                         mSprite,
                         mSprite->klass[1]._1.element_class,
                         v27);
    v17->fields.to = is_disp;
    if ( is_disp )
      v28 = 56LL;
    else
      v28 = 48LL;
    v29 = *(System_String_o **)((char *)&this->klass + v28);
    v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass37_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v30, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      eo = v17->fields.eo;
      v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v17,
        Method_MapGimmickComponent___c__DisplayClass37_0__SetDispAnim_b__1__,
        0LL);
      if ( !eo )
        goto LABEL_39;
      EasingObject__Play(eo, time, v32, v30, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v29, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v29, 0LL);
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
    v23 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v23 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v23->klass->vtable._6_ForceStart.method)(
          v23,
          1LL,
          v24,
          v23->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_39:
      sub_B2C434(mSprite, v19);
    }
    if ( !v23 )
      goto LABEL_39;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
  }
  else
  {
    v33 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v33 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0LL);
      if ( !mSprite )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v35);
    }
    else
    {
      v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v33 )
        goto LABEL_39;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v33->klass->vtable._8_Stop.method)(
                                             v33,
                                             0LL,
                                             v34,
                                             v33->klass->vtable._9_ForceStop.methodPtr);
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
  struct MapControl_MapGimmickInfo_o *v8; // x8
  int32_t dispType; // w8
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x3
  int32_t v12; // w1

  if ( (byte_418588C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__44_0__, v3);
    sub_B2C35C(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__44_1__, v4);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v6);
    byte_418588C = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_18;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             0LL);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_18;
  if ( !MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, method) )
    return;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_MapGimmickInfo
    || (mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_21872636(
                                                                   (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                   this->fields.mMapCtrl_MapGimmickInfo,
                                                                   0LL),
        (v8 = this->fields.mMapCtrl_MapGimmickInfo) == 0LL) )
  {
LABEL_18:
    sub_B2C434(mMapCtrl_MapGimmickInfo, method);
  }
  dispType = v8->fields.dispType;
  if ( dispType == 0 && ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) != 0 )
  {
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MapGimmickComponent__SetDisplayByRaidProgress_b__44_0__, 0LL);
    v12 = 3;
LABEL_16:
    MapGimmickComponent__SetState(this, v12, v10, v11);
    return;
  }
  if ( dispType == 1 && (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) != 0 )
  {
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MapGimmickComponent__SetDisplayByRaidProgress_b__44_1__, 0LL);
    v12 = 2;
    goto LABEL_16;
  }
}


void __fastcall MapGimmickComponent__SetMapGimmickInfo(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  this->fields.mMapCtrl_MapGimmickInfo = mapGimmickInfo;
  sub_B2C2F8(&this->fields.mMapCtrl_MapGimmickInfo, mapGimmickInfo);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  System_Action_o *v22; // x21
  EasingObject_o *v23; // x22
  System_Action_o *v24; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_4185889 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&easeType);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_B2C35C(&Method_MapGimmickComponent___c__DisplayClass38_0__SetMoveAnim_b__0__, v14);
    sub_B2C35C(&Method_MapGimmickComponent___c__DisplayClass38_0__SetMoveAnim_b__1__, v15);
    sub_B2C35C(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo, v16);
    byte_4185889 = 1;
  }
  v17 = sub_B2C42C(MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass38_0___ctor((MapGimmickComponent___c__DisplayClass38_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_B2C2F8(v17 + 16, this);
  *(_QWORD *)(v17 + 40) = callback;
  *(float *)(v17 + 24) = x;
  *(float *)(v17 + 28) = y;
  *(float *)(v17 + 32) = z;
  sub_B2C2F8(v17 + 40, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 64) = Component_UIWidget;
  sub_B2C2F8(v17 + 64, Component_UIWidget);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v17 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v17,
    Method_MapGimmickComponent___c__DisplayClass38_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v23 = *(EasingObject_o **)(v17 + 64);
    v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v17,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetMoveAnim_b__1__,
      0LL);
    if ( v23 )
    {
      EasingObject__Play(v23, time, v24, v22, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(transform, v19);
  }
  ActionExtensions__Call(v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent__SetState(
        MapGimmickComponent_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v8; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v9; // x0

  if ( (byte_4185886 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MapGimmickComponent__setState__, *(_QWORD *)&state);
    byte_4185886 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B2C2F8(p_mStateEndAct, end_act);
  v9 = (CStateManager_QAASpotStateController_IMapSpot__o *)*(p_mStateEndAct - 6);
  if ( !v9 )
    sub_B2C434(0LL, v8);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v9,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_MapGimmickComponent__setState__);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_418588B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, enabled);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418588B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B2C434(gameObject, v7);
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
  MapGimmickComponent___c__DisplayClass23_0_o *v42; // x23
  MapGimmickEntity_o *mg_ent; // x0
  const MethodInfo *v44; // x1
  MapGimmickEntity_o *Mine; // x0
  struct MapGimmickEntity_o **p_mg_ent; // x22
  System_String_o *v47; // x27
  UnityEngine_Behaviour_o **p_mSprite; // x19
  UISprite_o *mSprite; // x26
  AssetData_o *v50; // x20
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  UISprite_o *v53; // x28
  UnityEngine_Behaviour_o *v54; // x26
  UnityEngine_Object_o *klass; // x28
  bool v56; // w0
  System_String_o *v57; // x26
  AssetData_o *v58; // x28
  AssetData_o *v59; // x20
  UnityEngine_Behaviour_o *v60; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  const MethodInfo *v64; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v67; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  UnityEngine_Object_o *v70; // x26
  __int64 v71; // x8
  __int64 v72; // x8
  int32_t EventId; // w26
  UnityEngine_GameObject_o *v74; // x26
  bool v75; // w1
  float v76; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v78; // q0
  struct CommonEffectComponent_o *v79; // x24
  System_Action_o *v80; // x25
  float v81; // s0
  float v82; // s1
  float v83; // s2
  float v84; // s9
  float v85; // s8
  float v86; // s10
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *v88; // x24
  MapGimmickComponent___c__DisplayClass23_1_o *v89; // x25
  __int64 v90; // x8
  __int64 v91; // x8
  int32_t v92; // w26
  DataManager_o *v93; // x23
  WarEntity_o *v94; // x0
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  EventMissionMaster_o *v96; // x23
  EventMissionEntity_array *EventMissionList_24989380; // x0
  System_Collections_Generic_List_EventDelegate__o *v98; // x23
  EventDelegate_Callback_o *v99; // x24
  int32_t v100; // w0
  int actionEffectId; // t1
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  const MethodInfo *v104; // x4
  UnityEngine_Object_o *v105; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v106; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x20
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_Color_o color; // [xsp+10h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185880 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, mg_inf);
    sub_B2C35C(&AtlasManager_TypeInfo, v14);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v17);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v18);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v19);
    sub_B2C35C(&EventDelegate_TypeInfo, v20);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v21);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UIButton___, v22);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v23);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v24);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v25);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___, v26);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v29);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v30);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v31);
    sub_B2C35C(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__, v32);
    sub_B2C35C(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo, v33);
    sub_B2C35C(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__, v34);
    sub_B2C35C(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo, v35);
    sub_B2C35C(&StringLiteral_23275/*"white00"*/, v36);
    sub_B2C35C(&StringLiteral_966/*"000000"*/, v37);
    sub_B2C35C(&StringLiteral_19060/*"gimmick_"*/, v38);
    sub_B2C35C(&StringLiteral_8923/*"MapGimmickEffect_"*/, v39);
    sub_B2C35C(&StringLiteral_1/*""*/, v40);
    sub_B2C35C(&StringLiteral_8922/*"MapGimmickActionEffect_"*/, v41);
    byte_4185880 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  v42 = (MapGimmickComponent___c__DisplayClass23_0_o *)sub_B2C42C(MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
  MapGimmickComponent___c__DisplayClass23_0___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_149;
  v42->fields.__4__this = this;
  sub_B2C2F8(&v42->fields, this);
  v42->fields.touchCallback = touchCallback;
  sub_B2C2F8(&v42->fields.touchCallback, touchCallback);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_B2C2F8(&this->fields.mMapCtrl_MapGimmickInfo, mg_inf);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_149;
  Mine = MapControl_MapGimmickInfo__GetMine(mg_inf, 0LL);
  v42->fields.mg_ent = Mine;
  p_mg_ent = &v42->fields.mg_ent;
  sub_B2C2F8(&v42->fields.mg_ent, Mine);
  mg_ent = v42->fields.mg_ent;
  if ( !mg_ent )
    goto LABEL_149;
  mg_ent = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(mg_ent, v44);
  if ( ((unsigned __int8)mg_ent & 1) != 0 )
  {
    v47 = (System_String_o *)StringLiteral_23275/*"white00"*/;
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    mSprite = this->fields.mSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v50 = multiAssetData;
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*p_mg_ent )
      goto LABEL_149;
    v50 = multiAssetData;
    v51 = System_Int32__ToString_38381416((unsigned int)*p_mg_ent + 24, (System_String_o *)StringLiteral_966/*"000000"*/, 0LL);
    v52 = System_String__Concat_44305532((System_String_o *)StringLiteral_19060/*"gimmick_"*/, v51, 0LL);
    p_mSprite = (UnityEngine_Behaviour_o **)&this->fields.mSprite;
    v53 = this->fields.mSprite;
    v47 = v52;
    mg_ent = (MapGimmickEntity_o *)UIAtlas__GetUIAtlasBySpriteName(atlases, v52, 0LL);
    if ( !v53 )
      goto LABEL_149;
    UISprite__set_atlas(v53, (UIAtlas_o *)mg_ent, 0LL);
  }
  v54 = *p_mSprite;
  if ( !*p_mSprite )
    goto LABEL_149;
  klass = (UnityEngine_Object_o *)v54[19].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v56 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v54, v56, 0LL);
  mg_ent = *p_mg_ent;
  if ( !*p_mg_ent )
    goto LABEL_149;
  mg_ent = (MapGimmickEntity_o *)MapGimmickEntity__GetColorCodeFromScript(mg_ent, v44);
  if ( !*p_mSprite )
    goto LABEL_149;
  v57 = (System_String_o *)mg_ent;
  v58 = v50;
  mg_ent = (MapGimmickEntity_o *)UnityEngine_Behaviour__get_enabled(*p_mSprite, 0LL);
  v59 = assetData;
  if ( ((unsigned __int8)mg_ent & 1) != 0 )
  {
    mg_ent = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    UISprite__set_spriteName((UISprite_o *)mg_ent, v47, 0LL);
    mg_ent = *p_mg_ent;
    if ( !*p_mg_ent )
      goto LABEL_149;
    mg_ent = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(mg_ent, v44);
    v60 = *p_mSprite;
    if ( ((unsigned __int8)mg_ent & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_149;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v60 )
        goto LABEL_149;
      UIWidget__SetDimensions((UIWidget_o *)*p_mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v60 )
        goto LABEL_149;
      mg_ent = (MapGimmickEntity_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v60->klass[2]._1.typeMetadataHandle)(
                                       *p_mSprite,
                                       v60->klass[2]._1.interopData);
    }
    if ( !*p_mg_ent )
      goto LABEL_149;
    mg_ent = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !mg_ent )
      goto LABEL_149;
    UIWidget__set_depth((UIWidget_o *)mg_ent, (*p_mg_ent)->fields.depthOffset + this->fields.mDepthBase, 0LL);
    if ( !*p_mg_ent )
      goto LABEL_149;
    mg_ent = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    v76 = this->fields.mScaleBase * (float)((float)(*p_mg_ent)->fields.scale / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mg_ent, 0LL);
    GameObjectExtensions__SetLocalScale_31328080(gameObject, v76, 0LL);
    if ( !System_String__IsNullOrEmpty(v57, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v57, &color, 0LL);
      mg_ent = (MapGimmickEntity_o *)*p_mSprite;
      if ( !*p_mSprite )
        goto LABEL_149;
      UIWidget__set_color((UIWidget_o *)mg_ent, color, 0LL);
    }
    mg_ent = (MapGimmickEntity_o *)*p_mSprite;
    if ( !*p_mSprite )
      goto LABEL_149;
    LODWORD(v78) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v78 = 0.0;
    (*(void (__fastcall **)(MapGimmickEntity_o *, void *, long double))&mg_ent->klass[1]._1.byval_arg.bits)(
      mg_ent,
      mg_ent->klass[1]._1.this_arg.data,
      v78);
  }
  else
  {
    if ( !*p_mg_ent )
      goto LABEL_149;
    v62 = System_Int32__ToString((unsigned int)*p_mg_ent + 24, 0LL);
    v63 = System_String__Concat_44305532((System_String_o *)StringLiteral_8923/*"MapGimmickEffect_"*/, v62, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab((MapGimmickComponent_o *)v63, v63, assetData, v58, v64);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v44);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      mg_ent = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(MapGimmickRandomEffectElementComponent, 0LL, 0LL);
      if ( ((unsigned __int8)mg_ent & 1) != 0 )
      {
        if ( !MapGimmickRandomEffectElementComponent )
          goto LABEL_149;
        EffectPrefab = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)MapGimmickRandomEffectElementComponent,
                         0LL);
      }
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v67);
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      this->fields.commonEffectComponent = CommonEffectComponent;
      sub_B2C2F8(&this->fields.commonEffectComponent, CommonEffectComponent);
      v70 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v44);
          byte_4183C65 = 1;
        }
        mg_ent = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          mg_ent = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        }
        v71 = **(_QWORD **)&mg_ent[1].fields.scale;
        if ( !v71 )
          goto LABEL_149;
        v72 = *(_QWORD *)(v71 + 256);
        if ( !v72 )
          goto LABEL_149;
        mg_ent = *(MapGimmickEntity_o **)(v72 + 328);
        if ( !mg_ent )
          goto LABEL_149;
        EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)mg_ent, 0LL);
        mg_ent = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !mg_ent )
          goto LABEL_149;
        mg_ent = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)mg_ent,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !mg_ent )
          goto LABEL_149;
        DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)mg_ent,
          &entity,
          EventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          mg_ent = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mg_ent, 0LL);
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          mg_ent = (MapGimmickEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !mg_ent )
            goto LABEL_149;
          mg_ent = (MapGimmickEntity_o *)QuestTree__CheckMapGimmickCond_21872636((QuestTree_o *)mg_ent, mg_inf, 0LL);
          if ( !v74 )
            goto LABEL_149;
          v75 = (unsigned __int8)mg_ent & 1;
          mg_ent = (MapGimmickEntity_o *)v74;
        }
        else
        {
          mg_ent = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          mg_ent = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mg_ent, 0LL);
          if ( !mg_ent )
            goto LABEL_149;
          v75 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mg_ent, v75, 0LL);
        mg_ent = *p_mg_ent;
        if ( !*p_mg_ent )
          goto LABEL_149;
        mg_ent = (MapGimmickEntity_o *)MapGimmickEntity__GetUseAnimFromScript(mg_ent, v44);
        if ( (int)mg_ent >= 1 )
        {
          if ( !*p_commonEffectComponent )
            goto LABEL_149;
          (*p_commonEffectComponent)->fields.useAnimNum = (int)mg_ent;
        }
        mg_ent = (MapGimmickEntity_o *)*p_commonEffectComponent;
        if ( !*p_commonEffectComponent )
          goto LABEL_149;
        CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)mg_ent, 0LL);
        v79 = *p_commonEffectComponent;
        v80 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v80,
          (Il2CppObject *)v42,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v79 )
          goto LABEL_149;
        v79->fields.touchCallback = v80;
        sub_B2C2F8(&v79->fields.touchCallback, v80);
      }
    }
  }
  mg_ent = *p_mg_ent;
  if ( !*p_mg_ent )
    goto LABEL_149;
  *(UnityEngine_Vector3_o *)&v81 = MapGimmickEntity__GetTouchSize(mg_ent, v44);
  if ( v81 <= 0.0 )
    goto LABEL_130;
  v84 = v82;
  if ( v82 <= 0.0 )
    goto LABEL_130;
  v85 = v81;
  v86 = v83;
  mg_ent = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !mg_ent )
    goto LABEL_149;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)mg_ent,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mg_ent = (MapGimmickEntity_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)mg_ent & 1) != 0 )
  {
    mg_ent = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mg_ent )
      goto LABEL_149;
    mg_ent = (MapGimmickEntity_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)mg_ent,
                                     (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_srcLineSprite = (UnityEngine_Object_o *)mg_ent;
  }
  if ( !Component_srcLineSprite )
    goto LABEL_149;
  v113.fields.x = v85;
  v113.fields.y = v84;
  v113.fields.z = v86;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, v113, 0LL);
  mg_ent = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !mg_ent )
    goto LABEL_149;
  v88 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)mg_ent,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v88, 0LL, 0LL) )
  {
    mg_ent = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mg_ent )
      goto LABEL_149;
    v88 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                    (UnityEngine_GameObject_o *)mg_ent,
                                    (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  mg_ent = *p_mg_ent;
  if ( !*p_mg_ent )
LABEL_149:
    sub_B2C434(mg_ent, v44);
  if ( MapGimmickEntity__GetScriptType(mg_ent, v44) == 1 )
  {
    v89 = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B2C42C(MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    MapGimmickComponent___c__DisplayClass23_1___ctor(v89, 0LL);
    if ( !v89 )
      goto LABEL_149;
    v89->fields.CS___8__locals1 = v42;
    sub_B2C2F8(&v89->fields.CS___8__locals1, v42);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v44);
      byte_4183C65 = 1;
    }
    mg_ent = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      mg_ent = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    v90 = **(_QWORD **)&mg_ent[1].fields.scale;
    if ( !v90 )
      goto LABEL_149;
    v91 = *(_QWORD *)(v90 + 256);
    if ( !v91 )
      goto LABEL_149;
    mg_ent = *(MapGimmickEntity_o **)(v91 + 328);
    if ( !mg_ent )
      goto LABEL_149;
    v92 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)mg_ent, 0LL);
    mg_ent = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mg_ent )
      goto LABEL_149;
    v93 = (DataManager_o *)mg_ent;
    mg_ent = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)mg_ent,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !mg_ent )
      goto LABEL_149;
    v94 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)mg_ent,
            v92,
            (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    v89->fields.eventDetailEnt = (struct EventDetailEntity_o *)v94;
    sub_B2C2F8(&v89->fields, v94);
    mg_ent = (MapGimmickEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v93,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    CS___8__locals1 = v89->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_149;
    v96 = (EventMissionMaster_o *)mg_ent;
    mg_ent = CS___8__locals1->fields.mg_ent;
    if ( !mg_ent )
      goto LABEL_149;
    mg_ent = (MapGimmickEntity_o *)MapGimmickEntity__GetEventMissionIdList(mg_ent, v44);
    if ( !v96 )
      goto LABEL_149;
    EventMissionList_24989380 = EventMissionMaster__getEventMissionList_24989380(
                                  v96,
                                  (System_Collections_Generic_List_int__o *)mg_ent,
                                  0LL);
    v89->fields.eventMissionEntList = EventMissionList_24989380;
    sub_B2C2F8(&v89->fields.eventMissionEntList, EventMissionList_24989380);
    if ( !v88 )
      goto LABEL_149;
    v98 = (System_Collections_Generic_List_EventDelegate__o *)v88[8].klass;
    v99 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v99,
      (Il2CppObject *)v89,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Add(v98, v99, 0LL);
  }
LABEL_130:
  mg_ent = *p_mg_ent;
  if ( !*p_mg_ent )
    goto LABEL_149;
  actionEffectId = mg_ent->fields.actionEffectId;
  v100 = (_DWORD)mg_ent + 100;
  if ( actionEffectId >= 1 )
  {
    v102 = System_Int32__ToString(v100, 0LL);
    v103 = System_String__Concat_44305532((System_String_o *)StringLiteral_8922/*"MapGimmickActionEffect_"*/, v102, 0LL);
    v105 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     (MapGimmickComponent_o *)v103,
                                     v103,
                                     v59,
                                     v58,
                                     v104);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mg_ent = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(v105, 0LL, 0LL);
    if ( ((unsigned __int8)mg_ent & 1) != 0 )
    {
      if ( !v105 )
        goto LABEL_149;
      v106 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v105,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v106, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v107 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 v106,
                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v107;
        sub_B2C2F8(&this->fields.actionEffect, v107);
        mg_ent = (MapGimmickEntity_o *)this->fields.actionEffect;
        if ( mg_ent )
        {
          v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mg_ent, 0LL);
          v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_31331952(v108, v109, 0LL);
          mg_ent = (MapGimmickEntity_o *)this->fields.actionEffect;
          if ( mg_ent )
          {
            mg_ent = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mg_ent, 0LL);
            if ( mg_ent )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mg_ent, 0, 0LL);
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

  if ( (byte_4185887 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185887 = 1;
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
      sub_B2C434(gameObject, v4);
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

  if ( (byte_418588A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418588A = 1;
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
      sub_B2C434(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v7);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o *mFSM; // x0

  if ( (byte_418587E & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_MapGimmickComponent__update__, method);
    byte_418587E = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__44_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B2C434(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__44_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_B2C434(this, method);
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
    sub_B2C434(this, that);
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
    sub_B2C434(this, that);
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

  if ( (byte_4185CFE & 1) == 0 )
  {
    sub_B2C35C(&MapGimmickComponent_StateMapMain_TypeInfo, v1);
    byte_4185CFE = 1;
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
  __int64 v8; // x1
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v10; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v12; // x8
  struct MapGimmickComponent_o *v13; // x8
  int32_t v14; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct MapGimmickComponent_o *v16; // x8

  if ( (byte_4185CFD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v5);
    sub_B2C35C(&MapGimmickComponent_StateMapMain_TypeInfo, v6);
    byte_4185CFD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  v10 = Instance;
  mOldDispTime = mThat->fields.mOldDispTime;
  Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
  if ( (BYTE3(MapGimmickComponent_StateMapMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo);
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
  }
  if ( v10 - mOldDispTime >= **(int **)(Instance + 184) )
  {
    v12 = this->fields.mThat;
    if ( !v12 )
      goto LABEL_32;
    if ( !v12->fields.isForceNotActive )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      v13 = this->fields.mThat;
      if ( !v13 || !Instance )
        goto LABEL_32;
      Instance = QuestTree__CheckMapGimmickCond_21872636(
                   (QuestTree_o *)Instance,
                   v13->fields.mMapCtrl_MapGimmickInfo,
                   0LL);
      v12 = this->fields.mThat;
      if ( (Instance & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_32;
        v14 = 3;
        goto LABEL_28;
      }
      if ( !v12 )
        goto LABEL_32;
    }
    if ( v12->fields.isForceLoop )
    {
      mMapCtrl_MapGimmickInfo = v12->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        goto LABEL_32;
      mMapCtrl_MapGimmickInfo->fields.dispType = 0;
      goto LABEL_29;
    }
    v14 = 2;
LABEL_28:
    MapGimmickComponent__SetState(v12, v14, 0LL, 0LL);
LABEL_29:
    v16 = this->fields.mThat;
    if ( v16 )
    {
      v16->fields.mOldDispTime = v10;
      return;
    }
LABEL_32:
    sub_B2C434(Instance, v8);
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
  sub_B2C2F8(
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
  MapGimmickComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
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
  __int64 v7; // x1
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v9; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v10; // x8
  System_String_o *v11; // x21
  System_Action_o *_9__2; // x25
  System_String_o *v13; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4185CFB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__, v5);
    byte_4185CFB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  v9 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v10 = this->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_14;
  v11 = (System_String_o *)Instance;
  Instance = v10->fields.mg_ent;
  if ( !Instance )
    goto LABEL_14;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v13 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v9 )
LABEL_14:
    sub_B2C434(Instance, v7);
  CommonUI__OpenEventMissionListDialog(v9, v11, v13, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
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
  __int64 v23; // x0

  v2 = this;
  if ( (byte_4185CFC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, method);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4185CFC = 1;
  }
  if ( !byte_4185D94 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_4185D94 = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v2->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
  {
LABEL_31:
    v23 = sub_B2C460(this);
    sub_B2C400(v23, 0LL);
  }
  v9 = eventMissionEntList->m_Items[0];
  if ( !v9 )
    goto LABEL_30;
  id = v9->fields.id;
  if ( !byte_4185D95 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_4185D95 = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  }
  (*p_static_fields)->_MissionId_k__BackingField = id;
  eventDetailEnt = v2->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
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
  if ( !byte_4184962 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_4184962 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v19 = v2->fields.eventDetailEnt;
  if ( !v19
    || (EventRewardSaveData__SaveCurrentEventData(v19->fields.eventId, 0LL), (v20 = v2->fields.eventDetailEnt) == 0LL)
    || (eventId = v20->fields.eventId,
        v22 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_17292968(v22, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v22)
    || (SceneJumpInfo__SetReturnNowScene(v22, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_B2C434(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v22, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass37_0___ctor(
        MapGimmickComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass37_0___SetDispAnim_b__0(
        MapGimmickComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *_4__this; // x8
  MapGimmickComponent___c__DisplayClass37_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MapGimmickComponent___c__DisplayClass37_0_o *)_4__this->fields.mSprite) == 0LL)
    || (((void (__fastcall *)(MapGimmickComponent___c__DisplayClass37_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          (float)v3->fields.to),
        (this = (MapGimmickComponent___c__DisplayClass37_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  MapGimmickComponent__StateDispAnimEnd((MapGimmickComponent_o *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass37_0___SetDispAnim_b__1(
        MapGimmickComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x9
  struct MapGimmickComponent_o *_4__this; // x8
  struct UISprite_o *mSprite; // x8

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0LL || (mSprite = _4__this->fields.mSprite) == 0LL )
    sub_B2C434(this, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))mSprite->klass->vtable._8_set_alpha.method)(
    mSprite,
    mSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    this->fields.from + (float)(eo->fields.mStartTime * (float)((float)this->fields.to - this->fields.from)));
}


void __fastcall MapGimmickComponent___c__DisplayClass38_0___ctor(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass38_0___SetMoveAnim_b__0(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
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
    sub_B2C434(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)_4__this, this->fields.posTo, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickComponent___c__DisplayClass38_0___SetMoveAnim_b__1(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
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
    sub_B2C434(_4__this, method);
  }
  v11 = (float)(v8 - z) * v10;
  v12 = vadd_f32(v5, vmul_n_f32(vsub_f32(v7, v5), v10)).n64_u64[0];
  v13 = z + v11;
  v14 = HIDWORD(v12);
  UnityEngine_Transform__set_localPosition(v9, *(UnityEngine_Vector3_o *)&v12, 0LL);
}