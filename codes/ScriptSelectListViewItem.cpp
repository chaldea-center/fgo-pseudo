void ScriptSelectListViewItem___ctor(
        ScriptSelectListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        UnityEngine_Font_o *fontType,
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

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.message = message;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.message, (int32_t)message, v8, v9, v10, v11, v12, v13);
  this->fields.fontType = fontType;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fontType,
    (int32_t)fontType,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void ScriptSelectListViewItem__Finalize(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


UnityEngine_Font_o *ScriptSelectListViewItem__get_FontType(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.fontType;
}


System_String_o *ScriptSelectListViewItem__get_MessageText(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.message;
}