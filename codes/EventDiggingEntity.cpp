void EventDiggingEntity___ctor(EventDiggingEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7760C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E7760C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventDiggingEntity__CreatePrimaryKey(EventDiggingEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}