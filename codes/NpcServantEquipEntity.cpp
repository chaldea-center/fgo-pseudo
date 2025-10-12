void NpcServantEquipEntity___ctor(NpcServantEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F36 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_long___ctor__);
    byte_4C37F36 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339439C *)Method_DataEntityBase_long___ctor__);
}


int64_t NpcServantEquipEntity__CreatePrimaryKey(NpcServantEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}