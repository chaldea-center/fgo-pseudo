void EventDiggingBlockEntity___ctor(EventDiggingBlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59385E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59385E3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventDiggingBlockEntity__CreatePrimaryKey(EventDiggingBlockEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}