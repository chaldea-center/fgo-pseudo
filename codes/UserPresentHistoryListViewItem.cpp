void __fastcall UserPresentHistoryListViewItem___ctor(
        UserPresentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields._Message_k__BackingField = message;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Message_k__BackingField, (int32_t)message, v6, v7);
}


System_String_o *__fastcall UserPresentHistoryListViewItem__get_Message(
        UserPresentHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


void __fastcall UserPresentHistoryListViewItem__set_Message(
        UserPresentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Message_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Message_k__BackingField, (int32_t)value, (int32_t)method, v3);
}