void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C929 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
    byte_438C929 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    89,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}