void __fastcall ServantCoinConfirmListViewManager___ctor(
        ServantCoinConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmListViewManager__CreateList(
        ServantCoinConfirmListViewManager_o *this,
        GetSvtCoin_array *svtCoins,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  __int64 v6; // x1
  __int64 v7; // x24
  unsigned int v8; // w21
  GetSvtCoin_o *v9; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  ListViewItem_c *v11; // x27
  ListViewItem_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_438C70F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&ServantCoinConfirmListViewItem_TypeInfo);
    byte_438C70F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_13;
  v7 = *(_QWORD *)&svtCoins->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = svtCoins->m_Items[v8];
      if ( !v9 )
        break;
      itemList = this->fields.itemList;
      v11 = *(ListViewItem_c **)&v9->fields.itemId;
      v12 = (ListViewItem_o *)sub_B77694(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_24167012(v12, v8, 0LL);
      v12[1].klass = v11;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v8 >= (int)v7 )
        goto LABEL_11;
      if ( v8 >= svtCoins->max_length )
      {
        v13 = sub_B776C8(scrollView);
        sub_B77668(v13, 0LL);
      }
    }
LABEL_13:
    sub_B7769C(scrollView, v6);
  }
LABEL_11:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UIScrollView__ResetPosition(scrollView, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCoinConfirmListViewManager__SetObjectItem(
        ServantCoinConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_438C710 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_B775C4(&ServantCoinConfirmListViewObject_TypeInfo);
    byte_438C710 = 1;
  }
  if ( !obj
    || (v5 = *(&ServantCoinConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}