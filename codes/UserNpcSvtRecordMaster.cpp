void __fastcall UserNpcSvtRecordMaster___ctor(UserNpcSvtRecordMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E71CD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E71CD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    410,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserNpcSvtRecordEntity_o *__fastcall UserNpcSvtRecordMaster__GetEntity(
        UserNpcSvtRecordMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E71CE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__GetEntity__,
      userId,
      svtId,
      method);
    byte_42E71CE = 1;
  }
  PK = UserNpcSvtRecordEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserNpcSvtRecordEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__GetEntity__);
}


System_Int32_array *__fastcall UserNpcSvtRecordMaster__GetTdPlayed(
        UserNpcSvtRecordMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t UserId; // x0
  const MethodInfo *v7; // x4
  __int64 v8; // x1
  bool v9; // w8
  System_Int32_array *result; // x0
  UserNpcSvtRecordEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E71D0 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, svtId, (_DWORD)method, v3);
    byte_42E71D0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v9 = UserNpcSvtRecordMaster__TryGetEntity(this, &entity, UserId, svtId, v7);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B5D69C(0LL, v8);
    return entity->fields.tdPlayed;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserNpcSvtRecordMaster__TryGetEntity(
        UserNpcSvtRecordMaster_o *this,
        UserNpcSvtRecordEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E71CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&svtId);
    byte_42E71CF = 1;
  }
  PK = UserNpcSvtRecordEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__TryGetEntity__);
}