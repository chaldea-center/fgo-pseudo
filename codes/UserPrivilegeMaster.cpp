void __fastcall UserPrivilegeMaster___ctor(UserPrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE138 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__);
    byte_42AE138 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    282,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPrivilegeEntity_o *__fastcall UserPrivilegeMaster__GetEntity(
        UserPrivilegeMaster_o *this,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE136 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__);
    byte_42AE136 = 1;
  }
  PK = UserPrivilegeEntity__CreatePK(userId, privilegeId, *(const MethodInfo **)&privilegeId);
  return (UserPrivilegeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__);
}


bool __fastcall UserPrivilegeMaster__TryGetEntity(
        UserPrivilegeMaster_o *this,
        UserPrivilegeEntity_o **entity,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AE137 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__);
    byte_42AE137 = 1;
  }
  PK = UserPrivilegeEntity__CreatePK(userId, privilegeId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__);
}