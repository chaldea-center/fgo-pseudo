void __fastcall UserAccessaryEntity___ctor(UserAccessaryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215B4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4215B4B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserAccessaryEntity__CreatePK(
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  if ( (byte_4215B4A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&accessaryId);
    byte_4215B4A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           accessaryId,
           (const MethodInfo_171354C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserAccessaryEntity__CreatePrimaryKey(
        UserAccessaryEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserAccessaryEntity__CreatePK(this->fields.userId, this->fields.accessaryId, v2);
}