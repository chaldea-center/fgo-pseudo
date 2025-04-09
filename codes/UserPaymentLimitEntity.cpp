void __fastcall UserPaymentLimitEntity___ctor(UserPaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BC070 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BC070 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPaymentLimitEntity__CreatePK(
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  if ( (byte_49BC06F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&paymentLimitId);
    byte_49BC06F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           paymentLimitId,
           (const MethodInfo_2EFFDB4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserPaymentLimitEntity__CreatePrimaryKey(
        UserPaymentLimitEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPaymentLimitEntity__CreatePK(this->fields.userId, this->fields.paymentLimitId, v2);
}