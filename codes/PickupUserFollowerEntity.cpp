void __fastcall PickupUserFollowerEntity___ctor(PickupUserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186AFD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, method);
    byte_4186AFD = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall PickupUserFollowerEntity__CreatePrimaryKey(
        PickupUserFollowerEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


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
  __int64 v8; // x0

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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    this = (PickupUserFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_B2C434(0LL, followerId);
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