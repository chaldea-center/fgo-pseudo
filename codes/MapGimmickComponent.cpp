void __fastcall MapGimmickComponent___ctor(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57FD0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57FD0 = 1;
  }
  this->fields.mDepthBase = 30;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  this->fields.mEasingType = 17;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.mHideSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mHideSeName, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mDispSeName, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
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

  if ( (byte_4A57FBE & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_MapGimmickComponent___ctor__);
    sub_1B885B0(&Method_CStateManager_MapGimmickComponent__add__);
    sub_1B885B0(&CStateManager_MapGimmickComponent__TypeInfo);
    sub_1B885B0(&MapGimmickComponent_StateDispAnim_TypeInfo);
    sub_1B885B0(&MapGimmickComponent_StateHideAnim_TypeInfo);
    sub_1B885B0(&MapGimmickComponent_StateMapMain_TypeInfo);
    sub_1B885B0(&MapGimmickComponent_StateNone_TypeInfo);
    byte_4A57FBE = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_MapGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30AAD34 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(MapGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_MapGimmickComponent__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1B887FC(MapGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_9;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_MapGimmickComponent__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1B887FC(MapGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !v13
      || (CStateManager_object___add(
            v13,
            2,
            (IState_T__o *)v14,
            (const MethodInfo_30AADDC *)Method_CStateManager_MapGimmickComponent__add__),
          v15 = (CStateManager_T__o *)*p_mFSM,
          v16 = (Il2CppObject *)sub_1B887FC(MapGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v16, 0LL),
          !v15) )
    {
LABEL_9:
      sub_1B8880C(v9, v10);
    }
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0LL, v17);
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
    sub_1B8880C(mMapCtrl_MapGimmickInfo, method);
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
  Il2CppObject *Component_object; // x22
  MapEffectComponent_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x2

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4A57FC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    this = (MapGimmickComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57FC5 = 1;
  }
  if ( !prefab )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      Component_object,
                                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v8 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.commonEffectComponent) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      MapEffectComponent__Setup(v8, gameObject, mapCamera, v10);
      return (CommonEffectComponent_o *)v8;
    }
LABEL_19:
    sub_1B8880C(this, prefab);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          prefab,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      v11,
                                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v8 = (MapEffectComponent_o *)this;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v13 = UnityEngine_Component__get_gameObject(v6, 0LL);
      GameObjectExtensions__SafeSetParent_33730068(v12, v13, v14);
      return (CommonEffectComponent_o *)v8;
    }
    goto LABEL_19;
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
  Il2CppObject *Object_object__48635516; // x21

  if ( (byte_4A57FC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    this = (MapGimmickComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57FC4 = 1;
  }
  if ( !assetData )
    sub_1B8880C(this, effectPrefabName);
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              effectPrefabName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
  {
    if ( !multiAssetData )
      return 0LL;
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                multiAssetData,
                                effectPrefabName,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
      return 0LL;
  }
  return (UnityEngine_GameObject_o *)Object_object__48635516;
}


System_String_o *__fastcall MapGimmickComponent__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_4A57FBD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8873/*"MapGimmick_"*/);
    sub_1B885B0(&StringLiteral_1221/*"00"*/);
    byte_4A57FBD = 1;
  }
  v2 = System_Int32__ToString_62512312((int32_t)&v4, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_8873/*"MapGimmick_"*/, v2, 0LL);
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
  Il2CppObject *Component_object; // x19

  if ( (byte_4A57FC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57FC6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL);
  if ( v3 )
    return 0LL;
  if ( !prefab )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v3 )
    return 0LL;
  if ( !Component_object )
LABEL_13:
    sub_1B8880C(v3, v4);
  return MapGimmickRandomEffectComponent__GetRandomElement((MapGimmickRandomEffectComponent_o *)Component_object, v4);
}


