void __fastcall PaymentLimitEntity___ctor(PaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF5A3 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_int___ctor__, method);
    byte_49FF5A3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D5F80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall PaymentLimitEntity__CreatePrimaryKey(PaymentLimitEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}