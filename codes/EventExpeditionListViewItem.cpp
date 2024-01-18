// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewItem___ctor(
        EventExpeditionListViewItem_o *this,
        int32_t index,
        EventExpeditionEntity_o *evExpeditionEnt,
        int32_t eventId,
        ExpeditionAssetManager_o *asset,
        System_Action_o *updateNoticeNum,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  struct EventExpeditionEntity_o **p_eventExpeditionEnt; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  struct CommonConsumeEntity_array *IdEntityList; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  char IsOpen; // w8

  if ( (byte_418A38E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418A38E = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.eventExpeditionEnt = evExpeditionEnt;
  p_eventExpeditionEnt = &this->fields.eventExpeditionEnt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventExpeditionEnt,
    (System_Int32_array **)evExpeditionEnt,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.currentEventId = eventId;
  this->fields.asset = asset;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.asset,
    (System_Int32_array **)asset,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.updateNoticeNum = updateNoticeNum;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.updateNoticeNum,
    (System_Int32_array **)updateNoticeNum,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventExpeditionEnt )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   (*p_eventExpeditionEnt)->fields.commonConsumeId,
                   0LL);
  this->fields.commonConsumeEntity = IdEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commonConsumeEntity,
    (System_Int32_array **)IdEntityList,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  eventExpeditionEnt = this->fields.eventExpeditionEnt;
  if ( !eventExpeditionEnt )
    goto LABEL_14;
  if ( !eventExpeditionEnt->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventExpeditionEnt)
    || !Instance )
  {
LABEL_14:
    sub_B2C434(Instance, v35);
  }
  IsOpen = CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Instance,
             (*p_eventExpeditionEnt)->fields.commonReleaseId,
             0LL,
             0,
             0LL);
LABEL_13:
  this->fields.isRelease = IsOpen;
}


void __fastcall EventExpeditionListViewItem__CheckExpeditionCondition(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  ExpeditionInfo_o *ExpeditionInfo; // x20
  int64_t Time; // x0
  int32_t pieceIdx; // w8

  if ( (byte_418A390 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418A390 = 1;
  }
  ExpeditionInfo = EventExpeditionListViewItem__GetExpeditionInfo(this, method);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( ExpeditionInfo )
  {
    pieceIdx = ExpeditionInfo->fields.pieceIdx;
    if ( pieceIdx )
    {
      if ( Time >= ExpeditionInfo->fields.endedAt )
      {
        LOBYTE(pieceIdx) = 0;
        this->fields.isComplete = 1;
        goto LABEL_13;
      }
      LOBYTE(pieceIdx) = 1;
    }
  }
  else
  {
    LOBYTE(pieceIdx) = 0;
  }
  this->fields.isComplete = 0;
LABEL_13:
  this->fields.isRunning = pieceIdx;
}


void __fastcall EventExpeditionListViewItem__Finalize(EventExpeditionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


ExpeditionInfo_o *__fastcall EventExpeditionListViewItem__GetExpeditionInfo(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8

  if ( (byte_418A38F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418A38F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___),
        (eventExpeditionEnt = this->fields.eventExpeditionEnt) == 0LL)
    || !Instance )
  {
    sub_B2C434(Instance, v5);
  }
  return UserEventExpeditionMaster__GetExpeditionInfo(
           (UserEventExpeditionMaster_o *)Instance,
           this->fields.currentEventId,
           eventExpeditionEnt->fields.idx,
           0LL);
}


UnityEngine_GameObject_o *__fastcall EventExpeditionListViewItem__GetRunningAnim(
        EventExpeditionListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionAssetManager_o *asset; // x0

  asset = this->fields.asset;
  if ( !asset )
    sub_B2C434(0LL, idx);
  return ExpeditionAssetManager__GetRunEffect(asset, idx, 0LL);
}


void __fastcall EventExpeditionListViewItem__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.updateNoticeNum, 0LL);
}


CommonConsumeEntity_array *__fastcall EventExpeditionListViewItem__get_ConsumeList(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commonConsumeEntity;
}


EventExpeditionEntity_o *__fastcall EventExpeditionListViewItem__get_EventExpeditionEnt(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventExpeditionEnt;
}


int32_t __fastcall EventExpeditionListViewItem__get_GetEventId(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.currentEventId;
}


int32_t __fastcall EventExpeditionListViewItem__get_GetIdx(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}


bool __fastcall EventExpeditionListViewItem__get_IsComplete(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewItem__CheckExpeditionCondition(this, method);
  return this->fields.isComplete;
}


bool __fastcall EventExpeditionListViewItem__get_IsRelease(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRelease;
}


bool __fastcall EventExpeditionListViewItem__get_IsRunning(
        EventExpeditionListViewItem_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewItem__CheckExpeditionCondition(this, method);
  return this->fields.isRunning;
}