void ScriptTextListViewItem___ctor(
        ScriptTextListViewItem_o *this,
        int32_t index,
        System_String_o *lineText,
        const MethodInfo *method)
{
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  struct System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2492D & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_16011/*"[{0:D4}] {1}"*/);
    byte_4C2492D = 1;
  }
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  v14 = index + 1;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v7, v8, v9);
  v11 = System_String__Format_63499156((System_String_o *)StringLiteral_16011/*"[{0:D4}] {1}"*/, v10, (Il2CppObject *)lineText, 0);
  this->fields.lineText = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lineText, (int32_t)v11, v12, v13);
}


void ScriptTextListViewItem__Finalize(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *ScriptTextListViewItem__get_LineText(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.lineText;
}