// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextListViewItem___ctor(
        ScriptTextListViewItem_o *this,
        int32_t index,
        System_String_o *lineText,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  struct System_String_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B139F4 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&index, lineText);
    sub_1BCA7E0(&StringLiteral_16189/*"[{0:D4}] {1}"*/, v7, v8);
    byte_4B139F4 = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  v17 = index + 1;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v10 = System_String__Format_62415592((System_String_o *)StringLiteral_16189/*"[{0:D4}] {1}"*/, v9, (Il2CppObject *)lineText, 0LL);
  this->fields.lineText = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lineText, (int64_t)v10, v11, v12, v13, v14, v15, v16);
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