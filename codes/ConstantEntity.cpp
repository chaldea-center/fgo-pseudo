void __fastcall ConstantEntity___ctor(ConstantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CC93 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438CC93 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ConstantEntity__CreatePrimaryKey(ConstantEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}