void __fastcall UserAccessaryEntity___ctor(UserAccessaryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1477 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1477 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserAccessaryEntity__CreatePK(
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  if ( (byte_42B1476 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42B1476 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           accessaryId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserAccessaryEntity__CreatePrimaryKey(
        UserAccessaryEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserAccessaryEntity__CreatePK(this->fields.userId, this->fields.accessaryId, v2);
}