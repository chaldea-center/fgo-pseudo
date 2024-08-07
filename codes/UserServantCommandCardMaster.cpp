void __fastcall UserServantCommandCardMaster___ctor(UserServantCommandCardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF8EE & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__,
      method);
    byte_49FF8EE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    281,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__);
}


UserServantCommandCardEntity_o *__fastcall UserServantCommandCardMaster__GetEntity(
        UserServantCommandCardMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF8EC & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__,
      userId);
    byte_49FF8EC = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_30D6AF0 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__);
}


bool __fastcall UserServantCommandCardMaster__TryGetEntity(
        UserServantCommandCardMaster_o *this,
        UserServantCommandCardEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF8ED & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__,
      entity);
    byte_49FF8ED = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__);
}