void ServantStatusCharaGraphListViewItem___ctor(
        ServantStatusCharaGraphListViewItem_o *this,
        int32_t index,
        ServantStatusListViewItem_o *mainInfo,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v7 = this;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  v7->fields.mainInfo = mainInfo;
  v7 = (ServantStatusCharaGraphListViewItem_o *)((char *)v7 + 120);
  sub_1C2D434((CGThumbnailListItem_o *)v7, (int32_t)mainInfo, v8, v9);
  LODWORD(v7->monitor) = imageLimitCount;
}


void ServantStatusCharaGraphListViewItem__Finalize(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


int32_t ServantStatusCharaGraphListViewItem__get_ImageLimitCount(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.imageLimitCount;
}


ServantStatusListViewItem_o *ServantStatusCharaGraphListViewItem__get_MainInfo(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mainInfo;
}