void __fastcall TreasureDvcMaster___ctor(TreasureDvcMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB8B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__, method);
    byte_40FB8B1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    6,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int___ctor__);
}