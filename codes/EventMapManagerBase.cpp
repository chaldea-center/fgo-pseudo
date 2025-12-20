void EventMapManagerBase___ctor(EventMapManagerBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventMapManagerBase__AllTouchBlockForceFalse(EventMapManagerBase_o *this, const MethodInfo *method)
{
  EventMapManagerBase_c *klass; // x8

  klass = this->klass;
  *(_QWORD *)&this->fields.touchBlockNum = 0;
  ((void (__fastcall *)(EventMapManagerBase_o *, _QWORD, const MethodInfo *))klass->vtable._30_SetAllTouchBlock.methodPtr)(
    this,
    0,
    klass->vtable._30_SetAllTouchBlock.method);
}


void EventMapManagerBase__DestroyMapObjects(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


void EventMapManagerBase__ExtractMapObjectFromAssetData(
        EventMapManagerBase_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ;
}


void EventMapManagerBase__Finish(EventMapManagerBase_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7

  ((void (__fastcall *)(EventMapManagerBase_o *, const MethodInfo *))this->klass->vtable._26_DestroyMapObjects.methodPtr)(
    this,
    this->klass->vtable._26_DestroyMapObjects.method);
  ((void (__fastcall *)(EventMapManagerBase_o *, const MethodInfo *))this->klass->vtable._27_ReleaseAssets.methodPtr)(
    this,
    this->klass->vtable._27_ReleaseAssets.method);
  this->fields.terminalMap = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.terminalMap, 0, v3, v4, v5, v6, v7, v8);
  this->fields.mapCamera = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mapCamera, 0, v9, v10, v11, v12, v13, v14);
  this->fields.rootRoadP = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootRoadP, 0, v15, v16, v17, v18, v19, v20);
  this->fields.rootSpotP = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootSpotP, 0, v21, v22, v23, v24, v25, v26);
  this->fields.rootPathP = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootPathP, 0, v27, v28, v29, v30, v31, v32);
  this->fields.rootGimmickP = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootGimmickP, 0, v33, v34, v35, v36, v37, v38);
  this->fields.rootEffectP = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootEffectP, 0, v39, v40, v41, v42, v43, v44);
  this->fields.warInfo = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.warInfo, 0, v45, v46, v47, v48, v49, v50);
  this->fields.mapInfo = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mapInfo, 0, v51, v52, v53, v54, v55, v56);
}


void EventMapManagerBase__Initialize(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


bool EventMapManagerBase__IsShowQuestListWhenComingBackToMap(EventMapManagerBase_o *this, const MethodInfo *method)
{
  return 1;
}


void EventMapManagerBase__LoadAssets(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0);
}


void EventMapManagerBase__LocateDialogToUiRoot(
        EventMapManagerBase_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  TerminalSceneComponent_o *mInstance; // x0
  System_Nullable_Vector3__o v6; // 0:x2.16

  if ( (byte_4D29026 & 1) == 0 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D29026 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance
    || (*(_QWORD *)&v6.fields.hasValue = 0,
        *(_QWORD *)&v6.fields.value.fields.y = 0,
        TerminalSceneComponent__LocateDialogToUiRoot(mInstance, dialog, v6, 0),
        !dialog)
    || (mInstance = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)dialog,
                                                  0)) == 0 )
  {
    sub_1C942F0(mInstance, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mInstance, 0, 0);
}


void EventMapManagerBase__OnAfterQuestAfterAction(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0);
}


void EventMapManagerBase__OnAfterSpotCreated(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0);
}


void EventMapManagerBase__OnBeforeQuestAfterAction(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0);
}


void EventMapManagerBase__OnEveryActionEnd(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


void EventMapManagerBase__ReleaseAssets(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventMapManagerBase__SetAllTouchBlock(EventMapManagerBase_o *this, bool value, const MethodInfo *method)
{
  EventMapManagerBase_o *v4; // x20
  int v5; // w10

  v4 = this;
  if ( (byte_4D29024 & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29024 = 1;
  }
  if ( !v4
    || (value ? (v5 = 1) : (v5 = -1),
        v4->fields.touchBlockNum = (v4->fields.touchBlockNum + v5) & ~((v4->fields.touchBlockNum + v5) >> 31),
        (this = (EventMapManagerBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C942F0(this, value);
  }
  CommonUI__SetEventFadeMaskCollider((CommonUI_o *)this, v4->fields.touchBlockNum > 0, 0);
  ((void (__fastcall *)(EventMapManagerBase_o *, bool, const MethodInfo *))v4->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    v4,
    value,
    v4->klass->vtable._31_SetCameraWorkBlock.method);
}


// local variable allocation has failed, the output may be wrong!
void EventMapManagerBase__SetCameraWorkBlock(EventMapManagerBase_o *this, bool value, const MethodInfo *method)
{
  EventMapManagerBase_o *v4; // x19
  int v5; // w10
  UnityEngine_Object_o *mapCamera; // x20
  struct MapCamera_o *v7; // x8

  v4 = this;
  if ( (byte_4D29025 & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29025 = 1;
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
  this = (EventMapManagerBase_o *)UnityEngine_Object__op_Inequality(mapCamera, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.mapCamera;
    if ( v7 )
    {
      v7->fields._IsTouchEnable_k__BackingField = v4->fields.cameraWorkBlockNum < 1;
      return;
    }
LABEL_13:
    sub_1C942F0(this, value);
  }
}


void EventMapManagerBase__SetClickPanelEnable(EventMapManagerBase_o *this, bool isEnable, const MethodInfo *method)
{
  ;
}


void EventMapManagerBase__SetTerminalMapInfo(
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
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7

  this->fields.terminalMap = terminalMap;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.terminalMap,
    (int32_t)terminalMap,
    (int32_t)mapInfo,
    (int32_t)warInfo,
    (System_String_o *)mapCamera,
    (int32_t)rootEffectP,
    (int64_t)rootGimmickP,
    (System_String_o *)rootPathP);
  this->fields.mapInfo = mapInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mapInfo, (int32_t)mapInfo, v18, v19, v20, v21, v22, v23);
  this->fields.warInfo = warInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.warInfo, (int32_t)warInfo, v24, v25, v26, v27, v28, v29);
  this->fields.mapCamera = mapCamera;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v30, v31, v32, v33, v34, v35);
  this->fields.rootEffectP = rootEffectP;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.rootEffectP,
    (int32_t)rootEffectP,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.rootGimmickP = rootGimmickP;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.rootGimmickP,
    (int32_t)rootGimmickP,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.rootPathP = rootPathP;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootPathP, (int32_t)rootPathP, v48, v49, v50, v51, v52, v53);
  this->fields.rootRoadP = rootRoadP;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootRoadP, (int32_t)rootRoadP, v54, v55, v56, v57, v58, v59);
  this->fields.rootSpotP = rootSpotP;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rootSpotP, (int32_t)rootSpotP, v60, v61, v62, v63, v64, v65);
}