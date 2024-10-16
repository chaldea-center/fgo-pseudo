void __fastcall UserEventDiggingMaster___ctor(UserEventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB69A7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string___ctor__, method);
    byte_4AB69A7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    348,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDiggingEntity_o *__fastcall UserEventDiggingMaster__GetEntity(
        UserEventDiggingMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB69A5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__GetEntity__, userId);
    byte_4AB69A5 = 1;
  }
  PK = (Il2CppObject *)UserEventDiggingEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventDiggingEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31640E8 *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__GetEntity__);
}


bool __fastcall UserEventDiggingMaster__TryGetEntity(
        UserEventDiggingMaster_o *this,
        UserEventDiggingEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB69A6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__TryGetEntity__, entity);
    byte_4AB69A6 = 1;
  }
  PK = (Il2CppObject *)UserEventDiggingEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserEventDiggingMaster__UserEventDiggingEntity__string__TryGetEntity__);
}