void __fastcall UserBlacklistMaster___ctor(UserBlacklistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6915 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__, method);
    byte_4AB6915 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    209,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string___ctor__);
}


UserBlacklistEntity_o *__fastcall UserBlacklistMaster__GetEntity(
        UserBlacklistMaster_o *this,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6913 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__, userId);
    byte_4AB6913 = 1;
  }
  PK = (Il2CppObject *)UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)targetUserId);
  return (UserBlacklistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31640E8 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__GetEntity__);
}


bool __fastcall UserBlacklistMaster__TryGetEntity(
        UserBlacklistMaster_o *this,
        UserBlacklistEntity_o **entity,
        int64_t userId,
        int64_t targetUserId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6914 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__, entity);
    byte_4AB6914 = 1;
  }
  PK = (Il2CppObject *)UserBlacklistEntity__CreatePK(userId, targetUserId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__TryGetEntity__);
}