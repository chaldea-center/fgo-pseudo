void __fastcall UserFriendRequestHistoryMaster___ctor(UserFriendRequestHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF14 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__);
    byte_42AEF14 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    207,
    (const MethodInfo_23E223C *)Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__);
}