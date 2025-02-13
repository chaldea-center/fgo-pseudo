void __fastcall PaymentLimitEntity___ctor(PaymentLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD6AA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDD6AA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall PaymentLimitEntity__CreatePrimaryKey(PaymentLimitEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}