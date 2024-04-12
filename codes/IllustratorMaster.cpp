void __fastcall IllustratorMaster___ctor(IllustratorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1B87 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
    byte_42B1B87 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    89,
    (const MethodInfo_23E223C *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int___ctor__);
}