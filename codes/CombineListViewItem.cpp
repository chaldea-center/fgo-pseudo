void CombineListViewItem___ctor(
        CombineListViewItem_o *this,
        int32_t index,
        CombineListItemInfo_o *info,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = (MissionNaviTransitionBoardItem_o *)this;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v6->fields._IconName_k__BackingField = (struct System_String_o *)info;
  v6 = (MissionNaviTransitionBoardItem_o *)((char *)v6 + 120);
  HIDWORD(v6[-1].fields.sortValue1B) = index;
  sub_21FFBF4(v6, (int32_t)info, v7, v8, v9, v10, v11, v12);
}


void CombineListViewItem__Finalize(CombineListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *CombineListViewItem__get_EventData(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_21FFECC(this, method);
  return info->fields.eventData;
}


System_String_o *CombineListViewItem__get_SpriteName(CombineListViewItem_o *this, const MethodInfo *method)
{
  struct CombineListItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_21FFECC(this, method);
  return info->fields.spriteName;
}