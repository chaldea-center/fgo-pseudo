void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216F45 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_4216F45 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    120,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}