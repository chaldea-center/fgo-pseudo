void ScriptSelectListViewItem___ctor(
        ScriptSelectListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        UnityEngine_Font_o *fontType,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.message = message;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.message, (int32_t)message, v8, v9, v10, v11, v12, v13);
  this->fields.fontType = fontType;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fontType, (int32_t)fontType, v14, v15, v16, v17, v18, v19);
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