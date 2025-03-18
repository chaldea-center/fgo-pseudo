void __fastcall UserSvtCoinMaster___ctor(UserSvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22EFF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string___ctor__, method);
    byte_4C22EFF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    380,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSvtCoinEntity_o *__fastcall UserSvtCoinMaster__GetEntity(
        UserSvtCoinMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22EFD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__GetEntity__, userId);
    byte_4C22EFD = 1;
  }
  PK = (Il2CppObject *)UserSvtCoinEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserSvtCoinEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_329F900 *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__GetEntity__);
}


bool __fastcall UserSvtCoinMaster__TryGetEntity(
        UserSvtCoinMaster_o *this,
        UserSvtCoinEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22EFE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__TryGetEntity__, entity);
    byte_4C22EFE = 1;
  }
  PK = (Il2CppObject *)UserSvtCoinEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__TryGetEntity__);
}