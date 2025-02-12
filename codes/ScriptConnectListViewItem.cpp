void __fastcall ScriptConnectListViewItem___ctor(
        ScriptConnectListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.path = path;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.path, (int64_t)path, v6, v7, v8, v9, v10, v11);
}


void __fastcall ScriptConnectListViewItem__Finalize(ScriptConnectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall ScriptConnectListViewItem__get_Path(
        ScriptConnectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *__fastcall ScriptConnectListViewItem__get_TitleText(
        ScriptConnectListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *path; // x0

  path = this->fields.path;
  if ( !path )
    goto LABEL_6;
  path = (System_String_o *)System_String__LastIndexOf(path, 0x2Fu, 0LL);
  if ( ((unsigned int)path & 0x80000000) == 0 )
  {
    if ( this->fields.path )
      return System_String__Substring(this->fields.path, (int)path + 1, 0LL);
LABEL_6:
    sub_1C1AE30(path, method);
  }
  return this->fields.path;
}