void __fastcall UserNpcSvtRecordMaster___ctor(UserNpcSvtRecordMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEFCD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string___ctor__);
    byte_42AEFCD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    410,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserNpcSvtRecordEntity_o *__fastcall UserNpcSvtRecordMaster__GetEntity(
        UserNpcSvtRecordMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AEFCE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__GetEntity__);
    byte_42AEFCE = 1;
  }
  PK = UserNpcSvtRecordEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserNpcSvtRecordEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__GetEntity__);
}


System_Int32_array *__fastcall UserNpcSvtRecordMaster__GetTdPlayed(
        UserNpcSvtRecordMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  const MethodInfo *v6; // x4
  __int64 v7; // x1
  bool v8; // w8
  System_Int32_array *result; // x0
  UserNpcSvtRecordEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEFD0 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEFD0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v8 = UserNpcSvtRecordMaster__TryGetEntity(this, &entity, UserId, svtId, v6);
  result = 0LL;
  if ( v8 )
  {
    if ( !entity )
      sub_B52A5C(0LL, v7);
    return entity->fields.tdPlayed;
  }
  return result;
}


bool __fastcall UserNpcSvtRecordMaster__TryGetEntity(
        UserNpcSvtRecordMaster_o *this,
        UserNpcSvtRecordEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AEFCF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__TryGetEntity__);
    byte_42AEFCF = 1;
  }
  PK = UserNpcSvtRecordEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserNpcSvtRecordMaster__UserNpcSvtRecordEntity__string__TryGetEntity__);
}