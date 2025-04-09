void __fastcall UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBAFC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__, method);
    byte_49BBAFC = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    404,
    (const MethodInfo_319DBD4 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}