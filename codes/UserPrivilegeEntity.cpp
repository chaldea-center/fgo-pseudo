void __fastcall UserPrivilegeEntity___ctor(UserPrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185DE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185DE9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPrivilegeEntity__CreatePK(
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  if ( (byte_4185DE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&privilegeId);
    byte_4185DE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           privilegeId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserPrivilegeEntity__CreatePrimaryKey(
        UserPrivilegeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPrivilegeEntity__CreatePK(this->fields.userId, this->fields.privilegeId, v2);
}