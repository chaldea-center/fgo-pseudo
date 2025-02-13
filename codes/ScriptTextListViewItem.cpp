void __fastcall ScriptTextListViewItem___ctor(
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD9CEE & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_16297/*"[{0:D4}] {1}"*/);
    byte_4BD9CEE = 1;
  }
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  v18 = index + 1;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v7, v8, v9);
  v11 = System_String__Format_63129848((System_String_o *)StringLiteral_16297/*"[{0:D4}] {1}"*/, v10, (Il2CppObject *)lineText, 0LL);
  this->fields.lineText = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.lineText, (int64_t)v11, v12, v13, v14, v15, v16, v17);
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