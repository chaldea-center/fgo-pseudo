void UserBlacklistMaster___ctor(UserBlacklistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28006 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__);
    byte_4C28006 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    215,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__);
}


UserBlacklistEntity_o *UserBlacklistMaster__GetEntity(
        UserBlacklistMaster_o *this,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28004 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__);
    byte_4C28004 = 1;
  }
  PK = (Il2CppObject *)UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)targetUserId);
  return (UserBlacklistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__);
}


bool UserBlacklistMaster__TryGetEntity(
        UserBlacklistMaster_o *this,
        UserBlacklistEntity_o **entity,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28005 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__);
    byte_4C28005 = 1;
  }
  PK = (Il2CppObject *)UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__);
}