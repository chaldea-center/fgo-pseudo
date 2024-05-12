void __fastcall EventItemDisplayReleaseMaster___ctor(EventItemDisplayReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C65C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__);
    byte_438C65C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    165,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventItemDisplayReleaseMaster__EventItemDisplayReleaseEntity__int___ctor__);
}