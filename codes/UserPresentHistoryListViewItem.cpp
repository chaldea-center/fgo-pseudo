void __fastcall UserPresentHistoryListViewItem___ctor(
        UserPresentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        const MethodInfo *method)
{
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields._Message_k__BackingField = message;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Message_k__BackingField,
    (int64_t)message,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Message_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Message_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}