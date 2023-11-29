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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x24
  unsigned int v11; // w21
  GetSvtCoin_o *v12; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  ListViewItem_c *v14; // x27
  ListViewItem_o *v15; // x23
  __int64 v16; // x0
  UIScrollView_o *scrollView; // x0

  if ( (byte_40FCE25 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, svtCoins);
    sub_B16FFC(&ServantCoinConfirmListViewItem_TypeInfo, v5);
    byte_40FCE25 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_13;
  v10 = *(_QWORD *)&svtCoins->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = svtCoins->m_Items[v11];
      if ( !v12 )
        break;
      itemList = this->fields.itemList;
      v14 = *(ListViewItem_c **)&v12->fields.itemId;
      v15 = (ListViewItem_o *)sub_B170CC(ServantCoinConfirmListViewItem_TypeInfo, v6, v7, v8, v9);
      ListViewItem___ctor_30173668(v15, v11, 0LL);
      v15[1].klass = v14;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v11 >= (int)v10 )
        goto LABEL_11;
      if ( v11 >= svtCoins->max_length )
      {
        sub_B17100(v16, v6, v7);
        sub_B170A0();
      }
    }
LABEL_13:
    sub_B170D4();
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

  if ( (byte_40FCE26 & 1) == 0 )
  {
    sub_B16FFC(&ServantCoinConfirmListViewObject_TypeInfo, obj);
    byte_40FCE26 = 1;
  }
  if ( !obj
    || (v5 = *(&ServantCoinConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}