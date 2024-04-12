void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B27F2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
    byte_42B27F2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    121,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}