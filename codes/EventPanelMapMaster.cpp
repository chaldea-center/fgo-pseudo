void EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C8CA & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
    byte_4D2C8CA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    347,
    (const MethodInfo_345919C *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}