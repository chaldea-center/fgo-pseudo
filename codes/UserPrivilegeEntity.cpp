void __fastcall UserPrivilegeEntity___ctor(UserPrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438931F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438931F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPrivilegeEntity__CreatePK(
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  if ( (byte_438931E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_438931E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           privilegeId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserPrivilegeEntity__CreatePrimaryKey(
        UserPrivilegeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPrivilegeEntity__CreatePK(this->fields.userId, this->fields.privilegeId, v2);
}