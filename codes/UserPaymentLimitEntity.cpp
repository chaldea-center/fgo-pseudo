void UserPaymentLimitEntity___ctor(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939AE3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939AE3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserPaymentLimitEntity__CreatePK(int64_t userId, int32_t paymentLimitId, const MethodInfo *method)
{
  if ( (byte_5939AE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_5939AE2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           paymentLimitId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserPaymentLimitEntity__CreatePrimaryKey(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPaymentLimitEntity__CreatePK(this->fields.userId, this->fields.paymentLimitId, v2);
}