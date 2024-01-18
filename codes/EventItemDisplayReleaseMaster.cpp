void __fastcall EventItemDisplayReleaseMaster___ctor(EventItemDisplayReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188D4B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__,
      method);
    byte_4188D4B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    164,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__);
}