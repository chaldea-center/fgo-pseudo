void __fastcall EventItemDisplayEntity___ctor(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B161B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B161B8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventItemDisplayEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4B161B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId, method);
    byte_4B161B6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventItemDisplayEntity__CreatePrimaryKey(
        EventItemDisplayEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventItemDisplayEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}


bool __fastcall EventItemDisplayEntity__HasScreenFlag(
        EventItemDisplayEntity_o *this,
        int32_t flag,
        const MethodInfo *method)
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


bool __fastcall EventItemDisplayEntity__IsEnable(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x1
  struct System_Int32_array *conditionDetailIds; // x20
  __int64 v14; // x8
  bool v15; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  unsigned __int64 v17; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B161B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___, method, v2);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__,
      v4,
      v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B161B7 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt || Time >= this->fields.closedAt )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
    conditionDetailIds = this->fields.conditionDetailIds;
    if ( !conditionDetailIds )
      goto LABEL_20;
    v14 = *(_QWORD *)&conditionDetailIds->max_length;
    v15 = (int)v14 > 0;
    if ( (int)v14 >= 1 )
    {
      v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v14 )
          sub_1BCAA44(Instance, v12);
        if ( !v16 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v16,
                                     &entity,
                                     conditionDetailIds->m_Items[v17 + 1],
                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_24;
        Instance = entity;
        if ( !entity )
          break;
        Instance = (Il2CppObject *)EventItemDisplayReleaseEntity__IsCondEnable(
                                     (EventItemDisplayReleaseEntity_o *)entity,
                                     v12);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_24:
          LODWORD(v14) = conditionDetailIds->max_length;
          v15 = (__int64)++v17 < (int)v14;
          if ( (__int64)v17 < (int)v14 )
            continue;
        }
        return !v15;
      }
LABEL_20:
      sub_1BCAA3C(Instance, v12);
    }
    return !v15;
  }
}