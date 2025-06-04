void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem___ctor(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        int32_t skillId,
        System_String_o *name,
        System_String_o *detail,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillId_k__BackingField = skillId;
  this->fields._Name_k__BackingField = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v9, v10);
  this->fields._Detail_k__BackingField = detail;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Detail_k__BackingField, (int32_t)detail, v11, v12);
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
  const MethodInfo *v3; // x3

  this->fields._Detail_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Detail_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_Name(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem__set_SkillId(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillId_k__BackingField = value;
}