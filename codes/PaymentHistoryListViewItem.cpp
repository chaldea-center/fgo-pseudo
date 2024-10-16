void __fastcall PaymentHistoryListViewItem___ctor(
        PaymentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *upsideMessage,
        System_String_o *bottomMessage,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  ListViewItem___ctor_41102532((ListViewItem_o *)this, index, 0LL);
  this->fields._UpsideMessage_k__BackingField = upsideMessage;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._UpsideMessage_k__BackingField,
    (int32_t)upsideMessage,
    v8,
    v9);
  this->fields._BottomMessage_k__BackingField = bottomMessage;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._BottomMessage_k__BackingField,
    (int32_t)bottomMessage,
    v10,
    v11);
}


System_String_o *__fastcall PaymentHistoryListViewItem__get_BottomMessage(
        PaymentHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BottomMessage_k__BackingField;
}


System_String_o *__fastcall PaymentHistoryListViewItem__get_UpsideMessage(
        PaymentHistoryListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UpsideMessage_k__BackingField;
}


void __fastcall PaymentHistoryListViewItem__set_BottomMessage(
        PaymentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BottomMessage_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._BottomMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentHistoryListViewItem__set_UpsideMessage(
        PaymentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UpsideMessage_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._UpsideMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}