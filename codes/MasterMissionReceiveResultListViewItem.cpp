void __fastcall MasterMissionReceiveResultListViewItem___ctor(
        MasterMissionReceiveResultListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  ListViewItem___ctor_40375592((ListViewItem_o *)this, index, 0LL);
  this->fields._Message_k__BackingField = message;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._Message_k__BackingField, (int32_t)message, v6, v7);
}


System_String_o *__fastcall MasterMissionReceiveResultListViewItem__get_Message(
        MasterMissionReceiveResultListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


void __fastcall MasterMissionReceiveResultListViewItem__set_Message(
        MasterMissionReceiveResultListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Message_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}