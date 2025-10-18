void EventPanelMapEntity___ctor(EventPanelMapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43013 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C43013 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t EventPanelMapEntity__CreatePrimaryKey(EventPanelMapEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}