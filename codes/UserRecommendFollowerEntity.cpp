void __fastcall UserRecommendFollowerEntity___ctor(UserRecommendFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A099E8 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_long___ctor__, method);
    byte_4A099E8 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30E4308 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserRecommendFollowerEntity__CreatePrimaryKey(
        UserRecommendFollowerEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


bool __fastcall UserRecommendFollowerEntity__IsEnableData(
        UserRecommendFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A099E7 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    byte_4A099E7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= this->fields.expireAt;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserRecommendFollowerEntity__IsEnableQuest(
        UserRecommendFollowerEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  struct FollowerInfo_array *followerInfo; // x8
  __int64 v5; // x9
  FollowerInfo_o *v6; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v8; // x8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  v5 = *(_QWORD *)&followerInfo->max_length;
  if ( !v5 )
    return 0;
  if ( !(_DWORD)v5 )
    goto LABEL_12;
  v6 = followerInfo->m_Items[0];
  if ( !v6 || (userRecommendSupportHash = v6->fields.userRecommendSupportHash) == 0LL )
LABEL_11:
    sub_1B68930(this, questId);
  if ( !userRecommendSupportHash->max_length )
LABEL_12:
    sub_1B68938(this, *(_QWORD *)&questId);
  v8 = userRecommendSupportHash->m_Items[0];
  if ( !v8 )
    goto LABEL_11;
  if ( v8->fields.questId == questId )
    return v8->fields.questPhase == questPhase;
  return 0;
}


FollowerInfo_o *__fastcall UserRecommendFollowerEntity__getFollowerInfo(
        UserRecommendFollowerEntity_o *this,
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
      sub_1B68938(this, followerId);
    this = (UserRecommendFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_1B68930(0LL, followerId);
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