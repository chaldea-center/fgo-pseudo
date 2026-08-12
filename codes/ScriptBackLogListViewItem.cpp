void ScriptBackLogListViewItem___ctor(
        ScriptBackLogListViewItem_o *this,
        int32_t index,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.label = label;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.label, (int32_t)label, v6, v7, v8, v9, v10, v11);
}


void ScriptBackLogListViewItem__Finalize(ScriptBackLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


ScriptMessageLabel_o *ScriptBackLogListViewItem__get_Label(ScriptBackLogListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.label;
}