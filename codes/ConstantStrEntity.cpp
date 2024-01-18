void __fastcall ConstantStrEntity___ctor(ConstantStrEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41895F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41895F4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ConstantStrEntity__CreatePrimaryKey(ConstantStrEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}