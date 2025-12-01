void ServantStatusCharaGraphListViewItem___ctor(
        ServantStatusCharaGraphListViewItem_o *this,
        int32_t index,
        ServantStatusListViewItem_o *mainInfo,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v7 = this;
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  v7->fields.mainInfo = mainInfo;
  v7 = (ServantStatusCharaGraphListViewItem_o *)((char *)v7 + 120);
  sub_1C71354((GrandQuestFolderBoardItem_o *)v7, (int32_t)mainInfo, v8, v9, v10, v11, v12, v13);
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