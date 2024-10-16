void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB60E6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB60E6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *iconName; // x1

  if ( (byte_4AB60E5 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_21290/*"mainquest"*/, challengeIconName);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v6);
    sub_1BAB41C(&StringLiteral_8506/*"MAIN_SCENARIO"*/, v7);
    sub_1BAB41C(&StringLiteral_1/*""*/, v8);
    byte_4AB60E5 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)challengeIconName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8506/*"MAIN_SCENARIO"*/, 0LL) )
  {
    *challengeIconName = (System_String_o *)StringLiteral_21290/*"mainquest"*/;
    LODWORD(iconName) = StringLiteral_21290/*"mainquest"*/;
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)challengeIconName, (int32_t)iconName, v9, v10);
  return 1;
}


bool __fastcall MissionNaviTransitionEntity__TryGetChallengeNaviName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *title; // x1

  if ( (byte_4AB60E4 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_116/*" "*/, challengeNaviName);
    sub_1BAB41C(&StringLiteral_1/*""*/, v6);
    byte_4AB60E4 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)challengeNaviName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0LL)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_116/*" "*/, 0LL) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)challengeNaviName, (int32_t)title, v7, v8);
  return 1;
}