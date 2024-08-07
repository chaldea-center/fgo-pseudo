void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEAF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FEEAF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *iconName; // x1

  if ( (byte_49FEEAE & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_117/*" "*/, challengeIconName);
    sub_1B64A00(&StringLiteral_1/*""*/, v6);
    byte_49FEEAE = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)challengeIconName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
    || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
  {
    return 0;
  }
  iconName = this->fields.iconName;
  *challengeIconName = iconName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)challengeIconName, (int32_t)iconName, v7, v8);
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

  if ( (byte_49FEEAD & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_117/*" "*/, challengeNaviName);
    sub_1B64A00(&StringLiteral_1/*""*/, v6);
    byte_49FEEAD = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)challengeNaviName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0LL)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)challengeNaviName, (int32_t)title, v7, v8);
  return 1;
}