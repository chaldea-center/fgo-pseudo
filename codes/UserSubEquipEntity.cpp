void __fastcall UserSubEquipEntity___ctor(UserSubEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E54 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42B5E54 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserSubEquipEntity__CreatePrimaryKey(UserSubEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}