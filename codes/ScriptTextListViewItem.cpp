void ScriptTextListViewItem___ctor(
        ScriptTextListViewItem_o *this,
        int32_t index,
        System_String_o *lineText,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  struct System_String_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5935C24 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16614/*"[{0:D4}] {1}"*/);
    byte_5935C24 = 1;
  }
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  v15 = index + 1;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v15);
  v8 = System_String__Format_75484576((System_String_o *)StringLiteral_16614/*"[{0:D4}] {1}"*/, v7, (Il2CppObject *)lineText, 0);
  this->fields.lineText = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.lineText, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}


void ScriptTextListViewItem__Finalize(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptTextListViewItem__get_LineText(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.lineText;
}