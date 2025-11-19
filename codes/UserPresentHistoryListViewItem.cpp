void UserPresentHistoryListViewItem___ctor(
        UserPresentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields._Message_k__BackingField = message;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Message_k__BackingField, (int32_t)message, v6, v7);
}


System_String_o *UserPresentHistoryListViewItem__get_Message(
        UserPresentHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


void UserPresentHistoryListViewItem__set_Message(
        UserPresentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Message_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Message_k__BackingField, (int32_t)value, (int32_t)method, v3);
}