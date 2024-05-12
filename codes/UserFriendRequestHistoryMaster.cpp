void __fastcall UserFriendRequestHistoryMaster___ctor(UserFriendRequestHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389CFB & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__);
    byte_4389CFB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    207,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__);
}