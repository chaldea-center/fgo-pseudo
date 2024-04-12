void __fastcall NpcServantFollowerIndividualityMaster___ctor(
        NpcServantFollowerIndividualityMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42ADB0D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__);
    byte_42ADB0D = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    456,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__);
}