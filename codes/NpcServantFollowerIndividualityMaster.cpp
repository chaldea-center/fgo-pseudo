void __fastcall NpcServantFollowerIndividualityMaster___ctor(
        NpcServantFollowerIndividualityMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_418511D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__,
      method);
    byte_418511D = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    455,
    (const MethodInfo_24E425C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__);
}