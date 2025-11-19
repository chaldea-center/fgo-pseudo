void MapGimmickComponent___ctor(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB2DD0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2DD0 = 1;
  }
  this->fields.mDepthBase = 30;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  this->fields.mEasingType = 17;
  v5 = StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mHideSeName, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mDispSeName, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  Il2CppObject *v14; // x22
  CStateManager_T__o *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x3

  if ( (byte_4CB2DBD & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_MapGimmickComponent___ctor__);
    sub_1C6BA08(&Method_CStateManager_MapGimmickComponent__add__);
    sub_1C6BA08(&CStateManager_MapGimmickComponent__TypeInfo);
    sub_1C6BA08(&MapGimmickComponent_StateDispAnim_TypeInfo);
    sub_1C6BA08(&MapGimmickComponent_StateHideAnim_TypeInfo);
    sub_1C6BA08(&MapGimmickComponent_StateMapMain_TypeInfo);
    sub_1C6BA08(&MapGimmickComponent_StateNone_TypeInfo);
    byte_4CB2DBD = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C6BC54(CStateManager_MapGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_33848C4 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C6BC54(MapGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_338496C *)Method_CStateManager_MapGimmickComponent__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1C6BC54(MapGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !v11 )
      goto LABEL_9;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_338496C *)Method_CStateManager_MapGimmickComponent__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1C6BC54(MapGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v14, 0);
    if ( !v13
      || (CStateManager_object___add(
            v13,
            2,
            (IState_T__o *)v14,
            (const MethodInfo_338496C *)Method_CStateManager_MapGimmickComponent__add__),
          v15 = (CStateManager_T__o *)*p_mFSM,
          v16 = (Il2CppObject *)sub_1C6BC54(MapGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v16, 0),
          !v15) )
    {
LABEL_9:
      sub_1C6BC60(v9, v10);
    }
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_338496C *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0, v17);
  }
}


float MapGimmickComponent__GetAnimTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  void *mMapCtrl_MapGimmickInfo; // x0
  int v4; // w8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo
    || (mMapCtrl_MapGimmickInfo = MapControl_MapGimmickInfo__GetMine(
                                    (MapControl_MapGimmickInfo_o *)mMapCtrl_MapGimmickInfo,
                                    method)) == 0 )
  {
    sub_1C6BC60(mMapCtrl_MapGimmickInfo, method);
  }
  v4 = *((_DWORD *)mMapCtrl_MapGimmickInfo + 24);
  if ( v4 < 0 )
    return this->fields.mAnimTime;
  else
    return (float)v4 / 1000.0;
}


CommonEffectComponent_o *MapGimmickComponent__GetCommonEffectComponent(
        MapGimmickComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        MapCamera_o *mapCamera,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x19
  Il2CppObject *Component_object; // x22
  MapEffectComponent_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4CB2DC4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    this = (MapGimmickComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DC4 = 1;
  }
  if ( !prefab )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      Component_object,
                                      (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v8 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0);
      MapEffectComponent__Setup(v8, gameObject, mapCamera, v10);
      return (CommonEffectComponent_o *)v8;
    }
LABEL_19:
    sub_1C6BC60(this, prefab);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          prefab,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      v11,
                                      (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v8 = (MapEffectComponent_o *)this;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v13 = UnityEngine_Component__get_gameObject(v6, 0);
      GameObjectExtensions__SafeSetParent_36361932(v12, v13, 0);
      return (CommonEffectComponent_o *)v8;
    }
    goto LABEL_19;
  }
  return (CommonEffectComponent_o *)v8;
}


UnityEngine_GameObject_o *MapGimmickComponent__GetEffectPrefab(
        MapGimmickComponent_o *this,
        System_String_o *effectPrefabName,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51495936; // x21

  if ( (byte_4CB2DC3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    this = (MapGimmickComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DC3 = 1;
  }
  if ( !assetData )
    sub_1C6BC60(this, effectPrefabName);
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              assetData,
                              effectPrefabName,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) )
  {
    if ( !multiAssetData )
      return 0;
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                multiAssetData,
                                effectPrefabName,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) )
      return 0;
  }
  return (UnityEngine_GameObject_o *)Object_object__51495936;
}


System_String_o *MapGimmickComponent__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_4CB2DBC & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8913/*"MapGimmick_"*/);
    sub_1C6BA08(&StringLiteral_1122/*"00"*/);
    byte_4CB2DBC = 1;
  }
  v2 = System_Int32__ToString_65475288((int32_t)&v4, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
  return System_String__Concat_63966792((System_String_o *)StringLiteral_8913/*"MapGimmick_"*/, v2, 0);
}


MapControl_MapGimmickInfo_o *MapGimmickComponent__GetMapCtrl_MapGimmickInfo(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_MapGimmickInfo;
}


MapGimmickRandomEffectElementComponent_o *MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4CB2DC5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DC5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0);
  if ( v3 )
    return 0;
  if ( !prefab )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v3 )
    return 0;
  if ( !Component_object )
LABEL_13:
    sub_1C6BC60(v3, v4);
  return MapGimmickRandomEffectComponent__GetRandomElement((MapGimmickRandomEffectComponent_o *)Component_object, v4);
}


