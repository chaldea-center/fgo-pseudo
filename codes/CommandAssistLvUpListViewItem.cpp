void __fastcall CommandAssistLvUpListViewItem___ctor(
        CommandAssistLvUpListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        int32_t assistId,
        int32_t iconImageId,
        System_String_o *name,
        System_String_o *detail,
        System_String_o *beforeName,
        System_String_o *beforeDetail,
        bool isLast,
        const MethodInfo *method)
{
  CommandAssistLvUpListViewItem_o *v17; // x26

  v17 = this;
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  v17->fields._EventId_k__BackingField = eventId;
  v17->fields._AssistId_k__BackingField = assistId;
  v17->fields._IconImageId_k__BackingField = iconImageId;
  v17->fields._Name_k__BackingField = name;
  sub_1BC2FAC(&v17->fields._Name_k__BackingField);
  v17->fields._Detail_k__BackingField = detail;
  sub_1BC2FAC(&v17->fields._Detail_k__BackingField);
  v17->fields._BeforeName_k__BackingField = beforeName;
  sub_1BC2FAC(&v17->fields._BeforeName_k__BackingField);
  v17->fields._BeforeDetail_k__BackingField = beforeDetail;
  v17 = (CommandAssistLvUpListViewItem_o *)((char *)v17 + 152);
  sub_1BC2FAC(v17);
  LOBYTE(v17->monitor) = isLast;
}


int32_t __fastcall CommandAssistLvUpListViewItem__get_AssistId(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._AssistId_k__BackingField;
}


System_String_o *__fastcall CommandAssistLvUpListViewItem__get_BeforeDetail(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BeforeDetail_k__BackingField;
}


System_String_o *__fastcall CommandAssistLvUpListViewItem__get_BeforeName(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BeforeName_k__BackingField;
}


System_String_o *__fastcall CommandAssistLvUpListViewItem__get_Detail(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


int32_t __fastcall CommandAssistLvUpListViewItem__get_EventId(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


int32_t __fastcall CommandAssistLvUpListViewItem__get_IconImageId(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconImageId_k__BackingField;
}


bool __fastcall CommandAssistLvUpListViewItem__get_IsLast(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLast_k__BackingField;
}


System_String_o *__fastcall CommandAssistLvUpListViewItem__get_Name(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


void __fastcall CommandAssistLvUpListViewItem__set_AssistId(
        CommandAssistLvUpListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AssistId_k__BackingField = value;
}


void __fastcall CommandAssistLvUpListViewItem__set_BeforeDetail(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._BeforeDetail_k__BackingField = value;
  sub_1BC2FAC(&this->fields._BeforeDetail_k__BackingField);
}


void __fastcall CommandAssistLvUpListViewItem__set_BeforeName(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._BeforeName_k__BackingField = value;
  sub_1BC2FAC(&this->fields._BeforeName_k__BackingField);
}


void __fastcall CommandAssistLvUpListViewItem__set_Detail(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Detail_k__BackingField = value;
  sub_1BC2FAC(&this->fields._Detail_k__BackingField);
}


void __fastcall CommandAssistLvUpListViewItem__set_EventId(
        CommandAssistLvUpListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void __fastcall CommandAssistLvUpListViewItem__set_IconImageId(
        CommandAssistLvUpListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconImageId_k__BackingField = value;
}


void __fastcall CommandAssistLvUpListViewItem__set_IsLast(
        CommandAssistLvUpListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLast_k__BackingField = value;
}


void __fastcall CommandAssistLvUpListViewItem__set_Name(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_1BC2FAC(&this->fields._Name_k__BackingField);
}