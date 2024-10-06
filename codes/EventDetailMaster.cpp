void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FDCE & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_4A6FDCE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    122,
    (const MethodInfo_312C568 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}