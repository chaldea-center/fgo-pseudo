void __fastcall UserEventCooltimeRewardEntity___ctor(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD1D6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDD1D6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_4BDD1D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4BDD1D4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           spotId,
           lv,
           (const MethodInfo_2FAEAB0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDD1D5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDD1D5 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v4);
  EventCooltimeRewardMaster__TryGetEntity(
    (EventCooltimeRewardMaster_o *)Master_object,
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