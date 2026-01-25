void ScriptTextListViewItem___ctor(
        ScriptTextListViewItem_o *this,
        int32_t index,
        System_String_o *lineText,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  struct System_String_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEBCA6 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16070/*"[{0:D4}] {1}"*/);
    byte_4CEBCA6 = 1;
  }
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  v15 = index + 1;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v8 = System_String__Format_64218220((System_String_o *)StringLiteral_16070/*"[{0:D4}] {1}"*/, v7, (Il2CppObject *)lineText, 0);
  this->fields.lineText = v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.lineText, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}


void ScriptTextListViewItem__Finalize(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptTextListViewItem__get_LineText(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.lineText;
}