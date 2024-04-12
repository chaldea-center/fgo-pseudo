void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B27F6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
    byte_42B27F6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    344,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}