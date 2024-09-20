void __fastcall EventStatusMaster___ctor(EventStatusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
    byte_4A5B2CD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    258,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__GetEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B2CB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
    byte_4A5B2CB = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&statusId);
  return (EventStatusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
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

  if ( (byte_4A5B2CC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
    byte_4A5B2CC = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
}


EventStatusEntity_o *__fastcall EventStatusMaster__getNowEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  EventStatusEntity_o *result; // x0
  EventStatusEntity_o *v9; // x21
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B2CE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&EventStatusEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B2CE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_20;
  result = (EventStatusEntity_o *)UserEventMaster__GetEntity(
                                    (UserEventMaster_o *)MasterData_object,
                                    (int64_t)Instance,
                                    eventId,
                                    0LL);
  if ( result )
  {
    v9 = result;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v11 = Count;
      v12 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.list;
        if ( !Instance )
          break;
        result = (EventStatusEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                          v12,
                                          (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( result )
        {
          methodPtr_low = LOBYTE(EventStatusEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (EventStatusEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventStatusEntity_TypeInfo
            && result->fields.eventId == eventId
            && result->fields.statusId == LODWORD(v9[1].klass) )
          {
            return result;
          }
        }
        if ( v11 == ++v12 )
          return 0LL;
      }
LABEL_20:
      sub_1B8880C(Instance, v6);
    }
    return 0LL;
  }
  return result;
}