void __fastcall ServantStatusCharaGraphListViewItem___ctor(
        ServantStatusCharaGraphListViewItem_o *this,
        int32_t index,
        ServantStatusListViewItem_o *mainInfo,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v7 = this;
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  v7->fields.mainInfo = mainInfo;
  v7 = (ServantStatusCharaGraphListViewItem_o *)((char *)v7 + 112);
  sub_1C3B708((PartyOrganizationUtility_o *)v7, (int64_t)mainInfo, v8, v9, v10, v11, v12, v13);
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