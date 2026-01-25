void UserExternalPaymentStoneEntity___ctor(UserExternalPaymentStoneEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF4DA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF4DA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserExternalPaymentStoneEntity__CreatePK(int64_t userId, int32_t type, const MethodInfo *method)
{
  if ( (byte_4CEF4D9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CEF4D9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           type,
           (const MethodInfo_316E684 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserExternalPaymentStoneEntity__CreatePrimaryKey(
        UserExternalPaymentStoneEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserExternalPaymentStoneEntity__CreatePK(this->fields.userId, this->fields.type, v2);
}