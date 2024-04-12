void __fastcall EventDiggingBlockEntity___ctor(EventDiggingBlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B27F3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B27F3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDiggingBlockEntity__CreatePrimaryKey(EventDiggingBlockEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}