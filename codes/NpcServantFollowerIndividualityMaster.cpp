void __fastcall NpcServantFollowerIndividualityMaster___ctor(
        NpcServantFollowerIndividualityMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_438A248 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__);
    byte_438A248 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    456,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__);
}