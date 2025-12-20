void UserAccessaryMaster___ctor(UserAccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5DA & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__);
    byte_4D2D5DA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    44,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserAccessaryEntity_o *UserAccessaryMaster__GetEntity(
        UserAccessaryMaster_o *this,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D5D8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__);
    byte_4D2D5D8 = 1;
  }
  PK = (Il2CppObject *)UserAccessaryEntity__CreatePK(userId, accessaryId, *(const MethodInfo **)&accessaryId);
  return (UserAccessaryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_345FF78 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__);
}


bool UserAccessaryMaster__TryGetEntity(
        UserAccessaryMaster_o *this,
        UserAccessaryEntity_o **entity,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D5D9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__);
    byte_4D2D5D9 = 1;
  }
  PK = (Il2CppObject *)UserAccessaryEntity__CreatePK(userId, accessaryId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__);
}