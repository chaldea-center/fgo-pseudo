void UserFollowerEntity___ctor(UserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF4DE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_long___ctor__);
    byte_4CEF4DE = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_342BE60 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserFollowerEntity__CreatePrimaryKey(UserFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


bool UserFollowerEntity__IsValidFollower(UserFollowerEntity_o *this, int64_t followerId, const MethodInfo *method)
{
  struct FollowerInfo_array *followerInfo; // x9
  il2cpp_array_size_t max_length; // x8
  bool result; // w0
  __int64 v6; // x8
  FollowerInfo_o **i; // x9

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  max_length = followerInfo->max_length;
  result = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v6 = (unsigned int)followerInfo->max_length;
    for ( i = followerInfo->m_Items; !*i || (*i)->fields.userId != followerId; ++i )
    {
      if ( !--v6 )
        return 0;
    }
    return 1;
  }
  return result;
}


FollowerInfo_o *UserFollowerEntity__getFollowerInfo(
        UserFollowerEntity_o *this,
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
      sub_1C7BD48(this);
    this = (UserFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_1C7BD40(0, followerId);
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


bool UserFollowerEntity__isEnableData(UserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF4DD & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF4DD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) <= this->fields.expireAt;
}