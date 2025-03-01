void __fastcall UserRecommendFollowerEntity___ctor(UserRecommendFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE596 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_long___ctor__, method);
    byte_4BFE596 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3278CE4 *)Method_DataEntityBase_long___ctor__);
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
  if ( (byte_4BFE594 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    byte_4BFE594 = 1;
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
  int32_t baseQuestId; // w20
  __int64 v7; // x1
  struct FollowerInfo_array *followerInfo; // x8
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct FollowerInfo_array *v11; // x8
  FollowerInfo_o *v12; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v14; // x8
  RecommendSupportQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  baseQuestId = questId;
  if ( (byte_4BFE595 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, *(_QWORD *)&questId);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    byte_4BFE595 = 1;
  }
  entity = 0LL;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo || !*(_QWORD *)&followerInfo->max_length )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (Il2CppObject *)RecommendSupportQuestMaster__TryGetEntity(
                                    (RecommendSupportQuestMaster_o *)Master_object,
                                    &entity,
                                    baseQuestId,
                                    questPhase,
                                    0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    if ( entity->fields.baseQuestId >= 1 )
    {
      questPhase = entity->fields.baseQuestPhase;
      baseQuestId = entity->fields.baseQuestId;
    }
  }
  v11 = this->fields.followerInfo;
  if ( !v11 )
    goto LABEL_21;
  if ( !v11->max_length )
    goto LABEL_22;
  v12 = v11->m_Items[0];
  if ( !v12 || (userRecommendSupportHash = v12->fields.userRecommendSupportHash) == 0LL )
LABEL_21:
    sub_1C2E388(Master_object, v10);
  if ( !userRecommendSupportHash->max_length )
LABEL_22:
    sub_1C2E390(Master_object, v10);
  v14 = userRecommendSupportHash->m_Items[0];
  if ( !v14 )
    goto LABEL_21;
  if ( v14->fields.questId == baseQuestId )
    return v14->fields.questPhase == questPhase;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserRecommendFollowerEntity__IsEnableSupport(
        UserRecommendFollowerEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return UserRecommendFollowerEntity__IsEnableData(this, *(const MethodInfo **)&questId)
      && UserRecommendFollowerEntity__IsEnableQuest(this, questId, questPhase, v7);
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
      sub_1C2E390(this, followerId);
    this = (UserRecommendFollowerEntity_o *)m_Items[v6];
    if ( !this )
      sub_1C2E388(0LL, followerId);
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