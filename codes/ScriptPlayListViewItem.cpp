void ScriptPlayListViewItem___ctor(
        ScriptPlayListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.path = path;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.path, (int32_t)path, v6, v7, v8, v9, v10, v11);
}


void ScriptPlayListViewItem__Finalize(ScriptPlayListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptPlayListViewItem__get_Path(ScriptPlayListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *ScriptPlayListViewItem__get_TitleText(ScriptPlayListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  int32_t IndexOf; // w8

  result = this->fields.path;
  if ( !result )
    goto LABEL_6;
  IndexOf = System_String__LastIndexOf(result, 0x2Fu, 0);
  result = this->fields.path;
  if ( (IndexOf & 0x80000000) == 0 )
  {
    if ( result )
      return System_String__Substring(result, IndexOf + 1, 0);
LABEL_6:
    sub_2213CDC(result, method);
  }
  return result;
}