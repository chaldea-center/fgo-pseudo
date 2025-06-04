void __fastcall EventEquipSkillPartsAddPartsListViewItem___ctor(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        int32_t index,
        int32_t skillId,
        System_String_o *name,
        System_String_o *detail,
        bool isLast,
        const MethodInfo *method)
{
  EventEquipSkillPartsAddPartsListViewItem_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v11 = this;
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  v11->fields._SkillId_k__BackingField = skillId;
  v11->fields._Name_k__BackingField = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v11->fields._Name_k__BackingField, (int32_t)name, v12, v13);
  v11->fields._Detail_k__BackingField = detail;
  v11 = (EventEquipSkillPartsAddPartsListViewItem_o *)((char *)v11 + 128);
  sub_1BC2FAC((CGThumbnailListItem_o *)v11, (int32_t)detail, v14, v15);
  LOBYTE(v11->monitor) = isLast;
}


System_String_o *__fastcall EventEquipSkillPartsAddPartsListViewItem__get_Detail(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


bool __fastcall EventEquipSkillPartsAddPartsListViewItem__get_IsLast(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLast_k__BackingField;
}


System_String_o *__fastcall EventEquipSkillPartsAddPartsListViewItem__get_Name(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall EventEquipSkillPartsAddPartsListViewItem__get_SkillId(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}


void __fastcall EventEquipSkillPartsAddPartsListViewItem__set_Detail(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Detail_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Detail_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventEquipSkillPartsAddPartsListViewItem__set_IsLast(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLast_k__BackingField = value;
}


void __fastcall EventEquipSkillPartsAddPartsListViewItem__set_Name(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventEquipSkillPartsAddPartsListViewItem__set_SkillId(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillId_k__BackingField = value;
}