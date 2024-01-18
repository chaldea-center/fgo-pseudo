void __fastcall UserPrivilegeMaster___ctor(UserPrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185DEC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__, method);
    byte_4185DEC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    281,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPrivilegeEntity_o *__fastcall UserPrivilegeMaster__GetEntity(
        UserPrivilegeMaster_o *this,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4185DEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__, userId);
    byte_4185DEA = 1;
  }
  PK = UserPrivilegeEntity__CreatePK(userId, privilegeId, *(const MethodInfo **)&privilegeId);
  return (UserPrivilegeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__);
}


bool __fastcall UserPrivilegeMaster__TryGetEntity(
        UserPrivilegeMaster_o *this,
        UserPrivilegeEntity_o **entity,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4185DEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__, entity);
    byte_4185DEB = 1;
  }
  PK = UserPrivilegeEntity__CreatePK(userId, privilegeId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__);
}