void __fastcall EventStatusMaster___ctor(EventStatusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66D25 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__, method);
    byte_4B66D25 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    262,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__GetEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66D23 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4B66D23 = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&statusId);
  return (EventStatusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
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

  if ( (byte_4B66D24 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__, entity);
    byte_4B66D24 = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
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
  Il2CppObject *MasterData_object; // x21
  EventStatusEntity_o *result; // x0
  EventStatusEntity_o *v14; // x21
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4B66D26 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_1BE4ACC(&EventStatusEntity_TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B66D26 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v11);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_24;
  result = (EventStatusEntity_o *)UserEventMaster__GetEntity(
                                    (UserEventMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    eventId,
                                    0LL);
  if ( result )
  {
    v14 = result;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.list;
        if ( !Instance )
          break;
        result = (EventStatusEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                          v17,
                                          (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( result )
        {
          methodPtr_low = LOBYTE(EventStatusEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (EventStatusEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventStatusEntity_TypeInfo
            && result->fields.eventId == eventId
            && result->fields.statusId == LODWORD(v14[1].klass) )
          {
            return result;
          }
        }
        if ( v16 == ++v17 )
          return 0LL;
      }
LABEL_24:
      sub_1BE4D28(Instance, v11);
    }
    return 0LL;
  }
  return result;
}