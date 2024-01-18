void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A368 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__, method);
    byte_418A368 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    343,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}