int32_t MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4CB2DC6 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_1C6BA08(&Method_CStateManager_MapGimmickComponent__getState__);
    byte_4CB2DC6 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C6BC60(this, method);
  return mFSM->fields.m_state;
}


void MapGimmickComponent__InitDefaultParam(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v12; // x8
  struct System_String_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *v16; // x20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  struct UISprite_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB2DBF & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_UISprite___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_13011/*"Sprite"*/);
    byte_4CB2DBF = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mHideSeName, (int32_t)Empty, v2, v3);
  v12 = string_TypeInfo->static_fields;
  v13 = v12->Empty;
  this->fields.mDispSeName = v12->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mDispSeName, (int32_t)v13, v14, v15);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v16 = (UnityEngine_GameObject_o *)sub_1C6BC54(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v16, (System_String_o *)StringLiteral_13011/*"Sprite"*/, 0);
  GameObjectExtensions__SetParent(v16, (UnityEngine_Component_o *)this, 0);
  if ( !v16
    || (v17 = UnityEngine_GameObject__AddComponent_object_(
                v16,
                (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0 )
  {
    sub_1C6BC60(v17, v18);
  }
  v19 = (struct UISprite_o *)v17;
  UIWidget__SetDimensions((UIWidget_o *)v17, 64, 64, 0);
  this->fields.mSprite = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)v19, v20, v21);
}


bool MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  void *Mine; // x0
  __int64 v3; // x8
  __int64 v4; // x8
  int32_t v5; // w19

  if ( (byte_4CB2DCE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB2DCE = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v3 = **((_QWORD **)Mine + 23);
  if ( !v3 )
    goto LABEL_20;
  v4 = *(_QWORD *)(v3 + 264);
  if ( !v4 )
    goto LABEL_20;
  Mine = *(void **)(v4 + 344);
  if ( !Mine )
    goto LABEL_20;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, method);
  if ( !Mine )
    goto LABEL_20;
  v5 = *((_DWORD *)Mine + 24);
  if ( v5 < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Mine = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Mine )
LABEL_20:
    sub_1C6BC60(Mine, method);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Mine, v5, 0, 0, 0);
}


bool MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct CommonEffectComponent_o *v6; // x8

  if ( (byte_4CB2DC1 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DC1 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.commonEffectComponent;
  if ( !v6 )
    sub_1C6BC60(v4, v5);
  return v6->fields.isTouched;
}


void MapGimmickComponent__OnGimmickTouched(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x21
  void *Mine; // x0
  __int64 v9; // x8
  __int64 v10; // x8

  if ( (byte_4CB2DC2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB2DC2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v9 = **((_QWORD **)Mine + 23);
  if ( !v9
    || (v10 = *(_QWORD *)(v9 + 264)) == 0
    || (Mine = *(void **)(v10 + 344)) == 0
    || (Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, v6)) == 0
    || !mapGimmickEntity
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(
          (ClientMissionManager_o *)Instance,
          *((_DWORD *)Mine + 24),
          mapGimmickEntity->fields.id,
          0),
        (Mine = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0) )
  {
    sub_1C6BC60(Mine, v6);
  }
  ClientMissionManager__SendRequest((ClientMissionManager_o *)Mine, touchCallback, 0);
}


void MapGimmickComponent__ResetOldDispTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.mOldDispTime = 0;
}


// local variable allocation has failed, the output may be wrong!
void MapGimmickComponent__SetDispAnim(MapGimmickComponent_o *this, bool is_disp, const MethodInfo *method)
{
  float AnimTime; // s0
  const MethodInfo *v6; // x3

  AnimTime = MapGimmickComponent__GetAnimTime(this, (const MethodInfo *)is_disp);
  MapGimmickComponent__SetDispAnim_36423512(this, is_disp, AnimTime, 1, v6);
}


void MapGimmickComponent__SetDispAnimQuick(MapGimmickComponent_o *this, bool is_disp, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_36423512(this, is_disp, 0.0, 0, v3);
}


void MapGimmickComponent__SetDispAnim_36423512(
        MapGimmickComponent_o *this,
        bool is_disp,
        float time,
        bool is_play_se,
        const MethodInfo *method)
{
  __int64 v9; // x22
  UnityEngine_Component_o *mSprite; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  struct CommonEffectComponent_o *v17; // x20
  System_Action_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  System_String_o *v24; // x21
  System_Action_o *v25; // x23
  EasingObject_o *v26; // x24
  System_Action_o *v27; // x25
  struct CommonEffectComponent_o *v28; // x20
  System_Action_o *v29; // x21
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4CB2DC9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_MapGimmickComponent_SetDispAnim__);
    sub_1C6BA08(&Method_MapGimmickComponent_StateDispAnimEnd__);
    sub_1C6BA08(&Method_MapGimmickComponent_StateHideAnimEnd__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__);
    sub_1C6BA08(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
    byte_4CB2DC9 = 1;
  }
  v9 = sub_1C6BC54(MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_37;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  MapGimmickComponent__StartActionEffect(this, v14);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v15);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0);
  if ( ((unsigned __int8)mSprite & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v9 + 32) = Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)Component_object, v21, v22);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_37;
    *(float *)(v9 + 28) = ((float (__fastcall *)(UnityEngine_Component_o *, _QWORD))mSprite->klass[1]._1.this_arg.data)(
                            mSprite,
                            *(_QWORD *)&mSprite->klass[1]._1.this_arg.bits);
    *(_DWORD *)(v9 + 24) = is_disp;
    if ( is_disp )
      v23 = 64;
    else
      v23 = 56;
    v24 = *(System_String_o **)((char *)&this->klass + v23);
    v25 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v9,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__,
      0);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v25, 0);
      if ( !is_play_se )
        return;
    }
    else
    {
      v26 = *(EasingObject_o **)(v9 + 32);
      v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v9,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0);
      if ( !v26 )
        goto LABEL_37;
      EasingObject__Play(v26, time, v27, v25, 0.0, this->fields.mEasingType, 0);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v24, 0) )
    {
      v30 = Method_MapGimmickComponent_SetDispAnim__;
      if ( (*((_BYTE *)Method_MapGimmickComponent_SetDispAnim__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1C6BA20(Method_MapGimmickComponent_SetDispAnim__);
      v31 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v30, v30[4]);
      OverwriteAssetSoundName__PlaySe(v31, v24, 0, 0);
    }
    return;
  }
  if ( is_disp )
  {
    mSprite = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !mSprite )
      goto LABEL_37;
    mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mSprite, 0);
    if ( !mSprite )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 1, 0);
    v17 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0);
      if ( v17 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, const MethodInfo *))v17->klass->vtable._6_ForceStart.methodPtr)(
          v17,
          1,
          v18,
          v17->klass->vtable._6_ForceStart.method);
        return;
      }
