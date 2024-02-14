void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215CB7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__, method);
    byte_4215CB7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    88,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}