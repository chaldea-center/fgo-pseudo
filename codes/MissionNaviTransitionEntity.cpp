void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22326 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C22326 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *iconName; // x1

  if ( (byte_4C22325 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21691/*"ne"*/, challengeIconName);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v10);
    sub_1C3B764(&StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/, v11);
    sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C22325 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)challengeIconName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/, 0LL) )
  {
    *challengeIconName = (System_String_o *)StringLiteral_21691/*"ne"*/;
    iconName = (System_String_o *)StringLiteral_21691/*"ne"*/;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
      || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_117/*"   "*/, 0LL) )
    {
      return 0;
    }
    iconName = this->fields.iconName;
    *challengeIconName = iconName;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)challengeIconName, (int64_t)iconName, v13, v14, v15, v16, v17, v18);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *title; // x1

  if ( (byte_4C22324 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_117/*"   "*/, challengeNaviName);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C22324 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)challengeNaviName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0LL)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_117/*"   "*/, 0LL) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1C3B708((PartyOrganizationUtility_o *)challengeNaviName, (int64_t)title, v11, v12, v13, v14, v15, v16);
  return 1;
}