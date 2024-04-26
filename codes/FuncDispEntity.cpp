void __fastcall FuncDispEntity___ctor(FuncDispEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43540D4 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_43540D4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FuncDispEntity__CreatePrimaryKey(FuncDispEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}