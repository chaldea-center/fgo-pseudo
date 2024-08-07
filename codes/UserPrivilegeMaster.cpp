void __fastcall UserPrivilegeMaster___ctor(UserPrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF873 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__, method);
    byte_49FF873 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    283,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPrivilegeEntity_o *__fastcall UserPrivilegeMaster__GetEntity(
        UserPrivilegeMaster_o *this,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF871 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__, userId);
    byte_49FF871 = 1;
  }
  PK = (Il2CppObject *)UserPrivilegeEntity__CreatePK(userId, privilegeId, *(const MethodInfo **)&privilegeId);
  return (UserPrivilegeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D6AF0 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__);
}


bool __fastcall UserPrivilegeMaster__TryGetEntity(
        UserPrivilegeMaster_o *this,
        UserPrivilegeEntity_o **entity,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF872 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__, entity);
    byte_49FF872 = 1;
  }
  PK = (Il2CppObject *)UserPrivilegeEntity__CreatePK(userId, privilegeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__);
}