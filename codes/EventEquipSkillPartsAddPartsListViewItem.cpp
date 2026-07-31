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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  v11 = this;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  v11->fields._SkillId_k__BackingField = skillId;
  v11->fields._Name_k__BackingField = name;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v11->fields._Name_k__BackingField,
    (int32_t)name,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v11->fields._Detail_k__BackingField = detail;
  v11 = (EventEquipSkillPartsAddPartsListViewItem_o *)((char *)v11 + 136);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v11, (int32_t)detail, v18, v19, v20, v21, v22, v23);
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


void EventEquipSkillPartsAddPartsListViewItem__set_SkillId(
        EventEquipSkillPartsAddPartsListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillId_k__BackingField = value;
}