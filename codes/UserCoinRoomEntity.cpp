void __fastcall UserCoinRoomEntity___ctor(UserCoinRoomEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B148E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42B148E = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserCoinRoomEntity__CreatePrimaryKey(UserCoinRoomEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}