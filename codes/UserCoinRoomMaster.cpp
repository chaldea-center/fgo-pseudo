void __fastcall UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B148F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
    byte_42B148F = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    397,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}