LABEL_37:
      sub_1C6BC60(mSprite, v11);
    }
    if ( !v17 )
      goto LABEL_37;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0);
  }
  else
  {
    v28 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v28 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0);
      if ( !mSprite )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0);
      MapGimmickComponent__StateHideAnimEnd(this, v32);
    }
    else
    {
      v29 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0);
      if ( !v28 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v28->klass->vtable._8_Stop.methodPtr)(
                                             v28,
                                             0,
                                             v29,
                                             v28->klass->vtable._8_Stop.method);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_37;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
}


void MapGimmickComponent__SetDisplayByRaidProgress(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  struct MapControl_MapGimmickInfo_o *v6; // x8
  int32_t dispType; // w8
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3
  int32_t v10; // w1

  if ( (byte_4CB2DCD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__);
    sub_1C6BA08(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CB2DCD = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             method);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  v4 = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, 0);
  if ( v4 && !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)v4, v5) )
  {
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_36855504(
                                                                 (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                 this->fields.mMapCtrl_MapGimmickInfo,
                                                                 0);
      v6 = this->fields.mMapCtrl_MapGimmickInfo;
      if ( v6 )
      {
        dispType = v6->fields.dispType;
        if ( dispType != 0 || ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) == 0 )
        {
          if ( dispType != 1 || (((unsigned int)mMapCtrl_MapGimmickInfo ^ 1) & 1) == 0 )
            return;
          v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__,
            0);
          v10 = 2;
        }
        else
        {
          v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__,
            0);
          v10 = 3;
        }
        MapGimmickComponent__SetState(this, v10, v8, v9);
        return;
      }
    }
LABEL_16:
    sub_1C6BC60(mMapCtrl_MapGimmickInfo, method);
  }
}


void MapGimmickComponent__SetMapGimmickInfo(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mMapCtrl_MapGimmickInfo = mapGimmickInfo;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (int32_t)mapGimmickInfo,
    (int32_t)method,
    v3);
}


void MapGimmickComponent__SetMoveAnim(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x21
  EasingObject_o *v25; // x22
  System_Action_o *v26; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_4CB2DCA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__);
    sub_1C6BA08(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
    byte_4CB2DCA = 1;
  }
  v13 = sub_1C6BC54(MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(float *)(v13 + 24) = x;
  *(float *)(v13 + 28) = y;
  *(float *)(v13 + 32) = z;
  *(_QWORD *)(v13 + 40) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 40), (int32_t)callback, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 64), (int32_t)Component_object, v22, v23);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v13 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0);
  v24 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v13,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0);
  if ( time > 0.0 )
  {
    v25 = *(EasingObject_o **)(v13 + 64);
    v26 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v13,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0);
    if ( v25 )
    {
      EasingObject__Play(v25, time, v26, v24, 0.0, easeType, 0);
      return;
    }
LABEL_10:
    sub_1C6BC60(transform, v15);
  }
  ActionExtensions__Call(v24, 0);
}


void MapGimmickComponent__SetState(
        MapGimmickComponent_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_4CB2DC7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_MapGimmickComponent__setState__);
    byte_4CB2DC7 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_mStateEndAct, (int32_t)end_act, (int32_t)end_act, method);
  v9 = (CStateManager_T__o *)*(p_mStateEndAct - 6);
  if ( !v9 )
    sub_1C6BC60(0, v8);
  CStateManager_object___setState(
    v9,
    state,
    (const MethodInfo_33849F8 *)Method_CStateManager_MapGimmickComponent__setState__);
}


void MapGimmickComponent__SetTouchEnable(MapGimmickComponent_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4CB2DCC & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DCC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, enabled, 0);
      return;
    }
LABEL_10:
    sub_1C6BC60(gameObject, v6);
  }
}


