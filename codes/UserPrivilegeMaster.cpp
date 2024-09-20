void __fastcall UserPrivilegeMaster___ctor(UserPrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BED3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__);
    byte_4A5BED3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    283,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPrivilegeEntity_o *__fastcall UserPrivilegeMaster__GetEntity(
        UserPrivilegeMaster_o *this,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BED1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__);
    byte_4A5BED1 = 1;
  }
  PK = (Il2CppObject *)UserPrivilegeEntity__CreatePK(userId, privilegeId, *(const MethodInfo **)&privilegeId);
  return (UserPrivilegeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__);
}


bool __fastcall UserPrivilegeMaster__TryGetEntity(
        UserPrivilegeMaster_o *this,
        UserPrivilegeEntity_o **entity,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BED2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__);
    byte_4A5BED2 = 1;
  }
  PK = (Il2CppObject *)UserPrivilegeEntity__CreatePK(userId, privilegeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__);
}