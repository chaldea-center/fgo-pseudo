void MasterMissionReceiveConfirmListViewItem___ctor(
        MasterMissionReceiveConfirmListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields._Message_k__BackingField = message;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)message,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


System_String_o *MasterMissionReceiveConfirmListViewItem__get_Message(
        MasterMissionReceiveConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


void MasterMissionReceiveConfirmListViewItem__set_Message(
        MasterMissionReceiveConfirmListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Message_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}