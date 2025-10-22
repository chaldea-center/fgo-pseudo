void ScriptTextListViewItem___ctor(
        ScriptTextListViewItem_o *this,
        int32_t index,
        System_String_o *lineText,
        const MethodInfo *method)
{
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C54389 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_16024/*"[{0:D4}] {1}"*/);
    byte_4C54389 = 1;
  }
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  v17 = index + 1;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v7, v8, v9, v10, v11, v12);
  v14 = System_String__Format_63677760((System_String_o *)StringLiteral_16024/*"[{0:D4}] {1}"*/, v13, (Il2CppObject *)lineText, 0);
  this->fields.lineText = v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.lineText, (int32_t)v14, v15, v16);
}


void ScriptTextListViewItem__Finalize(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptTextListViewItem__get_LineText(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.lineText;
}