void UserQuestEntity___cctor(const MethodInfo *method)
{
  if ( (byte_59717EF & 1) == 0 )
  {
    sub_2213A60(&UserQuestEntity_TypeInfo);
    byte_59717EF = 1;
  }
  UserQuestEntity_TypeInfo->static_fields->oldId = -1;
}


void UserQuestEntity___ctor(UserQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_3F0E590 *v3; // x1

  if ( (byte_59717EE & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59717EE = 1;
  }
  v3 = (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__;
  this->fields.EXPIRE_NO_LIMIT_TIME = 1893423600;
  DataEntityBase_object____ctor((DataEntityBase_PKType__o *)this, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UserQuestEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  UserQuestEntity_c *v4; // x0
  struct UserQuestEntity_StaticFields *static_fields; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  struct UserQuestEntity_StaticFields *v8; // x8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *userIdString; // x19
  System_String_o *v16; // x0
  int32_t v18; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v19; // [xsp+8h] [xbp-28h] BYREF

  v19 = userId;
  v18 = questId;
  if ( (byte_59717EB & 1) == 0 )
  {
    sub_2213A60(&UserQuestEntity_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_59717EB = 1;
  }
  v4 = UserQuestEntity_TypeInfo;
  if ( !*(&UserQuestEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo, *(_QWORD *)&questId);
    v4 = UserQuestEntity_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->oldId != userId )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&questId);
      static_fields = UserQuestEntity_TypeInfo->static_fields;
    }
    static_fields->oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v19, 0);
    v7 = System_String__Concat_75651716(v6, (System_String_o *)StringLiteral_1533/*":"*/, 0);
    v8 = UserQuestEntity_TypeInfo->static_fields;
    v8->userIdString = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->userIdString, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    v4 = UserQuestEntity_TypeInfo;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&questId);
    v4 = UserQuestEntity_TypeInfo;
  }
  userIdString = v4->static_fields->userIdString;
  v16 = System_Int32__ToString((int32_t)&v18, 0);
  return System_String__Concat_75651716(userIdString, v16, 0);
}


System_String_o *UserQuestEntity__CreatePrimaryKey(UserQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int64_t userId; // x20
  int32_t questId; // w19

  if ( (byte_59717EA & 1) == 0 )
  {
    sub_2213A60(&UserQuestEntity_TypeInfo);
    byte_59717EA = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  if ( !*(&UserQuestEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo, method);
  return UserQuestEntity__CreatePK(userId, questId, v2);
}


bool UserQuestEntity__HasStatus(UserQuestEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool UserQuestEntity__HasStatus_50129912(UserQuestEntity_o *this, int32_t status, const MethodInfo *method)
{
  return ((unsigned int)this->fields.status >> status) & 1;
}


bool UserQuestEntity__IsExpireNoLimit(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.expireAt >= this->fields.EXPIRE_NO_LIMIT_TIME;
}


bool UserQuestEntity__IsNotExpired(UserQuestEntity_o *this, const MethodInfo *method)
{
  int64_t expireAt; // x19

  if ( (byte_59717EC & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59717EC = 1;
  }
  expireAt = this->fields.expireAt;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return expireAt > NetworkManager__getTime(0);
}


bool UserQuestEntity__IsResetInterval(UserQuestEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59717ED & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59717ED = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               this->fields.questId,
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_14;
    if ( HIDWORD(entity[5].klass) == 4 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      Instance = NetworkManager__getTime(0);
      if ( entity )
        return Instance >= this->fields.lastStartedAt + 3600 * QuestEntity__getIntervalHours((QuestEntity_o *)entity, 0);
LABEL_14:
      sub_2213CDC(Instance, v4);
    }
  }
  return 0;
}


bool UserQuestEntity__IsResetStatus(UserQuestEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 1) & 1;
}


int32_t UserQuestEntity__getChallengeNum(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.challengeNum;
}


int32_t UserQuestEntity__getClearNum(UserQuestEntity_o *this, const MethodInfo *method)
{
  if ( UserQuestEntity__IsResetInterval(this, method) )
    return 0;
  else
    return this->fields.clearNum;
}


int64_t UserQuestEntity__getExpireAt(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.expireAt;
}


int64_t UserQuestEntity__getLastStartedAt(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.lastStartedAt;
}


int32_t UserQuestEntity__getQuestId(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t UserQuestEntity__getQuestPhase(UserQuestEntity_o *this, const MethodInfo *method)
{
  if ( UserQuestEntity__IsResetInterval(this, method) )
    return 0;
  else
    return this->fields.questPhase;
}


int64_t UserQuestEntity__getUpdateAt(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.updatedAt;
}