int32_t __fastcall MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A57FC7 & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_1B885B0(&Method_CStateManager_MapGimmickComponent__getState__);
    byte_4A57FC7 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall MapGimmickComponent__InitDefaultParam(MapGimmickComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v12; // x8
  struct System_String_o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *v16; // x20
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  struct UISprite_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A57FC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UISprite___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_12909/*"Sprite"*/);
    byte_4A57FC0 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  this->fields.mEasingType = 9;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.mHideSeName = static_fields->Empty;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mHideSeName, (int32_t)Empty, v2, v3);
  v12 = string_TypeInfo->static_fields;
  v13 = v12->Empty;
  this->fields.mDispSeName = v12->Empty;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mDispSeName, (int32_t)v13, v14, v15);
  *(_WORD *)&this->fields.isForceLoop = 0;
  v16 = (UnityEngine_GameObject_o *)sub_1B887FC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v16, (System_String_o *)StringLiteral_12909/*"Sprite"*/, 0LL);
  GameObjectExtensions__SetParent(v16, (UnityEngine_Component_o *)this, v17);
  if ( !v16
    || (v18 = UnityEngine_GameObject__AddComponent_object_(
                v16,
                (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0LL )
  {
    sub_1B8880C(v18, v19);
  }
  v20 = (struct UISprite_o *)v18;
  UIWidget__SetDimensions((UIWidget_o *)v18, 64, 64, 0LL);
  this->fields.mSprite = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mSprite, (int32_t)v20, v21, v22);
}


bool __fastcall MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  void *Mine; // x0
  __int64 v3; // x8
  __int64 v4; // x8
  int32_t v5; // w19

  if ( (byte_4A57FCF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A57FCF = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  Mine = *(void **)(v4 + 336);
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
  Mine = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Mine )
LABEL_20:
    sub_1B8880C(Mine, method);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Mine, v5, 0, 0LL, 0LL);
}


bool __fastcall MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct CommonEffectComponent_o *v6; // x8

  if ( (byte_4A57FC2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57FC2 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v6 = this->fields.commonEffectComponent;
  if ( !v6 )
    sub_1B8880C(v4, v5);
  return v6->fields.isTouched;
}


void __fastcall MapGimmickComponent__OnGimmickTouched(
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

  if ( (byte_4A57FC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A57FC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
    || (Mine = *(void **)(v10 + 336)) == 0LL
    || (Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, v6)) == 0LL
    || !mapGimmickEntity
    || !Instance
    || (ClientMissionManager__OnClickMapGimmick(
          (ClientMissionManager_o *)Instance,
          *((_DWORD *)Mine + 24),
          mapGimmickEntity->fields.id,
          0LL),
        (Mine = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Mine, v6);
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
  MapGimmickComponent__SetDispAnim_33789744(this, is_disp, AnimTime, 1, v6);
}


void __fastcall MapGimmickComponent__SetDispAnimQuick(
        MapGimmickComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_33789744(this, is_disp, 0.0, 0, v3);
}


void __fastcall MapGimmickComponent__SetDispAnim_33789744(
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
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  struct CommonEffectComponent_o *v17; // x20
  System_Action_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
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

  if ( (byte_4A57FCA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_MapGimmickComponent_SetDispAnim__);
    sub_1B885B0(&Method_MapGimmickComponent_StateDispAnimEnd__);
    sub_1B885B0(&Method_MapGimmickComponent_StateHideAnimEnd__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__);
    sub_1B885B0(&MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
    byte_4A57FCA = 1;
  }
  v9 = sub_1B887FC(MapGimmickComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_37;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  MapGimmickComponent__StartActionEffect(this, v14);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v15);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( ((unsigned __int8)mSprite & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v9 + 32) = Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)Component_object, v21, v22);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_37;
    *(float *)(v9 + 28) = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&mSprite->klass[1]._1.this_arg.bits)(
                            mSprite,
                            mSprite->klass[1]._1.element_class);
    *(_DWORD *)(v9 + 24) = is_disp;
    if ( is_disp )
      v23 = 64LL;
    else
      v23 = 56LL;
    v24 = *(System_String_o **)((char *)&this->klass + v23);
    v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v9,
      Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__0__,
      0LL);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v25, 0LL);
      if ( !is_play_se )
        return;
    }
    else
    {
      v26 = *(EasingObject_o **)(v9 + 32);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v9,
        Method_MapGimmickComponent___c__DisplayClass38_0__SetDispAnim_b__1__,
        0LL);
      if ( !v26 )
        goto LABEL_37;
      EasingObject__Play(v26, time, v27, v25, 0.0, this->fields.mEasingType, 0LL);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v24, 0LL) )
    {
      v30 = Method_MapGimmickComponent_SetDispAnim__;
      if ( (*((_BYTE *)Method_MapGimmickComponent_SetDispAnim__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1B885C8(Method_MapGimmickComponent_SetDispAnim__);
      v31 = (System_Reflection_MethodBase_o *)sub_1B88594(v30, v30[4]);
      OverwriteAssetSoundName__PlaySe(v31, v24, 0LL);
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
    v17 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0LL);
      if ( v17 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v17->klass->vtable._6_ForceStart.method)(
          v17,
          1LL,
          v18,
          v17->klass->vtable._7_ForceLoop.methodPtr);
        return;
      }
LABEL_37:
      sub_1B8880C(mSprite, v11);
    }
    if ( !v17 )
      goto LABEL_37;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
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
                                             0LL);
      if ( !mSprite )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0LL);
      MapGimmickComponent__StateHideAnimEnd(this, v32);
    }
    else
    {
      v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v28 )
        goto LABEL_37;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v28->klass->vtable._8_Stop.method)(
                                             v28,
                                             0LL,
                                             v29,
                                             v28->klass->vtable._9_ForceStop.methodPtr);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_37;
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

  if ( (byte_4A57FCE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_0__);
    sub_1B885B0(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A57FCE = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             method);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_16;
  v4 = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, 0LL);
  if ( v4 && !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)v4, v5) )
  {
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_34118192(
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
          v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__45_1__,
            0LL);
          v10 = 2;
        }
        else
        {
          v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
LABEL_16:
    sub_1B8880C(mMapCtrl_MapGimmickInfo, method);
  }
}


