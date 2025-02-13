void __fastcall CombineListViewItem___ctor(
        CombineListViewItem_o *this,
        int32_t index,
        CombineListItemInfo_o *info,
        const MethodInfo *method)
{
  CombineListViewItem_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = this;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v6->fields.info = info;
  v6 = (CombineListViewItem_o *)((char *)v6 + 112);
  v6[-1].fields.loopIndex = index;
  sub_1C21DDC((PartyOrganizationUtility_o *)v6, (int64_t)info, v7, v8, v9, v10, v11, v12);
}


void __fastcall CombineListViewItem__Finalize(CombineListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall CombineListViewItem__get_EventData(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C22094(this, method);
  return info->fields.eventData;
}


CombineListItemInfo_o *__fastcall CombineListViewItem__get_Info(CombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *__fastcall CombineListViewItem__get_SpriteName(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C22094(this, method);
  return info->fields.spriteName;
}


int32_t __fastcall CombineListViewItem__get_Type(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C22094(this, method);
  return info->fields.type;
}