void QuestUseItemGroupEntity___ctor(QuestUseItemGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3817A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C3817A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestUseItemGroupEntity__CreatePrimaryKey(QuestUseItemGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}