void __fastcall MapGimmickComponent__SetMapGimmickInfo(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mMapCtrl_MapGimmickInfo = mapGimmickInfo;
  sub_1B88554(
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
  __int64 v13; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Action_o *v24; // x21
  EasingObject_o *v25; // x22
  System_Action_o *v26; // x23

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_4A57FCB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__);
    sub_1B885B0(&MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
    byte_4A57FCB = 1;
  }
  v13 = sub_1B887FC(MapGimmickComponent___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(float *)(v13 + 24) = x;
  *(float *)(v13 + 28) = y;
  *(float *)(v13 + 32) = z;
  *(_QWORD *)(v13 + 40) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)callback, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 64), (int32_t)Component_object, v22, v23);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_10;
  *(UnityEngine_Vector3_o *)(v13 + 48) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v13,
    Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v25 = *(EasingObject_o **)(v13 + 64);
    v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v13,
      Method_MapGimmickComponent___c__DisplayClass39_0__SetMoveAnim_b__1__,
      0LL);
    if ( v25 )
    {
      EasingObject__Play(v25, time, v26, v24, 0.0, easeType, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(transform, v15);
  }
  ActionExtensions__Call(v24, 0LL);
}


void __fastcall MapGimmickComponent__SetState(
        MapGimmickComponent_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_4A57FC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_MapGimmickComponent__setState__);
    byte_4A57FC8 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_mStateEndAct, (int32_t)end_act, (int32_t)end_act, (int32_t)method);
  v9 = (CStateManager_T__o *)*(p_mStateEndAct - 6);
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  CStateManager_object___setState(
    v9,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_MapGimmickComponent__setState__);
}


