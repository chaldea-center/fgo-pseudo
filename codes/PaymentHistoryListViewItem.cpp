void PaymentHistoryListViewItem___ctor(
        PaymentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *upsideMessage,
        System_String_o *bottomMessage,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields._UpsideMessage_k__BackingField = upsideMessage;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._UpsideMessage_k__BackingField, (int32_t)upsideMessage, v8, v9);
  this->fields._BottomMessage_k__BackingField = bottomMessage;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BottomMessage_k__BackingField, (int32_t)bottomMessage, v10, v11);
}


System_String_o *PaymentHistoryListViewItem__get_BottomMessage(
        PaymentHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BottomMessage_k__BackingField;
}


System_String_o *PaymentHistoryListViewItem__get_UpsideMessage(
        PaymentHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UpsideMessage_k__BackingField;
}


void PaymentHistoryListViewItem__set_BottomMessage(
        PaymentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BottomMessage_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._BottomMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PaymentHistoryListViewItem__set_UpsideMessage(
        PaymentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UpsideMessage_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._UpsideMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}