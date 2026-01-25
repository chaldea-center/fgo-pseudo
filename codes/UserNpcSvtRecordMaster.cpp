void UserNpcSvtRecordMaster___ctor(UserNpcSvtRecordMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF54C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string___ctor__);
    byte_4CEF54C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    417,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserNpcSvtRecordEntity_o *UserNpcSvtRecordMaster__GetEntity(
        UserNpcSvtRecordMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF54D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__GetEntity__);
    byte_4CEF54D = 1;
  }
  PK = (Il2CppObject *)UserNpcSvtRecordEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserNpcSvtRecordEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3432DB4 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__GetEntity__);
}


System_Int32_array *UserNpcSvtRecordMaster__GetTdPlayed(
        UserNpcSvtRecordMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  NetworkManager_c *v6; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserNpcSvtRecordEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF54F & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF54F = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  v7 = UserNpcSvtRecordMaster__TryGetEntity(this, &entity, v6->static_fields->userIdNumber, svtId, v3);
  if ( !v7 )
    return 0;
  if ( !entity )
    sub_1C7BD40(v7, v8);
  return entity->fields.tdPlayed;
}


bool UserNpcSvtRecordMaster__TryGetEntity(
        UserNpcSvtRecordMaster_o *this,
        UserNpcSvtRecordEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF54E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__TryGetEntity__);
    byte_4CEF54E = 1;
  }
  PK = (Il2CppObject *)UserNpcSvtRecordEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__TryGetEntity__);
}