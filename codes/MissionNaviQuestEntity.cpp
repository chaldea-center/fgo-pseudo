void __fastcall MissionNaviQuestEntity___ctor(MissionNaviQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44E6A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44E6A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MissionNaviQuestEntity__CreatePK(int32_t id, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4B44E69 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questId);
    byte_4B44E69 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           questId,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MissionNaviQuestEntity__CreatePrimaryKey(
        MissionNaviQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MissionNaviQuestEntity__CreatePK(this->fields.id, this->fields.questId, v2);
}


bool __fastcall MissionNaviQuestEntity__HasFlag(
        MissionNaviQuestEntity_o *this,
        int64_t typeFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall MissionNaviQuestEntity__IsNaviBoardOpen(
        MissionNaviQuestEntity_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  int64_t flag; // x8
  MapControl_SpotInfo_o *SpotInfo; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  int32_t dispType; // w8

  if ( (byte_4B44E67 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, questInfo);
    byte_4B44E67 = 1;
  }
  flag = this->fields.flag;
  if ( (flag & 4) != 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( questInfo && Instance )
    {
      if ( !QuestTree__IsActiveWar((QuestTree_o *)Instance, questInfo->fields.warId, 0LL) )
        goto LABEL_19;
      v9 = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      Instance = (Il2CppObject *)MapControl_QuestInfo__GetSpotID(questInfo, 0LL);
      if ( v9 )
      {
        SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)v9, (int32_t)Instance, 0LL);
        if ( !SpotInfo )
          return (char)SpotInfo;
        dispType = SpotInfo->fields.dispType;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1BDBAD4(Instance, v8);
  }
  if ( (flag & 8) != 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( questInfo && Instance )
    {
      LOBYTE(SpotInfo) = QuestTree__IsActiveWar((QuestTree_o *)Instance, questInfo->fields.warId, 0LL);
      return (char)SpotInfo;
    }
    goto LABEL_21;
  }
  if ( this->fields.questTransitionType != 3 )
  {
    if ( questInfo )
    {
      dispType = questInfo->fields.dispType;
LABEL_18:
      LOBYTE(SpotInfo) = dispType == 1;
      return (char)SpotInfo;
    }
LABEL_19:
    LOBYTE(SpotInfo) = 0;
    return (char)SpotInfo;
  }
  LOBYTE(SpotInfo) = 1;
  return (char)SpotInfo;
}


bool __fastcall MissionNaviQuestEntity__IsNaviBoardTimeOver(
        MissionNaviQuestEntity_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  bool IsNaviBoardOpen; // w0
  char v6; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B44E68 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, questInfo);
    byte_4B44E68 = 1;
  }
  if ( (this->fields.flag & 0xC) != 0 )
  {
    IsNaviBoardOpen = MissionNaviQuestEntity__IsNaviBoardOpen(this, questInfo, method);
  }
  else
  {
    if ( this->fields.questTransitionType == 3 )
    {
      v6 = 0;
      return v6 & 1;
    }
    if ( !questInfo )
    {
      v6 = 1;
      return v6 & 1;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      sub_1BDBAD4(0LL, v8);
    IsNaviBoardOpen = clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, this->fields.questId, 0LL);
  }
  v6 = !IsNaviBoardOpen;
  return v6 & 1;
}


bool __fastcall MissionNaviQuestEntity__TryGetChallengeIconName(
        MissionNaviQuestEntity_o *this,
        System_String_o **challengeIconName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *iconName; // x1

  if ( (byte_4B44E66 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_115/*" "*/, challengeIconName);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B44E66 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeIconName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
    || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_115/*" "*/, 0LL) )
  {
    return 0;
  }
  iconName = this->fields.iconName;
  *challengeIconName = iconName;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeIconName, (int32_t)iconName, v7, v8);
  return 1;
}


bool __fastcall MissionNaviQuestEntity__TryGetChallengeNaviName(
        MissionNaviQuestEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *title; // x1

  if ( (byte_4B44E65 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_115/*" "*/, challengeNaviName);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B44E65 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeNaviName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0LL)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_115/*" "*/, 0LL) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeNaviName, (int32_t)title, v7, v8);
  return 1;
}