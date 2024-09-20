void __fastcall ConstantEntity___ctor(ConstantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF9F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AF9F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ConstantEntity__CreatePrimaryKey(ConstantEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}