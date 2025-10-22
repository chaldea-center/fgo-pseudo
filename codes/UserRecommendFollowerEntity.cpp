void UserRecommendFollowerEntity___ctor(UserRecommendFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57CBF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_long___ctor__);
    byte_4C57CBF = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_33B0ABC *)Method_DataEntityBase_long___ctor__);
}


int64_t UserRecommendFollowerEntity__CreatePrimaryKey(UserRecommendFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


bool UserRecommendFollowerEntity__IsEnableData(UserRecommendFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57CBD & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C57CBD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) <= this->fields.expireAt;
}


bool UserRecommendFollowerEntity__IsEnableQuest(
        UserRecommendFollowerEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  struct FollowerInfo_array *followerInfo; // x8
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct FollowerInfo_array *v10; // x8
  FollowerInfo_o *v11; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v13; // x8
  RecommendSupportQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C57CBE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C57CBE = 1;
  }
  entity = 0;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo || !followerInfo->max_length )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (Il2CppObject *)RecommendSupportQuestMaster__TryGetEntity(
                                    (RecommendSupportQuestMaster_o *)Master_object,
                                    &entity,
                                    questId,
                                    questPhase,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    if ( entity->fields.baseQuestId >= 1 )
    {
      questPhase = entity->fields.baseQuestPhase;
      questId = entity->fields.baseQuestId;
    }
  }
  v10 = this->fields.followerInfo;
  if ( !v10 )
    goto LABEL_21;
  if ( !LODWORD(v10->max_length) )
    goto LABEL_22;
  v11 = v10->m_Items[0];
  if ( !v11 || (userRecommendSupportHash = v11->fields.userRecommendSupportHash) == 0 )
LABEL_21:
    sub_1C3E7C0(Master_object, v9);
  if ( !LODWORD(userRecommendSupportHash->max_length) )
LABEL_22:
    sub_1C3E7C8(Master_object, v9);
  v13 = userRecommendSupportHash->m_Items[0];
  if ( !v13 )
    goto LABEL_21;
  if ( v13->fields.questId == questId )
    return v13->fields.questPhase == questPhase;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool UserRecommendFollowerEntity__IsEnableSupport(
        UserRecommendFollowerEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return UserRecommendFollowerEntity__IsEnableData(this, *(const MethodInfo **)&questId)
      && UserRecommendFollowerEntity__IsEnableQuest(this, questId, questPhase, v7);
}


FollowerInfo_o *UserRecommendFollowerEntity__getFollowerInfo(
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
    return 0;
  max_length = followerInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  m_Items = followerInfo->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1C3E7C8(this, followerId);
    this = (UserRecommendFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_1C3E7C0(0, followerId);
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