void EventEquipSkillPartsAddPartsListViewItem___ctor(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        int32_t index,
        int32_t skillId,
        System_String_o *name,
        System_String_o *detail,
        bool isLast,
        const MethodInfo *method)
{
  EventEquipSkillPartsAddPartsListViewItem_o *v11; // x23

  v11 = this;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  v11->fields._SkillId_k__BackingField = skillId;
  v11->fields._Name_k__BackingField = name;
  sub_1C32BC4(&v11->fields._Name_k__BackingField, name);
  v11->fields._Detail_k__BackingField = detail;
  v11 = (EventEquipSkillPartsAddPartsListViewItem_o *)((char *)v11 + 136);
  sub_1C32BC4(v11, detail);
  LOBYTE(v11->monitor) = isLast;
}


System_String_o *EventEquipSkillPartsAddPartsListViewItem__get_Detail(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


bool EventEquipSkillPartsAddPartsListViewItem__get_IsLast(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLast_k__BackingField;
}


System_String_o *EventEquipSkillPartsAddPartsListViewItem__get_Name(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t EventEquipSkillPartsAddPartsListViewItem__get_SkillId(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillId_k__BackingField;
}


void EventEquipSkillPartsAddPartsListViewItem__set_Detail(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Detail_k__BackingField = value;
  sub_1C32BC4(&this->fields._Detail_k__BackingField, value);
}


void EventEquipSkillPartsAddPartsListViewItem__set_IsLast(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLast_k__BackingField = value;
}


void EventEquipSkillPartsAddPartsListViewItem__set_Name(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_1C32BC4(&this->fields._Name_k__BackingField, value);
}


void EventEquipSkillPartsAddPartsListViewItem__set_SkillId(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillId_k__BackingField = value;
}