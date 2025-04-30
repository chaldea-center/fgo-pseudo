// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextListViewItem___ctor(
        ScriptTextListViewItem_o *this,
        int32_t index,
        System_String_o *lineText,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  struct System_String_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4BB96 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&StringLiteral_15790/*"[{0:D4}] {1}"*/, v7);
    byte_4A4BB96 = 1;
  }
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  v15 = index + 1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v8, v9, v10);
  v12 = System_String__Format_61686468((System_String_o *)StringLiteral_15790/*"[{0:D4}] {1}"*/, v11, (Il2CppObject *)lineText, 0LL);
  this->fields.lineText = v12;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.lineText, (int32_t)v12, v13, v14);
}


void __fastcall ScriptTextListViewItem__Finalize(ScriptTextListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall ScriptTextListViewItem__get_LineText(
        ScriptTextListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.lineText;
}