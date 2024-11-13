void __fastcall EventMapManagerBase___ctor(EventMapManagerBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMapManagerBase__AllTouchBlockForceFalse(EventMapManagerBase_o *this, const MethodInfo *method)
{
  EventMapManagerBase_c *klass; // x8

  klass = this->klass;
  *(_QWORD *)&this->fields.touchBlockNum = 0LL;
  ((void (__fastcall *)(EventMapManagerBase_o *, _QWORD, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
    this,
    0LL,
    klass->vtable._31_SetCameraWorkBlock.methodPtr);
}


void __fastcall EventMapManagerBase__DestroyMapObjects(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__ExtractMapObjectFromAssetData(
        EventMapManagerBase_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__Finish(EventMapManagerBase_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
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

  ((void (__fastcall *)(EventMapManagerBase_o *, Il2CppMethodPointer))this->klass->vtable._26_DestroyMapObjects.method)(
    this,
    this->klass->vtable._27_ReleaseAssets.methodPtr);
  ((void (__fastcall *)(EventMapManagerBase_o *, Il2CppMethodPointer))this->klass->vtable._27_ReleaseAssets.method)(
    this,
    this->klass->vtable._28_Finish.methodPtr);
  this->fields.terminalMap = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.terminalMap, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.mapCamera = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapCamera, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.rootRoadP = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootRoadP, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.rootSpotP = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootSpotP, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.rootPathP = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootPathP, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.rootGimmickP = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootGimmickP, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.rootEffectP = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootEffectP, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.warInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.warInfo, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.mapInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapInfo, 0LL, v51, v52, v53, v54, v55, v56);
}


void __fastcall EventMapManagerBase__Initialize(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall EventMapManagerBase__IsShowQuestListWhenComingBackToMap(
        EventMapManagerBase_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall EventMapManagerBase__LoadAssets(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__LocateDialogToUiRoot(
        EventMapManagerBase_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  TerminalSceneComponent_o *mInstance; // x0
  System_Nullable_Vector3__o v6; // 0:x2.16

  if ( (byte_4B12D7B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, dialog, method);
    byte_4B12D7B = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, dialog);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, dialog, method);
    byte_4B10F83 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, dialog);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance
    || (*(_QWORD *)&v6.fields.hasValue = 0LL,
        *(_QWORD *)&v6.fields.value.fields.y = 0LL,
        TerminalSceneComponent__LocateDialogToUiRoot(mInstance, dialog, v6, 0LL),
        !dialog)
    || (mInstance = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)dialog,
                                                  0LL)) == 0LL )
  {
    sub_1BCAA3C(mInstance, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mInstance, 0, 0LL);
}


void __fastcall EventMapManagerBase__OnAfterQuestAfterAction(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__OnAfterSpotCreated(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__OnBeforeQuestAfterAction(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__OnEveryActionEnd(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__ReleaseAssets(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapManagerBase__SetAllTouchBlock(
        EventMapManagerBase_o *this,
        bool value,
        const MethodInfo *method)
{
  EventMapManagerBase_o *v4; // x20
  int v5; // w10

  v4 = this;
  if ( (byte_4B12D79 & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, value, method);
    byte_4B12D79 = 1;
  }
  if ( !v4
    || (value ? (v5 = 1) : (v5 = -1),
        v4->fields.touchBlockNum = (v4->fields.touchBlockNum + v5) & ~((v4->fields.touchBlockNum + v5) >> 31),
        (this = (EventMapManagerBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(this, value);
  }
  CommonUI__SetEventFadeMaskCollider((CommonUI_o *)this, v4->fields.touchBlockNum > 0, 0LL);
  ((void (__fastcall *)(EventMapManagerBase_o *, bool, Il2CppMethodPointer))v4->klass->vtable._31_SetCameraWorkBlock.method)(
    v4,
    value,
    v4->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapManagerBase__SetCameraWorkBlock(
        EventMapManagerBase_o *this,
        bool value,
        const MethodInfo *method)
{
  EventMapManagerBase_o *v4; // x19
  int v5; // w10
  UnityEngine_Object_o *mapCamera; // x20
  struct MapCamera_o *v7; // x8

  v4 = this;
  if ( (byte_4B12D7A & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, method);
    byte_4B12D7A = 1;
  }
  if ( !v4 )
    goto LABEL_13;
  if ( value )
    v5 = 1;
  else
    v5 = -1;
  v4->fields.cameraWorkBlockNum = (v4->fields.cameraWorkBlockNum + v5) & ~((v4->fields.cameraWorkBlockNum + v5) >> 31);
  mapCamera = (UnityEngine_Object_o *)v4->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  this = (EventMapManagerBase_o *)UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.mapCamera;
    if ( v7 )
    {
      v7->fields._IsTouchEnable_k__BackingField = v4->fields.cameraWorkBlockNum < 1;
      return;
    }
LABEL_13:
    sub_1BCAA3C(this, value);
  }
}


void __fastcall EventMapManagerBase__SetClickPanelEnable(
        EventMapManagerBase_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__SetTerminalMapInfo(
        EventMapManagerBase_o *this,
        ScrTerminalMap_o *terminalMap,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        MapCamera_o *mapCamera,
        UnityEngine_GameObject_o *rootEffectP,
        UnityEngine_GameObject_o *rootGimmickP,
        UnityEngine_GameObject_o *rootPathP,
        UnityEngine_GameObject_o *rootRoadP,
        UnityEngine_GameObject_o *rootSpotP,
        const MethodInfo *method)
{
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7

  this->fields.terminalMap = terminalMap;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.terminalMap,
    (int64_t)terminalMap,
    (int64_t)mapInfo,
    (int32_t)warInfo,
    (System_String_o *)mapCamera,
    (BattleSetupInfo_o *)rootEffectP,
    (FollowerInfo_o *)rootGimmickP,
    (PartyListViewItem_o *)rootPathP);
  this->fields.mapInfo = mapInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapInfo, (int64_t)mapInfo, v18, v19, v20, v21, v22, v23);
  this->fields.warInfo = warInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.warInfo, (int64_t)warInfo, v24, v25, v26, v27, v28, v29);
  this->fields.mapCamera = mapCamera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapCamera, (int64_t)mapCamera, v30, v31, v32, v33, v34, v35);
  this->fields.rootEffectP = rootEffectP;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rootEffectP,
    (int64_t)rootEffectP,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.rootGimmickP = rootGimmickP;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rootGimmickP,
    (int64_t)rootGimmickP,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.rootPathP = rootPathP;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootPathP, (int64_t)rootPathP, v48, v49, v50, v51, v52, v53);
  this->fields.rootRoadP = rootRoadP;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootRoadP, (int64_t)rootRoadP, v54, v55, v56, v57, v58, v59);
  this->fields.rootSpotP = rootSpotP;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rootSpotP, (int64_t)rootSpotP, v60, v61, v62, v63, v64, v65);
}