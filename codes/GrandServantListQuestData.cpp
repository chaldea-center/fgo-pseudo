void GrandServantListQuestData___ctor(
        GrandServantListQuestData_o *this,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestriction,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._EventSetupInfo_k__BackingField = eventSetupInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)eventSetupInfo, v7, v8, v9, v10, v11, v12);
  this->fields._QuestRestriction_k__BackingField = questRestriction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._QuestRestriction_k__BackingField,
    (int32_t)questRestriction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


EventUpValSetupInfo_o *GrandServantListQuestData__get_EventSetupInfo(
        GrandServantListQuestData_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSetupInfo_k__BackingField;
}


QuestRestrictionInfo_o *GrandServantListQuestData__get_QuestRestriction(
        GrandServantListQuestData_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestRestriction_k__BackingField;
}


void GrandServantListQuestData__set_EventSetupInfo(
        GrandServantListQuestData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListQuestData__set_QuestRestriction(
        GrandServantListQuestData_o *this,
        QuestRestrictionInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._QuestRestriction_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._QuestRestriction_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}