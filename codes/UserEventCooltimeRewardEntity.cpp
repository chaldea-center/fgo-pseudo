void __fastcall UserEventCooltimeRewardEntity___ctor(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA1F1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


int64_t __fastcall UserEventCooltimeRewardEntity__CollectedAt(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.collectedAt;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventCooltimeRewardEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_42EA1EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, eventId, spotId, *(_QWORD *)&lv);
    byte_42EA1EF = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           spotId,
           lv,
           (const MethodInfo_1AE3A38 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *__fastcall UserEventCooltimeRewardEntity__CreatePrimaryKey(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return UserEventCooltimeRewardEntity__CreatePK(
           this->fields.userId,
           this->fields.eventId,
           this->fields.spotId,
           this->fields.lv,
           v2);
}


EventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA1F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EA1F0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  EventCooltimeRewardMaster__TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    this->fields.eventId,
    this->fields.spotId,
    this->fields.lv,
    0LL);
  return entity;
}


int32_t __fastcall UserEventCooltimeRewardEntity__GetEventId(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall UserEventCooltimeRewardEntity__GetLv(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.lv;
}


int32_t __fastcall UserEventCooltimeRewardEntity__GetSpotId(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.spotId;
}


int64_t __fastcall UserEventCooltimeRewardEntity__GetUserId(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}