void __fastcall MapGimmickComponent__SetTouchEnable(
        MapGimmickComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4A57FCD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57FCD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B8880C(gameObject, v6);
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
  __int64 v15; // x23
  __int64 IsMonoColorRect; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  MapGimmickEntity_o *Mine; // x0
  __int64 *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
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
  int32_t v48; // w3
  UnityEngine_Object_o *v49; // x26
  __int64 v50; // x8
  __int64 v51; // x8
  int32_t v52; // w26
  UnityEngine_GameObject_o *v53; // x26
  bool v54; // w1
  float v55; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v57; // x1
  long double v58; // q0
  CommonEffectComponent_o *v59; // x8
  struct CommonEffectComponent_o *v60; // x24
  System_Action_o *v61; // x25
  int32_t v62; // w2
  int32_t v63; // w3
  float v64; // s0
  float v65; // s1
  float v66; // s2
  float v67; // s9
  float v68; // s8
  float v69; // s10
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *v71; // x24
  __int64 v72; // x25
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x8
  __int64 v76; // x8
  int32_t v77; // w26
  DataManager_o *v78; // x23
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x8
  EventMissionMaster_o *v83; // x23
  EventMissionEntity_array *EventMissionList_39188216; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_Collections_Generic_List_EventDelegate__o *v87; // x23
  EventDelegate_Callback_o *v88; // x24
  int32_t v89; // w0
  int v90; // t1
  System_String_o *v91; // x0
  MapGimmickComponent_o *v92; // x0
  const MethodInfo *v93; // x4
  UnityEngine_Object_o *v94; // x20
  Il2CppObject *v95; // x20
  Il2CppObject *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  UnityEngine_GameObject_o *v99; // x20
  UnityEngine_GameObject_o *v100; // x0
  const MethodInfo *v101; // x2
  UnityEngine_Color_o v102; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57FC1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UIButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__);
    sub_1B885B0(&MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
    sub_1B885B0(&MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    sub_1B885B0(&StringLiteral_24693/*"white00"*/);
    sub_1B885B0(&StringLiteral_1225/*"000000"*/);
    sub_1B885B0(&StringLiteral_19821/*"gimmick_"*/);
    sub_1B885B0(&StringLiteral_8855/*"MapGimmickEffect_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_8854/*"MapGimmickActionEffect_"*/);
    byte_4A57FC1 = 1;
  }
  *(_QWORD *)&v102.fields.r = 0LL;
  *(_QWORD *)&v102.fields.b = 0LL;
  entity = 0LL;
  v15 = sub_1B887FC(MapGimmickComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_133;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 32) = touchCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)touchCallback, v20, v21);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mMapCtrl_MapGimmickInfo, (int32_t)mg_inf, v22, v23);
  *(_WORD *)&this->fields.isForceLoop = 0;
  if ( !mg_inf )
    goto LABEL_133;
  Mine = MapControl_MapGimmickInfo__GetMine(mg_inf, v17);
  *(_QWORD *)(v15 + 24) = Mine;
  v25 = (__int64 *)(v15 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)Mine, v26, v27);
  IsMonoColorRect = *(_QWORD *)(v15 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    mSprite = this->fields.mSprite;
    v29 = (System_String_o *)StringLiteral_24693/*"white00"*/;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(mSprite, 0LL);
  }
  else
  {
    if ( !*v25 )
      goto LABEL_133;
    v30 = System_Int32__ToString_62512312((unsigned int)*v25 + 24, (System_String_o *)StringLiteral_1225/*"000000"*/, 0LL);
    v31 = System_String__Concat_61707032((System_String_o *)StringLiteral_19821/*"gimmick_"*/, v30, 0LL);
    v32 = this->fields.mSprite;
    v29 = v31;
    IsMonoColorRect = (__int64)UIAtlas__GetUIAtlasBySpriteName(atlases, v31, 0LL);
    if ( !v32 )
      goto LABEL_133;
    UISprite__set_atlas(v32, (UIAtlas_o *)IsMonoColorRect, 0LL);
  }
  v33 = (UnityEngine_Behaviour_o *)this->fields.mSprite;
  if ( !v33 )
    goto LABEL_133;
  monitor = (UnityEngine_Object_o *)v33[19].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  UnityEngine_Behaviour__set_enabled(v33, v35, 0LL);
  IsMonoColorRect = *v25;
  if ( !*v25 )
    goto LABEL_133;
  IsMonoColorRect = (__int64)MapGimmickEntity__GetColorCodeFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( !this->fields.mSprite )
    goto LABEL_133;
  v36 = (System_String_o *)IsMonoColorRect;
  IsMonoColorRect = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.mSprite, 0LL);
  if ( (IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v29, 0LL);
    IsMonoColorRect = *v25;
    if ( !*v25 )
      goto LABEL_133;
    IsMonoColorRect = MapGimmickEntity__IsMonoColorRect((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    v37 = this->fields.mSprite;
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !mapCamera )
        goto LABEL_133;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !v37 )
        goto LABEL_133;
      UIWidget__SetDimensions((UIWidget_o *)this->fields.mSprite, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0LL);
    }
    else
    {
      if ( !v37 )
        goto LABEL_133;
      IsMonoColorRect = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v37->klass->vtable._33_MakePixelPerfect.method)(
                          this->fields.mSprite,
                          v37->klass->vtable._34_get_minWidth.methodPtr);
    }
    if ( !*v25 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    UIWidget__set_depth((UIWidget_o *)IsMonoColorRect, *(_DWORD *)(*v25 + 36) + this->fields.mDepthBase, 0LL);
    if ( !*v25 )
      goto LABEL_133;
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v55 = this->fields.mScaleBase * (float)((float)*(int *)(*v25 + 80) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
    GameObjectExtensions__SetLocalScale_33726240(gameObject, v55, v57);
    if ( !System_String__IsNullOrEmpty(v36, 0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v36, &v102, 0LL);
      IsMonoColorRect = (__int64)this->fields.mSprite;
      if ( !IsMonoColorRect )
        goto LABEL_133;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, v102, 0LL);
    }
    IsMonoColorRect = (__int64)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_133;
    LODWORD(v58) = 1.0;
    if ( !mg_inf->fields.dispType )
      *(float *)&v58 = 0.0;
    (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)IsMonoColorRect + 440LL))(
      IsMonoColorRect,
      *(_QWORD *)(*(_QWORD *)IsMonoColorRect + 448LL),
      v58);
  }
  else
  {
    if ( !*v25 )
      goto LABEL_133;
    v39 = System_Int32__ToString((unsigned int)*v25 + 24, 0LL);
    v40 = (MapGimmickComponent_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_8855/*"MapGimmickEffect_"*/, v39, 0LL);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab(v40, (System_String_o *)v40, assetData, multiAssetData, v41);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0LL, 0LL) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v17);
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
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v44);
      this->fields.commonEffectComponent = CommonEffectComponent;
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.commonEffectComponent,
        (int32_t)CommonEffectComponent,
        v47,
        v48);
      v49 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
        }
        IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v50 = **(_QWORD **)(IsMonoColorRect + 184);
        if ( !v50 )
          goto LABEL_133;
        v51 = *(_QWORD *)(v50 + 264);
        if ( !v51 )
          goto LABEL_133;
        IsMonoColorRect = *(_QWORD *)(v51 + 336);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v17);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        v52 = *(_DWORD *)(IsMonoColorRect + 96);
        IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)IsMonoColorRect,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_133;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
          &entity,
          v52,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
        {
          IsMonoColorRect = (__int64)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_133;
          v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          IsMonoColorRect = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_133;
          IsMonoColorRect = QuestTree__CheckMapGimmickCond_34118192((QuestTree_o *)IsMonoColorRect, mg_inf, 0LL);
          if ( !v53 )
            goto LABEL_133;
          v54 = IsMonoColorRect & 1;
          IsMonoColorRect = (__int64)v53;
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
          v54 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v54, 0LL);
        IsMonoColorRect = *v25;
        if ( !*v25 )
          goto LABEL_133;
        IsMonoColorRect = MapGimmickEntity__GetUseAnimFromScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
        v59 = *p_commonEffectComponent;
        if ( (int)IsMonoColorRect < 1 )
        {
          if ( !v59 )
            goto LABEL_133;
        }
        else
        {
          if ( !v59 )
            goto LABEL_133;
          v59->fields.useAnimNum = IsMonoColorRect;
        }
        CommonEffectComponent__ResetPrewarmParticleList(v59, 0LL);
        v60 = *p_commonEffectComponent;
        v61 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v61,
          (Il2CppObject *)v15,
          Method_MapGimmickComponent___c__DisplayClass23_0__Setup_b__0__,
          0LL);
        if ( !v60 )
          goto LABEL_133;
        v60->fields.touchCallback = v61;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v60->fields.touchCallback, (int32_t)v61, v62, v63);
      }
    }
  }
  IsMonoColorRect = *v25;
  if ( !*v25 )
    goto LABEL_133;
  *(UnityEngine_Vector3_o *)&v64 = MapGimmickEntity__GetTouchSize((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
  if ( v64 <= 0.0 )
    goto LABEL_117;
  v67 = v65;
  if ( v65 <= 0.0 )
    goto LABEL_117;
  v68 = v64;
  v69 = v66;
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)IsMonoColorRect,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                 (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_object = (Il2CppObject *)IsMonoColorRect;
  }
  if ( !Component_object )
    goto LABEL_133;
  v104.fields.x = v68;
  v104.fields.y = v67;
  v104.fields.z = v69;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v104, 0LL);
  IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsMonoColorRect )
    goto LABEL_133;
  v71 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)IsMonoColorRect,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v71, 0LL, 0LL) )
  {
    IsMonoColorRect = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v71 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)IsMonoColorRect,
                                    (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *v25;
  if ( !*v25 )
LABEL_133:
    sub_1B8880C(IsMonoColorRect, v17);
  if ( MapGimmickEntity__IsEventMissionScript((MapGimmickEntity_o *)IsMonoColorRect, 0LL) )
  {
    v72 = sub_1B887FC(MapGimmickComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v72, 0LL);
    if ( !v72 )
      goto LABEL_133;
    *(_QWORD *)(v72 + 32) = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 32), v15, v73, v74);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsMonoColorRect = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v75 = **(_QWORD **)(IsMonoColorRect + 184);
    if ( !v75 )
      goto LABEL_133;
    v76 = *(_QWORD *)(v75 + 264);
    if ( !v76 )
      goto LABEL_133;
    IsMonoColorRect = *(_QWORD *)(v76 + 336);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v17);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v77 = *(_DWORD *)(IsMonoColorRect + 96);
    IsMonoColorRect = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v78 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)IsMonoColorRect,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    v79 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
            v77,
            (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v72 + 16) = v79;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 16), (int32_t)v79, v80, v81);
    IsMonoColorRect = (__int64)DataManager__GetMasterData_object_(
                                 v78,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v82 = *(_QWORD *)(v72 + 32);
    if ( !v82 )
      goto LABEL_133;
    v83 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(_QWORD *)(v82 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_133;
    IsMonoColorRect = (__int64)MapGimmickEntity__GetEventMissionIdList((MapGimmickEntity_o *)IsMonoColorRect, 0LL);
    if ( !v83 )
      goto LABEL_133;
    EventMissionList_39188216 = EventMissionMaster__getEventMissionList_39188216(
                                  v83,
                                  (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                  0LL);
    *(_QWORD *)(v72 + 24) = EventMissionList_39188216;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 24), (int32_t)EventMissionList_39188216, v85, v86);
    if ( !v71 )
      goto LABEL_133;
    v87 = (System_Collections_Generic_List_EventDelegate__o *)v71[8].monitor;
    v88 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v88,
      (Il2CppObject *)v72,
      (intptr_t)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__,
      0LL);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(v87, v88, 0LL);
  }
