void __fastcall UserFriendRequestHistoryMaster___ctor(UserFriendRequestHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FB7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__,
      method);
    byte_4186FB7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    206,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__);
}