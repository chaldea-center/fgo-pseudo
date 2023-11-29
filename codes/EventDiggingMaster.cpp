void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC631 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__, method);
    byte_40FC631 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    343,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}