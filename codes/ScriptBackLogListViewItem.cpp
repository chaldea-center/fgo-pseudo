void ScriptBackLogListViewItem___ctor(
        ScriptBackLogListViewItem_o *this,
        int32_t index,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields.label = label;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.label, (int32_t)label, v6, v7, v8, v9, v10, v11);
}


void ScriptBackLogListViewItem__Finalize(ScriptBackLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


ScriptMessageLabel_o *ScriptBackLogListViewItem__get_Label(ScriptBackLogListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.label;
}