void __fastcall EventItemDisplayEntity___ctor(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01FE9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B01FE9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventItemDisplayEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4B01FE7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_4B01FE7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  struct System_Int32_array *conditionDetailIds; // x20
  __int64 v11; // x8
  bool v12; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  unsigned __int64 v14; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01FE8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___, method);
    sub_1BC3008(
      &Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__,
      v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B01FE8 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt || Time >= this->fields.closedAt )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
    conditionDetailIds = this->fields.conditionDetailIds;
    if ( !conditionDetailIds )
      goto LABEL_20;
    v11 = *(_QWORD *)&conditionDetailIds->max_length;
    v12 = (int)v11 > 0;
    if ( (int)v11 >= 1 )
    {
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v11 )
          sub_1BC326C(Instance, v8, v9);
        if ( !v13 )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                     v13,
                                     &entity,
                                     conditionDetailIds->m_Items[v14 + 1],
                                     (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_24;
        Instance = entity;
        if ( !entity )
          break;
        Instance = (Il2CppObject *)EventItemDisplayReleaseEntity__IsCondEnable(
                                     (EventItemDisplayReleaseEntity_o *)entity,
                                     v8);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_24:
          LODWORD(v11) = conditionDetailIds->max_length;
          v12 = (__int64)++v14 < (int)v11;
          if ( (__int64)v14 < (int)v11 )
            continue;
        }
        return !v12;
      }
LABEL_20:
      sub_1BC3264(Instance, v8);
    }
    return !v12;
  }
}