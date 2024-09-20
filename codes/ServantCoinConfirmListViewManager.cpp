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
  __int64 v7; // x8
  int v8; // w24
  int32_t v9; // w21
  GetSvtCoin_o *v10; // x8
  System_Collections_Generic_List_object__o *itemList; // x22
  ListViewItem_c *v12; // d8
  ListViewItem_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5DBA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&ServantCoinConfirmListViewItem_TypeInfo);
    byte_4A5DBA5 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_17;
  v7 = *(_QWORD *)&svtCoins->max_length;
  v8 = v7 - 1;
  if ( (int)v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = svtCoins->m_Items[v9];
      if ( !v10 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v12 = *(ListViewItem_c **)&v10->fields.itemId;
      v13 = (ListViewItem_o *)sub_1B887FC(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_40706472(v13, v9, 0LL);
      v13[1].klass = v12;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v13,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
      }
      if ( v8 == v9 )
        goto LABEL_15;
      if ( ++v9 >= svtCoins->max_length )
        sub_1B88814(scrollView, v6);
    }
LABEL_17:
    sub_1B8880C(scrollView, v6);
  }
LABEL_15:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  UIScrollView__ResetPosition(scrollView, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCoinConfirmListViewManager__SetObjectItem(
        ServantCoinConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A5DBA6 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_1B885B0(&ServantCoinConfirmListViewObject_TypeInfo);
    byte_4A5DBA6 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCoinConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}