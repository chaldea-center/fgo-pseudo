void PaymentHistoryListViewItem___ctor(
        PaymentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *upsideMessage,
        System_String_o *bottomMessage,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields._UpsideMessage_k__BackingField = upsideMessage;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UpsideMessage_k__BackingField,
    (int32_t)upsideMessage,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields._BottomMessage_k__BackingField = bottomMessage;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BottomMessage_k__BackingField,
    (int32_t)bottomMessage,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BottomMessage_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BottomMessage_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentHistoryListViewItem__set_UpsideMessage(
        PaymentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UpsideMessage_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UpsideMessage_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}