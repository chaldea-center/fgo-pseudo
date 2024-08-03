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
  __int64 v9; // x8
  int v10; // w24
  int32_t v11; // w21
  GetSvtCoin_o *v12; // x8
  System_Collections_Generic_List_object__o *itemList; // x22
  ListViewItem_c *v14; // d8
  ListViewItem_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FEE37 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, svtCoins);
    sub_1B640C8(&ServantCoinConfirmListViewItem_TypeInfo, v5);
    byte_49FEE37 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_17;
  v9 = *(_QWORD *)&svtCoins->max_length;
  v10 = v9 - 1;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = svtCoins->m_Items[v11];
      if ( !v12 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v14 = *(ListViewItem_c **)&v12->fields.itemId;
      v15 = (ListViewItem_o *)sub_1B64314(ServantCoinConfirmListViewItem_TypeInfo, v7, v8);
      ListViewItem___ctor_40370988(v15, v11, 0LL);
      v15[1].klass = v14;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v15;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
      }
      if ( v10 == v11 )
        goto LABEL_15;
      if ( ++v11 >= svtCoins->max_length )
        sub_1B6432C(scrollView, v7);
    }
LABEL_17:
    sub_1B64324(scrollView);
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

  if ( (byte_49FEE38 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_1B640C8(&ServantCoinConfirmListViewObject_TypeInfo, obj);
    byte_49FEE38 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCoinConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}