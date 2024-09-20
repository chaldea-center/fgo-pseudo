void __fastcall UserFollowerEntity___ctor(UserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE4E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5BE4E = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserFollowerEntity__CreatePrimaryKey(UserFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


FollowerInfo_o *__fastcall UserFollowerEntity__getFollowerInfo(
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
    return 0LL;
  max_length = followerInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0LL;
  m_Items = followerInfo->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(this, followerId);
    this = (UserFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_1B8880C(0LL, followerId);
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


bool __fastcall UserFollowerEntity__isEnableData(UserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE4D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BE4D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= this->fields.expireAt;
}