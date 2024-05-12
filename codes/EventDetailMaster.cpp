void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DE03 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
    byte_438DE03 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    121,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}