void SummonHistoryListViewItem___ctor(
        SummonHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        int32_t layout,
        const MethodInfo *method)
{
  SummonHistoryListViewItem_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v7 = this;
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  v7->fields._Message_k__BackingField = message;
  v7 = (SummonHistoryListViewItem_o *)((char *)v7 + 120);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v7, (int32_t)message, v8, v9, v10, v11, v12, v13);
  LODWORD(v7->monitor) = layout;
}


void SummonHistoryListViewItem___ctor_35857696(
        SummonHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        System_String_o *title,
        int32_t objectId,
        int32_t layout,
        const MethodInfo *method)
{
  SummonHistoryListViewItem_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  v11 = this;
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  v11->fields._Message_k__BackingField = message;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v11->fields._Message_k__BackingField,
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v11, (int32_t)title, v18, v19, v20, v21, v22, v23);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Message_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Title_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Title_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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