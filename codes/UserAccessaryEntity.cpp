void __fastcall UserAccessaryEntity___ctor(UserAccessaryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAAAC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAAAC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserAccessaryEntity__CreatePK(
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  if ( (byte_40FAAAB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&accessaryId);
    byte_40FAAAB = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           accessaryId,
           (const MethodInfo_18C22D0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserAccessaryEntity__CreatePrimaryKey(
        UserAccessaryEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserAccessaryEntity__CreatePK(this->fields.userId, this->fields.accessaryId, v2);
}