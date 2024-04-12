void __fastcall EventStatusMaster___ctor(EventStatusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B350C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
    byte_42B350C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    257,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__GetEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B350A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
    byte_42B350A = 1;
  }
  PK = EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&statusId);
  return (EventStatusEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23E2728 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
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

  if ( (byte_42B350B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
    byte_42B350B = 1;
  }
  PK = EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
}


EventStatusEntity_o *__fastcall EventStatusMaster__getNowEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventStatusEntity_o *result; // x0
  EventStatusEntity_o *v9; // x21
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 v13; // x10

  if ( (byte_42B350D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B52984(&EventStatusEntity_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B350D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMaster___);
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
    v9 = result;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v11 = Count;
      v12 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.list;
        if ( !Instance )
          break;
        result = (EventStatusEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                          v12,
                                          (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( result )
        {
          v13 = *(&EventStatusEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v13
            && (EventStatusEntity_c *)result->klass->_2.typeHierarchy[v13 - 1] == EventStatusEntity_TypeInfo
            && result->fields.eventId == eventId
            && result->fields.statusId == LODWORD(v9[1].klass) )
          {
            return result;
          }
        }
        if ( ++v12 >= v11 )
          return 0LL;
      }
LABEL_21:
      sub_B52A5C(Instance, v6);
    }
    return 0LL;
  }
  return result;
}