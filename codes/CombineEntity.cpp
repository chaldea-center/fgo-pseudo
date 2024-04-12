void __fastcall CombineEntity___ctor(CombineEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0F1A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B0F1A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CombineEntity__CreatePrimaryKey(CombineEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall CombineEntity__GetCombineType(CombineEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}