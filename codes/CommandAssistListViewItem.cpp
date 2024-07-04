void __fastcall CommandAssistListViewItem___ctor(
        CommandAssistListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        int32_t assistId,
        int32_t iconImageId,
        System_String_o *name,
        System_String_o *detail,
        bool isLast,
        const MethodInfo *method)
{
  CommandAssistListViewItem_o *v15; // x25

  v15 = this;
  ListViewItem___ctor_39415512((ListViewItem_o *)this, index, 0LL);
  v15->fields._EventId_k__BackingField = eventId;
  v15->fields._AssistId_k__BackingField = assistId;
  v15->fields._IconImageId_k__BackingField = iconImageId;
  v15->fields._Name_k__BackingField = name;
  sub_1B00C70(&v15->fields._Name_k__BackingField);
  v15->fields._Detail_k__BackingField = detail;
  v15 = (CommandAssistListViewItem_o *)((char *)v15 + 136);
  sub_1B00C70(v15);
  LOBYTE(v15->monitor) = isLast;
}


int32_t __fastcall CommandAssistListViewItem__get_AssistId(CommandAssistListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._AssistId_k__BackingField;
}


System_String_o *__fastcall CommandAssistListViewItem__get_Detail(
        CommandAssistListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


int32_t __fastcall CommandAssistListViewItem__get_EventId(CommandAssistListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


int32_t __fastcall CommandAssistListViewItem__get_IconImageId(
        CommandAssistListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconImageId_k__BackingField;
}


bool __fastcall CommandAssistListViewItem__get_IsLast(CommandAssistListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLast_k__BackingField;
}


System_String_o *__fastcall CommandAssistListViewItem__get_Name(
        CommandAssistListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


void __fastcall CommandAssistListViewItem__set_AssistId(
        CommandAssistListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AssistId_k__BackingField = value;
}


void __fastcall CommandAssistListViewItem__set_Detail(
        CommandAssistListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Detail_k__BackingField = value;
  sub_1B00C70(&this->fields._Detail_k__BackingField);
}


void __fastcall CommandAssistListViewItem__set_EventId(
        CommandAssistListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void __fastcall CommandAssistListViewItem__set_IconImageId(
        CommandAssistListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconImageId_k__BackingField = value;
}


void __fastcall CommandAssistListViewItem__set_IsLast(
        CommandAssistListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLast_k__BackingField = value;
}


void __fastcall CommandAssistListViewItem__set_Name(
        CommandAssistListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_1B00C70(&this->fields._Name_k__BackingField);
}