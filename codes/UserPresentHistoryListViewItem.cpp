void __fastcall UserPresentHistoryListViewItem___ctor(
        UserPresentHistoryListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields._Message_k__BackingField = message;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Message_k__BackingField,
    (System_Int32_array **)message,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Message_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Message_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}