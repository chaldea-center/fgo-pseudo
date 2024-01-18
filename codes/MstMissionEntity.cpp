void __fastcall MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185BD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4185BD1 = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v9; // x0

  if ( (byte_4185BD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4185BD0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
      v9 = sub_B2C460(Instance);
      sub_B2C400(v9, 0LL);
    }
    lookup = Instance->fields.lookup;
    if ( lookup )
      return (int32_t)lookup->fields.entries;
LABEL_11:
    sub_B2C434(Instance, v5);
  }
  return 0;
}


bool __fastcall MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  System_Int32_array *MissionIdListByEvent; // x20
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x11

  if ( (byte_4185BCF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185BCF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_17;
  MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                           (EventMissionMaster_o *)Instance,
                           this->fields.id,
                           0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance || !MissionIdListByEvent )
    goto LABEL_17;
  v8 = *((_DWORD *)Instance + 6);
  if ( MissionIdListByEvent->max_length != v8 )
    return 1;
  if ( v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *((_QWORD *)Instance + v9 + 4);
      if ( !v10 )
        break;
      if ( *(_DWORD *)(v10 + 32) != 5 )
        return 1;
      if ( (int)++v9 >= v8 )
        return 0;
    }
LABEL_17:
    sub_B2C434(Instance, v6);
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

  if ( (byte_4185BCE & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4185BCE = 1;
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

  if ( (byte_4185BCD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4185BCD = 1;
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