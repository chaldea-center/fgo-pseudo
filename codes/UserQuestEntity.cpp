void __fastcall UserQuestEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6AA9 & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v1, v2, v3);
    byte_42E6AA9 = 1;
  }
  UserQuestEntity_TypeInfo->static_fields->oldId = -1LL;
}


void __fastcall UserQuestEntity___ctor(UserQuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6AA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6AA8 = 1;
  }
  this->fields.EXPIRE_NO_LIMIT_TIME = 1893423600LL;
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserQuestEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserQuestEntity_c *v8; // x0
  struct UserQuestEntity_StaticFields *static_fields; // x8
  System_String_o *v10; // x0
  System_Int32_array **v11; // x0
  struct UserQuestEntity_StaticFields *v12; // x8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_o *userIdString; // x19
  System_String_o *v20; // x0
  int32_t v22; // [xsp+4h] [xbp-1Ch] BYREF
  int64_t v23; // [xsp+8h] [xbp-18h] BYREF

  v23 = userId;
  v22 = questId;
  if ( (byte_42E6AA5 & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestEntity_TypeInfo, questId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v5, v6, v7);
    byte_42E6AA5 = 1;
  }
  v8 = UserQuestEntity_TypeInfo;
  if ( (BYTE3(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
    v8 = UserQuestEntity_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->oldId != userId )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = UserQuestEntity_TypeInfo->static_fields;
    }
    static_fields->oldId = userId;
    v10 = System_Int64__ToString((int64_t)&v23, 0LL);
    v11 = (System_Int32_array **)System_String__Concat_44577788(v10, (System_String_o *)StringLiteral_1245/*":"*/, 0LL);
    v12 = UserQuestEntity_TypeInfo->static_fields;
    v12->userIdString = (struct System_String_o *)v11;
    sub_B5D560((BattleServantConfConponent_o *)&v12->userIdString, v11, v13, v14, v15, v16, v17, v18);
    v8 = UserQuestEntity_TypeInfo;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = UserQuestEntity_TypeInfo;
  }
  userIdString = v8->static_fields->userIdString;
  v20 = System_Int32__ToString((int32_t)&v22, 0LL);
  return System_String__Concat_44577788(userIdString, v20, 0LL);
}


System_String_o *__fastcall UserQuestEntity__CreatePrimaryKey(UserQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int64_t userId; // x20
  int32_t questId; // w19

  if ( (byte_42E6AA4 & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6AA4 = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  if ( (BYTE3(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  }
  return UserQuestEntity__CreatePK(userId, questId, v2);
}


bool __fastcall UserQuestEntity__HasStatus(UserQuestEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool __fastcall UserQuestEntity__HasStatus_21757804(UserQuestEntity_o *this, int32_t status, const MethodInfo *method)
{
  return (this->fields.status & (1 << status)) != 0;
}


bool __fastcall UserQuestEntity__IsExpireNoLimit(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.expireAt >= this->fields.EXPIRE_NO_LIMIT_TIME;
}


bool __fastcall UserQuestEntity__IsNotExpired(UserQuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t expireAt; // x19

  if ( (byte_42E6AA6 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6AA6 = 1;
  }
  expireAt = this->fields.expireAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return expireAt > NetworkManager__getTime(0LL);
}


bool __fastcall UserQuestEntity__IsResetInterval(UserQuestEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Instance; // x0
  __int64 v15; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E6AA7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6AA7 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &entity,
               this->fields.questId,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_15;
    if ( *(&entity->fields.startType + 1) == 4 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__getTime(0LL);
      if ( entity )
        return Instance >= this->fields.lastStartedAt
                         + 3600 * QuestEntity__getIntervalHours((QuestEntity_o *)entity, 0LL);
LABEL_15:
      sub_B5D69C(Instance, v15);
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