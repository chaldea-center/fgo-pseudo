void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEA8C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_49FEA8C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    122,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}