void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD6A2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_4BFD6A2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    126,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}