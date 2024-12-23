void __fastcall UserServantCommandCardMaster___ctor(UserServantCommandCardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67A02 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__,
      method);
    byte_4B67A02 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    285,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__);
}


UserServantCommandCardEntity_o *__fastcall UserServantCommandCardMaster__GetEntity(
        UserServantCommandCardMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67A00 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__,
      userId);
    byte_4B67A00 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__);
}


bool __fastcall UserServantCommandCardMaster__TryGetEntity(
        UserServantCommandCardMaster_o *this,
        UserServantCommandCardEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67A01 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__,
      entity);
    byte_4B67A01 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__);
}