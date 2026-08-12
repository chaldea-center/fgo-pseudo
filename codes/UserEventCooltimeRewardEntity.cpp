void UserEventCooltimeRewardEntity___ctor(UserEventCooltimeRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971680 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971680 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_597167E & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_597167E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           spotId,
           lv,
           (const MethodInfo_3854F5C *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597167F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597167F = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
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