void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC907 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDC907 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *iconName; // x1

  if ( (byte_4BDC906 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21644/*"mainquest"*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_8686/*"MAIN_SCENARIO"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC906 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)challengeIconName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8686/*"MAIN_SCENARIO"*/, 0LL) )
  {
    *challengeIconName = (System_String_o *)StringLiteral_21644/*"mainquest"*/;
    iconName = (System_String_o *)StringLiteral_21644/*"mainquest"*/;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
      || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
    {
      return 0;
    }
    iconName = this->fields.iconName;
    *challengeIconName = iconName;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)challengeIconName, (int64_t)iconName, v10, v11, v12, v13, v14, v15);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *title; // x1

  if ( (byte_4BDC905 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC905 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
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
  sub_1C21DDC((PartyOrganizationUtility_o *)challengeNaviName, (int64_t)title, v10, v11, v12, v13, v14, v15);
  return 1;
}