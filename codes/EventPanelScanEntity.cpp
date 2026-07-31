void EventPanelScanEntity___ctor(EventPanelScanEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938800 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938800 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventPanelScanEntity__CreatePrimaryKey(EventPanelScanEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool EventPanelScanEntity__get_HasReleaseCondition(EventPanelScanEntity_o *this, const MethodInfo *method)
{
  return this->fields.commonReleaseId > 0;
}