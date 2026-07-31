void UserServantCommandCardMaster___ctor(UserServantCommandCardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59396A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__);
    byte_59396A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    289,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__);
}


UserServantCommandCardEntity_o *UserServantCommandCardMaster__GetEntity(
        UserServantCommandCardMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59396A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__);
    byte_59396A3 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__);
}


bool UserServantCommandCardMaster__TryGetEntity(
        UserServantCommandCardMaster_o *this,
        UserServantCommandCardEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59396A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__);
    byte_59396A4 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__);
}