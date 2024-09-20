void __fastcall UserQuestEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BEDD & 1) == 0 )
  {
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5BEDD = 1;
  }
  UserQuestEntity_TypeInfo->static_fields->oldId = -1LL;
}


void __fastcall UserQuestEntity___ctor(UserQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEDC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BEDC = 1;
  }
  this->fields.EXPIRE_NO_LIMIT_TIME = 1893423600LL;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserQuestEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  UserQuestEntity_c *v4; // x0
  struct UserQuestEntity_StaticFields *static_fields; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  struct UserQuestEntity_StaticFields *v8; // x8
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *userIdString; // x19
  System_String_o *v12; // x0
  int32_t v14; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  v15 = userId;
  v14 = questId;
  if ( (byte_4A5BED9 & 1) == 0 )
  {
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BED9 = 1;
  }
  v4 = UserQuestEntity_TypeInfo;
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
    v4 = UserQuestEntity_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->oldId != userId )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = UserQuestEntity_TypeInfo->static_fields;
    }
    static_fields->oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v15, 0LL);
    v7 = System_String__Concat_61707032(v6, (System_String_o *)StringLiteral_1544/*":"*/, 0LL);
    v8 = UserQuestEntity_TypeInfo->static_fields;
    v8->userIdString = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->userIdString, (int32_t)v7, v9, v10);
    v4 = UserQuestEntity_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserQuestEntity_TypeInfo;
  }
  userIdString = v4->static_fields->userIdString;
  v12 = System_Int32__ToString((int32_t)&v14, 0LL);
  return System_String__Concat_61707032(userIdString, v12, 0LL);
}


System_String_o *__fastcall UserQuestEntity__CreatePrimaryKey(UserQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int64_t userId; // x20
  int32_t questId; // w19

  if ( (byte_4A5BED8 & 1) == 0 )
  {
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5BED8 = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  return UserQuestEntity__CreatePK(userId, questId, v2);
}


bool __fastcall UserQuestEntity__HasStatus(UserQuestEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool __fastcall UserQuestEntity__HasStatus_40149208(UserQuestEntity_o *this, int32_t status, const MethodInfo *method)
{
  return ((unsigned int)this->fields.status >> status) & 1;
}


bool __fastcall UserQuestEntity__IsExpireNoLimit(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.expireAt >= this->fields.EXPIRE_NO_LIMIT_TIME;
}


bool __fastcall UserQuestEntity__IsNotExpired(UserQuestEntity_o *this, const MethodInfo *method)
{
  int64_t expireAt; // x19

  if ( (byte_4A5BEDA & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BEDA = 1;
  }
  expireAt = this->fields.expireAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return expireAt > NetworkManager__getTime(0LL);
}


bool __fastcall UserQuestEntity__IsResetInterval(UserQuestEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BEDB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BEDB = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               this->fields.questId,
               (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_14;
    if ( HIDWORD(entity[5].klass) == 4 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getTime(0LL);
      if ( entity )
        return Instance >= this->fields.lastStartedAt
                         + 3600 * QuestEntity__getIntervalHours((QuestEntity_o *)entity, 0LL);
LABEL_14:
      sub_1B8880C(Instance, v4);
    }
  }
  return 0;
}


bool __fastcall UserQuestEntity__IsResetStatus(UserQuestEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 1) & 1;
}


int32_t __fastcall UserQuestEntity__getChallengeNum(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.challengeNum;
}


int32_t __fastcall UserQuestEntity__getClearNum(UserQuestEntity_o *this, const MethodInfo *method)
{
  if ( UserQuestEntity__IsResetInterval(this, method) )
    return 0;
  else
    return this->fields.clearNum;
}


int64_t __fastcall UserQuestEntity__getCreateAt(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.createdAt;
}


int64_t __fastcall UserQuestEntity__getExpireAt(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.expireAt;
}


bool __fastcall UserQuestEntity__getIsEternalOpen(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.isEternalOpen;
}


int64_t __fastcall UserQuestEntity__getLastStartedAt(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.lastStartedAt;
}


int32_t __fastcall UserQuestEntity__getQuestId(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall UserQuestEntity__getQuestPhase(UserQuestEntity_o *this, const MethodInfo *method)
{
  if ( UserQuestEntity__IsResetInterval(this, method) )
    return 0;
  else
    return this->fields.questPhase;
}


int64_t __fastcall UserQuestEntity__getUpdateAt(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.updatedAt;
}


int64_t __fastcall UserQuestEntity__getUserId(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}