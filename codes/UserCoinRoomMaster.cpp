void __fastcall UserCoinRoomMaster___ctor(UserCoinRoomMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC86D5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__, method);
    byte_4BC86D5 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    402,
    (const MethodInfo_32488B0 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long___ctor__);
}