void __fastcall EventStatusMaster___ctor(EventStatusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AA06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__, method);
    byte_418AA06 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    256,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__GetEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AA04 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_418AA04 = 1;
  }
  PK = EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&statusId);
  return (EventStatusEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventStatusMaster__TryGetEntity(
        EventStatusMaster_o *this,
        EventStatusEntity_o **entity,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AA05 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__, entity);
    byte_418AA05 = 1;
  }
  PK = EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__getNowEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventStatusEntity_o *result; // x0
  EventStatusEntity_o *v14; // x21
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  __int64 v18; // x10

  if ( (byte_418AA07 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_B2C35C(&EventStatusEntity_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418AA07 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  result = (EventStatusEntity_o *)UserEventMaster__GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int64_t)Instance,
                                    eventId,
                                    0LL);
  if ( result )
  {
    v14 = result;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.list;
        if ( !Instance )
          break;
        result = (EventStatusEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                          v17,
                                          (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( result )
        {
          v18 = *(&EventStatusEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v18
            && (EventStatusEntity_c *)result->klass->_2.typeHierarchy[v18 - 1] == EventStatusEntity_TypeInfo
            && result->fields.eventId == eventId
            && result->fields.statusId == LODWORD(v14[1].klass) )
          {
            return result;
          }
        }
        if ( ++v17 >= v16 )
          return 0LL;
      }
LABEL_21:
      sub_B2C434(Instance, v11);
    }
    return 0LL;
  }
  return result;
}