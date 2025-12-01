void PickupUserFollowerEntity___ctor(PickupUserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC79BA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_long___ctor__);
    byte_4CC79BA = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_34069E4 *)Method_DataEntityBase_long___ctor__);
}


int64_t PickupUserFollowerEntity__CreatePrimaryKey(PickupUserFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


FollowerInfo_o *PickupUserFollowerEntity__getFollowerInfo(
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
    return 0;
  max_length = followerInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  m_Items = followerInfo->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1C71610(this);
    this = (PickupUserFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_1C71608(0, followerId);
    if ( this->fields.followerInfo == (struct FollowerInfo_array *)followerId
      && (followerType == -1 || HIDWORD(this->fields.expireAt) == followerType) )
    {
      break;
    }
    if ( (int)++v6 >= max_length )
      return 0;
  }
  return (FollowerInfo_o *)this;
}