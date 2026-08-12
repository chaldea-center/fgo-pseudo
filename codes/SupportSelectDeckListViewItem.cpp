void SupportSelectDeckListViewItem___ctor(
        SupportSelectDeckListViewItem_o *this,
        SupportServantData_o *data,
        int32_t index,
        bool isSameKind,
        bool isPossibleCopy,
        const MethodInfo *method)
{
  SupportSelectDeckListViewItem_o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v9 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v9->fields.supportData = data;
  v9 = (SupportSelectDeckListViewItem_o *)((char *)v9 + 120);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v9, (int32_t)data, v10, v11, v12, v13, v14, v15);
  LOBYTE(v9->monitor) = isSameKind;
  BYTE1(v9->monitor) = isPossibleCopy;
}


SupportServantData_o *SupportSelectDeckListViewItem__GetSupportData(
        SupportSelectDeckListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportData;
}


bool SupportSelectDeckListViewItem__get_IsPossibleSelect(
        SupportSelectDeckListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPossibleSelect;
}


bool SupportSelectDeckListViewItem__get_IsSameKind(SupportSelectDeckListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSameKind;
}