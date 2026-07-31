void UserEventJobMaster___ctor(UserEventJobMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939503 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventJobMaster__UserEventJobEntity__string___ctor__);
    byte_5939503 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    565,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserEventJobMaster__UserEventJobEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventJobEntity_o *UserEventJobMaster__GetEntity(
        UserEventJobMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939504 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventJobMaster__UserEventJobEntity__string__GetEntity__);
    byte_5939504 = 1;
  }
  PK = (Il2CppObject *)UserEventJobEntity__CreatePK(eventId, *(const MethodInfo **)&eventId);
  return (UserEventJobEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserEventJobMaster__UserEventJobEntity__string__GetEntity__);
}


bool UserEventJobMaster__TryGetEntity(
        UserEventJobMaster_o *this,
        UserEventJobEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939505 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventJobMaster__UserEventJobEntity__string__TryGetEntity__);
    byte_5939505 = 1;
  }
  PK = (Il2CppObject *)UserEventJobEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserEventJobMaster__UserEventJobEntity__string__TryGetEntity__);
}