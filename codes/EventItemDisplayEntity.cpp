void __fastcall EventItemDisplayEntity___ctor(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9AF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9AF3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventItemDisplayEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E9AF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, eventId, (_DWORD)method, v3);
    byte_42E9AF1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Time; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v16; // x1
  struct System_Int32_array *conditionDetailIds; // x20
  __int64 v18; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  unsigned __int64 v20; // x21
  __int64 v22; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9AF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E9AF2 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt || Time >= this->fields.closedAt )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
  conditionDetailIds = this->fields.conditionDetailIds;
  if ( !conditionDetailIds )
    goto LABEL_20;
  v18 = *(_QWORD *)&conditionDetailIds->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
      {
        v22 = sub_B5D6C8(Instance);
        sub_B5D668(v22, 0LL);
      }
      if ( !v19 )
        break;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v19,
                                    &entity,
                                    conditionDetailIds->m_Items[v20 + 1],
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          break;
        Instance = (DataManager_o *)EventItemDisplayReleaseEntity__IsCondEnable(
                                      (EventItemDisplayReleaseEntity_o *)entity,
                                      v16);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          return 0;
      }
      LODWORD(v18) = conditionDetailIds->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        return 1;
    }
LABEL_20:
    sub_B5D69C(Instance, v16);
  }
  return 1;
}