void SummonHistoryListViewItem___ctor(
        SummonHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        int32_t layout,
        const MethodInfo *method)
{
  SummonHistoryListViewItem_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v7 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v7->fields._Message_k__BackingField = message;
  v7 = (SummonHistoryListViewItem_o *)((char *)v7 + 120);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v7, (int32_t)message, v8, v9, v10, v11, v12, v13);
  LODWORD(v7->monitor) = layout;
}


void SummonHistoryListViewItem___ctor_42141884(
        SummonHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        System_String_o *title,
        int32_t objectId,
        int32_t layout,
        const MethodInfo *method)
{
  SummonHistoryListViewItem_o *v11; // x23
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
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v11->fields._Message_k__BackingField = message;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields._Message_k__BackingField,
    (int32_t)message,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v11->fields._Title_k__BackingField = title;
  v11 = (SummonHistoryListViewItem_o *)((char *)v11 + 136);
  v11[-1].fields._itemID_k__BackingField = layout;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v11, (int32_t)title, v18, v19, v20, v21, v22, v23);
  LODWORD(v11->monitor) = objectId;
}


int32_t SummonHistoryListViewItem__get_Layout(SummonHistoryListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Layout_k__BackingField;
}


System_String_o *SummonHistoryListViewItem__get_Message(SummonHistoryListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


System_String_o *SummonHistoryListViewItem__get_Title(SummonHistoryListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Title_k__BackingField;
}


int32_t SummonHistoryListViewItem__get_itemID(SummonHistoryListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._itemID_k__BackingField;
}


void SummonHistoryListViewItem__set_Layout(SummonHistoryListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Layout_k__BackingField = value;
}


void SummonHistoryListViewItem__set_Message(
        SummonHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Message_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SummonHistoryListViewItem__set_Title(
        SummonHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Title_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Title_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SummonHistoryListViewItem__set_itemID(SummonHistoryListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._itemID_k__BackingField = value;
}