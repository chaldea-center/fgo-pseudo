void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43531AA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
    byte_43531AA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    89,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}