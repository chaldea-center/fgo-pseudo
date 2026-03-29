void UserPaymentLimitEntity___ctor(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31CCB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31CCB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserPaymentLimitEntity__CreatePK(int64_t userId, int32_t paymentLimitId, const MethodInfo *method)
{
  if ( (byte_4D31CCA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4D31CCA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           paymentLimitId,
           (const MethodInfo_31A2CCC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserPaymentLimitEntity__CreatePrimaryKey(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPaymentLimitEntity__CreatePK(this->fields.userId, this->fields.paymentLimitId, v2);
}