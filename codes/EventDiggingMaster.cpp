void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216F49 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__, method);
    byte_4216F49 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    343,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}