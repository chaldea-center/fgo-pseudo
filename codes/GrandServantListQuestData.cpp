void GrandServantListQuestData___ctor(
        GrandServantListQuestData_o *this,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestriction,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._EventSetupInfo_k__BackingField = eventSetupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)eventSetupInfo, v7, v8, v9, v10, v11, v12);
  this->fields._QuestRestriction_k__BackingField = questRestriction;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._QuestRestriction_k__BackingField,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void GrandServantListQuestData__set_QuestRestriction(
        GrandServantListQuestData_o *this,
        QuestRestrictionInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._QuestRestriction_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._QuestRestriction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}