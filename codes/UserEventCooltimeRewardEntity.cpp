void __fastcall UserEventCooltimeRewardEntity___ctor(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1516 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1516 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


int64_t __fastcall UserEventCooltimeRewardEntity__CollectedAt(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.collectedAt;
}


System_String_o *__fastcall UserEventCooltimeRewardEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_42B1514 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_42B1514 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           spotId,
           lv,
           (const MethodInfo_1A4E970 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1515 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B1515 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v4);
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