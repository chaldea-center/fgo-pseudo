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
  UIScrollView_o *scrollView; // x0
  __int64 v7; // x1
  __int64 v8; // x24
  unsigned int v9; // w21
  GetSvtCoin_o *v10; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  ListViewItem_c *v12; // x27
  ListViewItem_o *v13; // x23
  __int64 v14; // x0

  if ( (byte_4189E8C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, svtCoins);
    sub_B2C35C(&ServantCoinConfirmListViewItem_TypeInfo, v5);
    byte_4189E8C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_13;
  v8 = *(_QWORD *)&svtCoins->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = svtCoins->m_Items[v9];
      if ( !v10 )
        break;
      itemList = this->fields.itemList;
      v12 = *(ListViewItem_c **)&v10->fields.itemId;
      v13 = (ListViewItem_o *)sub_B2C42C(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_24128628(v13, v9, 0LL);
      v13[1].klass = v12;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v9 >= (int)v8 )
        goto LABEL_11;
      if ( v9 >= svtCoins->max_length )
      {
        v14 = sub_B2C460(scrollView);
        sub_B2C400(v14, 0LL);
      }
    }
LABEL_13:
    sub_B2C434(scrollView, v7);
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

  if ( (byte_4189E8D & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_B2C35C(&ServantCoinConfirmListViewObject_TypeInfo, obj);
    byte_4189E8D = 1;
  }
  if ( !obj
    || (v5 = *(&ServantCoinConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}