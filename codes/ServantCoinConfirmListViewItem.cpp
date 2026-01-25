void ServantCoinConfirmListViewItem___ctor(
        ServantCoinConfirmListViewItem_o *this,
        int32_t index,
        int32_t itemId,
        int32_t num,
        const MethodInfo *method)
{
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields._ItemId_k__BackingField = itemId;
  this->fields._Num_k__BackingField = num;
}


int32_t ServantCoinConfirmListViewItem__get_ItemId(ServantCoinConfirmListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ItemId_k__BackingField;
}


int32_t ServantCoinConfirmListViewItem__get_Num(ServantCoinConfirmListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


void ServantCoinConfirmListViewItem__set_ItemId(
        ServantCoinConfirmListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemId_k__BackingField = value;
}


void ServantCoinConfirmListViewItem__set_Num(
        ServantCoinConfirmListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}