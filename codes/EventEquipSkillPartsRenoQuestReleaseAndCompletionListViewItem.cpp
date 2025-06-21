void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem___ctor(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        int32_t skillId,
        System_String_o *name,
        System_String_o *detail,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillId_k__BackingField = skillId;
  this->fields._Name_k__BackingField = name;
  sub_1BCAF9C(&this->fields._Name_k__BackingField);
  this->fields._Detail_k__BackingField = detail;
  sub_1BCAF9C(&this->fields._Detail_k__BackingField);
}


System_String_o *__fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__get_Detail(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


System_String_o *__fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__get_Name(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__get_SkillId(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_Detail(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Detail_k__BackingField = value;
  sub_1BCAF9C(&this->fields._Detail_k__BackingField);
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_Name(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_1BCAF9C(&this->fields._Name_k__BackingField);
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_SkillId(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillId_k__BackingField = value;
}