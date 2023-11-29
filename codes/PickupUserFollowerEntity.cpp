void __fastcall PickupUserFollowerEntity___ctor(PickupUserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F8F62 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F8F62 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall PickupUserFollowerEntity__CreatePrimaryKey(
        PickupUserFollowerEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


// local variable allocation has failed, the output may be wrong!
FollowerInfo_o *__fastcall PickupUserFollowerEntity__getFollowerInfo(
        PickupUserFollowerEntity_o *this,
        int64_t followerId,
        int32_t followerType,
        const MethodInfo *method)
{
  struct FollowerInfo_array *followerInfo; // x10
  int max_length; // w8
  __int64 v6; // x9
  FollowerInfo_o **m_Items; // x10

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  max_length = followerInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0LL;
  m_Items = followerInfo->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      sub_B17100(this, followerId, *(_QWORD *)&followerType);
      sub_B170A0();
    }
    this = (PickupUserFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_B170D4();
    if ( this->fields.followerInfo == (struct FollowerInfo_array *)followerId
      && (followerType == -1 || HIDWORD(this->fields.expireAt) == followerType) )
    {
      break;
    }
    if ( (int)++v6 >= max_length )
      return 0LL;
  }
  return (FollowerInfo_o *)this;
}