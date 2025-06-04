void __fastcall EventEquipSkillPartsQuestExplanationDialogBoardItem___ctor(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
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


System_String_o *__fastcall EventEquipSkillPartsQuestExplanationDialogBoardItem__get_Detail(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


System_String_o *__fastcall EventEquipSkillPartsQuestExplanationDialogBoardItem__get_Name(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall EventEquipSkillPartsQuestExplanationDialogBoardItem__get_SkillId(
        EventEquipSkillPartsQuestExplanationDialogBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}