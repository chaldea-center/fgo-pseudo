void __fastcall UserQuestEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB54B6 & 1) == 0 )
  {
    sub_1C13D24(&UserQuestEntity_TypeInfo, v1);
    byte_4BB54B6 = 1;
  }
  UserQuestEntity_TypeInfo->static_fields->oldId = -1LL;
}


void __fastcall UserQuestEntity___ctor(UserQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB54B5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB54B5 = 1;
  }
  this->fields.EXPIRE_NO_LIMIT_TIME = 1893423600LL;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserQuestEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  __int64 v4; // x1
  UserQuestEntity_c *v5; // x0
  struct UserQuestEntity_StaticFields *static_fields; // x8
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  struct UserQuestEntity_StaticFields *v9; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *userIdString; // x19
  System_String_o *v17; // x0
  int32_t v19; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v20; // [xsp+8h] [xbp-28h] BYREF

  v20 = userId;
  v19 = questId;
  if ( (byte_4BB54B2 & 1) == 0 )
  {
    sub_1C13D24(&UserQuestEntity_TypeInfo, *(_QWORD *)&questId);
    sub_1C13D24(&StringLiteral_1545/*"99:99:99"*/, v4);
    byte_4BB54B2 = 1;
  }
  v5 = UserQuestEntity_TypeInfo;
  if ( !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
    v5 = UserQuestEntity_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->oldId != userId )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = UserQuestEntity_TypeInfo->static_fields;
    }
    static_fields->oldId = userId;
    v7 = System_Int64__ToString((int64_t)&v20, 0LL);
    v8 = System_String__Concat_62967944(v7, (System_String_o *)StringLiteral_1545/*"99:99:99"*/, 0LL);
    v9 = UserQuestEntity_TypeInfo->static_fields;
    v9->userIdString = v8;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v9->userIdString, (int64_t)v8, v10, v11, v12, v13, v14, v15);
    v5 = UserQuestEntity_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = UserQuestEntity_TypeInfo;
  }
  userIdString = v5->static_fields->userIdString;
  v17 = System_Int32__ToString((int32_t)&v19, 0LL);
  return System_String__Concat_62967944(userIdString, v17, 0LL);
}


System_String_o *__fastcall UserQuestEntity__CreatePrimaryKey(UserQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int64_t userId; // x20
  int32_t questId; // w19

  if ( (byte_4BB54B1 & 1) == 0 )
  {
    sub_1C13D24(&UserQuestEntity_TypeInfo, method);
    byte_4BB54B1 = 1;
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


bool __fastcall UserQuestEntity__HasStatus_41314060(UserQuestEntity_o *this, int32_t status, const MethodInfo *method)
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

  if ( (byte_4BB54B3 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    byte_4BB54B3 = 1;
  }
  expireAt = this->fields.expireAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return expireAt > NetworkManager__getTime(0LL);
}


bool __fastcall UserQuestEntity__IsResetInterval(UserQuestEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB54B4 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v3);
    sub_1C13D24(&NetworkManager_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB54B4 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               this->fields.questId,
               (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
      sub_1C13F80(Instance, v7);
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