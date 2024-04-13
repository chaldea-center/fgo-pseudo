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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UIScrollView_o *scrollView; // x0
  __int64 v10; // x1
  __int64 v11; // x24
  unsigned int v12; // w21
  GetSvtCoin_o *v13; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  ListViewItem_c *v15; // x27
  ListViewItem_o *v16; // x23
  __int64 v17; // x0

  if ( (byte_42E9CA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)svtCoins, (_DWORD)method, v3);
    sub_B5D5C4(&ServantCoinConfirmListViewItem_TypeInfo, v6, v7, v8);
    byte_42E9CA0 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_13;
  v11 = *(_QWORD *)&svtCoins->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = svtCoins->m_Items[v12];
      if ( !v13 )
        break;
      itemList = this->fields.itemList;
      v15 = *(ListViewItem_c **)&v13->fields.itemId;
      v16 = (ListViewItem_o *)sub_B5D694(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_23901828(v16, v12, 0LL);
      v16[1].klass = v15;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v12 >= (int)v11 )
        goto LABEL_11;
      if ( v12 >= svtCoins->max_length )
      {
        v17 = sub_B5D6C8(scrollView);
        sub_B5D668(v17, 0LL);
      }
    }
LABEL_13:
    sub_B5D69C(scrollView, v10);
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

  if ( (byte_42E9CA1 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_B5D5C4(
                                                    &ServantCoinConfirmListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)item,
                                                    method);
    byte_42E9CA1 = 1;
  }
  if ( !obj
    || (v5 = *(&ServantCoinConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}