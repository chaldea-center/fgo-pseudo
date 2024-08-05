void __fastcall UserExternalPaymentStoneEntity___ctor(UserExternalPaymentStoneEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF1CA & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF1CA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserExternalPaymentStoneEntity__CreatePK(
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_49FF1C9 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&type);
    byte_49FF1C9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           type,
           (const MethodInfo_2E399F4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserExternalPaymentStoneEntity__CreatePrimaryKey(
        UserExternalPaymentStoneEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserExternalPaymentStoneEntity__CreatePK(this->fields.userId, this->fields.type, v2);
}