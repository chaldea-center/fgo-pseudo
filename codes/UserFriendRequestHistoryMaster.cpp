void __fastcall UserFriendRequestHistoryMaster___ctor(UserFriendRequestHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6A5F & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__,
      method);
    byte_4AB6A5F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int___ctor__);
}