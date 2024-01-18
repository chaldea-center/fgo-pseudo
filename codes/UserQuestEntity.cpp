void __fastcall UserQuestEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4185DF6 & 1) == 0 )
  {
    sub_B2C35C(&UserQuestEntity_TypeInfo, v1);
    byte_4185DF6 = 1;
  }
  UserQuestEntity_TypeInfo->static_fields->oldId = -1LL;
}


void __fastcall UserQuestEntity___ctor(UserQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185DF5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185DF5 = 1;
  }
  this->fields.EXPIRE_NO_LIMIT_TIME = 1893423600LL;
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserQuestEntity__CreatePK(int64_t userId, int32_t questId, const MethodInfo *method)
{
  __int64 v4; // x1
  UserQuestEntity_c *v5; // x0
  struct UserQuestEntity_StaticFields *static_fields; // x8
  System_String_o *v7; // x0
  System_Int32_array **v8; // x0
  struct UserQuestEntity_StaticFields *v9; // x8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *userIdString; // x19
  System_String_o *v17; // x0
  int32_t v19; // [xsp+4h] [xbp-1Ch] BYREF
  int64_t v20; // [xsp+8h] [xbp-18h] BYREF

  v20 = userId;
  v19 = questId;
  if ( (byte_4185DF2 & 1) == 0 )
  {
    sub_B2C35C(&UserQuestEntity_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v4);
    byte_4185DF2 = 1;
  }
  v5 = UserQuestEntity_TypeInfo;
  if ( (BYTE3(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
    v5 = UserQuestEntity_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->oldId != userId )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = UserQuestEntity_TypeInfo->static_fields;
    }
    static_fields->oldId = userId;
    v7 = System_Int64__ToString((int64_t)&v20, 0LL);
    v8 = (System_Int32_array **)System_String__Concat_44305532(v7, (System_String_o *)StringLiteral_1225/*":"*/, 0LL);
    v9 = UserQuestEntity_TypeInfo->static_fields;
    v9->userIdString = (struct System_String_o *)v8;
    sub_B2C2F8((BattleServantConfConponent_o *)&v9->userIdString, v8, v10, v11, v12, v13, v14, v15);
    v5 = UserQuestEntity_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = UserQuestEntity_TypeInfo;
  }
  userIdString = v5->static_fields->userIdString;
  v17 = System_Int32__ToString((int32_t)&v19, 0LL);
  return System_String__Concat_44305532(userIdString, v17, 0LL);
}


System_String_o *__fastcall UserQuestEntity__CreatePrimaryKey(UserQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int64_t userId; // x20
  int32_t questId; // w19

  if ( (byte_4185DF1 & 1) == 0 )
  {
    sub_B2C35C(&UserQuestEntity_TypeInfo, method);
    byte_4185DF1 = 1;
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


bool __fastcall UserQuestEntity__HasStatus_21570428(UserQuestEntity_o *this, int32_t status, const MethodInfo *method)
{
  return (this->fields.status & (1 << status)) != 0;
}


bool __fastcall UserQuestEntity__IsExpireNoLimit(UserQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.expireAt >= this->fields.EXPIRE_NO_LIMIT_TIME;
}


bool __fastcall UserQuestEntity__IsNotExpired(UserQuestEntity_o *this, const MethodInfo *method)
{
  int64_t expireAt; // x19

  if ( (byte_4185DF3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4185DF3 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185DF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185DF4 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &entity,
               this->fields.questId,
               (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
      sub_B2C434(Instance, v7);
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