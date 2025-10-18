void SupportSelectDeckListViewItem___ctor(
        SupportSelectDeckListViewItem_o *this,
        SupportServantData_o *data,
        int32_t index,
        bool isSameKind,
        bool isPossibleCopy,
        const MethodInfo *method)
{
  SupportSelectDeckListViewItem_o *v7; // x20
  bool v8; // w21
  bool v9; // w22
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v7 = this;
  v8 = isSameKind;
  v9 = isPossibleCopy;
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  v7->fields.supportData = data;
  v7 = (SupportSelectDeckListViewItem_o *)((char *)v7 + 120);
  sub_1C36FFC((CGThumbnailListItem_o *)v7, (int32_t)data, v10, v11);
  LOBYTE(v7->monitor) = v8;
  BYTE1(v7->monitor) = v9;
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