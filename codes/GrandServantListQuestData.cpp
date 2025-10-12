void GrandServantListQuestData___ctor(
        GrandServantListQuestData_o *this,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestriction,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._EventSetupInfo_k__BackingField = eventSetupInfo;
  sub_1C32BC4(&this->fields, eventSetupInfo);
  this->fields._QuestRestriction_k__BackingField = questRestriction;
  sub_1C32BC4(&this->fields._QuestRestriction_k__BackingField, questRestriction);
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
  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1C32BC4(&this->fields, value);
}


void GrandServantListQuestData__set_QuestRestriction(
        GrandServantListQuestData_o *this,
        QuestRestrictionInfo_o *value,
        const MethodInfo *method)
{
  this->fields._QuestRestriction_k__BackingField = value;
  sub_1C32BC4(&this->fields._QuestRestriction_k__BackingField, value);
}