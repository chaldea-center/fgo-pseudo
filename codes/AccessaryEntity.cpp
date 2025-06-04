void __fastcall AccessaryEntity___ctor(AccessaryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01BDE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B01BDE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AccessaryEntity__CreatePrimaryKey(AccessaryEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}