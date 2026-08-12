void CommandAssistLvUpListViewItem___ctor(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  v17 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v17->fields._EventId_k__BackingField = eventId;
  v17->fields._AssistId_k__BackingField = assistId;
  v17->fields._IconImageId_k__BackingField = iconImageId;
  v17->fields._Name_k__BackingField = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->fields._Name_k__BackingField,
    (int32_t)name,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v17->fields._Detail_k__BackingField = detail;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->fields._Detail_k__BackingField,
    (int32_t)detail,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v17->fields._BeforeName_k__BackingField = beforeName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->fields._BeforeName_k__BackingField,
    (int32_t)beforeName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v17->fields._BeforeDetail_k__BackingField = beforeDetail;
  v17 = (CommandAssistLvUpListViewItem_o *)((char *)v17 + 160);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v17, (int32_t)beforeDetail, v36, v37, v38, v39, v40, v41);
  LOBYTE(v17->monitor) = isLast;
}


int32_t CommandAssistLvUpListViewItem__get_AssistId(CommandAssistLvUpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._AssistId_k__BackingField;
}


System_String_o *CommandAssistLvUpListViewItem__get_BeforeDetail(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BeforeDetail_k__BackingField;
}


System_String_o *CommandAssistLvUpListViewItem__get_BeforeName(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BeforeName_k__BackingField;
}


System_String_o *CommandAssistLvUpListViewItem__get_Detail(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Detail_k__BackingField;
}


int32_t CommandAssistLvUpListViewItem__get_EventId(CommandAssistLvUpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


int32_t CommandAssistLvUpListViewItem__get_IconImageId(CommandAssistLvUpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IconImageId_k__BackingField;
}


bool CommandAssistLvUpListViewItem__get_IsLast(CommandAssistLvUpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLast_k__BackingField;
}


System_String_o *CommandAssistLvUpListViewItem__get_Name(
        CommandAssistLvUpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


void CommandAssistLvUpListViewItem__set_AssistId(
        CommandAssistLvUpListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AssistId_k__BackingField = value;
}


void CommandAssistLvUpListViewItem__set_BeforeDetail(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BeforeDetail_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BeforeDetail_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandAssistLvUpListViewItem__set_BeforeName(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BeforeName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BeforeName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandAssistLvUpListViewItem__set_Detail(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Detail_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Detail_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandAssistLvUpListViewItem__set_EventId(
        CommandAssistLvUpListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void CommandAssistLvUpListViewItem__set_IconImageId(
        CommandAssistLvUpListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconImageId_k__BackingField = value;
}


void CommandAssistLvUpListViewItem__set_IsLast(
        CommandAssistLvUpListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLast_k__BackingField = value;
}


void CommandAssistLvUpListViewItem__set_Name(
        CommandAssistLvUpListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Name_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}