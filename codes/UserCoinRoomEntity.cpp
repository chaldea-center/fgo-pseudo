void UserCoinRoomEntity___ctor(UserCoinRoomEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5F4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_long___ctor__);
    byte_4D2D5F4 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3459024 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserCoinRoomEntity__CreatePrimaryKey(UserCoinRoomEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}