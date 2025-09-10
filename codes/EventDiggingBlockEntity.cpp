void EventDiggingBlockEntity___ctor(EventDiggingBlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2721D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C2721D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventDiggingBlockEntity__CreatePrimaryKey(EventDiggingBlockEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}