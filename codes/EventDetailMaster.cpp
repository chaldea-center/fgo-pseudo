void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A364 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__, method);
    byte_418A364 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    120,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}