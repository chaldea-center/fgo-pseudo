void EventExpeditionListViewItem___ctor(
        EventExpeditionListViewItem_o *this,
        int32_t index,
        EventExpeditionEntity_o *evExpeditionEnt,
        int32_t eventId,
        ExpeditionAssetManager_o *asset,
        System_Action_o *updateNoticeNum,
        const MethodInfo *method)
{
  struct EventExpeditionEntity_o **p_eventExpeditionEnt; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  struct CommonConsumeEntity_array *IdEntityList; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  bool IsOpen; // w0

  if ( (byte_596A5A2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A5A2 = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.eventExpeditionEnt = evExpeditionEnt;
  p_eventExpeditionEnt = &this->fields.eventExpeditionEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventExpeditionEnt,
    (int32_t)evExpeditionEnt,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.currentEventId = eventId;
  this->fields.asset = asset;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.asset, (int32_t)asset, v20, v21, v22, v23, v24, v25);
  this->fields.updateNoticeNum = updateNoticeNum;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.updateNoticeNum,
    (int32_t)updateNoticeNum,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventExpeditionEnt )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   (*p_eventExpeditionEnt)->fields.commonConsumeId,
                   0);
  this->fields.commonConsumeEntity = IdEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commonConsumeEntity,
    (int32_t)IdEntityList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  eventExpeditionEnt = this->fields.eventExpeditionEnt;
  if ( !eventExpeditionEnt )
    goto LABEL_14;
  if ( !eventExpeditionEnt->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventExpeditionEnt)
    || !Instance )
  {
LABEL_14:
    sub_2213CDC(Instance, v33);
  }
  IsOpen = CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Instance,
             (*p_eventExpeditionEnt)->fields.commonReleaseId,
             0,
             0,
             0);
LABEL_13:
  this->fields.isRelease = IsOpen;
}


void EventExpeditionListViewItem__CheckExpeditionCondition(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  ExpeditionInfo_o *ExpeditionInfo; // x20
  int64_t Time; // x0
  __int16 v7; // w8

  if ( (byte_596A5A4 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596A5A4 = 1;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(this, method);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
  Time = NetworkManager__getTime(0);
  if ( ExpeditionInfo && ExpeditionInfo->fields.pieceIdx )
  {
    if ( Time >= ExpeditionInfo->fields.endedAt )
      v7 = 1;
    else
      v7 = 256;
    *(_WORD *)&this->fields.isComplete = v7;
  }
  else
  {
    *(_WORD *)&this->fields.isComplete = 0;
  }
}


void EventExpeditionListViewItem__Finalize(EventExpeditionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


ExpeditionInfo_o *EventExpeditionListViewItem__GetExpeditionInfo(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8

  if ( (byte_596A5A3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A5A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___),
        (eventExpeditionEnt = this->fields.eventExpeditionEnt) == 0)
    || !Instance )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserEventExpeditionMaster__GetExpeditionInfo(
           (UserEventExpeditionMaster_o *)Instance,
           this->fields.currentEventId,
           eventExpeditionEnt->fields.idx,
           0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *EventExpeditionListViewItem__GetRunningAnim(
        EventExpeditionListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionAssetManager_o *asset; // x0

  asset = this->fields.asset;
  if ( !asset )
    sub_2213CDC(0, *(_QWORD *)&idx);
  return ExpeditionAssetManager__GetRunEffect(asset, idx, 0);
}


void EventExpeditionListViewItem__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.updateNoticeNum, 0);
}


CommonConsumeEntity_array *EventExpeditionListViewItem__get_ConsumeList(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commonConsumeEntity;
}


EventExpeditionEntity_o *EventExpeditionListViewItem__get_EventExpeditionEnt(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventExpeditionEnt;
}


int32_t EventExpeditionListViewItem__get_GetEventId(EventExpeditionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


bool EventExpeditionListViewItem__get_IsComplete(EventExpeditionListViewItem_o *this, const MethodInfo *method)
{
  EventExpeditionListViewItem__CheckExpeditionCondition(this, method);
  return this->fields.isComplete;
}


bool EventExpeditionListViewItem__get_IsRelease(EventExpeditionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isRelease;
}


bool EventExpeditionListViewItem__get_IsRunning(EventExpeditionListViewItem_o *this, const MethodInfo *method)
{
  EventExpeditionListViewItem__CheckExpeditionCondition(this, method);
  return this->fields.isRunning;
}