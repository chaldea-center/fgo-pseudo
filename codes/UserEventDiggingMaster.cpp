void UserEventDiggingMaster___ctor(UserEventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2809F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string___ctor__);
    byte_4C2809F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    354,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDiggingEntity_o *UserEventDiggingMaster__GetEntity(
        UserEventDiggingMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2809D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__GetEntity__);
    byte_4C2809D = 1;
  }
  PK = (Il2CppObject *)UserEventDiggingEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventDiggingEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_338C850 *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__GetEntity__);
}


bool UserEventDiggingMaster__TryGetEntity(
        UserEventDiggingMaster_o *this,
        UserEventDiggingEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2809E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__TryGetEntity__);
    byte_4C2809E = 1;
  }
  PK = (Il2CppObject *)UserEventDiggingEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__TryGetEntity__);
}