void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DE07 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
    byte_438DE07 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    344,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}