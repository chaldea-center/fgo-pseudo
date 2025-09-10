void UserEventCooltimeRewardEntity___ctor(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2807C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2807C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


int64_t UserEventCooltimeRewardEntity__CollectedAt(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  return this->fields.collectedAt;
}


System_String_o *UserEventCooltimeRewardEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4C2807A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4C2807A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           spotId,
           lv,
           (const MethodInfo_30CD5FC *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *UserEventCooltimeRewardEntity__CreatePrimaryKey(
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


EventCooltimeRewardEntity_o *UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
        UserEventCooltimeRewardEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2807B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2807B = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v4);
  EventCooltimeRewardMaster__TryGetEntity(
    (EventCooltimeRewardMaster_o *)Master_object,
    &entity,
    this->fields.eventId,
    this->fields.spotId,
    this->fields.lv,
    0);
  return entity;
}


int32_t UserEventCooltimeRewardEntity__GetEventId(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t UserEventCooltimeRewardEntity__GetLv(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int32_t UserEventCooltimeRewardEntity__GetSpotId(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


int64_t UserEventCooltimeRewardEntity__GetUserId(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}