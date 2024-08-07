void __fastcall UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF5E6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__, method);
    byte_49FF5E6 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    398,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}