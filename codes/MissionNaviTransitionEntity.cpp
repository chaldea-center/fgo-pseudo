void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44E75 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B44E75 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *iconName; // x1

  if ( (byte_4B44E74 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21419/*"mainquest"*/, challengeIconName);
    sub_1BDB878(&StringLiteral_115/*" "*/, v6);
    sub_1BDB878(&StringLiteral_8522/*"MAIN_SCENARIO"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B44E74 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeIconName, (int32_t)StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8522/*"MAIN_SCENARIO"*/, 0LL) )
  {
    *challengeIconName = (System_String_o *)StringLiteral_21419/*"mainquest"*/;
    LODWORD(iconName) = StringLiteral_21419/*"mainquest"*/;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.iconName, 0LL)
      || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_115/*" "*/, 0LL) )
    {
      return 0;
    }
    iconName = this->fields.iconName;
    *challengeIconName = iconName;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)challengeIconName, (int32_t)iconName, v9, v10);
  return 1;
}


bool __fastcall MissionNaviTransitionEntity__TryGetChallengeNaviName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *title; // x1

  if ( (byte_4B44E73 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_115/*" "*/, challengeNaviName);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B44E73 = 1;
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