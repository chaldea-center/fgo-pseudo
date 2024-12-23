void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B1C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__, method);
    byte_4B66B1C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    349,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}