void __fastcall ConstantEntity___ctor(ConstantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41895E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41895E0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ConstantEntity__CreatePrimaryKey(ConstantEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}