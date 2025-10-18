void SummonHistoryListViewItem___ctor(
        SummonHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        int32_t layout,
        const MethodInfo *method)
{
  SummonHistoryListViewItem_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v7 = this;
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  v7->fields._Message_k__BackingField = message;
  v7 = (SummonHistoryListViewItem_o *)((char *)v7 + 120);
  sub_1C36FFC((CGThumbnailListItem_o *)v7, (int32_t)message, v8, v9);
  LODWORD(v7->monitor) = layout;
}


void SummonHistoryListViewItem___ctor_35468612(
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v11 = this;
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  v11->fields._Message_k__BackingField = message;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->fields._Message_k__BackingField, (int32_t)message, v12, v13);
  v11->fields._Title_k__BackingField = title;
  v11 = (SummonHistoryListViewItem_o *)((char *)v11 + 136);
  v11[-1].fields._itemID_k__BackingField = layout;
  sub_1C36FFC((CGThumbnailListItem_o *)v11, (int32_t)title, v14, v15);
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
  const MethodInfo *v3; // x3

  this->fields._Message_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Message_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SummonHistoryListViewItem__set_Title(
        SummonHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Title_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Title_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SummonHistoryListViewItem__set_itemID(SummonHistoryListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._itemID_k__BackingField = value;
}