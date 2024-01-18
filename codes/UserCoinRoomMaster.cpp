void __fastcall UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188AA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__, method);
    byte_4188AA2 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    396,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}