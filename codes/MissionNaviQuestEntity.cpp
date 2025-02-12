void __fastcall MissionNaviQuestEntity___ctor(MissionNaviQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7E60 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC7E60 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MissionNaviQuestEntity__CreatePK(int32_t id, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4BC7E5F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questId);
    byte_4BC7E5F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           questId,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4BC7E5D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, questInfo);
    byte_4BC7E5D = 1;
  }
  flag = this->fields.flag;
  if ( (flag & 4) != 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( questInfo && Instance )
    {
      if ( !QuestTree__IsActiveWar((QuestTree_o *)Instance, questInfo->fields.warId, 0LL) )
        goto LABEL_19;
      v9 = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    sub_1C1AE30(Instance, v8);
  }
  if ( (flag & 8) != 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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

  if ( (byte_4BC7E5E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, questInfo);
    byte_4BC7E5E = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      sub_1C1AE30(0LL, v8);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *iconName; // x1

  if ( (byte_4BC7E5C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_117/*" "*/, challengeIconName);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v10);
    byte_4BC7E5C = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)challengeIconName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
    || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
  {
    return 0;
  }
  iconName = this->fields.iconName;
  *challengeIconName = iconName;
  sub_1C1AB78((PartyOrganizationUtility_o *)challengeIconName, (int64_t)iconName, v11, v12, v13, v14, v15, v16);
  return 1;
}


bool __fastcall MissionNaviQuestEntity__TryGetChallengeNaviName(
        MissionNaviQuestEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *title; // x1

  if ( (byte_4BC7E5B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_117/*" "*/, challengeNaviName);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v10);
    byte_4BC7E5B = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)challengeNaviName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0LL)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1C1AB78((PartyOrganizationUtility_o *)challengeNaviName, (int64_t)title, v11, v12, v13, v14, v15, v16);
  return 1;
}