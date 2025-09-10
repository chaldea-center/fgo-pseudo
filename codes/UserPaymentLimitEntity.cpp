void UserPaymentLimitEntity___ctor(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C285BF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C285BF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserPaymentLimitEntity__CreatePK(int64_t userId, int32_t paymentLimitId, const MethodInfo *method)
{
  if ( (byte_4C285BE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C285BE = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           paymentLimitId,
           (const MethodInfo_30CCBE0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserPaymentLimitEntity__CreatePrimaryKey(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPaymentLimitEntity__CreatePK(this->fields.userId, this->fields.paymentLimitId, v2);
}