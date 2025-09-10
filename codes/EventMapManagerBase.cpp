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
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  ((void (__fastcall *)(EventMapManagerBase_o *, const MethodInfo *))this->klass->vtable._26_DestroyMapObjects.methodPtr)(
    this,
    this->klass->vtable._26_DestroyMapObjects.method);
  ((void (__fastcall *)(EventMapManagerBase_o *, const MethodInfo *))this->klass->vtable._27_ReleaseAssets.methodPtr)(
    this,
    this->klass->vtable._27_ReleaseAssets.method);
  this->fields.terminalMap = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.terminalMap, 0, v3, v4);
  this->fields.mapCamera = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v5, v6);
  this->fields.rootRoadP = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootRoadP, 0, v7, v8);
  this->fields.rootSpotP = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootSpotP, 0, v9, v10);
  this->fields.rootPathP = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootPathP, 0, v11, v12);
  this->fields.rootGimmickP = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootGimmickP, 0, v13, v14);
  this->fields.rootEffectP = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootEffectP, 0, v15, v16);
  this->fields.warInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.warInfo, 0, v17, v18);
  this->fields.mapInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapInfo, 0, v19, v20);
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

  if ( (byte_4C23C20 & 1) == 0 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23C20 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
    sub_1C2D6EC(mInstance, dialog);
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
  if ( (byte_4C23C1E & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23C1E = 1;
  }
  if ( !v4
    || (value ? (v5 = 1) : (v5 = -1),
        v4->fields.touchBlockNum = (v4->fields.touchBlockNum + v5) & ~((v4->fields.touchBlockNum + v5) >> 31),
        (this = (EventMapManagerBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(this, value);
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
  if ( (byte_4C23C1F & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23C1F = 1;
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
    sub_1C2D6EC(this, value);
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
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  this->fields.terminalMap = terminalMap;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.terminalMap,
    (int32_t)terminalMap,
    (int32_t)mapInfo,
    (const MethodInfo *)warInfo);
  this->fields.mapInfo = mapInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapInfo, (int32_t)mapInfo, v18, v19);
  this->fields.warInfo = warInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.warInfo, (int32_t)warInfo, v20, v21);
  this->fields.mapCamera = mapCamera;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v22, v23);
  this->fields.rootEffectP = rootEffectP;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootEffectP, (int32_t)rootEffectP, v24, v25);
  this->fields.rootGimmickP = rootGimmickP;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootGimmickP, (int32_t)rootGimmickP, v26, v27);
  this->fields.rootPathP = rootPathP;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootPathP, (int32_t)rootPathP, v28, v29);
  this->fields.rootRoadP = rootRoadP;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootRoadP, (int32_t)rootRoadP, v30, v31);
  this->fields.rootSpotP = rootSpotP;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootSpotP, (int32_t)rootSpotP, v32, v33);
}