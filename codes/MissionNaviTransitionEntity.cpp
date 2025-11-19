void MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB67E8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB67E8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
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
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *iconName; // x1

  if ( (byte_4CB67E7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21489/*"mainquest"*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_8528/*"MAIN_SCENARIO"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB67E7 = 1;
  }
  *challengeIconName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)challengeIconName, StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( this->fields.missionTransitionType == 2
    && System_String__op_Equality(this->fields.transitionParam, (System_String_o *)StringLiteral_8528/*"MAIN_SCENARIO"*/, 0) )
  {
    *challengeIconName = (System_String_o *)StringLiteral_21489/*"mainquest"*/;
    LODWORD(iconName) = StringLiteral_21489/*"mainquest"*/;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)challengeIconName, (int32_t)iconName, v6, v7);
  return 1;
}


bool MissionNaviTransitionEntity__TryGetChallengeNaviName(
        MissionNaviTransitionEntity_o *this,
        System_String_o **challengeNaviName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *title; // x1

  if ( (byte_4CB67E6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB67E6 = 1;
  }
  *challengeNaviName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)challengeNaviName, StringLiteral_1/*""*/, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.title, 0)
    || System_String__op_Equality(this->fields.title, (System_String_o *)StringLiteral_113/*" "*/, 0) )
  {
    return 0;
  }
  title = this->fields.title;
  *challengeNaviName = title;
  sub_1C6B9AC((CGThumbnailListItem_o *)challengeNaviName, (int32_t)title, v6, v7);
  return 1;
}