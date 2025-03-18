void __fastcall UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22BCE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__, method);
    byte_4C22BCE = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    404,
    (const MethodInfo_329B080 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}