void MapGimmickComponent__SetUseAnimNum(
        MapGimmickComponent_o *this,
        int32_t num,
        bool isUpdateName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x22
  __int64 v8; // x1
  CommonEffectComponent_o *v9; // x0

  if ( (byte_4CB2DCF & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DCF = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
  {
    v9 = this->fields.commonEffectComponent;
    if ( !v9 )
      sub_1C6BC60(0, v8);
    CommonEffectComponent__SetUseAnimNum(v9, num, isUpdateName, 0);
  }
}


void MapGimmickComponent__Setup(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mg_inf,
        MapCamera_o *mapCamera,
        System_Collections_Generic_List_UIAtlas__o *atlases,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  __int64 v15; // x23
  MapGimmickEntity_o *IsMonoColorRect; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  MapGimmickEntity_o *Mine; // x0
  __int64 v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UISprite_o *mSprite; // x26
  System_String_o *v29; // x27
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UISprite_o *v32; // x28
  UnityEngine_Behaviour_o *v33; // x26
  UnityEngine_Object_o *monitor; // x28
  bool v35; // w0
  System_String_o *v36; // x26
  struct UISprite_o *v37; // x8
  struct UITexture_o *mMapBg; // x9
  System_String_o *v39; // x0
  MapGimmickComponent_o *v40; // x0
  const MethodInfo *v41; // x4
  UnityEngine_GameObject_o *EffectPrefab; // x26
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v44; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  struct CommonEffectComponent_o **p_commonEffectComponent; // x25
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  UnityEngine_Object_o *v49; // x26
  __int64 v50; // x8
  __int64 v51; // x8
  int32_t actionAnimTime; // w26
  UnityEngine_GameObject_o *v53; // x26
  bool v54; // w1
  float v55; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v57; // q0
  int32_t UseAnimFromScript; // w0
  struct CommonEffectComponent_o *v59; // x24
  System_Action_o *v60; // x25
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  float y; // s9
  float x; // s8
  float z; // s10
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *v67; // x24
  __int64 v68; // x25
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  __int64 v72; // x8
  int32_t v73; // w26
  DataManager_o *v74; // x23
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x8
  EventMissionMaster_o *v79; // x23
  EventMissionEntity_array *EventMissionList_42281032; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_List_EventDelegate__o *v83; // x23
  EventDelegate_Callback_o *v84; // x24
  int32_t v85; // w0
  int actionEffectId; // t1
  System_String_o *v87; // x0
  MapGimmickComponent_o *v88; // x0
  const MethodInfo *v89; // x4
  UnityEngine_Object_o *v90; // x20
  Il2CppObject *v91; // x20
  Il2CppObject *v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  UnityEngine_GameObject_o *v95; // x20
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Color_o v97; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o TouchSize; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2DC0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_UIButton___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__);
    sub_1C6BA08(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
    sub_1C6BA08(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_24926/*"white00"*/);
    sub_1C6BA08(&StringLiteral_1126/*"000000"*/);
    sub_1C6BA08(&StringLiteral_19935/*"gimmick_"*/);
    sub_1C6BA08(&StringLiteral_8895/*"MapGimmickEffect_"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_8894/*"MapGimmickActionEffect_"*/);
    byte_4CB2DC0 = 1;
  }
  *(_QWORD *)&v97.fields.r = 0;
  *(_QWORD *)&v97.fields.b = 0;
  entity = 0;
  v15 = sub_1C6BC54(MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_133;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 32) = touchCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)touchCallback, v20, v21);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMapCtrl_MapGimmickInfo, (int32_t)mg_inf, v22, v23);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_133;
  Mine = MapControl_MapGimmickInfo__GetMine(mg_inf, v17);
  *(_QWORD *)(v15 + 24) = Mine;
  v25 = v15 + 24;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 24), (int32_t)Mine, v26, v27);
  IsMonoColorRect = *(MapGimmickEntity_o **)(v15 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, 0);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    mSprite = this->fields.mSprite;
    v29 = (System_String_o *)StringLiteral_24926/*"white00"*/;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(mSprite, 0);
  }
  else
  {
    if ( !*(_QWORD *)v25 )
      goto LABEL_133;
    v30 = System_Int32__ToString_65475288((unsigned int)*(_QWORD *)v25 + 24, (System_String_o *)StringLiteral_1126/*"000000"*/, 0);
    v31 = System_String__Concat_63966792((System_String_o *)StringLiteral_19935/*"gimmick_"*/, v30, 0);
    v32 = this->fields.mSprite;
    v29 = v31;
    IsMonoColorRect = (MapGimmickEntity_o *)UIAtlas__GetUIAtlasBySpriteName(atlases, v31, 0);
    if ( !v32 )
      goto LABEL_133;
    UISprite__set_atlas(v32, (UIAtlas_o *)IsMonoColorRect, 0);
  }
  v33 = (UnityEngine_Behaviour_o *)this->fields.mSprite;
  if ( !v33 )
    goto LABEL_133;
  monitor = (UnityEngine_Object_o *)v33[19].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
  UnityEngine_Behaviour__set_enabled(v33, v35, 0);
  IsMonoColorRect = *(MapGimmickEntity_o **)v25;
  if ( !*(_QWORD *)v25 )
    goto LABEL_133;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetColorCodeFromScript(IsMonoColorRect, 0);
  if ( !this->fields.mSprite )
    goto LABEL_133;
  v36 = (System_String_o *)IsMonoColorRect;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Behaviour__get_enabled(
                                            (UnityEngine_Behaviour_o *)this->fields.mSprite,
                                            0);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v29, 0);
    IsMonoColorRect = *(MapGimmickEntity_o **)v25;
    if ( !*(_QWORD *)v25 )
      goto LABEL_133;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, 0);
    v37 = this->fields.mSprite;
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_133;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v37 )
        goto LABEL_133;
      UIWidget__SetDimensions((UIWidget_o *)this->fields.mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0);
    }
    else
    {
      if ( !v37 )
        goto LABEL_133;
      IsMonoColorRect = (MapGimmickEntity_o *)((MapGimmickEntity_o *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))v37->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                v37,
                                                this->fields.mSprite,
                                                v37->klass->vtable._33_MakePixelPerfect.method);
    }
    if ( !*(_QWORD *)v25 )
      goto LABEL_133;
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UIWidget__set_depth((UIWidget_o *)IsMonoColorRect, *(_DWORD *)(*(_QWORD *)v25 + 36LL) + this->fields.mDepthBase, 0);
    if ( !*(_QWORD *)v25 )
      goto LABEL_133;
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v55 = this->fields.mScaleBase * (float)((float)*(int *)(*(_QWORD *)v25 + 80LL) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0);
    GameObjectExtensions__SetLocalScale_36358148(gameObject, v55, 0);
    if ( !System_String__IsNullOrEmpty(v36, 0) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v36, &v97, 0);
      IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
      if ( !IsMonoColorRect )
        goto LABEL_133;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, v97, 0);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    LODWORD(v57) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v57 = 0.0;
    ((void (__fastcall *)(MapGimmickEntity_o *, _QWORD, long double))IsMonoColorRect->klass[1]._1.byval_arg.data)(
      IsMonoColorRect,
      *(_QWORD *)&IsMonoColorRect->klass[1]._1.byval_arg.bits,
      v57);
  }
  else
  {
    if ( !*(_QWORD *)v25 )
      goto LABEL_133;
    v39 = System_Int32__ToString((unsigned int)*(_QWORD *)v25 + 24, 0);
    v40 = (MapGimmickComponent_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_8895/*"MapGimmickEffect_"*/, v39, 0);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab(v40, (System_String_o *)v40, assetData, multiAssetData, v41);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0, 0) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v17);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(
                                                MapGimmickRandomEffectElementComponent,
                                                0,
                                                0);
      if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
      {
        if ( !MapGimmickRandomEffectElementComponent )
          goto LABEL_133;
        EffectPrefab = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)MapGimmickRandomEffectElementComponent,
                         0);
      }
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v44);
      this->fields.commonEffectComponent = CommonEffectComponent;
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      sub_1C6B9AC(
        (CGThumbnailListItem_o *)&this->fields.commonEffectComponent,
        (int32_t)CommonEffectComponent,
        v47,
        v48);
      v49 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CB01CE )
        {
          sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
          byte_4CB01CE = 1;
        }
        IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        }
        v50 = **(_QWORD **)&IsMonoColorRect[1].fields.scale;
        if ( !v50 )
          goto LABEL_133;
        v51 = *(_QWORD *)(v50 + 264);
        if ( !v51 )
          goto LABEL_133;
        IsMonoColorRect = *(MapGimmickEntity_o **)(v51 + 344);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (MapGimmickEntity_o *)MapControl_WarInfo__GetMine(
                                                  (MapControl_WarInfo_o *)IsMonoColorRect,
                                                  v17);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        actionAnimTime = IsMonoColorRect->fields.actionAnimTime;
        IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)IsMonoColorRect,
                                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
          &entity,
          actionAnimTime,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0) )
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0);
          IsMonoColorRect = (MapGimmickEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_133;
          IsMonoColorRect = (MapGimmickEntity_o *)QuestTree__CheckMapGimmickCond_36855504(
                                                    (QuestTree_o *)IsMonoColorRect,
                                                    mg_inf,
                                                    0);
          if ( !v53 )
            goto LABEL_133;
          v54 = (unsigned __int8)IsMonoColorRect & 1;
          IsMonoColorRect = (MapGimmickEntity_o *)v53;
        }
        else
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsMonoColorRect,
                                                    0);
          if ( !IsMonoColorRect )
            goto LABEL_133;
          v54 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v54, 0);
        IsMonoColorRect = *(MapGimmickEntity_o **)v25;
        if ( !*(_QWORD *)v25 )
          goto LABEL_133;
        UseAnimFromScript = MapGimmickEntity__GetUseAnimFromScript(IsMonoColorRect, 0);
        if ( UseAnimFromScript >= 1 )
        {
          v17 = (const MethodInfo *)(unsigned int)UseAnimFromScript;
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsMonoColorRect, (int32_t)v17, 0, 0);
        }
        IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
        if ( !*p_commonEffectComponent )
          goto LABEL_133;
        CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)IsMonoColorRect, 0);
        v59 = *p_commonEffectComponent;
        v60 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v60,
          (Il2CppObject *)v15,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0);
        if ( !v59 )
          goto LABEL_133;
        v59->fields.touchCallback = v60;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v59->fields.touchCallback, (int32_t)v60, v61, v62);
      }
    }
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v25;
  if ( !*(_QWORD *)v25 )
    goto LABEL_133;
  TouchSize = MapGimmickEntity__GetTouchSize(IsMonoColorRect, 0);
  if ( TouchSize.fields.x <= 0.0 )
    goto LABEL_117;
  y = TouchSize.fields.y;
  if ( TouchSize.fields.y <= 0.0 )
    goto LABEL_117;
  x = TouchSize.fields.x;
  z = TouchSize.fields.z;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)IsMonoColorRect,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_GameObject__AddComponent_object_(
                                              (UnityEngine_GameObject_o *)IsMonoColorRect,
                                              (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_object = (Il2CppObject *)IsMonoColorRect;
  }
  if ( !Component_object )
    goto LABEL_133;
  v100.fields.x = x;
  v100.fields.y = y;
  v100.fields.z = z;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v100, 0);
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  v67 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)IsMonoColorRect,
                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v67, 0, 0) )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v67 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)IsMonoColorRect,
                                    (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v25;
  if ( !*(_QWORD *)v25 )
LABEL_133:
    sub_1C6BC60(IsMonoColorRect, v17);
  if ( MapGimmickEntity__IsEventMissionScript(IsMonoColorRect, 0) )
  {
    v68 = sub_1C6BC54(MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v68, 0);
    if ( !v68 )
      goto LABEL_133;
    *(_QWORD *)(v68 + 32) = v15;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v68 + 32), v15, v69, v70);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CB01CE )
    {
      sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
      byte_4CB01CE = 1;
    }
    IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    v71 = **(_QWORD **)&IsMonoColorRect[1].fields.scale;
    if ( !v71 )
      goto LABEL_133;
    v72 = *(_QWORD *)(v71 + 264);
    if ( !v72 )
      goto LABEL_133;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v72 + 344);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (MapGimmickEntity_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v17);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v73 = IsMonoColorRect->fields.actionAnimTime;
    IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v74 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)IsMonoColorRect,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v75 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
            v73,
            (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v68 + 16) = v75;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v68 + 16), (int32_t)v75, v76, v77);
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_object_(
                                              v74,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v78 = *(_QWORD *)(v68 + 32);
    if ( !v78 )
      goto LABEL_133;
    v79 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v78 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetEventMissionIdList(IsMonoColorRect, 0);
    if ( !v79 )
      goto LABEL_133;
    EventMissionList_42281032 = EventMissionMaster__getEventMissionList_42281032(
                                  v79,
                                  (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                  0);
    *(_QWORD *)(v68 + 24) = EventMissionList_42281032;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v68 + 24), (int32_t)EventMissionList_42281032, v81, v82);
    if ( !v67 )
      goto LABEL_133;
    v83 = (System_Collections_Generic_List_EventDelegate__o *)v67[8].monitor;
    v84 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v84,
      (Il2CppObject *)v68,
      (intptr_t)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(v83, v84, 0);
  }
