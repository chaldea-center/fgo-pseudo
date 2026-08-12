void PickupUserFollowerEntity___ctor(PickupUserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E65 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_long___ctor__);
    byte_5970E65 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3F0E560 *)Method_DataEntityBase_long___ctor__);
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
  struct FollowerInfo_array *followerInfo; // x9
  int max_length; // w8
  FollowerInfo_o **i; // x9
  FollowerInfo_o *result; // x0

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  max_length = followerInfo->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = followerInfo->m_Items; ; ++i )
  {
    result = *i;
    if ( !*i )
      sub_2213CDC(0, followerId);
    if ( result->fields.userId == followerId && (followerType == -1 || result->fields.type == followerType) )
      break;
    if ( !--max_length )
      return 0;
  }
  return result;
}