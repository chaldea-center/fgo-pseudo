void AssistEffectListViewItem___ctor(
        AssistEffectListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        int32_t assistId,
        int32_t iconImageId,
        System_String_o *name,
        System_String_o *detail,
        bool isLast,
        const MethodInfo *method)
{
  AssistEffectListViewItem_o *v15; // x25

  v15 = this;
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  v15->fields._EventId_k__BackingField = eventId;
  v15->fields._AssistId_k__BackingField = assistId;
  v15->fields._IconImageId_k__BackingField = iconImageId;
  v15->fields._Name_k__BackingField = name;
  sub_1C36FFC(&v15->fields._Name_k__BackingField, name);
  v15->fields._Detail_k__BackingField = detail;
  v15 = (AssistEffectListViewItem_o *)((char *)v15 + 144);
  sub_1C36FFC(v15, detail);
  LOBYTE(v15->monitor) = isLast;
}


int32_t AssistEffectListViewItem__get_AssistId(AssistEffectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._AssistId_k__BackingField;
}


System_String_o *AssistEffectListViewItem__get_Detail(AssistEffectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


int32_t AssistEffectListViewItem__get_EventId(AssistEffectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


int32_t AssistEffectListViewItem__get_IconImageId(AssistEffectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IconImageId_k__BackingField;
}


bool AssistEffectListViewItem__get_IsLast(AssistEffectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLast_k__BackingField;
}


System_String_o *AssistEffectListViewItem__get_Name(AssistEffectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


void AssistEffectListViewItem__set_AssistId(AssistEffectListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AssistId_k__BackingField = value;
}


void AssistEffectListViewItem__set_Detail(
        AssistEffectListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Detail_k__BackingField = value;
  sub_1C36FFC(&this->fields._Detail_k__BackingField, value);
}


void AssistEffectListViewItem__set_EventId(AssistEffectListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void AssistEffectListViewItem__set_IconImageId(
        AssistEffectListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconImageId_k__BackingField = value;
}


void AssistEffectListViewItem__set_IsLast(AssistEffectListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsLast_k__BackingField = value;
}


void AssistEffectListViewItem__set_Name(
        AssistEffectListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_1C36FFC(&this->fields._Name_k__BackingField, value);
}