void __fastcall UserSubEquipEntity___ctor(UserSubEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF9D0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_long___ctor__, method);
    byte_49FF9D0 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D65E0 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserSubEquipEntity__CreatePrimaryKey(UserSubEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}