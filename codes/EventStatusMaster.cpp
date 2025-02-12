void __fastcall EventStatusMaster___ctor(EventStatusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7C0C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__, method);
    byte_4BC7C0C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    262,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__GetEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7C0A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4BC7C0A = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&statusId);
  return (EventStatusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_324D130 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventStatusMaster__TryGetEntity(
        EventStatusMaster_o *this,
        EventStatusEntity_o **entity,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7C0B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__, entity);
    byte_4BC7C0B = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  EventStatusEntity_o *result; // x0
  EventStatusEntity_o *v13; // x21
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23

  if ( (byte_4BC7C0D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventStatusEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventStatusEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC7C0D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  result = (EventStatusEntity_o *)UserEventMaster__GetEntity(
                                    (UserEventMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    eventId,
                                    0LL);
  if ( result )
  {
    v13 = result;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventStatusEntity__get_Count__);
    if ( Count >= 1 )
    {
      v15 = Count;
      v16 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.list;
        if ( !Instance )
          break;
        result = (EventStatusEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                          v16,
                                          (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventStatusEntity__get_Item__);
        if ( result && result->fields.eventId == eventId && result->fields.statusId == LODWORD(v13[1].klass) )
          return result;
        if ( v15 == ++v16 )
          return 0LL;
      }
LABEL_22:
      sub_1C1AE30(Instance, v10);
    }
    return 0LL;
  }
  return result;
}