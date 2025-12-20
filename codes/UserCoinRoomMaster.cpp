void UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5F5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
    byte_4D2D5F5 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    404,
    (const MethodInfo_345B6F8 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}