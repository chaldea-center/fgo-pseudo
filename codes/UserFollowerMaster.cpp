void __fastcall UserFollowerMaster___ctor(UserFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F96B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__, method);
    byte_40F96B4 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    92,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long___ctor__);
}