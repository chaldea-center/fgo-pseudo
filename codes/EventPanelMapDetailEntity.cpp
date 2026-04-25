void EventPanelMapDetailEntity___ctor(EventPanelMapDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E04A84 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_int___ctor__);
    byte_4E04A84 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_34E6B24 *)Method_DataEntityBase_int___ctor__);
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