void __fastcall ScriptSelectListViewItem___ctor(
        ScriptSelectListViewItem_o *this,
        int32_t index,
        System_String_o *message,
        UnityEngine_Font_o *fontType,
        const MethodInfo *method)
{
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  this->fields.message = message;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.message, (int64_t)message, v8, v9, v10, v11, v12, v13);
  this->fields.fontType = fontType;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)fontType, v14, v15, v16, v17, v18, v19);
}


void __fastcall ScriptSelectListViewItem__Finalize(ScriptSelectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall ScriptSelectListViewItem__ToString(
        ScriptSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB63F9 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21749/*"member"*/, method);
    byte_4BB63F9 = 1;
  }
  return System_String__Concat_62967944((System_String_o *)StringLiteral_21749/*"member"*/, this->fields.message, 0LL);
}


UnityEngine_Font_o *__fastcall ScriptSelectListViewItem__get_FontType(
        ScriptSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fontType;
}


System_String_o *__fastcall ScriptSelectListViewItem__get_MessageText(
        ScriptSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}