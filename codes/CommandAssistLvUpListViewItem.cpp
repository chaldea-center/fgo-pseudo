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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  v17 = this;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  v17->fields._EventId_k__BackingField = eventId;
  v17->fields._AssistId_k__BackingField = assistId;
  v17->fields._IconImageId_k__BackingField = iconImageId;
  v17->fields._Name_k__BackingField = name;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->fields._Name_k__BackingField,
    (System_Int32_array **)name,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v17->fields._Detail_k__BackingField = detail;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->fields._Detail_k__BackingField,
    (System_Int32_array **)detail,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v17->fields._BeforeName_k__BackingField = beforeName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->fields._BeforeName_k__BackingField,
    (System_Int32_array **)beforeName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v17->fields._BeforeDetail_k__BackingField = beforeDetail;
  v17 = (CommandAssistLvUpListViewItem_o *)((char *)v17 + 152);
  sub_B0D840((BattleServantConfConponent_o *)v17, (System_Int32_array **)beforeDetail, v36, v37, v38, v39, v40, v41);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BeforeDetail_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BeforeDetail_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommandAssistLvUpListViewItem__set_BeforeName(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BeforeName_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BeforeName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommandAssistLvUpListViewItem__set_Detail(
        CommandAssistLvUpListViewItem_o *this,
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