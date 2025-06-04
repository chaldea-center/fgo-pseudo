void __fastcall UserEventMissionCondDetailMaster___ctor(
        UserEventMissionCondDetailMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B02DCC & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string___ctor__,
      method);
    byte_4B02DCC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    147,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionCondDetailEntity_o *__fastcall UserEventMissionCondDetailMaster__GetEntity(
        UserEventMissionCondDetailMaster_o *this,
        int64_t userId,
        int32_t conditionDetailId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02DCA & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__GetEntity__,
      userId);
    byte_4B02DCA = 1;
  }
  PK = (Il2CppObject *)UserEventMissionCondDetailEntity__CreatePK(
                         userId,
                         conditionDetailId,
                         *(const MethodInfo **)&conditionDetailId);
  return (UserEventMissionCondDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_32B3B28 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionCondDetailMaster__TryGetEntity(
        UserEventMissionCondDetailMaster_o *this,
        UserEventMissionCondDetailEntity_o **entity,
        int64_t userId,
        int32_t conditionDetailId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B02DCB & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__TryGetEntity__,
      entity);
    byte_4B02DCB = 1;
  }
  PK = (Il2CppObject *)UserEventMissionCondDetailEntity__CreatePK(userId, conditionDetailId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_UserEventMissionCondDetailMaster__UserEventMissionCondDetailEntity__string__TryGetEntity__);
}