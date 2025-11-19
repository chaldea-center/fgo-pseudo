void UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7038 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
    byte_4CB7038 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    404,
    (const MethodInfo_33F9314 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}