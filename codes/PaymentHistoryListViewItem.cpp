void __fastcall PaymentHistoryListViewItem___ctor(
        PaymentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *upsideMessage,
        System_String_o *bottomMessage,
        const MethodInfo *method)
{
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  ListViewItem___ctor_41686696((ListViewItem_o *)this, index, 0LL);
  this->fields._UpsideMessage_k__BackingField = upsideMessage;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UpsideMessage_k__BackingField,
    (int64_t)upsideMessage,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields._BottomMessage_k__BackingField = bottomMessage;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._BottomMessage_k__BackingField,
    (int64_t)bottomMessage,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BottomMessage_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._BottomMessage_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentHistoryListViewItem__set_UpsideMessage(
        PaymentHistoryListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UpsideMessage_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UpsideMessage_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}