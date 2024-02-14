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
  __int64 v8; // x2
  __int64 v9; // x24
  unsigned int v10; // w21
  GetSvtCoin_o *v11; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  ListViewItem_c *v13; // x27
  ListViewItem_o *v14; // x23
  __int64 v15; // x0

  if ( (byte_4215EAF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, svtCoins);
    sub_B0D8A4(&ServantCoinConfirmListViewItem_TypeInfo, v5);
    byte_4215EAF = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_13;
  v9 = *(_QWORD *)&svtCoins->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = svtCoins->m_Items[v10];
      if ( !v11 )
        break;
      itemList = this->fields.itemList;
      v13 = *(ListViewItem_c **)&v11->fields.itemId;
      v14 = (ListViewItem_o *)sub_B0D974(ServantCoinConfirmListViewItem_TypeInfo, v7, v8);
      ListViewItem___ctor_23700744(v14, v10, 0LL);
      v14[1].klass = v13;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v10 >= (int)v9 )
        goto LABEL_11;
      if ( v10 >= svtCoins->max_length )
      {
        v15 = sub_B0D9A8(scrollView);
        sub_B0D948(v15, 0LL);
      }
    }
LABEL_13:
    sub_B0D97C(scrollView);
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

  if ( (byte_4215EB0 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_B0D8A4(&ServantCoinConfirmListViewObject_TypeInfo, obj);
    byte_4215EB0 = 1;
  }
  if ( !obj
    || (v5 = *(&ServantCoinConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}