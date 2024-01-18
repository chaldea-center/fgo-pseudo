void __fastcall EventItemDisplayEntity___ctor(EventItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188D3E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188D3E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventItemDisplayEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4188D3C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_4188D3C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  struct System_Int32_array *conditionDetailIds; // x20
  __int64 v10; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  unsigned __int64 v12; // x21
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188D3D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___, method);
    sub_B2C35C(
      &Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__,
      v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188D3D = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventItemDisplayReleaseMaster___);
  conditionDetailIds = this->fields.conditionDetailIds;
  if ( !conditionDetailIds )
    goto LABEL_20;
  v10 = *(_QWORD *)&conditionDetailIds->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v10 )
      {
        v14 = sub_B2C460(Instance);
        sub_B2C400(v14, 0LL);
      }
      if ( !v11 )
        break;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v11,
                                    &entity,
                                    conditionDetailIds->m_Items[v12 + 1],
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          break;
        Instance = (DataManager_o *)EventItemDisplayReleaseEntity__IsCondEnable(
                                      (EventItemDisplayReleaseEntity_o *)entity,
                                      v8);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          return 0;
      }
      LODWORD(v10) = conditionDetailIds->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        return 1;
    }
LABEL_20:
    sub_B2C434(Instance, v8);
  }
  return 1;
}