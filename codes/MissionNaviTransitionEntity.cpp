void MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC790B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC790B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t MissionNaviTransitionEntity__CreatePrimaryKey(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionId;
}


bool MissionNaviTransitionEntity__TryGetChallengeIconName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeIconName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *iconName; // x1

  if ( (byte_4CC790A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21504/*"mainquest"*/);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_8532/*"MAIN_SCENARIO"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC790A = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)challengeIconName, StringLiteral_1/*""*/, (int32_t)method, v3, v4, v5, v6, v7);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8532/*"MAIN_SCENARIO"*/, 0) )
  {
    *challengeIconName = (System_String_o *)StringLiteral_21504/*"mainquest"*/;
    LODWORD(iconName) = StringLiteral_21504/*"mainquest"*/;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.iconName, 0)
      || System_String__op_Equality(this->fields.iconName, (System_String_o *)StringLiteral_113/*" "*/, 0) )
    {
      return 0;
    }
    iconName = this->fields.iconName;
    *challengeIconName = iconName;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)challengeIconName, (int32_t)iconName, v10, v11, v12, v13, v14, v15);
  return 1;
}


bool MissionNaviTransitionEntity__TryGetChallengeNaviName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *title; // x1

  if ( (byte_4CC7909 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7909 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)challengeNaviName, StringLiteral_1/*""*/, (int32_t)method, v3, v4, v5, v6, v7);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_113/*" "*/, 0) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1C71354((GrandQuestFolderBoardItem_o *)challengeNaviName, (int32_t)title, v10, v11, v12, v13, v14, v15);
  return 1;
}