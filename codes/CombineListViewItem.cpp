void __fastcall CombineListViewItem___ctor(
        CombineListViewItem_o *this,
        int32_t index,
        CombineListItemInfo_o *info,
        const MethodInfo *method)
{
  CombineListViewItem_o *v6; // x21

  v6 = this;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v6->fields.info = info;
  v6 = (CombineListViewItem_o *)((char *)v6 + 112);
  v6[-1].fields.loopIndex = index;
  sub_B0D840(v6, info);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return info->fields.spriteName;
}


int32_t __fastcall CombineListViewItem__get_Type(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B0D97C(this);
  return info->fields.type;
}