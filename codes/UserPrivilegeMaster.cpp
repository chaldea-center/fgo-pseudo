void __fastcall UserPrivilegeMaster___ctor(UserPrivilegeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67982 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__, method);
    byte_4B67982 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    287,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPrivilegeEntity_o *__fastcall UserPrivilegeMaster__GetEntity(
        UserPrivilegeMaster_o *this,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67980 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__, userId);
    byte_4B67980 = 1;
  }
  PK = (Il2CppObject *)UserPrivilegeEntity__CreatePK(userId, privilegeId, *(const MethodInfo **)&privilegeId);
  return (UserPrivilegeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__GetEntity__);
}


bool __fastcall UserPrivilegeMaster__TryGetEntity(
        UserPrivilegeMaster_o *this,
        UserPrivilegeEntity_o **entity,
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67981 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__, entity);
    byte_4B67981 = 1;
  }
  PK = (Il2CppObject *)UserPrivilegeEntity__CreatePK(userId, privilegeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserPrivilegeMaster__UserPrivilegeEntity__string__TryGetEntity__);
}