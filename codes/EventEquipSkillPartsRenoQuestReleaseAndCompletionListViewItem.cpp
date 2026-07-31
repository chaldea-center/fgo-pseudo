void EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem___ctor(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        int32_t skillId,
        System_String_o *name,
        System_String_o *detail,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SkillId_k__BackingField = skillId;
  this->fields._Name_k__BackingField = name;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)name,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._Detail_k__BackingField = detail;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Detail_k__BackingField,
    (int32_t)detail,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


System_String_o *EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__get_Detail(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


System_String_o *EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__get_Name(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__get_SkillId(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_Detail(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Detail_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Detail_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_Name(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Name_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_SkillId(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillId_k__BackingField = value;
}