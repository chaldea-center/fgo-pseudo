void __fastcall EventDiggingBlockMaster___ctor(EventDiggingBlockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A366 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int___ctor__, method);
    byte_418A366 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    345,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int___ctor__);
}