void PaymentLimitEntity___ctor(PaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB75B9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB75B9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t PaymentLimitEntity__CreatePrimaryKey(PaymentLimitEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}