void UserEventMapGimmickMaster___ctor(UserEventMapGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59716CB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventMapGimmickMaster__UserEventMapGimmickEntity__string___ctor__);
    byte_59716CB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    566,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserEventMapGimmickMaster__UserEventMapGimmickEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMapGimmickEntity_o *UserEventMapGimmickMaster__GetEntity(
        UserEventMapGimmickMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59716CC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventMapGimmickMaster__UserEventMapGimmickEntity__string__GetEntity__);
    byte_59716CC = 1;
  }
  PK = (Il2CppObject *)UserEventMapGimmickEntity__CreatePK(eventId, *(const MethodInfo **)&eventId);
  return (UserEventMapGimmickEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3F157EC *)Method_DataMasterBase_UserEventMapGimmickMaster__UserEventMapGimmickEntity__string__GetEntity__);
}


bool UserEventMapGimmickMaster__TryGetEntity(
        UserEventMapGimmickMaster_o *this,
        UserEventMapGimmickEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59716CD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventMapGimmickMaster__UserEventMapGimmickEntity__string__TryGetEntity__);
    byte_59716CD = 1;
  }
  PK = (Il2CppObject *)UserEventMapGimmickEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserEventMapGimmickMaster__UserEventMapGimmickEntity__string__TryGetEntity__);
}