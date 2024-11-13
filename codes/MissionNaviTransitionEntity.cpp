void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16593 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16593 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MissionNaviTransitionEntity__CreatePrimaryKey(
        MissionNaviTransitionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.missionId;
}


bool __fastcall MissionNaviTransitionEntity__TryGetChallengeIconName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeIconName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *iconName; // x1

  if ( (byte_4B16592 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21491/*"mainquest"*/, challengeIconName, method);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8628/*"MAIN_SCENARIO"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B16592 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)challengeIconName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8628/*"MAIN_SCENARIO"*/, 0LL) )
  {
    *challengeIconName = (System_String_o *)StringLiteral_21491/*"mainquest"*/;
    iconName = (System_String_o *)StringLiteral_21491/*"mainquest"*/;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
      || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_116/*" "*/, 0LL) )
    {
      return 0;
    }
    iconName = this->fields.iconName;
    *challengeIconName = iconName;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)challengeIconName, (int64_t)iconName, v16, v17, v18, v19, v20, v21);
  return 1;
}


bool __fastcall MissionNaviTransitionEntity__TryGetChallengeNaviName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o *title; // x1

  if ( (byte_4B16591 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_116/*" "*/, challengeNaviName, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B16591 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)challengeNaviName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0LL)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_116/*" "*/, 0LL) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1BCA784((PartyOrganizationUtility_o *)challengeNaviName, (int64_t)title, v12, v13, v14, v15, v16, v17);
  return 1;
}