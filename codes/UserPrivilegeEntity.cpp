void __fastcall UserPrivilegeEntity___ctor(UserPrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF870 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF870 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPrivilegeEntity__CreatePK(
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  if ( (byte_49FF86F & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&privilegeId);
    byte_49FF86F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           privilegeId,
           (const MethodInfo_2E3A00C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserPrivilegeEntity__CreatePrimaryKey(
        UserPrivilegeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPrivilegeEntity__CreatePK(this->fields.userId, this->fields.privilegeId, v2);
}