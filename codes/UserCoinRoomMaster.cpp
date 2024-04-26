void __fastcall UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353339 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
    byte_4353339 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    397,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}