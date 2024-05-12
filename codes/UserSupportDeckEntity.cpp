void __fastcall UserSupportDeckEntity___ctor(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4391256 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4391256 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserSupportDeckEntity__CreatePK(
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_4391255 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4391255 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           supportDeckId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserSupportDeckEntity__CreatePrimaryKey(
        UserSupportDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSupportDeckEntity__CreatePK(this->fields.userId, this->fields.supportDeckId, v2);
}