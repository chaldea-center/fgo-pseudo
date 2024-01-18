void __fastcall CombineEntity___ctor(CombineEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418619B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418619B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CombineEntity__CreatePrimaryKey(CombineEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall CombineEntity__GetCombineType(CombineEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}