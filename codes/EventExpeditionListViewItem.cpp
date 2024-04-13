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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct EventExpeditionEntity_o **p_eventExpeditionEnt; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  struct CommonConsumeEntity_array *IdEntityList; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8
  char IsOpen; // w8

  if ( (byte_42EB1D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommonConsumeMaster___,
      index,
      (_DWORD)evExpeditionEnt,
      *(_QWORD *)&eventId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EB1D0 = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.eventExpeditionEnt = evExpeditionEnt;
  p_eventExpeditionEnt = &this->fields.eventExpeditionEnt;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventExpeditionEnt,
    (System_Int32_array **)evExpeditionEnt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.currentEventId = eventId;
  this->fields.asset = asset;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.asset,
    (System_Int32_array **)asset,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.updateNoticeNum = updateNoticeNum;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.updateNoticeNum,
    (System_Int32_array **)updateNoticeNum,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventExpeditionEnt )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   (*p_eventExpeditionEnt)->fields.commonConsumeId,
                   0LL);
  this->fields.commonConsumeEntity = IdEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commonConsumeEntity,
    (System_Int32_array **)IdEntityList,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  eventExpeditionEnt = this->fields.eventExpeditionEnt;
  if ( !eventExpeditionEnt )
    goto LABEL_14;
  if ( !eventExpeditionEnt->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventExpeditionEnt)
    || !Instance )
  {
LABEL_14:
    sub_B5D69C(Instance, v39);
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
  int v2; // w2
  __int64 v3; // x3
  ExpeditionInfo_o *ExpeditionInfo; // x20
  int64_t Time; // x0
  int32_t pieceIdx; // w8

  if ( (byte_42EB1D2 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1D2 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct EventExpeditionEntity_o *eventExpeditionEnt; // x8

  if ( (byte_42EB1D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB1D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___),
        (eventExpeditionEnt = this->fields.eventExpeditionEnt) == 0LL)
    || !Instance )
  {
    sub_B5D69C(Instance, v9);
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
    sub_B5D69C(0LL, idx);
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