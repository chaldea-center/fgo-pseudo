void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43506C5 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
    byte_43506C5 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    93,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}