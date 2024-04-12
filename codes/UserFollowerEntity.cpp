void __fastcall UserFollowerEntity___ctor(UserFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF06 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42AEF06 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
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
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
    }
    this = (UserFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_B52A5C(0LL, followerId);
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
  if ( (byte_42AEF05 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF05 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL) <= this->fields.expireAt;
}