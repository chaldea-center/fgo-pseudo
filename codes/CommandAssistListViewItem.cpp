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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  v15 = this;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  v15->fields._EventId_k__BackingField = eventId;
  v15->fields._AssistId_k__BackingField = assistId;
  v15->fields._IconImageId_k__BackingField = iconImageId;
  v15->fields._Name_k__BackingField = name;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v15->fields._Name_k__BackingField,
    (System_Int32_array **)name,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v15->fields._Detail_k__BackingField = detail;
  v15 = (CommandAssistListViewItem_o *)((char *)v15 + 136);
  sub_B0D840((BattleServantConfConponent_o *)v15, (System_Int32_array **)detail, v22, v23, v24, v25, v26, v27);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Detail_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Detail_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Name_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}