void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC166 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__, method);
    byte_40FC166 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    88,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}