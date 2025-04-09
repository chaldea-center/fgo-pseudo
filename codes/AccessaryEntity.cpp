void __fastcall AccessaryEntity___ctor(AccessaryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAA57 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BAA57 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AccessaryEntity__CreatePrimaryKey(AccessaryEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}