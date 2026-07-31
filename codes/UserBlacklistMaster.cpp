void UserBlacklistMaster___ctor(UserBlacklistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939454 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__);
    byte_5939454 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__);
}


UserBlacklistEntity_o *UserBlacklistMaster__GetEntity(
        UserBlacklistMaster_o *this,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939452 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__);
    byte_5939452 = 1;
  }
  PK = (Il2CppObject *)UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)targetUserId);
  return (UserBlacklistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__);
}


bool UserBlacklistMaster__TryGetEntity(
        UserBlacklistMaster_o *this,
        UserBlacklistEntity_o **entity,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939453 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__);
    byte_5939453 = 1;
  }
  PK = (Il2CppObject *)UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__);
}