LABEL_117:
  IsMonoColorRect = *v25;
  if ( !*v25 )
    goto LABEL_133;
  v90 = *(_DWORD *)(IsMonoColorRect + 100);
  v89 = IsMonoColorRect + 100;
  if ( v90 >= 1 )
  {
    v91 = System_Int32__ToString(v89, 0LL);
    v92 = (MapGimmickComponent_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_8854/*"MapGimmickActionEffect_"*/, v91, 0LL);
    v94 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                    v92,
                                    (System_String_o *)v92,
                                    assetData,
                                    multiAssetData,
                                    v93);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsMonoColorRect = UnityEngine_Object__op_Inequality(v94, 0LL, 0LL);
    if ( (IsMonoColorRect & 1) != 0 )
    {
      if ( !v94 )
        goto LABEL_133;
      v95 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v94,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v95, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v96 = UnityEngine_Object__Instantiate_object_(
                v95,
                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v96;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actionEffect, (int32_t)v96, v97, v98);
        IsMonoColorRect = (__int64)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0LL);
          v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SafeSetParent_33730068(v99, v100, v101);
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

  if ( (byte_4A57FC9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57FC9 = 1;
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
      sub_1B8880C(gameObject, v4);
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

  if ( (byte_4A57FCC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57FCC = 1;
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
      sub_1B8880C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    MapGimmickComponent__SetTouchEnable(this, 0, v7);
  }
  MapGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57FBF & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_MapGimmickComponent__update__);
    byte_4A57FBF = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30AAE44 *)Method_CStateManager_MapGimmickComponent__update__);
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_0(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1B8880C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall MapGimmickComponent___SetDisplayByRaidProgress_b__45_1(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    MapGimmickComponent__SetState(that, 1, 0LL, v8);
  }
  else if ( !dispType )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_33789744(that, 1, AnimTime, 1, v7);
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
    sub_1B8880C(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_33789744(that, 0, AnimTime, 1, v7);
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
  if ( (byte_4A57FD2 & 1) == 0 )
  {
    sub_1B885B0(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_4A57FD2 = 1;
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
  const MethodInfo *v9; // x3
  struct MapGimmickComponent_o *v10; // x8
  struct MapGimmickComponent_o *v11; // x8
  int32_t v12; // w1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_4A57FD1 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_4A57FD1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      Instance = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)Instance, 0LL);
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
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v11 = this->fields.mThat;
          if ( !v11 || !Instance )
            goto LABEL_31;
          Instance = QuestTree__CheckMapGimmickCond_34118192(
                       (QuestTree_o *)Instance,
                       v11->fields.mMapCtrl_MapGimmickInfo,
                       0LL);
          v10 = this->fields.mThat;
          if ( (Instance & 1) != 0 )
          {
            if ( v10 )
            {
              v12 = 3;
LABEL_30:
              MapGimmickComponent__SetState(v10, v12, 0LL, v9);
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
          sub_1B8880C(Instance, v4);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
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
    sub_1B8880C(this, method);
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
  int32_t v16; // w3

  if ( (byte_4A57FD3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
    sub_1B885B0(&Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__);
    byte_4A57FD3 = 1;
  }
  v3 = Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__;
  if ( (*((_BYTE *)Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__1__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  v8 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0LL);
  v9 = this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_13;
  v10 = (System_String_o *)Instance;
  Instance = v9->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v12 = (System_String_o *)Instance;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MapGimmickComponent___c__DisplayClass23_1__Setup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v15, v16);
  }
  if ( !v8 )
LABEL_13:
    sub_1B8880C(Instance, v6);
  CommonUI__OpenEventMissionListDialog(v8, v10, v12, eventDetailEnt, eventMissionEntList, _9__2, 0LL);
}


void __fastcall MapGimmickComponent___c__DisplayClass23_1___Setup_b__2(
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
  if ( (byte_4A57FD4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57FD4 = 1;
  }
  if ( !byte_4A57FF6 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A57FF6 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_FilterId_k__BackingField = 0;
  eventMissionEntList = v2->fields.eventMissionEntList;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !eventMissionEntList->max_length )
LABEL_31:
    sub_1B88814(this, method);
  v5 = eventMissionEntList->m_Items[0];
  if ( !v5 )
    goto LABEL_30;
  id = v5->fields.id;
  if ( !byte_4A57FF7 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A57FF7 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
  }
  static_fields->_MissionId_k__BackingField = id;
  eventDetailEnt = v2->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0LL);
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass23_1_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
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
  if ( !byte_4A57FF8 )
  {
    this = (MapGimmickComponent___c__DisplayClass23_1_o *)sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A57FF8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = name_high;
  v15 = v2->fields.eventDetailEnt;
  if ( !v15
    || (EventRewardSaveData__SaveCurrentEventData(v15->fields.eventId, 0LL), (v16 = v2->fields.eventDetailEnt) == 0LL)
    || (eventId = v16->fields.eventId,
        v18 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_38664432(v18, (System_String_o *)StringLiteral_1/*""*/, eventId, 0LL),
        !v18)
    || (SceneJumpInfo__SetReturnNowScene(v18, 0LL),
        (this = (MapGimmickComponent___c__DisplayClass23_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(_4__this, method);
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