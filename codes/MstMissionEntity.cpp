void __fastcall MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F7DAF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40F7DAF = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionEntity_array *EventMissionList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  EventMissionEntity_o *v10; // x8

  if ( (byte_40F7DAE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F7DAE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  EventMissionList = EventMissionMaster__getEventMissionList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL);
  if ( !EventMissionList )
    goto LABEL_11;
  v9 = *(_QWORD *)&EventMissionList->max_length;
  if ( v9 )
  {
    if ( !(_DWORD)v9 )
    {
      sub_B17100(EventMissionList, v7, v8);
      sub_B170A0();
    }
    v10 = EventMissionList->m_Items[0];
    if ( v10 )
      return v10->fields.type;
LABEL_11:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *MissionIdListByEvent; // x20
  WebViewManager_o *v8; // x0
  UserEventMissionMaster_o *v9; // x0
  UserEventMissionEntity_array *UserEventMissionList; // x0
  int max_length; // w8
  __int64 v12; // x9
  UserEventMissionEntity_o *v13; // x11

  if ( (byte_40F7DAD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F7DAD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                           MasterData_WarQuestSelectionMaster,
                           this->fields.id,
                           0LL);
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v8 )
    goto LABEL_17;
  v9 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v8,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !v9 )
    goto LABEL_17;
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(v9, this->fields.id, 0LL);
  if ( !UserEventMissionList || !MissionIdListByEvent )
    goto LABEL_17;
  max_length = UserEventMissionList->max_length;
  if ( MissionIdListByEvent->max_length != max_length )
    return 1;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = UserEventMissionList->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.missionProgressType != 5 )
        return 1;
      if ( (int)++v12 >= max_length )
        return 0;
    }
LABEL_17:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall MstMissionEntity__isActive(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.closedAt >= checkTime;
}


bool __fastcall MstMissionEntity__isActiveNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_40F7DAC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F7DAC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.closedAt >= Time;
}


bool __fastcall MstMissionEntity__isOpen(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.endedAt >= checkTime;
}


bool __fastcall MstMissionEntity__isOpenNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_40F7DAB & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F7DAB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}


bool __fastcall MstMissionEntity__isWeekly(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.endedAt - this->fields.startedAt <= this->fields.WEEK_TIME;
}