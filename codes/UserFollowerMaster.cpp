void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF07 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
    byte_42AEF07 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    93,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}