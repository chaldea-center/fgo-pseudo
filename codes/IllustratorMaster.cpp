void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188F5A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__, method);
    byte_4188F5A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    88,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}