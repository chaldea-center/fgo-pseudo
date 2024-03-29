void __fastcall UserEventCooltimeRewardEntity___ctor(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215BEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4215BEA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_4215BE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, *(_QWORD *)&eventId);
    byte_4215BE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           spotId,
           lv,
           (const MethodInfo_1713D94 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  __int64 v3; // x1
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215BE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4215BE9 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
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