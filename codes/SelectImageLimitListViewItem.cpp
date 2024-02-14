void __fastcall SelectImageLimitListViewItem___ctor(
        SelectImageLimitListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.svtId = svtId;
  this->fields.limitCount = limitCount;
  this->fields.isSelected = limitCount == selectedImageId;
}


void __fastcall SelectImageLimitListViewItem__Finalize(SelectImageLimitListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


void __fastcall SelectImageLimitListViewItem__ModifyItem(
        SelectImageLimitListViewItem_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  this->fields.isSelected = this->fields.limitCount == selectedImageId;
}


bool __fastcall SelectImageLimitListViewItem__SetSortValue(
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


bool __fastcall SelectImageLimitListViewItem__get_IsSelected(
        SelectImageLimitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelected;
}


int32_t __fastcall SelectImageLimitListViewItem__get_LimitCount(
        SelectImageLimitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.limitCount;
}


int32_t __fastcall SelectImageLimitListViewItem__get_SvtId(
        SelectImageLimitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtId;
}