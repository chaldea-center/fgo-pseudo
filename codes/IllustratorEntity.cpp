void __fastcall IllustratorEntity___ctor(IllustratorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC703 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC703 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall IllustratorEntity__CreatePrimaryKey(IllustratorEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}