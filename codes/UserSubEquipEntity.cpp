void UserSubEquipEntity___ctor(UserSubEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78766 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_long___ctor__);
    byte_4E78766 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_353348C *)Method_DataEntityBase_long___ctor__);
}


int64_t UserSubEquipEntity__CreatePrimaryKey(UserSubEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}