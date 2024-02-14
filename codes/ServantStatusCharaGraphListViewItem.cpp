void __fastcall ServantStatusCharaGraphListViewItem___ctor(
        ServantStatusCharaGraphListViewItem_o *this,
        int32_t index,
        ServantStatusListViewItem_o *mainInfo,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  v7 = this;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  v7->fields.mainInfo = mainInfo;
  v7 = (ServantStatusCharaGraphListViewItem_o *)((char *)v7 + 112);
  sub_B0D840((BattleServantConfConponent_o *)v7, (System_Int32_array **)mainInfo, v8, v9, v10, v11, v12, v13);
  LODWORD(v7->monitor) = imageLimitCount;
}


void __fastcall ServantStatusCharaGraphListViewItem__Finalize(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


int32_t __fastcall ServantStatusCharaGraphListViewItem__get_ImageLimitCount(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.imageLimitCount;
}


ServantStatusListViewItem_o *__fastcall ServantStatusCharaGraphListViewItem__get_MainInfo(
        ServantStatusCharaGraphListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mainInfo;
}