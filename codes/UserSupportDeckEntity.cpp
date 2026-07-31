void UserSupportDeckEntity___ctor(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397B3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserSupportDeckEntity__CreatePK(int64_t userId, int32_t supportDeckId, const MethodInfo *method)
{
  if ( (byte_59397B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_59397B2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           supportDeckId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserSupportDeckEntity__CreatePrimaryKey(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSupportDeckEntity__CreatePK(this->fields.userId, this->fields.supportDeckId, v2);
}