void __fastcall EventItemDisplayEntity___ctor(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C64F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C64F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventItemDisplayEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_438C64D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438C64D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int64_t Time; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Int32_array *conditionDetailIds; // x20
  __int64 v7; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  unsigned __int64 v9; // x21
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C64E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
    sub_B775C4(&Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C64E = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
  conditionDetailIds = this->fields.conditionDetailIds;
  if ( !conditionDetailIds )
    goto LABEL_20;
  v7 = *(_QWORD *)&conditionDetailIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v11 = sub_B776C8(Instance);
        sub_B77668(v11, 0LL);
      }
      if ( !v8 )
        break;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v8,
                                    &entity,
                                    conditionDetailIds->m_Items[v9 + 1],
                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          break;
        Instance = (DataManager_o *)EventItemDisplayReleaseEntity__IsCondEnable(
                                      (EventItemDisplayReleaseEntity_o *)entity,
                                      v5);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          return 0;
      }
      LODWORD(v7) = conditionDetailIds->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        return 1;
    }
LABEL_20:
    sub_B7769C(Instance, v5);
  }
  return 1;
}