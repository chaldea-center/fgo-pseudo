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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  struct CommonConsumeEntity_array *IdEntityList; // x0
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  bool IsOpen; // w0

  if ( (byte_4CE8803 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8803 = 1;
  }
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields.eventExpeditionEnt = evExpeditionEnt;
  p_eventExpeditionEnt = &this->fields.eventExpeditionEnt;
  sub_1C7BA8C(&this->fields.eventExpeditionEnt, evExpeditionEnt);
  this->fields.currentEventId = eventId;
  this->fields.asset = asset;
  sub_1C7BA8C(&this->fields.asset, asset);
  this->fields.updateNoticeNum = updateNoticeNum;
  sub_1C7BA8C(&this->fields.updateNoticeNum, updateNoticeNum);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventExpeditionEnt )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   (*p_eventExpeditionEnt)->fields.commonConsumeId,
                   0);
  this->fields.commonConsumeEntity = IdEntityList;
  Instance = (Il2CppObject *)sub_1C7BA8C(&this->fields.commonConsumeEntity, IdEntityList);
  eventExpeditionEnt = this->fields.eventExpeditionEnt;
  if ( !eventExpeditionEnt )
    goto LABEL_14;
  if ( !eventExpeditionEnt->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventExpeditionEnt)
    || !Instance )
  {
LABEL_14:
    sub_1C7BD40(Instance, v15);
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
  ExpeditionInfo_o *ExpeditionInfo; // x20
  int64_t Time; // x0
  int32_t pieceIdx; // w8

  if ( (byte_4CE8805 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE8805 = 1;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( ExpeditionInfo )
  {
    pieceIdx = ExpeditionInfo->fields.pieceIdx;
    if ( pieceIdx )
    {
      if ( Time >= ExpeditionInfo->fields.endedAt )
      {
        LOBYTE(pieceIdx) = 0;
        this->fields.isComplete = 1;
        goto LABEL_12;
      }
      LOBYTE(pieceIdx) = 1;
    }
  }
  else
  {
    LOBYTE(pieceIdx) = 0;
  }
  this->fields.isComplete = 0;
LABEL_12:
  this->fields.isRunning = pieceIdx;
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

  if ( (byte_4CE8804 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8804 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___),
        (eventExpeditionEnt = this->fields.eventExpeditionEnt) == 0)
    || !Instance )
  {
    sub_1C7BD40(Instance, v4);
  }
  return UserEventExpeditionMaster__GetExpeditionInfo(
           (UserEventExpeditionMaster_o *)Instance,
           this->fields.currentEventId,
           eventExpeditionEnt->fields.idx,
           0);
}


UnityEngine_GameObject_o *EventExpeditionListViewItem__GetRunningAnim(
        EventExpeditionListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionAssetManager_o *asset; // x0

  asset = this->fields.asset;
  if ( !asset )
    sub_1C7BD40(0, idx);
  return ExpeditionAssetManager__GetRunEffect(asset, idx, method);
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