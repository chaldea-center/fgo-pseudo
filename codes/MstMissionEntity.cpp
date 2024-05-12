void __fastcall MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A40C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438A40C = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v8; // x0

  if ( (byte_438A40B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A40B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)EventMissionMaster__getEventMissionList(
                                (EventMissionMaster_o *)Instance,
                                this->fields.id,
                                0LL);
  if ( !Instance )
    goto LABEL_11;
  datalist = Instance->fields.datalist;
  if ( datalist )
  {
    if ( !(_DWORD)datalist )
    {
      v8 = sub_B776C8(Instance);
      sub_B77668(v8, 0LL);
    }
    lookup = Instance->fields.lookup;
    if ( lookup )
      return (int32_t)lookup->fields.entries;
LABEL_11:
    sub_B7769C(Instance, v4);
  }
  return 0;
}


bool __fastcall MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  System_Int32_array *MissionIdListByEvent; // x20
  int v6; // w8
  __int64 v7; // x9
  __int64 v8; // x11

  if ( (byte_438A40A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A40A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_17;
  MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                           (EventMissionMaster_o *)Instance,
                           this->fields.id,
                           0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance || !MissionIdListByEvent )
    goto LABEL_17;
  v6 = *((_DWORD *)Instance + 6);
  if ( MissionIdListByEvent->max_length != v6 )
    return 1;
  if ( v6 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *((_QWORD *)Instance + v7 + 4);
      if ( !v8 )
        break;
      if ( *(_DWORD *)(v8 + 32) != 5 )
        return 1;
      if ( (int)++v7 >= v6 )
        return 0;
    }
LABEL_17:
    sub_B7769C(Instance, v4);
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

  if ( (byte_438A409 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A409 = 1;
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

  if ( (byte_438A408 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A408 = 1;
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