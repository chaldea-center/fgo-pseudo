void MasterMissionReceiveResultListViewItem___ctor(
        MasterMissionReceiveResultListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields._Message_k__BackingField = message;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)message,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


System_String_o *MasterMissionReceiveResultListViewItem__get_Message(
        MasterMissionReceiveResultListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


void MasterMissionReceiveResultListViewItem__set_Message(
        MasterMissionReceiveResultListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Message_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}