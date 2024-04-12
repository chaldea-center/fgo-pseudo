void __fastcall EventDiggingBlockMaster___ctor(EventDiggingBlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B27F4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int___ctor__);
    byte_42B27F4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    346,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int___ctor__);
}