void MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970DA7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970DA7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
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
  System_String_o **p_iconName; // x20
  System_String_o *iconName; // t1
  System_String_o *v20; // x1

  if ( (byte_5970DA6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22487/*"mainquest"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_8893/*"MAIN_SCENARIO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970DA6 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)challengeIconName, v10, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8893/*"MAIN_SCENARIO"*/, 0) )
  {
    p_iconName = (System_String_o **)&StringLiteral_22487/*"mainquest"*/;
  }
  else
  {
    iconName = this->fields.iconName;
    p_iconName = &this->fields.iconName;
    if ( System_String__IsNullOrEmpty(iconName, 0)
      || System_String__op_Equality(*p_iconName, (System_String_o *)StringLiteral_113/*" "*/, 0) )
    {
      return 0;
    }
  }
  v20 = *p_iconName;
  *challengeIconName = *p_iconName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)challengeIconName, (int32_t)v20, v11, v12, v13, v14, v15, v16);
  return 1;
}


bool MissionNaviTransitionEntity__TryGetChallengeNaviName(
        MissionNaviTransitionEntity_o *this,
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

  if ( (byte_5970DA5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970DA5 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)challengeNaviName, v10, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_113/*" "*/, 0) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)challengeNaviName, (int32_t)title, v11, v12, v13, v14, v15, v16);
  return 1;
}