void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4EF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B4EF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *iconName; // x1

  if ( (byte_4A5B4EE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B4EE = 1;
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


bool __fastcall MissionNaviTransitionEntity__TryGetChallengeNaviName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *title; // x1

  if ( (byte_4A5B4ED & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B4ED = 1;
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