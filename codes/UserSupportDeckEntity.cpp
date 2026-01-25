void UserSupportDeckEntity___ctor(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF6FD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF6FD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserSupportDeckEntity__CreatePK(int64_t userId, int32_t supportDeckId, const MethodInfo *method)
{
  if ( (byte_4CEF6FC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CEF6FC = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           supportDeckId,
           (const MethodInfo_316E684 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserSupportDeckEntity__CreatePrimaryKey(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSupportDeckEntity__CreatePK(this->fields.userId, this->fields.supportDeckId, v2);
}