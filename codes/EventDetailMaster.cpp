void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E276D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_48E276D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    121,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}