void EventItemDisplayEntity___ctor(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC73C3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC73C3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventItemDisplayEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4CC73C1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC73C1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventItemDisplayEntity__CreatePrimaryKey(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventItemDisplayEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}


bool EventItemDisplayEntity__HasScreenFlag(EventItemDisplayEntity_o *this, int32_t flag, const MethodInfo *method)
{
  int32_t screenFlag; // w8

  if ( (unsigned int)(flag - 16) <= 0x30 && ((1LL << ((unsigned __int8)flag - 16)) & 0x1000000010001LL) != 0 )
  {
    screenFlag = this->fields.screenFlag;
    if ( (screenFlag & 2) != 0 )
      return 1;
  }
  else
  {
    screenFlag = this->fields.screenFlag;
  }
  return (screenFlag & flag) != 0;
}


bool EventItemDisplayEntity__IsEnable(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Int32_array *conditionDetailIds; // x20
  il2cpp_array_size_t max_length; // x8
  bool v8; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  unsigned __int64 v10; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC73C2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73C2 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.openedAt || Time >= this->fields.closedAt )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
    conditionDetailIds = this->fields.conditionDetailIds;
    if ( !conditionDetailIds )
      goto LABEL_20;
    max_length = conditionDetailIds->max_length;
    v8 = (int)max_length > 0;
    if ( (int)max_length >= 1 )
    {
      v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C71610(Instance);
        if ( !v9 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v9,
                                     &entity,
                                     conditionDetailIds->m_Items[v10],
                                     (const MethodInfo_3408ECC *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_24;
        Instance = entity;
        if ( !entity )
          break;
        Instance = (Il2CppObject *)EventItemDisplayReleaseEntity__IsCondEnable(
                                     (EventItemDisplayReleaseEntity_o *)entity,
                                     v5);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_24:
          LODWORD(max_length) = conditionDetailIds->max_length;
          v8 = (__int64)++v10 < (int)max_length;
          if ( (__int64)v10 < (int)max_length )
            continue;
        }
        return !v8;
      }
LABEL_20:
      sub_1C71608(Instance, v5);
    }
    return !v8;
  }
}