void EventPanelMapDetailEntity___ctor(EventPanelMapDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59708C5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59708C5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventPanelMapDetailEntity__CreatePrimaryKey(EventPanelMapDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool EventPanelMapDetailEntity__IsStartScan(EventPanelMapDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}


int32_t EventPanelMapDetailEntity__get_panelDetailFlag(EventPanelMapDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag;
}