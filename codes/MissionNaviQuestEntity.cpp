void MissionNaviQuestEntity___ctor(MissionNaviQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938BE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938BE9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MissionNaviQuestEntity__CreatePK(int32_t id, int32_t questId, const MethodInfo *method)
{
  if ( (byte_5938BE8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938BE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           questId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MissionNaviQuestEntity__CreatePrimaryKey(MissionNaviQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MissionNaviQuestEntity__CreatePK(this->fields.id, this->fields.questId, v2);
}


bool MissionNaviQuestEntity__HasFlag(MissionNaviQuestEntity_o *this, int64_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool MissionNaviQuestEntity__IsNaviBoardOpen(
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

  if ( (byte_5938BE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5938BE6 = 1;
  }
  flag = this->fields.flag;
  if ( (flag & 4) != 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( questInfo && Instance )
    {
      if ( !QuestTree__IsActiveWar((QuestTree_o *)Instance, questInfo->fields.warId, 0) )
        goto LABEL_19;
      v9 = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      Instance = (Il2CppObject *)MapControl_QuestInfo__GetSpotID(questInfo, 0);
      if ( v9 )
      {
        SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)v9, (int32_t)Instance, 0);
        if ( !SpotInfo )
          return (char)SpotInfo;
        dispType = SpotInfo->fields.dispType;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_21FFECC(Instance, v8);
  }
  if ( (flag & 8) != 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( questInfo && Instance )
    {
      LOBYTE(SpotInfo) = QuestTree__IsActiveWar((QuestTree_o *)Instance, questInfo->fields.warId, 0);
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


bool MissionNaviQuestEntity__IsNaviBoardTimeOver(
        MissionNaviQuestEntity_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  bool IsNaviBoardOpen; // w0
  char v6; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_5938BE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5938BE7 = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v8);
    IsNaviBoardOpen = clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, this->fields.questId, 0, 0);
  }
  v6 = !IsNaviBoardOpen;
  return v6 & 1;
}


bool MissionNaviQuestEntity__TryGetChallengeIconName(
        MissionNaviQuestEntity_o *this,
        System_String_o **challengeIconName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *iconName; // x1

  if ( (byte_5938BE5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938BE5 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)challengeIconName, v10, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( System_String__IsNullOrEmpty(this->fields.iconName, 0)
    || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_113/*" "*/, 0) )
  {
    return 0;
  }
  iconName = this->fields.iconName;
  *challengeIconName = iconName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)challengeIconName, (int32_t)iconName, v11, v12, v13, v14, v15, v16);
  return 1;
}


bool MissionNaviQuestEntity__TryGetChallengeNaviName(
        MissionNaviQuestEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *title; // x1

  if ( (byte_5938BE4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938BE4 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)challengeNaviName, v10, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_113/*" "*/, 0) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)challengeNaviName, (int32_t)title, v11, v12, v13, v14, v15, v16);
  return 1;
}