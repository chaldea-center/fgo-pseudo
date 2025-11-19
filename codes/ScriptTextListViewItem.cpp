void ScriptTextListViewItem___ctor(
        ScriptTextListViewItem_o *this,
        int32_t index,
        System_String_o *lineText,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  struct System_String_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB38DB & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_16007/*"[{0:D4}] {1}"*/);
    byte_4CB38DB = 1;
  }
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  v11 = index + 1;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v8 = System_String__Format_64008100((System_String_o *)StringLiteral_16007/*"[{0:D4}] {1}"*/, v7, (Il2CppObject *)lineText, 0);
  this->fields.lineText = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.lineText, (int32_t)v8, v9, v10);
}


void ScriptTextListViewItem__Finalize(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptTextListViewItem__get_LineText(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.lineText;
}