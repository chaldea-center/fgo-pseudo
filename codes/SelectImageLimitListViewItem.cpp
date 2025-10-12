void SelectImageLimitListViewItem___ctor(
        SelectImageLimitListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.svtId = svtId;
  this->fields.limitCount = limitCount;
  this->fields.isSelected = limitCount == selectedImageId;
}


void SelectImageLimitListViewItem__Finalize(SelectImageLimitListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void SelectImageLimitListViewItem__ModifyItem(
        SelectImageLimitListViewItem_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  this->fields.isSelected = this->fields.limitCount == selectedImageId;
}


bool SelectImageLimitListViewItem__SetSortValue(
        SelectImageLimitListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t index; // w9
  bool result; // w0

  index = this->fields.index;
  result = 1;
  this->fields.sortValue0 = -index;
  return result;
}


bool SelectImageLimitListViewItem__get_IsSelected(SelectImageLimitListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelected;
}


int32_t SelectImageLimitListViewItem__get_LimitCount(SelectImageLimitListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.limitCount;
}


int32_t SelectImageLimitListViewItem__get_SvtId(SelectImageLimitListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}