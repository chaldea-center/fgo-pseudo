void __fastcall EventStatusMaster___ctor(EventStatusMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1635C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__, method, v2);
    byte_4B1635C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    258,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__GetEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1635A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&statusId);
    byte_4B1635A = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&statusId);
  return (EventStatusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__GetEntity__);
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

  if ( (byte_4B1635B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B1635B = 1;
  }
  PK = (Il2CppObject *)EventStatusEntity__CreatePK(eventId, statusId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventStatusMaster__EventStatusEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall EventStatusMaster__getNowEntity(
        EventStatusMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x21
  EventStatusEntity_o *result; // x0
  EventStatusEntity_o *v20; // x21
  int32_t Count; // w0
  int32_t v22; // w22
  int32_t v23; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4B1635D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v7, v8);
    sub_1BCA7E0(&EventStatusEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1635D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
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
    v20 = result;
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v22 = Count;
      v23 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.list;
        if ( !Instance )
          break;
        result = (EventStatusEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                          v23,
                                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( result )
        {
          methodPtr_low = LOBYTE(EventStatusEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (EventStatusEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventStatusEntity_TypeInfo
            && result->fields.eventId == eventId
            && result->fields.statusId == LODWORD(v20[1].klass) )
          {
            return result;
          }
        }
        if ( v22 == ++v23 )
          return 0LL;
      }
LABEL_20:
      sub_1BCAA3C(Instance, v16);
    }
    return 0LL;
  }
  return result;
}