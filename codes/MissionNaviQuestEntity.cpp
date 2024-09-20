void __fastcall MissionNaviQuestEntity___ctor(MissionNaviQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B4E4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MissionNaviQuestEntity__CreatePK(int32_t id, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4A5B4E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B4E3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           questId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  return questInfo && questInfo->fields.dispType == 1;
}


bool __fastcall MissionNaviQuestEntity__IsNaviBoardTimeOver(
        MissionNaviQuestEntity_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5B4E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A5B4E2 = 1;
  }
  if ( questInfo )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v6);
    return !clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, this->fields.questId, 0LL);
  }
  else
  {
    return 1;
  }
}


bool __fastcall MissionNaviQuestEntity__TryGetChallengeIconName(
        MissionNaviQuestEntity_o *this,
        System_String_o **challengeIconName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *iconName; // x1

  if ( (byte_4A5B4E1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B4E1 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)challengeIconName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
    || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
  {
    return 0;
  }
  iconName = this->fields.iconName;
  *challengeIconName = iconName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)challengeIconName, (int32_t)iconName, v6, v7);
  return 1;
}


bool __fastcall MissionNaviQuestEntity__TryGetChallengeNaviName(
        MissionNaviQuestEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *title; // x1

  if ( (byte_4A5B4E0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B4E0 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)challengeNaviName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0LL)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1B88554((ServantStatusBattleListViewItem_o *)challengeNaviName, (int32_t)title, v6, v7);
  return 1;
}