LABEL_117:
  IsMonoColorRect = *(MapGimmickEntity_o **)v25;
  if ( !*(_QWORD *)v25 )
    goto LABEL_133;
  actionEffectId = IsMonoColorRect->fields.actionEffectId;
  v85 = (_DWORD)IsMonoColorRect + 100;
  if ( actionEffectId >= 1 )
  {
    v87 = System_Int32__ToString(v85, 0);
    v88 = (MapGimmickComponent_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_8894/*"MapGimmickActionEffect_"*/, v87, 0);
    v90 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                    v88,
                                    (System_String_o *)v88,
                                    assetData,
                                    multiAssetData,
                                    v89);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(v90, 0, 0);
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !v90 )
        goto LABEL_133;
      v91 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v90,
              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v91, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v92 = UnityEngine_Object__Instantiate_object_(
                v91,
                (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v92;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.actionEffect, (int32_t)v92, v93, v94);
        IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0);
          v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SafeSetParent_36361932(v95, v96, 0);
          IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
          if ( IsMonoColorRect )
          {
            IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)IsMonoColorRect,
                                                      0);
            if ( IsMonoColorRect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, 0, 0);
              return;
            }
          }
        }
        goto LABEL_133;
      }
    }
  }
}


void MapGimmickComponent__StartActionEffect(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actionEffect; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4CB2DC8 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DC8 = 1;
  }
  actionEffect = (UnityEngine_Object_o *)this->fields.actionEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionEffect, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.actionEffect;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.actionEffect) == 0) )
    {
      sub_1C6BC60(gameObject, v4);
    }
    CommonEffectComponent__ForceStart((CommonEffectComponent_o *)gameObject, 0);
  }
}


