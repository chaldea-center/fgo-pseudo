void EventEquipSkillPartsRenoCompletionBoardItem___ctor(
        EventEquipSkillPartsRenoCompletionBoardItem_o *this,
        int32_t skillId,
        System_String_o *name,
        System_String_o *detail,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SkillId_k__BackingField = skillId;
  this->fields._Name_k__BackingField = name;
  sub_1C2D434(&this->fields._Name_k__BackingField);
  this->fields._Detail_k__BackingField = detail;
  sub_1C2D434(&this->fields._Detail_k__BackingField);
}


System_String_o *EventEquipSkillPartsRenoCompletionBoardItem__get_Detail(
        EventEquipSkillPartsRenoCompletionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


System_String_o *EventEquipSkillPartsRenoCompletionBoardItem__get_Name(
        EventEquipSkillPartsRenoCompletionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t EventEquipSkillPartsRenoCompletionBoardItem__get_SkillId(
        EventEquipSkillPartsRenoCompletionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}


void EventEquipSkillPartsRenoCompletionBoardItem__set_Detail(
        EventEquipSkillPartsRenoCompletionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Detail_k__BackingField = value;
  sub_1C2D434(&this->fields._Detail_k__BackingField);
}


void EventEquipSkillPartsRenoCompletionBoardItem__set_Name(
        EventEquipSkillPartsRenoCompletionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_1C2D434(&this->fields._Name_k__BackingField);
}


void EventEquipSkillPartsRenoCompletionBoardItem__set_SkillId(
        EventEquipSkillPartsRenoCompletionBoardItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillId_k__BackingField = value;
}