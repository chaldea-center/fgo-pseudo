void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4354545 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
    byte_4354545 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    121,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}