void MapGimmickComponent__StateDispAnimEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  MapGimmickComponent__SetState(this, 1, 0, v3);
}


void MapGimmickComponent__StateHideAnimEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4CB2DCB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2DCB = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C6BC60(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    MapGimmickComponent__SetTouchEnable(this, 0, v7);
  }
  MapGimmickComponent__SetState(this, 0, 0, v5);
}


void MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CB2DBE & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_MapGimmickComponent__update__);
    byte_4CB2DBE = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_33849D4 *)Method_CStateManager_MapGimmickComponent__update__);
}


void MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1C6BC60(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1C6BC60(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void MapGimmickComponent_StateDispAnim___ctor(MapGimmickComponent_StateDispAnim_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateDispAnim__begin(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  int32_t dispType; // w8
  float AnimTime; // s0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C6BC60(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0);
    MapGimmickComponent__SetState(that, 1, 0, v8);
  }
  else if ( !dispType )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_36423512(that, 1, AnimTime, 1, v7);
  }
}


void MapGimmickComponent_StateDispAnim__end(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateDispAnim__update(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateHideAnim___ctor(MapGimmickComponent_StateHideAnim_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateHideAnim__begin(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  int32_t dispType; // w8
  float AnimTime; // s0
  const MethodInfo *v7; // x3

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C6BC60(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_36423512(that, 0, AnimTime, 1, v7);
  }
  else if ( !dispType )
  {
    MapGimmickComponent__StateHideAnimEnd(that, (const MethodInfo *)that);
  }
}


void MapGimmickComponent_StateHideAnim__end(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateHideAnim__update(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateMapMain___cctor(const MethodInfo *method)
{
  if ( (byte_4CB2DD2 & 1) == 0 )
  {
    sub_1C6BA08(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_4CB2DD2 = 1;
  }
  MapGimmickComponent_StateMapMain_TypeInfo->static_fields->CHECK_DISP_ITVL_SEC = 60;
}


void MapGimmickComponent_StateMapMain___ctor(MapGimmickComponent_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateMapMain__CheckDispTime(
        MapGimmickComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v6; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v8; // x8
  const MethodInfo *v9; // x3
  struct MapGimmickComponent_o *v10; // x8
  struct MapGimmickComponent_o *v11; // x8
  int32_t v12; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4CB2DD1 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_4CB2DD1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( !*(_QWORD *)(Instance + 56) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0);
    mThat = this->fields.mThat;
    if ( !mThat )
      goto LABEL_31;
    v6 = Instance;
    mOldDispTime = mThat->fields.mOldDispTime;
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    if ( !MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo);
      Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    }
    if ( v6 - mOldDispTime >= **(int **)(Instance + 184) )
    {
      v8 = this->fields.mThat;
      if ( !v8 )
        goto LABEL_31;
      Instance = (int64_t)v8->fields.mMapCtrl_MapGimmickInfo;
      v8->fields.mOldDispTime = v6;
      if ( !Instance )
        goto LABEL_31;
      Instance = (int64_t)MapControl_MapGimmickInfo__GetMine((MapControl_MapGimmickInfo_o *)Instance, v4);
      if ( !Instance )
        goto LABEL_31;
      Instance = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)Instance, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_17;
      if ( !this->fields.mThat )
        goto LABEL_31;
      Instance = MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)Instance, v4);
      if ( (Instance & 1) == 0 )
      {
LABEL_17:
        v10 = this->fields.mThat;
        if ( !v10 )
          goto LABEL_31;
        if ( !v10->fields.isForceNotActive )
        {
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v11 = this->fields.mThat;
          if ( !v11 || !Instance )
            goto LABEL_31;
          Instance = QuestTree__CheckMapGimmickCond_36855504(
                       (QuestTree_o *)Instance,
                       v11->fields.mMapCtrl_MapGimmickInfo,
                       0);
          v10 = this->fields.mThat;
          if ( (Instance & 1) != 0 )
          {
            if ( v10 )
            {
              v12 = 3;
LABEL_30:
              MapGimmickComponent__SetState(v10, v12, 0, v9);
              return;
            }
            goto LABEL_31;
          }
          if ( !v10 )
            goto LABEL_31;
        }
        if ( !v10->fields.isForceLoop )
        {
          v12 = 2;
          goto LABEL_30;
        }
        mMapCtrl_MapGimmickInfo = v10->fields.mMapCtrl_MapGimmickInfo;
        if ( !mMapCtrl_MapGimmickInfo )
LABEL_31:
          sub_1C6BC60(Instance, v4);
        mMapCtrl_MapGimmickInfo->fields.dispType = 0;
      }
    }
  }
}


void MapGimmickComponent_StateMapMain__begin(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mThat = that;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
}


void MapGimmickComponent_StateMapMain__end(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void MapGimmickComponent_StateMapMain__update(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  MapGimmickComponent_StateMapMain__CheckDispTime(this, (const MethodInfo *)that);
}


void MapGimmickComponent_StateNone___ctor(MapGimmickComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateNone__begin(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateNone__end(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateNone__update(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent___c__DisplayClass23_0___ctor(
        MapGimmickComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass23_0___Setup_b__0(
        MapGimmickComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, method);
  MapGimmickComponent__OnGimmickTouched(
    (MapGimmickComponent_o *)this,
    this->fields.mg_ent,
    this->fields.touchCallback,
    v2);
}


void MapGimmickComponent___c__DisplayClass23_1___ctor(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass23_1___Setup_b__1(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MapGimmickEntity_o *Instance; // x0
  __int64 v6; // x1
  struct MapGimmickComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  CommonUI_o *v8; // x20
  struct MapGimmickComponent___c__DisplayClass23_0_o *v9; // x8
  System_String_o *v10; // x21
  System_Action_o *_9__2; // x25
  System_String_o *v12; // x24
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4CB2DD3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
    sub_1C6BA08(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__);
    byte_4CB2DD3 = 1;
  }
  v3 = Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__;
  if ( (*((_BYTE *)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  v8 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0);
  v9 = this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_13;
  v10 = (System_String_o *)Instance;
  Instance = v9->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0);
  _9__2 = this->fields.__9__2;
  v12 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)this, Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__, 0);
    this->fields.__9__2 = _9__2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v15, v16);
  }
  if ( !v8 )
LABEL_13:
    sub_1C6BC60(Instance, v6);
  CommonUI__OpenEventMissionListDialog(v8, v10, v12, eventDetailEnt, eventMissionEntList, _9__2, 0);
}


void MapGimmickComponent___c__DisplayClass23_1___Setup_b__2(
        MapGimmickComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  MapGimmickComponent___c__DisplayClass23_1_o *v2; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
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

  v2 = this;
  if ( (byte_4CB2DD4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C6BA08(&SceneJumpInfo_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2DD4 = 1;
  }
  if ( !byte_4CB0765 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0765 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v2->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !LODWORD(eventMissionEntList->max_length) )
LABEL_31:
    sub_1C6BC68(this);
  v5 = eventMissionEntList->m_Items[0];
  if ( !v5 )
    goto LABEL_30;
  id = v5->fields.id;
  if ( !byte_4CB0764 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0764 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
  }
  static_fields->_MissionId_k__BackingField = id;
  eventDetailEnt = v2->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  v8 = v2->fields.eventDetailEnt;
  if ( !v8 )
    goto LABEL_30;
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)EventRewardSceneMaster__GetEntityList(
                                                          (EventRewardSceneMaster_o *)this,
                                                          v8->fields.eventId,
                                                          0);
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
                                                              0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v9 = (int)v10->fields.eventMissionEntList;
      if ( (int)++v11 >= v9 )
        goto LABEL_21;
    }
    name_high = HIDWORD(v13->_1.name);
  }
  if ( !byte_4CB0766 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0766 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v15 = v2->fields.eventDetailEnt;
  if ( !v15
    || (EventRewardSaveData__SaveCurrentEventData(v15->fields.eventId, 0), (v16 = v2->fields.eventDetailEnt) == 0)
    || (eventId = v16->fields.eventId,
        v18 = (SceneJumpInfo_o *)sub_1C6BC54(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_41713068(v18, (System_String_o *)StringLiteral_1/*""*/, eventId, 0),
        !v18)
    || (SceneJumpInfo__SetReturnNowScene(v18, 0),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_30:
    sub_1C6BC60(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v18, 0);
}


void MapGimmickComponent___c__DisplayClass38_0___ctor(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass38_0___SetDispAnim_b__0(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *_4__this; // x8
  MapGimmickComponent___c__DisplayClass38_0_o *v3; // x19
  MapGimmickComponent_o *v4; // x19
  const MethodInfo *v5; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MapGimmickComponent___c__DisplayClass38_0_o *)_4__this->fields.mSprite) == 0)
    || (this = (MapGimmickComponent___c__DisplayClass38_0_o *)((__int64 (__fastcall *)(MapGimmickComponent___c__DisplayClass38_0_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                                                this,
                                                                this->klass[1]._1.castClass,
                                                                (float)v3->fields.to),
        (v4 = v3->fields.__4__this) == 0) )
  {
    sub_1C6BC60(this, method);
  }
  ActionExtensions__Call(v4->fields.mStateEndAct, 0);
  MapGimmickComponent__SetState(v4, 1, 0, v5);
}


void MapGimmickComponent___c__DisplayClass38_0___SetDispAnim_b__1(
        MapGimmickComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x9
  struct MapGimmickComponent_o *_4__this; // x8
  struct UISprite_o *mSprite; // x8

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0 || (mSprite = _4__this->fields.mSprite) == 0 )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))mSprite->klass->vtable._8_set_alpha.methodPtr)(
    mSprite,
    mSprite->klass->vtable._8_set_alpha.method,
    this->fields.from + (float)(eo->fields.mNow * (float)((float)this->fields.to - this->fields.from)));
}


void MapGimmickComponent___c__DisplayClass39_0___ctor(
        MapGimmickComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass39_0___SetMoveAnim_b__0(
        MapGimmickComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0)) == 0
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)_4__this,
                                                0)) == 0 )
  {
    sub_1C6BC60(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)_4__this, this->fields.posTo, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


// local variable allocation has failed, the output may be wrong!
void MapGimmickComponent___c__DisplayClass39_0___SetMoveAnim_b__1(
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
  _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
  if ( !_4__this )
    goto LABEL_8;
  _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
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
    sub_1C6BC60(_4__this, method);
  z = this->fields.posFrom.fields.z;
  v10 = v8 * (float)(this->fields.posTo.fields.z - z);
  v11 = vadd_f32(
          *(float32x2_t *)&this->fields.posFrom.fields.x,
          vmul_n_f32(
            vsub_f32(*(float32x2_t *)&this->fields.posTo.fields.x, *(float32x2_t *)&this->fields.posFrom.fields.x),
            v8)).n64_u64[0];
  v12 = z + v10;
  v13 = HIDWORD(v11);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)_4__this, *(UnityEngine_Vector3_o *)&v11, 0);
}