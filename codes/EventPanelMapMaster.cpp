void __fastcall EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66C0F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__, method);
    byte_4B66C0F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    345,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}