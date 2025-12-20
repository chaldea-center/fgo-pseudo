void UserSupportDeckEntity___ctor(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D95A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D95A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserSupportDeckEntity__CreatePK(int64_t userId, int32_t supportDeckId, const MethodInfo *method)
{
  if ( (byte_4D2D959 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4D2D959 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           supportDeckId,
           (const MethodInfo_319A3C4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserSupportDeckEntity__CreatePrimaryKey(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSupportDeckEntity__CreatePK(this->fields.userId, this->fields.supportDeckId, v2);
}