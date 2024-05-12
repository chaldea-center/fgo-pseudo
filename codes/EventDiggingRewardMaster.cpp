void __fastcall EventDiggingRewardMaster___ctor(EventDiggingRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DE0C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
    byte_438DE0C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    345,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
}