void EventMissionCondDetailEntity___ctor(EventMissionCondDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56D7E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_int___ctor__);
    byte_4C56D7E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33B0A74 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventMissionCondDetailEntity__CreatePrimaryKey(EventMissionCondDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}