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
  int32_t v3; // w2
  int32_t v4; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  ((void (__fastcall *)(EventMapManagerBase_o *, Il2CppMethodPointer))this->klass->vtable._26_DestroyMapObjects.method)(
    this,
    this->klass->vtable._27_ReleaseAssets.methodPtr);
  ((void (__fastcall *)(EventMapManagerBase_o *, Il2CppMethodPointer))this->klass->vtable._27_ReleaseAssets.method)(
    this,
    this->klass->vtable._28_Finish.methodPtr);
  this->fields.terminalMap = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.terminalMap, 0, v3, v4);
  this->fields.mapCamera = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mapCamera, 0, v5, v6);
  this->fields.rootRoadP = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootRoadP, 0, v7, v8);
  this->fields.rootSpotP = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootSpotP, 0, v9, v10);
  this->fields.rootPathP = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootPathP, 0, v11, v12);
  this->fields.rootGimmickP = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootGimmickP, 0, v13, v14);
  this->fields.rootEffectP = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootEffectP, 0, v15, v16);
  this->fields.warInfo = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.warInfo, 0, v17, v18);
  this->fields.mapInfo = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mapInfo, 0, v19, v20);
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

  if ( (byte_49FB7A9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, dialog);
    byte_49FB7A9 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F9DCD )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, dialog);
    byte_49F9DCD = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
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
    sub_1B64C5C(mInstance, dialog);
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
  if ( (byte_49FB7A7 & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, value);
    byte_49FB7A7 = 1;
  }
  if ( !v4
    || (value ? (v5 = 1) : (v5 = -1),
        v4->fields.touchBlockNum = (v4->fields.touchBlockNum + v5) & ~((v4->fields.touchBlockNum + v5) >> 31),
        (this = (EventMapManagerBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64C5C(this, value);
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
  if ( (byte_49FB7A8 & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, value);
    byte_49FB7A8 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B64C5C(this, value);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3

  this->fields.terminalMap = terminalMap;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.terminalMap,
    (int32_t)terminalMap,
    (int32_t)mapInfo,
    (int32_t)warInfo);
  this->fields.mapInfo = mapInfo;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mapInfo, (int32_t)mapInfo, v18, v19);
  this->fields.warInfo = warInfo;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.warInfo, (int32_t)warInfo, v20, v21);
  this->fields.mapCamera = mapCamera;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v22, v23);
  this->fields.rootEffectP = rootEffectP;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootEffectP, (int32_t)rootEffectP, v24, v25);
  this->fields.rootGimmickP = rootGimmickP;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootGimmickP, (int32_t)rootGimmickP, v26, v27);
  this->fields.rootPathP = rootPathP;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootPathP, (int32_t)rootPathP, v28, v29);
  this->fields.rootRoadP = rootRoadP;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootRoadP, (int32_t)rootRoadP, v30, v31);
  this->fields.rootSpotP = rootSpotP;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.rootSpotP, (int32_t)rootSpotP, v32, v33);
}