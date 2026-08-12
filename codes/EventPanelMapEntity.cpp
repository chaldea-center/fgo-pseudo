void EventPanelMapEntity___ctor(EventPanelMapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59708C8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59708C8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventPanelMapEntity__CreatePrimaryKey(EventPanelMapEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}