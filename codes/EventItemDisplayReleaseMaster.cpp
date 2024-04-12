void __fastcall EventItemDisplayReleaseMaster___ctor(EventItemDisplayReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1136 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__);
    byte_42B1136 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    165,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__);
}