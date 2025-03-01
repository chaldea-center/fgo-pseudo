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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFAEDD & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&index);
    sub_1C2E12C(&StringLiteral_16310/*"[{0:D4}] {1}"*/, v7);
    byte_4BFAEDD = 1;
  }
  ListViewItem___ctor_42081352((ListViewItem_o *)this, index, 0LL);
  v19 = index + 1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v8, v9, v10);
  v12 = System_String__Format_63249956((System_String_o *)StringLiteral_16310/*"[{0:D4}] {1}"*/, v11, (Il2CppObject *)lineText, 0LL);
  this->fields.lineText = v12;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.lineText, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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