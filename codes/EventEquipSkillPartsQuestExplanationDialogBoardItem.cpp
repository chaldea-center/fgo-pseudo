void EventEquipSkillPartsQuestExplanationDialogBoardItem___ctor(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
        int32_t skillId,
        System_String_o *name,
        System_String_o *detail,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SkillId_k__BackingField = skillId;
  this->fields._Name_k__BackingField = name;
  sub_1C7BA8C(&this->fields._Name_k__BackingField, name);
  this->fields._Detail_k__BackingField = detail;
  sub_1C7BA8C(&this->fields._Detail_k__BackingField, detail);
}


System_String_o *EventEquipSkillPartsQuestExplanationDialogBoardItem__get_Detail(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


System_String_o *EventEquipSkillPartsQuestExplanationDialogBoardItem__get_Name(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t EventEquipSkillPartsQuestExplanationDialogBoardItem__get_SkillId(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}