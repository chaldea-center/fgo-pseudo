void __fastcall UserPaymentLimitEntity___ctor(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF5CB & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF5CB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPaymentLimitEntity__CreatePK(
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  if ( (byte_49FF5CA & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&paymentLimitId);
    byte_49FF5CA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           paymentLimitId,
           (const MethodInfo_2E399F4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserPaymentLimitEntity__CreatePrimaryKey(
        UserPaymentLimitEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPaymentLimitEntity__CreatePK(this->fields.userId, this->fields.paymentLimitId, v2);
}