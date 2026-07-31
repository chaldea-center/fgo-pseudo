void UserFollowerEntity___ctor(UserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939595 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_5939595 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserFollowerEntity__CreatePrimaryKey(UserFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


bool UserFollowerEntity__IsValidFollower(UserFollowerEntity_o *this, int64_t followerId, const MethodInfo *method)
{
  struct FollowerInfo_array *followerInfo; // x9
  __int64 max_length; // x8
  FollowerInfo_o **i; // x9

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo || (int)followerInfo->max_length < 1 )
    return 0;
  max_length = (unsigned int)followerInfo->max_length;
  for ( i = followerInfo->m_Items; !*i || (*i)->fields.userId != followerId; ++i )
  {
    if ( !--max_length )
      return 0;
  }
  return 1;
}


FollowerInfo_o *UserFollowerEntity__getFollowerInfo(
        UserFollowerEntity_o *this,
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
      sub_21FFECC(0, followerId);
    if ( result->fields.userId == followerId && (followerType == -1 || result->fields.type == followerType) )
      break;
    if ( !--max_length )
      return 0;
  }
  return result;
}


bool UserFollowerEntity__isEnableData(UserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939594 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5939594 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getTime(0) <= this->fields.expireAt;
}